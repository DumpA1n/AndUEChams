#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimationCore.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AnimGraphRuntime
// Enums: 27
// Structs: 79
// Classes: 6

enum class EAlphaBlendOption : uint8_t;
enum class EAnimAlphaInputType : uint8_t;
enum class EAnimPhysCollisionType : uint8_t;
enum class EAnimPhysTwistAxis : uint8_t;
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
struct FAnimSequencerInstanceProxy;
struct FAnimNode_SkeletalControlBase;
struct FAnimNode_BlendSpacePlayer;
struct FAnimNode_AimOffsetLookAt;
struct FAnimPhysConstraintSetup;
struct FRotationRetargetingInfo;
struct FAnimNode_AnimDynamics;
struct FAnimPhysPlanarLimit;
struct FAnimPhysSphericalLimit;
struct FAnimNode_ApplyAdditive;
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
struct FSocketReference;
struct FBoneSocketTarget;
struct FAnimNode_CCDIK;
struct FAnimNode_Constraint;
struct FConstraint;
struct FAnimNode_CopyBone;
struct FAnimNode_CopyBoneDelta;
struct FAnimNode_CopyPoseFromMesh;
struct FAnimNode_CurveSource;
struct FAnimNode_Fabrik;
struct FAnimNode_HandIKRetargeting;
struct FAnimNode_LayeredBoneBlend;
struct FAnimNode_LegIK;
struct FAnimLegIKDefinition;
struct FAnimLegIKData;
struct FIKChain;
struct FIKChainLink;
struct FAnimNode_LookAt;
struct FAnimNode_MakeDynamicAdditive;
struct FAnimNode_ModifyBone;
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
struct FPostPhysicsClampSettings;
struct FSimSpaceSettings;
struct FAnimNode_RigidBody;
struct FRefPoseLimit;
struct FAnimNode_RotateRootBone;
struct FAnimNode_RotationMultiplier;
struct FAnimNode_RotationOffsetBlendSpace;
struct FAnimNode_ScaleChainLength;
struct FAnimNode_SequenceEvaluator;
struct FAnimNode_Slot;
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
struct FPositionHistory;
struct FRBFEntry;
struct FRBFTarget;
struct UAnimSequencerInstance;
struct UAnimNotify_PlayMontageNotify;
struct UAnimNotify_PlayMontageNotifyWindow;
struct UKismetAnimationLibrary;
struct UPlayMontageCallbackProxy;
struct ISequencerAnimationSupport;

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
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4
};

// Object: Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5
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

// Object: Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2
};

// Object: ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0xB60 (Inherited: 0x8D0)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{
	uint8_t Pad_0x8D0[0x290]; // 0x8D0(0x290)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xD0 (Inherited: 0x10)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x4)
	float ActualAlpha; // 0x24(0x4)
	EAnimAlphaInputType AlphaInputType; // 0x28(0x1)
	bool bAlphaBoolEnabled; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	float Alpha; // 0x2C(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x30(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
	struct FName AlphaCurveName; // 0x80(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88(0x30)
	uint8_t Pad_0xB8[0x18]; // 0xB8(0x18)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0x208 (Inherited: 0x120)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{
	float X; // 0x11C(0x4)
	float Y; // 0x120(0x4)
	float Z; // 0x124(0x4)
	float PlayRate; // 0x128(0x4)
	bool bLoop; // 0x12C(0x1)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x12D(0x1)
	float StartPosition; // 0x130(0x4)
	uint8_t Pad_0x136[0x2]; // 0x136(0x2)
	struct UBlendSpaceBase* BlendSpace; // 0x138(0x8)
	bool bResetPlayTimeWhenStartPositionChanges; // 0x140(0x1)
	bool bResetAccumulateTimeWhenActive; // 0x141(0x1)
	uint8_t Pad_0x142[0x6]; // 0x142(0x6)
	bool bUseOverrideInterpolationParam; // 0x148(0x1)
	uint8_t Pad_0x149[0x3]; // 0x149(0x3)
	struct FInterpolationParameter OverrideInterpolationParam_X; // 0x14C(0x8)
	struct FInterpolationParameter OverrideInterpolationParam_Y; // 0x154(0x8)
	uint8_t Pad_0x15C[0x8C]; // 0x15C(0x8C)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0x1E8(0x8)
	float PreviousStartPosition; // 0x1F0(0x4)
	uint8_t Pad_0x1F4[0xC]; // 0x1F4(0xC)
	struct UAnimSequence* LastCachedAnimSequence; // 0x200(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x2E0 (Inherited: 0x208)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{
	uint8_t Pad_0x208[0x68]; // 0x208(0x68)
	struct FPoseLink BasePose; // 0x270(0x10)
	int32_t LODThreshold; // 0x280(0x4)
	struct FName SourceSocketName; // 0x284(0x8)
	struct FName PivotSocketName; // 0x28C(0x8)
	struct FVector LookAtLocation; // 0x294(0xC)
	struct FVector SocketAxis; // 0x2A0(0xC)
	float Alpha; // 0x2AC(0x4)
	uint8_t Pad_0x2B0[0x30]; // 0x2B0(0x30)
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
// Size: 0x130 (Inherited: 0x0)
struct FRotationRetargetingInfo
{
	bool bEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
	struct FTransform Source; // 0x10(0x30)
	struct FTransform Target; // 0x40(0x30)
	ERotationComponent RotationComponent; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	struct FVector TwistAxis; // 0x74(0xC)
	bool bUseAbsoluteAngle; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	float SourceMinimum; // 0x84(0x4)
	float SourceMaximum; // 0x88(0x4)
	float TargetMinimum; // 0x8C(0x4)
	float TargetMaximum; // 0x90(0x4)
	EEasingFuncType EasingType; // 0x94(0x1)
	uint8_t Pad_0x95[0x3]; // 0x95(0x3)
	struct FRuntimeFloatCurve CustomCurve; // 0x98(0x88)
	bool bFlipEasing; // 0x120(0x1)
	uint8_t Pad_0x121[0x3]; // 0x121(0x3)
	float EasingWeight; // 0x124(0x4)
	bool bClamp; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x490 (Inherited: 0xD0)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{
	float LinearDampingOverride; // 0xCC(0x4)
	float AngularDampingOverride; // 0xD0(0x4)
	uint8_t Pad_0xD8[0x68]; // 0xD8(0x68)
	struct FBoneReference RelativeSpaceBone; // 0x140(0x10)
	struct FBoneReference BoundBone; // 0x150(0x10)
	struct FBoneReference ChainEnd; // 0x160(0x10)
	struct FVector BoxExtents; // 0x170(0xC)
	struct FVector LocalJointOffset; // 0x17C(0xC)
	float GravityScale; // 0x188(0x4)
	struct FVector GravityOverride; // 0x18C(0xC)
	float LinearSpringConstant; // 0x198(0x4)
	float AngularSpringConstant; // 0x19C(0x4)
	float WindScale; // 0x1A0(0x4)
	struct FVector ComponentLinearAccScale; // 0x1A4(0xC)
	struct FVector ComponentLinearVelScale; // 0x1B0(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1BC(0xC)
	float AngularBiasOverride; // 0x1C8(0x4)
	int32_t NumSolverIterationsPreUpdate; // 0x1CC(0x4)
	int32_t NumSolverIterationsPostUpdate; // 0x1D0(0x4)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1D4(0x48)
	uint8_t Pad_0x21C[0x4]; // 0x21C(0x4)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x220(0x10)
	float SphereCollisionRadius; // 0x230(0x4)
	struct FVector ExternalForce; // 0x234(0xC)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x240(0x10)
	EAnimPhysCollisionType CollisionType; // 0x250(0x1)
	EAnimPhysSimSpaceType SimulationSpace; // 0x251(0x1)
	uint8_t Pad_0x252[0x2]; // 0x252(0x2)
	uint8_t bUseSphericalLimits : 1; // 0x254(0x1), Mask(0x1)
	uint8_t bUsePlanarLimit : 1; // 0x254(0x1), Mask(0x2)
	uint8_t bDoUpdate : 1; // 0x254(0x1), Mask(0x4)
	uint8_t bDoEval : 1; // 0x254(0x1), Mask(0x8)
	uint8_t bOverrideLinearDamping : 1; // 0x254(0x1), Mask(0x10)
	uint8_t bOverrideAngularBias : 1; // 0x254(0x1), Mask(0x20)
	uint8_t bOverrideAngularDamping : 1; // 0x254(0x1), Mask(0x40)
	uint8_t bEnableWind : 1; // 0x254(0x1), Mask(0x80)
	uint8_t BitPad_0x255_0 : 1; // 0x255(0x1)
	uint8_t bUseGravityOverride : 1; // 0x255(0x1), Mask(0x2)
	uint8_t bLinearSpring : 1; // 0x255(0x1), Mask(0x4)
	uint8_t bAngularSpring : 1; // 0x255(0x1), Mask(0x8)
	uint8_t bClamp : 1; // 0x255(0x1), Mask(0x10)
	uint8_t BitPad_0x255_5 : 3; // 0x255(0x1)
	uint8_t Pad_0x256[0x2]; // 0x256(0x2)
	struct FBoneReference ClampReferenceBone; // 0x258(0x10)
	struct FVector ClampTranslationMin; // 0x268(0xC)
	struct FVector ClampTranslationMax; // 0x274(0xC)
	struct FRotator ClampRotationMin; // 0x280(0xC)
	struct FRotator ClampRotationMax; // 0x28C(0xC)
	uint8_t bChain : 1; // 0x298(0x1), Mask(0x1)
	uint8_t BitPad_0x298_1 : 7; // 0x298(0x1)
	uint8_t Pad_0x299[0x7]; // 0x299(0x7)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x2A0(0x130)
	uint8_t Pad_0x3D0[0xC0]; // 0x3D0(0xC0)
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

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xC8 (Inherited: 0x10)
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	float Alpha; // 0x30(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x34(0x8)
	int32_t LODThreshold; // 0x3C(0x4)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	uint8_t Pad_0xC0[0x4]; // 0xC0(0x4)
	EAnimAlphaInputType AlphaInputType; // 0xC4(0x1)
	bool bAlphaBoolEnabled; // 0xC5(0x1)
	uint8_t Pad_0xC6[0x2]; // 0xC6(0x2)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0x110 (Inherited: 0xD0)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xD0(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0xE0(0x10)
	struct TArray<struct FAngularRangeLimit> LocationRangeLimits; // 0xF0(0x10)
	struct TArray<struct FVector> LocationOffsets; // 0x100(0x10)
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
// Size: 0x68 (Inherited: 0x10)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30(0x10)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x8)
	uint8_t TransformsSpace; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x24 (Inherited: 0x0)
struct FBlendBoneByChannelEntry
{
	struct FBoneReference SourceBone; // 0x0(0x10)
	struct FBoneReference TargetBone; // 0x10(0x10)
	bool bBlendTranslation; // 0x20(0x1)
	bool bBlendRotation; // 0x21(0x1)
	bool bBlendScale; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x98 (Inherited: 0x10)
struct FAnimNode_BlendListBase : FAnimNode_Base
{
	struct TArray<struct FPoseLink> BlendPose; // 0x10(0x10)
	struct TArray<float> BlendTime; // 0x20(0x10)
	EBlendListTransitionType TransitionType; // 0x30(0x1)
	EAlphaBlendOption BlendType; // 0x31(0x1)
	bool bResetChildOnActivation; // 0x32(0x1)
	bool bResetBlendingChildOnActivation; // 0x33(0x1)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct UCurveFloat* CustomBlendCurve; // 0x38(0x8)
	struct UBlendProfile* BlendProfile; // 0x40(0x8)
	uint8_t Pad_0x48[0x50]; // 0x48(0x50)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xA0 (Inherited: 0x98)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{
	bool bActiveValue; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xB0 (Inherited: 0x98)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{
	struct TArray<int32_t> EnumToPoseIndex; // 0x98(0x10)
	uint8_t ActiveEnumValue; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x7]; // 0xA9(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xA0 (Inherited: 0x98)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{
	int32_t ActiveChildIndex; // 0x98(0x4)
	uint8_t Pad_0x9C[0x4]; // 0x9C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0x210 (Inherited: 0x208)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{
	float NormalizedTime; // 0x208(0x4)
	uint8_t Pad_0x20C[0x4]; // 0x20C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x120 (Inherited: 0xD0)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xCC(0x10)
	struct UCurveFloat* DrivingCurve; // 0xE0(0x8)
	float Multiplier; // 0xE8(0x4)
	float RangeMin; // 0xEC(0x4)
	float RangeMax; // 0xF0(0x4)
	float RemappedMin; // 0xF4(0x4)
	float RemappedMax; // 0xF8(0x4)
	struct FName ParameterName; // 0xFC(0x8)
	struct FBoneReference TargetBone; // 0x104(0x10)
	EDrivenDestinationMode DestinationMode; // 0x114(0x1)
	EDrivenBoneModificationMode ModificationMode; // 0x115(0x1)
	uint8_t SourceComponent; // 0x116(0x1)
	uint8_t bUseRange : 1; // 0x117(0x1), Mask(0x1)
	uint8_t bAffectTargetTranslationX : 1; // 0x117(0x1), Mask(0x2)
	uint8_t bAffectTargetTranslationY : 1; // 0x117(0x1), Mask(0x4)
	uint8_t bAffectTargetTranslationZ : 1; // 0x117(0x1), Mask(0x8)
	uint8_t bAffectTargetRotationX : 1; // 0x117(0x1), Mask(0x10)
	uint8_t bAffectTargetRotationY : 1; // 0x117(0x1), Mask(0x20)
	uint8_t bAffectTargetRotationZ : 1; // 0x117(0x1), Mask(0x40)
	uint8_t bAffectTargetScaleX : 1; // 0x117(0x1), Mask(0x80)
	uint8_t bAffectTargetScaleY : 1; // 0x118(0x1), Mask(0x1)
	uint8_t bAffectTargetScaleZ : 1; // 0x118(0x1), Mask(0x2)
	uint8_t BitPad_0x118_2 : 6; // 0x118(0x1)
	uint8_t Pad_0x119[0x7]; // 0x119(0x7)
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
	bool bUseSocket; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FBoneReference BoneReference; // 0x4(0x10)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
	struct FSocketReference SocketReference; // 0x20(0x40)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x180 (Inherited: 0xD0)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{
	struct FVector EffectorLocation; // 0xCC(0xC)
	uint8_t EffectorLocationSpace; // 0xD8(0x1)
	uint8_t Pad_0xDD[0x3]; // 0xDD(0x3)
	struct FBoneSocketTarget EffectorTarget; // 0xE0(0x60)
	struct FBoneReference TipBone; // 0x140(0x10)
	struct FBoneReference RootBone; // 0x150(0x10)
	float Precision; // 0x160(0x4)
	int32_t MaxIterations; // 0x164(0x4)
	bool bStartFromTail; // 0x168(0x1)
	bool bEnableRotationLimit; // 0x169(0x1)
	uint8_t Pad_0x16A[0x6]; // 0x16A(0x6)
	struct TArray<float> RotationLimitPerJoints; // 0x170(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x110 (Inherited: 0xD0)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xCC(0x10)
	struct TArray<struct FConstraint> ConstraintSetup; // 0xE0(0x10)
	struct TArray<float> ConstraintWeights; // 0xF0(0x10)
	uint8_t Pad_0x100[0x10]; // 0x100(0x10)
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
// Size: 0xF0 (Inherited: 0xD0)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xCC(0x10)
	struct FBoneReference TargetBone; // 0xDC(0x10)
	bool bCopyTranslation; // 0xEC(0x1)
	bool bCopyRotation; // 0xED(0x1)
	bool bCopyScale; // 0xEE(0x1)
	uint8_t ControlSpace; // 0xEF(0x1)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0x100 (Inherited: 0xD0)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xCC(0x10)
	struct FBoneReference TargetBone; // 0xDC(0x10)
	bool bCopyTranslation; // 0xEC(0x1)
	bool bCopyRotation; // 0xED(0x1)
	bool bCopyScale; // 0xEE(0x1)
	ECopyBoneDeltaMode CopyMode; // 0xEF(0x1)
	float TranslationMultiplier; // 0xF0(0x4)
	float RotationMultiplier; // 0xF4(0x4)
	float ScaleMultiplier; // 0xF8(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x1D8 (Inherited: 0x10)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x8)
	uint8_t bUseAttachedParent : 1; // 0x18(0x1), Mask(0x1)
	uint8_t bCopyCurves : 1; // 0x18(0x1), Mask(0x2)
	uint8_t BitPad_0x18_2 : 6; // 0x18(0x1)
	bool bCopyCustomAttributes; // 0x19(0x1)
	uint8_t bUseMeshPose : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	struct FName RootBoneToCopy; // 0x1C(0x8)
	uint8_t Pad_0x24[0x1B4]; // 0x24(0x1B4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_CurveSource : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct FName SourceBinding; // 0x20(0x8)
	float Alpha; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x190 (Inherited: 0xD0)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{
	struct FTransform EffectorTransform; // 0xD0(0x30)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x60)
	struct FBoneReference TipBone; // 0x160(0x10)
	struct FBoneReference RootBone; // 0x170(0x10)
	float Precision; // 0x180(0x4)
	int32_t MaxIterations; // 0x184(0x4)
	uint8_t EffectorTransformSpace; // 0x188(0x1)
	uint8_t EffectorRotationSource; // 0x189(0x1)
	uint8_t Pad_0x18A[0x6]; // 0x18A(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x128 (Inherited: 0xD0)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{
	struct FBoneReference RightHandFK; // 0xCC(0x10)
	struct FBoneReference LeftHandFK; // 0xDC(0x10)
	struct FBoneReference RightHandIK; // 0xEC(0x10)
	struct FBoneReference LeftHandIK; // 0xFC(0x10)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x110(0x10)
	float HandFKWeight; // 0x120(0x4)
	uint8_t Pad_0x124[0x4]; // 0x124(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xC0 (Inherited: 0x10)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x20(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x30(0x10)
	struct TArray<float> BlendWeights; // 0x40(0x10)
	bool bMeshSpaceRotationBlend; // 0x50(0x1)
	bool bMeshSpaceScaleBlend; // 0x51(0x1)
	bool bAlwaysEvaluateZeroWeightPose; // 0x52(0x1)
	uint8_t CurveBlendOption; // 0x53(0x1)
	int32_t DesiredCurveBlendIndex; // 0x54(0x4)
	bool bBlendRootMotionBasedOnRootBone; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	int32_t LODThreshold; // 0x5C(0x4)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60(0x10)
	struct FGuid SkeletonGuid; // 0x70(0x10)
	struct FGuid VirtualBoneGuid; // 0x80(0x10)
	uint8_t Pad_0x90[0x30]; // 0x90(0x30)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0x100 (Inherited: 0xD0)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{
	float ReachPrecision; // 0xCC(0x4)
	int32_t MaxIterations; // 0xD0(0x4)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xD8(0x10)
	uint8_t Pad_0xE8[0x18]; // 0xE8(0x18)
};

// Object: ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2C (Inherited: 0x0)
struct FAnimLegIKDefinition
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x4)
	float MinRotationAngle; // 0x24(0x4)
	uint8_t FootBoneForwardAxis; // 0x28(0x1)
	uint8_t HingeRotationAxis; // 0x29(0x1)
	bool bEnableRotationLimit; // 0x2A(0x1)
	bool bEnableKneeTwistCorrection; // 0x2B(0x1)
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
// Size: 0x1B0 (Inherited: 0xD0)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xCC(0x10)
	struct FBoneSocketTarget LookAtTarget; // 0xE0(0x60)
	struct FVector LookAtLocation; // 0x140(0xC)
	struct FAxis LookAt_Axis; // 0x14C(0x10)
	bool bUseLookUpAxis; // 0x15C(0x1)
	uint8_t InterpolationType; // 0x15D(0x1)
	uint8_t Pad_0x15E[0x2]; // 0x15E(0x2)
	struct FAxis LookUp_Axis; // 0x160(0x10)
	float LookAtClamp; // 0x170(0x4)
	float InterpolationTime; // 0x174(0x4)
	float InterpolationTriggerThreashold; // 0x178(0x4)
	uint8_t Pad_0x17C[0x34]; // 0x17C(0x34)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	bool bMeshSpaceAdditive; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x150 (Inherited: 0xD0)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xCC(0x10)
	struct FVector Translation; // 0xDC(0xC)
	struct FRotator Rotation; // 0xE8(0xC)
	struct FVector Scale; // 0xF4(0xC)
	uint8_t TranslationMode; // 0x100(0x1)
	uint8_t RotationMode; // 0x101(0x1)
	uint8_t ScaleMode; // 0x102(0x1)
	uint8_t TranslationSpace; // 0x103(0x1)
	uint8_t RotationSpace; // 0x104(0x1)
	uint8_t ScaleSpace; // 0x105(0x1)
	bool bSkipEvaluateWhenBoneTransformUnchanged; // 0x106(0x1)
	struct FVector ActualTranslation; // 0x108(0xC)
	struct FRotator ActualRotation; // 0x114(0xC)
	struct FInputVInterp TranslationInterp; // 0x120(0x18)
	struct FInputRInterp RotationInterp; // 0x138(0x18)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_ModifyCurve : FAnimNode_Base
{
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct TArray<float> CurveValues; // 0x20(0x10)
	struct TArray<struct FName> CurveNames; // 0x30(0x10)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x4)
	EModifyCurveApplyMode ApplyMode; // 0x54(0x1)
	uint8_t Pad_0x55[0x3]; // 0x55(0x3)
	float ActualAlpha; // 0x58(0x4)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x5C(0x30)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{
	struct TArray<struct FPoseLink> Poses; // 0x10(0x10)
	struct TArray<float> DesiredAlphas; // 0x20(0x10)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x40(0x8)
	bool bAdditiveNode; // 0x48(0x1)
	bool bNormalizeAlpha; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x108 (Inherited: 0xD0)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToObserve; // 0xCC(0x10)
	uint8_t DisplaySpace; // 0xDC(0x1)
	bool bRelativeToRefPose; // 0xDD(0x1)
	struct FVector Translation; // 0xE0(0xC)
	struct FRotator Rotation; // 0xEC(0xC)
	struct FVector Scale; // 0xF8(0xC)
	uint8_t Pad_0x106[0x2]; // 0x106(0x2)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x168 (Inherited: 0x120)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{
	struct UPoseAsset* PoseAsset; // 0x120(0x8)
	uint8_t Pad_0x128[0x40]; // 0x128(0x40)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0x188 (Inherited: 0x168)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose; // 0x168(0x10)
	EAlphaBlendOption BlendOption; // 0x178(0x1)
	uint8_t Pad_0x179[0x7]; // 0x179(0x7)
	struct UCurveFloat* CustomCurve; // 0x180(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0x180 (Inherited: 0x168)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{
	struct FName PoseName; // 0x168(0x8)
	float PoseWeight; // 0x170(0x4)
	uint8_t Pad_0x174[0xC]; // 0x174(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x2C (Inherited: 0x0)
struct FRBFParams
{
	int32_t TargetDimensions; // 0x0(0x4)
	ERBFSolverType SolverType; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
	float Radius; // 0x8(0x4)
	bool bAutomaticRadius; // 0xC(0x1)
	ERBFFunctionType Function; // 0xD(0x1)
	ERBFDistanceMethod DistanceMethod; // 0xE(0x1)
	uint8_t TwistAxis; // 0xF(0x1)
	float WeightThreshold; // 0x10(0x4)
	ERBFNormalizeMethod NormalizeMethod; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FVector MedianReference; // 0x18(0xC)
	float MedianMin; // 0x24(0x4)
	float MedianMax; // 0x28(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x220 (Inherited: 0x168)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose; // 0x168(0x10)
	struct TArray<struct FBoneReference> SourceBones; // 0x178(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0x188(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0x198(0x10)
	uint8_t Pad_0x1A8[0x30]; // 0x1A8(0x30)
	struct FBoneReference EvalSpaceBone; // 0x1D8(0x10)
	struct FRBFParams RBFParams; // 0x1E8(0x2C)
	EPoseDriverSource DriveSource; // 0x214(0x1)
	EPoseDriverOutput DriveOutput; // 0x215(0x1)
	uint8_t bOnlyDriveSelectedBones : 1; // 0x216(0x1), Mask(0x1)
	uint8_t BitPad_0x216_1 : 7; // 0x216(0x1)
	uint8_t Pad_0x217[0x1]; // 0x217(0x1)
	int32_t LODThreshold; // 0x218(0x4)
	uint8_t Pad_0x21C[0x4]; // 0x21C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xC0 (Inherited: 0x0)
struct FPoseDriverTarget
{
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x0(0x10)
	struct FRotator TargetRotation; // 0x10(0xC)
	float TargetScale; // 0x1C(0x4)
	ERBFDistanceMethod DistanceMethod; // 0x20(0x1)
	ERBFFunctionType FunctionType; // 0x21(0x1)
	bool bApplyCustomCurve; // 0x22(0x1)
	uint8_t Pad_0x23[0x5]; // 0x23(0x5)
	struct FRichCurve CustomCurve; // 0x28(0x80)
	struct FName DrivenName; // 0xA8(0x8)
	uint8_t Pad_0xB0[0x8]; // 0xB0(0x8)
	bool bIsHidden; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 (Inherited: 0x0)
struct FPoseDriverTransform
{
	struct FVector TargetTranslation; // 0x0(0xC)
	struct FRotator TargetRotation; // 0xC(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{
	struct FName SnapshotName; // 0x10(0x8)
	struct FPoseSnapshot Snapshot; // 0x18(0x38)
	ESnapshotSourceMode Mode; // 0x50(0x1)
	uint8_t Pad_0x51[0x3F]; // 0x51(0x3F)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_RandomPlayer : FAnimNode_Base
{
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x10(0x10)
	uint8_t Pad_0x20[0x50]; // 0x20(0x50)
	bool bShuffleMode; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
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
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x18 (Inherited: 0x10)
struct FAnimNode_RefPose : FAnimNode_Base
{
	uint8_t RefPoseType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0xE0 (Inherited: 0xD0)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xD0[0x10]; // 0xD0(0x10)
};

// Object: ScriptStruct AnimGraphRuntime.PostPhysicsClampSettings
// Size: 0x10 (Inherited: 0x0)
struct FPostPhysicsClampSettings
{
	uint8_t bEnableCorrection_Manual : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bEnableCorrection_Auto : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinValue; // 0x4(0x4)
	float MaxValue; // 0x8(0x4)
	float RangeValue; // 0xC(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.SimSpaceSettings
// Size: 0x40 (Inherited: 0x0)
struct FSimSpaceSettings
{
	float MasterAlpha; // 0x0(0x4)
	float VelocityScaleZ; // 0x4(0x4)
	float MaxLinearVelocity; // 0x8(0x4)
	float MaxAngularVelocity; // 0xC(0x4)
	float MaxLinearAcceleration; // 0x10(0x4)
	float MaxAngularAcceleration; // 0x14(0x4)
	float ExternalLinearDrag; // 0x18(0x4)
	struct FVector ExternalLinearDragV; // 0x1C(0xC)
	struct FVector ExternalLinearVelocity; // 0x28(0xC)
	struct FVector ExternalAngularVelocity; // 0x34(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x7A0 (Inherited: 0xD0)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{
	bool bUseSelfPhysicsAssetIfExist; // 0xCC(0x1)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xD0(0x8)
	uint8_t Pad_0xD9[0x9F]; // 0xD9(0x9F)
	struct FVector OverrideWorldGravity; // 0x178(0xC)
	struct FVector ExternalForce; // 0x184(0xC)
	struct FVector ComponentLinearAccScale; // 0x190(0xC)
	struct FVector ComponentLinearVelScale; // 0x19C(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1A8(0xC)
	struct FSimSpaceSettings SimSpaceSettings; // 0x1B4(0x40)
	float CachedBoundsScale; // 0x1F4(0x4)
	struct FBoneReference BaseBoneRef; // 0x1F8(0x10)
	uint8_t OverlapChannel; // 0x208(0x1)
	ESimulationSpace SimulationSpace; // 0x209(0x1)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x20A(0x1)
	uint8_t Pad_0x20B[0x1]; // 0x20B(0x1)
	uint8_t bEnableWorldGeometry : 1; // 0x20C(0x1), Mask(0x1)
	uint8_t bOverrideWorldGravity : 1; // 0x20C(0x1), Mask(0x2)
	uint8_t bTransferBoneVelocities : 1; // 0x20C(0x1), Mask(0x4)
	uint8_t bFreezeIncomingPoseOnStart : 1; // 0x20C(0x1), Mask(0x8)
	uint8_t bClampLinearTranslationLimitToRefPose : 1; // 0x20C(0x1), Mask(0x10)
	uint8_t BitPad_0x20C_5 : 3; // 0x20C(0x1)
	uint8_t Pad_0x20D[0x3]; // 0x20D(0x3)
	float WorldSpaceMinimumScale; // 0x210(0x4)
	float EvaluationResetTime; // 0x214(0x4)
	uint8_t bEnableExternalCollision : 1; // 0x218(0x1), Mask(0x1)
	uint8_t BitPad_0x218_1 : 7; // 0x218(0x1)
	uint8_t Pad_0x219[0x3]; // 0x219(0x3)
	struct FBoneReference ExternalCollisionBone; // 0x21C(0x10)
	uint8_t Pad_0x22C[0x4]; // 0x22C(0x4)
	struct USkeletalMeshComponent* ExternalCollisionTarget; // 0x230(0x8)
	bool bHasValidExternalCollision; // 0x238(0x1)
	uint8_t Pad_0x239[0x7]; // 0x239(0x7)
	struct USkeletalMeshComponent* ExternalCollisionTargetCached; // 0x240(0x8)
	uint8_t Pad_0x248[0x58]; // 0x248(0x58)
	struct TArray<struct FRefPoseLimit> RefPoseLimits; // 0x2A0(0x10)
	uint8_t EffectBodyIndex; // 0x2B0(0x1)
	uint8_t Pad_0x2B1[0x3]; // 0x2B1(0x3)
	struct FPostPhysicsClampSettings WorldSpaceCorrection_Roll; // 0x2B4(0x10)
	struct FPostPhysicsClampSettings LocalSpaceCorrection_X; // 0x2C4(0x10)
	struct FPostPhysicsClampSettings LocalSpaceCorrection_Y; // 0x2D4(0x10)
	struct FPostPhysicsClampSettings LocalSpaceCorrection_Z; // 0x2E4(0x10)
	struct FPostPhysicsClampSettings LocalSpaceCorrection_Pitch; // 0x2F4(0x10)
	struct FPostPhysicsClampSettings LocalSpaceCorrection_Yaw; // 0x304(0x10)
	struct FPostPhysicsClampSettings LocalSpaceCorrection_Roll; // 0x314(0x10)
	bool bLimitLinearVelocity_Simulation; // 0x324(0x1)
	uint8_t Pad_0x325[0x3]; // 0x325(0x3)
	struct FVector MaxLinearVelocity_Simulation; // 0x328(0xC)
	bool bLimitAngularVelocity_Simulation; // 0x334(0x1)
	uint8_t Pad_0x335[0x3]; // 0x335(0x3)
	struct FVector MaxAngularVelocity_Simulation; // 0x338(0xC)
	bool bPrintTransformAfterPhysics; // 0x344(0x1)
	uint8_t PrintBodyIndex; // 0x345(0x1)
	bool bEnableDebug_Simulation; // 0x346(0x1)
	uint8_t Pad_0x347[0x459]; // 0x347(0x459)
};

// Object: ScriptStruct AnimGraphRuntime.RefPoseLimit
// Size: 0x50 (Inherited: 0x0)
struct FRefPoseLimit
{
	struct FBoneReference TargetBone; // 0x0(0x10)
	bool bConstraintTranslation; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	struct FVector TranslationLimitMin; // 0x14(0xC)
	struct FVector TranslationLimitMax; // 0x20(0xC)
	bool bConstraintRotation; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct FVector RotationLimitMin; // 0x30(0xC)
	struct FVector RotationLimitMax; // 0x3C(0xC)
	bool bEnableSoftConstraint; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float Stiffness; // 0x4C(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xA0 (Inherited: 0x10)
struct FAnimNode_RotateRootBone : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x10(0x10)
	float Pitch; // 0x20(0x4)
	float Yaw; // 0x24(0x4)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
	struct FRotator MeshToComponent; // 0x88(0xC)
	uint8_t Pad_0x94[0xC]; // 0x94(0xC)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xF8 (Inherited: 0xD0)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{
	struct FBoneReference TargetBone; // 0xCC(0x10)
	struct FBoneReference SourceBone; // 0xDC(0x10)
	float Multiplier; // 0xEC(0x4)
	uint8_t RotationAxisToRefer; // 0xF0(0x1)
	bool bIsAdditive; // 0xF1(0x1)
	uint8_t Pad_0xF6[0x2]; // 0xF6(0x2)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x2B0 (Inherited: 0x208)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{
	struct FPoseLink BasePose; // 0x208(0x10)
	int32_t LODThreshold; // 0x218(0x4)
	float Alpha; // 0x21C(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x220(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x228(0x48)
	struct FName AlphaCurveName; // 0x270(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x278(0x30)
	uint8_t Pad_0x2A8[0x4]; // 0x2A8(0x4)
	EAnimAlphaInputType AlphaInputType; // 0x2AC(0x1)
	bool bAlphaBoolEnabled; // 0x2AD(0x1)
	uint8_t Pad_0x2AE[0x2]; // 0x2AE(0x2)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x78 (Inherited: 0x10)
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{
	struct FPoseLink InputPose; // 0x10(0x10)
	float DefaultChainLength; // 0x20(0x4)
	struct FBoneReference ChainStartBone; // 0x24(0x10)
	struct FBoneReference ChainEndBone; // 0x34(0x10)
	struct FVector TargetLocation; // 0x44(0xC)
	float Alpha; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x8)
	EScaleChainInitialLength ChainInitialLength; // 0x60(0x1)
	uint8_t Pad_0x61[0x17]; // 0x61(0x17)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x140 (Inherited: 0x120)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{
	struct UAnimSequenceBase* Sequence; // 0x120(0x8)
	float ExplicitTime; // 0x128(0x4)
	bool bShouldLoop; // 0x12C(0x1)
	bool bTeleportToExplicitTime; // 0x12D(0x1)
	uint8_t ReinitializationBehavior; // 0x12E(0x1)
	uint8_t Pad_0x12F[0x5]; // 0x12F(0x5)
	float StartPosition; // 0x134(0x4)
	struct UAnimSequenceBase* LastPlayAnimSeq; // 0x138(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x48 (Inherited: 0x10)
struct FAnimNode_Slot : FAnimNode_Base
{
	struct FPoseLink Source; // 0x10(0x10)
	struct FName SlotName; // 0x20(0x8)
	bool bAlwaysUpdateSourcePose; // 0x28(0x1)
	uint8_t Pad_0x29[0x1F]; // 0x29(0x1F)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x278 (Inherited: 0xD0)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference StartBone; // 0xCC(0x10)
	struct FBoneReference EndBone; // 0xDC(0x10)
	ESplineBoneAxis BoneAxis; // 0xEC(0x1)
	bool bAutoCalculateSpline; // 0xED(0x1)
	int32_t PointCount; // 0xF0(0x4)
	uint8_t Pad_0xF6[0x2]; // 0xF6(0x2)
	struct TArray<struct FTransform> ControlPoints; // 0xF8(0x10)
	float Roll; // 0x108(0x4)
	float TwistStart; // 0x10C(0x4)
	float TwistEnd; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct FAlphaBlend TwistBlend; // 0x118(0x30)
	float Stretch; // 0x148(0x4)
	float Offset; // 0x14C(0x4)
	uint8_t Pad_0x150[0x128]; // 0x150(0x128)
};

// Object: ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x14 (Inherited: 0x0)
struct FSplineIKCachedBoneData
{
	struct FBoneReference Bone; // 0x0(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x4)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x130 (Inherited: 0xD0)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SpringBone; // 0xCC(0x10)
	float MaxDisplacement; // 0xDC(0x4)
	float SpringStiffness; // 0xE0(0x4)
	float SpringDamping; // 0xE4(0x4)
	float ErrorResetThresh; // 0xE8(0x4)
	uint8_t Pad_0xF0[0x38]; // 0xF0(0x38)
	uint8_t bLimitDisplacement : 1; // 0x128(0x1), Mask(0x1)
	uint8_t bTranslateX : 1; // 0x128(0x1), Mask(0x2)
	uint8_t bTranslateY : 1; // 0x128(0x1), Mask(0x4)
	uint8_t bTranslateZ : 1; // 0x128(0x1), Mask(0x8)
	uint8_t bRotateX : 1; // 0x128(0x1), Mask(0x10)
	uint8_t bRotateY : 1; // 0x128(0x1), Mask(0x20)
	uint8_t bRotateZ : 1; // 0x128(0x1), Mask(0x40)
	uint8_t BitPad_0x128_7 : 1; // 0x128(0x1)
	uint8_t Pad_0x129[0x7]; // 0x129(0x7)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x30 (Inherited: 0x30)
struct FAnimNode_StateResult : FAnimNode_Root
{
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x260 (Inherited: 0xD0)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xD0[0x30]; // 0xD0(0x30)
	struct FBoneReference TrailBone; // 0x100(0x10)
	int32_t ChainLength; // 0x110(0x4)
	uint8_t ChainBoneAxis; // 0x114(0x1)
	uint8_t bInvertChainBoneAxis : 1; // 0x115(0x1), Mask(0x1)
	uint8_t bLimitStretch : 1; // 0x115(0x1), Mask(0x2)
	uint8_t bLimitRotation : 1; // 0x115(0x1), Mask(0x4)
	uint8_t bUsePlanarLimit : 1; // 0x115(0x1), Mask(0x8)
	uint8_t bActorSpaceFakeVel : 1; // 0x115(0x1), Mask(0x10)
	uint8_t bReorientParentToChild : 1; // 0x115(0x1), Mask(0x20)
	uint8_t BitPad_0x115_6 : 2; // 0x115(0x1)
	uint8_t Pad_0x116[0x2]; // 0x116(0x2)
	float MaxDeltaTime; // 0x118(0x4)
	float RelaxationSpeedScale; // 0x11C(0x4)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120(0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1A8(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x1D8(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x1E8(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x1F8(0x10)
	float StretchLimit; // 0x208(0x4)
	struct FVector FakeVelocity; // 0x20C(0xC)
	struct FBoneReference BaseJoint; // 0x218(0x10)
	float LastBoneRotationAnimAlphaBlend; // 0x228(0x4)
	uint8_t Pad_0x22C[0x34]; // 0x22C(0x34)
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
// Size: 0x140 (Inherited: 0xD0)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame BaseFrame; // 0xCC(0x20)
	struct FReferenceBoneFrame TwistFrame; // 0xEC(0x20)
	struct FAxis TwistPlaneNormalAxis; // 0x10C(0x10)
	float RangeMax; // 0x11C(0x4)
	float RemappedMin; // 0x120(0x4)
	float RemappedMax; // 0x124(0x4)
	struct FAnimCurveParam Curve; // 0x128(0xC)
	uint8_t Pad_0x138[0x8]; // 0x138(0x8)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x1F0 (Inherited: 0xD0)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference IKBone; // 0xCC(0x10)
	float StartStretchRatio; // 0xDC(0x4)
	float MaxStretchScale; // 0xE0(0x4)
	struct FVector EffectorLocation; // 0xE4(0xC)
	uint8_t Pad_0xF4[0xC]; // 0xF4(0xC)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x60)
	struct FVector JointTargetLocation; // 0x160(0xC)
	uint8_t Pad_0x16C[0x4]; // 0x16C(0x4)
	struct FBoneSocketTarget JointTarget; // 0x170(0x60)
	struct FAxis TwistAxis; // 0x1D0(0x10)
	uint8_t EffectorLocationSpace; // 0x1E0(0x1)
	uint8_t JointTargetLocationSpace; // 0x1E1(0x1)
	uint8_t bAllowStretching : 1; // 0x1E2(0x1), Mask(0x1)
	uint8_t bTakeRotationFromEffectorSpace : 1; // 0x1E2(0x1), Mask(0x2)
	uint8_t bMaintainEffectorRelRot : 1; // 0x1E2(0x1), Mask(0x4)
	uint8_t bAllowTwist : 1; // 0x1E2(0x1), Mask(0x8)
	uint8_t BitPad_0x1E2_4 : 4; // 0x1E2(0x1)
	uint8_t Pad_0x1E3[0xD]; // 0x1E3(0xD)
};

// Object: ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xD8 (Inherited: 0x10)
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	EAnimAlphaInputType AlphaInputType; // 0x30(0x1)
	uint8_t bAlphaBoolEnabled : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 2; // 0x31(0x1)
	uint8_t bResetChildOnActivation : 1; // 0x31(0x1), Mask(0x8)
	uint8_t BitPad_0x31_4 : 4; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
	float Alpha; // 0x38(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x3C(0x8)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x48(0x48)
	struct FName AlphaCurveName; // 0x90(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98(0x30)
	bool bEnableBlendTransition; // 0xC8(0x1)
	uint8_t Pad_0xC9[0x7]; // 0xC9(0x7)
	int32_t LODThreshold; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
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
// Size: 0xA0 (Inherited: 0x10)
struct FRBFTarget : FRBFEntry
{
	float ScaleFactor; // 0x10(0x4)
	bool bApplyCustomCurve; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FRichCurve CustomCurve; // 0x18(0x80)
	ERBFDistanceMethod DistanceMethod; // 0x98(0x1)
	ERBFFunctionType FunctionType; // 0x99(0x1)
	uint8_t Pad_0x9A[0x6]; // 0x9A(0x6)
};

// Object: Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x2D0 (Inherited: 0x2D0)
struct UAnimSequencerInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UAnimSequencerInstance, "AnimSequencerInstance")
};

// Object: Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : UAnimNotify
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_PlayMontageNotify, "AnimNotify_PlayMontageNotify")

	struct FName NotifyName; // 0x38(0x8)
};

// Object: Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_PlayMontageNotifyWindow, "AnimNotify_PlayMontageNotifyWindow")

	struct FName NotifyName; // 0x2C(0x8)
};

// Object: Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UKismetAnimationLibrary, "KismetAnimationLibrary")

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaf3f5d0
	// Params: [ Num(10) Size(0x60) ]
	static void K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaf3e5bc
	// Params: [ Num(0) Size(0x0) ]
	static void K2_StartProfilingTimer();

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaf3ecd8
	// Params: [ Num(10) Size(0x30) ]
	static struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaf3ebb4
	// Params: [ Num(4) Size(0x10) ]
	static float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaf3f388
	// Params: [ Num(7) Size(0x90) ]
	static struct FTransform K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaf3e4c0
	// Params: [ Num(3) Size(0x1C) ]
	static float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xaf3f0a4
	// Params: [ Num(11) Size(0x34) ]
	static float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, uint8_t SocketSpaceA, struct FName SocketOrBoneNameB, uint8_t SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xaf3ef7c
	// Params: [ Num(4) Size(0x24) ]
	static struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaf3e5d0
	// Params: [ Num(13) Size(0xFC) ]
	static float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, uint8_t SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);

	// Object: Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xaf3e9a0
	// Params: [ Num(7) Size(0x50) ]
	static float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax);
};

// Object: Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xA8 (Inherited: 0x28)
struct UPlayMontageCallbackProxy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPlayMontageCallbackProxy, "PlayMontageCallbackProxy")

	struct FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)
	uint8_t Pad_0x78[0x30]; // 0x78(0x30)

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xaf3f93c
	// Params: [ Num(2) Size(0x28) ]
	void OnNotifyEndReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xaf3fa3c
	// Params: [ Num(2) Size(0x28) ]
	void OnNotifyBeginReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// Flags: [Final|Native|Protected]
	// Offset: 0xaf3fb3c
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// Flags: [Final|Native|Protected]
	// Offset: 0xaf3fc2c
	// Params: [ Num(2) Size(0x9) ]
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted);

	// Object: Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xaf3fd1c
	// Params: [ Num(6) Size(0x28) ]
	static struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection);
};

// Object: Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x28 (Inherited: 0x28)
struct ISequencerAnimationSupport : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ISequencerAnimationSupport, "SequencerAnimationSupport")
};

} // namespace SDK
