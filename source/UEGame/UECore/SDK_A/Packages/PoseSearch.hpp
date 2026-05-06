#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "BlendStack.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PoseSearch
// Enums: 18
// Structs: 38
// Classes: 30

struct AActor;
struct ACharacter;
enum class EAlphaBlendOption : uint8_t;
struct FBoneReference;
struct UAnimComposite;
struct UAnimInstance;
struct UAnimMontage;
struct UAnimNotifyState;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UBlendProfile;
struct UBlendSpace;
struct USkeleton;
struct FFootPlacementInterpolationSettings;
struct FFootPlacementPelvisSettings;
struct FFootPlacementPlantSettings;
struct FFootPlacementTraceSettings;
struct FAnimNode_FootPlacement;
struct FFootPlacemenLegDefinition;
struct FFootPlacementRootDefinition;
struct FFloatSpringState_FP;
struct FQuaternionSpringState_FP;
struct FVectorSpringState_FP;
struct FAnimNode_MotionMatching;
struct FAnimNode_OffsetRootBone;
struct FAnimNode_OrientationWarpingMM;
struct FPoseSearchQueryTrajectory;
struct FPoseSearchTrajectoryData;
struct FAnimNode_PoseSearchHistoryCollector_Base;
struct FPoseSearchQueryTrajectorySample;
struct FAnimNode_PoseSearchComponentSpaceHistoryCollector;
struct FAnimNode_PoseSearchHistoryCollector;
struct FWarpingVectorValue;
struct FTrajectorySampleRange;
struct FTrajectorySample;
struct FPoseSearchCost;
struct FPoseSearchDatabaseAnimationAssetBase;
struct FPoseSearchDatabaseMultiSequence;
struct FPoseSearchDatabaseAnimMontage;
struct FPoseSearchDatabaseAnimComposite;
struct FPoseSearchDatabaseBlendSpace;
struct FPoseSearchDatabaseSequence;
struct FPoseSearchBone;
struct FPoseSearchTrajectorySample;
struct FAnimPoseSearchStateInfo;
struct FStateInfo;
struct FPoseSearchFutureProperties;
struct FPoseSearchMultiSequenceItem;
struct FPoseSearchBlueprintResult;
struct FPoseSearchRoledSkeleton;
struct FPoseSearchTrajectory_WorldCollisionResults;
struct UMotionMatchingAnimNodeLibrary;
struct UAnimNotifyState_PoseSearchBase;
struct UAnimNotifyState_PoseSearchExcludeFromDatabase;
struct UAnimNotifyState_PoseSearchBlockTransition;
struct UAnimNotifyState_PoseSearchModifyCost;
struct UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias;
struct UAnimNotifyState_PoseSearchSamplingEvent;
struct UAnimNotifyState_PoseSearchSamplingAttribute;
struct UAnimNotifyState_PoseSearchBranchIn;
struct UPoseSearchDatabase;
struct UPoseSearchFeatureChannel;
struct UPoseSearchFeatureChannel_FilterCrashingLegs;
struct UPoseSearchFeatureChannel_GroupBase;
struct UPoseSearchFeatureChannel_Group;
struct UPoseSearchFeatureChannel_Heading;
struct UPoseSearchFeatureChannel_Padding;
struct UPoseSearchFeatureChannel_PermutationTime;
struct UPoseSearchFeatureChannel_Phase;
struct UPoseSearchFeatureChannel_Pose;
struct UPoseSearchFeatureChannel_Position;
struct UPoseSearchFeatureChannel_SamplingTime;
struct UPoseSearchFeatureChannel_TimeToEvent;
struct UPoseSearchFeatureChannel_Trajectory;
struct UPoseSearchFeatureChannel_Velocity;
struct UPoseSearchHistoryCollectorAnimNodeLibrary;
struct UPoseSearchLibrary;
struct UPoseSearchMultiSequence;
struct UPoseSearchNormalizationSet;
struct UPoseSearchSchema;
struct UPoseSearchTrajectoryLibrary;

// Object: Enum PoseSearch.EActorMovementCompensationMode
enum class EActorMovementCompensationMode : uint8_t
{
	ComponentSpace = 0,
	WorldSpace = 1,
	SuddenMotionOnly = 2,
	EActorMovementCompensationMode_MAX = 3
};

// Object: Enum PoseSearch.EPelvisHeightMode
enum class EPelvisHeightMode : uint8_t
{
	AllLegs = 0,
	AllPlantedFeet = 1,
	FrontPlantedFeetUphill_FrontFeetDownhill = 2,
	EPelvisHeightMode_MAX = 3
};

// Object: Enum PoseSearch.EFootPlacementLockType
enum class EFootPlacementLockType : uint8_t
{
	Unlocked = 0,
	PivotAroundBall = 1,
	PivotAroundAnkle = 2,
	LockRotation = 3,
	EFootPlacementLockType_MAX = 4
};

// Object: Enum PoseSearch.EOffsetRootBone_CollisionTestingMode
enum class EOffsetRootBone_CollisionTestingMode : uint8_t
{
	Disabled = 0,
	ShrinkMaxTranslation = 1,
	PlanarCollision = 2,
	EOffsetRootBone_MAX = 3
};

// Object: Enum PoseSearch.EOrientationWarpingSpace
enum class EOrientationWarpingSpace : uint8_t
{
	ComponentTransform = 0,
	RootBoneTransform = 1,
	CustomTransform = 2,
	EOrientationWarpingSpace_MAX = 3
};

// Object: Enum PoseSearch.EWarpingVectorMode
enum class EWarpingVectorMode : uint8_t
{
	ComponentSpaceVector = 0,
	ActorSpaceVector = 1,
	WorldSpaceVector = 2,
	IKFootRootLocalSpaceVector = 3,
	EWarpingVectorMode_MAX = 4
};

// Object: Enum PoseSearch.EWarpingEvaluationMode
enum class EWarpingEvaluationMode : uint8_t
{
	Manual = 0,
	Graph = 1,
	EWarpingEvaluationMode_MAX = 2
};

// Object: Enum PoseSearch.EPoseSearchMirrorOption
enum class EPoseSearchMirrorOption : uint8_t
{
	UnmirroredOnly = 0,
	MirroredOnly = 1,
	UnmirroredAndMirrored = 2,
	EPoseSearchMirrorOption_MAX = 3
};

// Object: Enum PoseSearch.EPoseSearchMode
enum class EPoseSearchMode : uint8_t
{
	BruteForce = 0,
	PCAKDTree = 1,
	VPTree = 2,
	EPoseSearchMode_MAX = 3
};

// Object: Enum PoseSearch.EPermutationTimeType
enum class EPermutationTimeType : uint8_t
{
	UseSampleTime = 0,
	UsePermutationTime = 1,
	UseSampleToPermutationTime = 2,
	EPermutationTimeType_MAX = 3
};

// Object: Enum PoseSearch.EInputQueryPose
enum class EInputQueryPose : uint8_t
{
	UseCharacterPose = 0,
	UseContinuingPose = 1,
	EInputQueryPose_MAX = 2
};

// Object: Enum PoseSearch.EComponentStrippingVector
enum class EComponentStrippingVector : uint8_t
{
	None = 0,
	StripXY = 1,
	StripZ = 2,
	EComponentStrippingVector_MAX = 3
};

// Object: Enum PoseSearch.EHeadingAxis
enum class EHeadingAxis : uint8_t
{
	X = 0,
	Y = 1,
	Z = 2,
	Num = 3,
	EHeadingAxis_MAX = 4
};

// Object: Enum PoseSearch.EPoseSearchBoneFlags
enum class EPoseSearchBoneFlags : uint8_t
{
	Velocity = 1,
	Position = 2,
	Rotation = 4,
	Phase = 8,
	EPoseSearchBoneFlags_MAX = 9
};

// Object: Enum PoseSearch.EPoseSearchTrajectoryFlags
enum class EPoseSearchTrajectoryFlags : uint8_t
{
	Velocity = 1,
	Position = 2,
	VelocityDirection = 4,
	FacingDirection = 8,
	VelocityXY = 16,
	PositionXY = 32,
	VelocityDirectionXY = 64,
	FacingDirectionXY = 128,
	EPoseSearchTrajectoryFlags_MAX = 129
};

// Object: Enum PoseSearch.EOffsetRootBoneMode
enum class EOffsetRootBoneMode : uint8_t
{
	Accumulate = 0,
	Interpolate = 1,
	Hold = 2,
	Release = 3,
	EOffsetRootBoneMode_MAX = 4
};

// Object: Enum PoseSearch.EPoseSearchInterruptMode
enum class EPoseSearchInterruptMode : uint8_t
{
	DoNotInterrupt = 0,
	InterruptOnDatabaseChange = 1,
	InterruptOnDatabaseChangeAndInvalidateContinuingPose = 2,
	ForceInterrupt = 3,
	ForceInterruptAndInvalidateContinuingPose = 4,
	EPoseSearchInterruptMode_MAX = 5
};

// Object: Enum PoseSearch.EPoseSearchDataPreprocessor
enum class EPoseSearchDataPreprocessor : uint8_t
{
	None = 0,
	Normalize = 1,
	NormalizeOnlyByDeviation = 2,
	NormalizeWithCommonSchema = 3,
	EPoseSearchDataPreprocessor_MAX = 4
};

// Object: ScriptStruct PoseSearch.FootPlacementInterpolationSettings
// Size: 0x2C (Inherited: 0x0)
struct FFootPlacementInterpolationSettings
{
	float UnplantLinearStiffness; // 0x0(0x4)
	float UnplantLinearDamping; // 0x4(0x4)
	float UnplantAngularStiffness; // 0x8(0x4)
	float UnplantAngularDamping; // 0xC(0x4)
	float SeparationStiffness; // 0x10(0x4)
	float SeparationDamping; // 0x14(0x4)
	float FloorLinearStiffness; // 0x18(0x4)
	float FloorLinearDamping; // 0x1C(0x4)
	float FloorAngularStiffness; // 0x20(0x4)
	float FloorAngularDamping; // 0x24(0x4)
	bool bEnableFloorInterpolation; // 0x28(0x1)
	bool bSmoothRootBone; // 0x29(0x1)
	bool bEnableSeparationInterpolation; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x1]; // 0x2B(0x1)
};

// Object: ScriptStruct PoseSearch.FootPlacementPelvisSettings
// Size: 0x24 (Inherited: 0x0)
struct FFootPlacementPelvisSettings
{
	float MaxOffset; // 0x0(0x4)
	float LinearStiffness; // 0x4(0x4)
	float LinearDamping; // 0x8(0x4)
	float HorizontalRebalancingWeight; // 0xC(0x4)
	float MaxOffsetHorizontal; // 0x10(0x4)
	float HeelLiftRatio; // 0x14(0x4)
	EPelvisHeightMode PelvisHeightMode; // 0x18(0x1)
	EActorMovementCompensationMode ActorMovementCompensationMode; // 0x19(0x1)
	bool bEnableInterpolation; // 0x1A(0x1)
	bool bDisablePelvisOffsetInAir; // 0x1B(0x1)
	struct FName DisablePelvisCurveName; // 0x1C(0x8)
};

// Object: ScriptStruct PoseSearch.FootPlacementPlantSettings
// Size: 0x34 (Inherited: 0x0)
struct FFootPlacementPlantSettings
{
	float SpeedThreshold; // 0x0(0x4)
	float DistanceToGround; // 0x4(0x4)
	EFootPlacementLockType LockType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float UnplantRadius; // 0xC(0x4)
	float ReplantRadiusRatio; // 0x10(0x4)
	float UnplantAngle; // 0x14(0x4)
	float ReplantAngleRatio; // 0x18(0x4)
	float MaxExtensionRatio; // 0x1C(0x4)
	float MinExtensionRatio; // 0x20(0x4)
	float SeparatingDistance; // 0x24(0x4)
	float UnalignmentSpeedThreshold; // 0x28(0x4)
	float AnkleTwistReduction; // 0x2C(0x4)
	bool bReconstructWorldPlantFromVelocity; // 0x30(0x1)
	bool bAdjustHeelBeforePlanting; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
};

// Object: ScriptStruct PoseSearch.FootPlacementTraceSettings
// Size: 0x18 (Inherited: 0x0)
struct FFootPlacementTraceSettings
{
	float StartOffset; // 0x0(0x4)
	float EndOffset; // 0x4(0x4)
	float SweepRadius; // 0x8(0x4)
	bool bDisableComplexTrace; // 0xC(0x1)
	uint8_t ComplexTraceChannel; // 0xD(0x1)
	uint8_t Pad_0xE[0x2]; // 0xE(0x2)
	float MaxGroundPenetration; // 0x10(0x4)
	uint8_t SimpleTraceChannel; // 0x14(0x1)
	bool bEnabled; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: ScriptStruct PoseSearch.AnimNode_FootPlacement
// Size: 0x370 (Inherited: 0xD0)
struct FAnimNode_FootPlacement : FAnimNode_SkeletalControlBase
{
	EWarpingEvaluationMode PlantSpeedMode; // 0xCC(0x1)
	struct FBoneReference IkFootRootBone; // 0xD0(0x10)
	struct FBoneReference PelvisBone; // 0xE0(0x10)
	struct FFootPlacementPelvisSettings PelvisSettings; // 0xF0(0x24)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	struct TArray<struct FFootPlacemenLegDefinition> LegDefinitions; // 0x118(0x10)
	struct FFootPlacementPlantSettings PlantSettings; // 0x128(0x34)
	struct FFootPlacementInterpolationSettings InterpolationSettings; // 0x15C(0x2C)
	struct FFootPlacementTraceSettings TraceSettings; // 0x188(0x18)
	struct FVector BaseTranslationDelta; // 0x1A0(0xC)
	uint8_t Pad_0x1AC[0x1C4]; // 0x1AC(0x1C4)
};

// Object: ScriptStruct PoseSearch.FootPlacemenLegDefinition
// Size: 0x4C (Inherited: 0x0)
struct FFootPlacemenLegDefinition
{
	struct FBoneReference FKFootBone; // 0x0(0x10)
	struct FBoneReference IKFootBone; // 0x10(0x10)
	struct FBoneReference BallBone; // 0x20(0x10)
	int32_t NumBonesInLimb; // 0x30(0x4)
	struct FName SpeedCurveName; // 0x34(0x8)
	struct FName DisableLockCurveName; // 0x3C(0x8)
	struct FName DisableLegCurveName; // 0x44(0x8)
};

// Object: ScriptStruct PoseSearch.FootPlacementRootDefinition
// Size: 0x20 (Inherited: 0x0)
struct FFootPlacementRootDefinition
{
	struct FBoneReference PelvisBone; // 0x0(0x10)
	struct FBoneReference IKRootBone; // 0x10(0x10)
};

// Object: ScriptStruct PoseSearch.FloatSpringState_FP
// Size: 0xC (Inherited: 0x0)
struct FFloatSpringState_FP
{
	uint8_t Pad_0x0[0xC]; // 0x0(0xC)
};

// Object: ScriptStruct PoseSearch.QuaternionSpringState_FP
// Size: 0x20 (Inherited: 0x0)
struct FQuaternionSpringState_FP
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct PoseSearch.VectorSpringState_FP
// Size: 0x1C (Inherited: 0x0)
struct FVectorSpringState_FP
{
	uint8_t Pad_0x0[0x1C]; // 0x0(0x1C)
};

// Object: ScriptStruct PoseSearch.AnimNode_MotionMatching
// Size: 0x290 (Inherited: 0x198)
struct FAnimNode_MotionMatching : FAnimNode_BlendStack_Standalone
{
	struct UPoseSearchDatabase* Database; // 0x198(0x8)
	struct TArray<struct UPoseSearchDatabase*> InputDatabases; // 0x1A0(0x10)
	float BlendTime; // 0x1B0(0x4)
	uint8_t Pad_0x1B4[0x4]; // 0x1B4(0x4)
	struct UBlendProfile* BlendProfile; // 0x1B8(0x8)
	EAlphaBlendOption BlendOption; // 0x1C0(0x1)
	uint8_t Pad_0x1C1[0x3]; // 0x1C1(0x3)
	struct FFloatInterval PoseJumpThresholdTime; // 0x1C4(0x8)
	float PoseReselectHistory; // 0x1CC(0x4)
	float SearchThrottleTime; // 0x1D0(0x4)
	struct FFloatInterval PlayRate; // 0x1D4(0x8)
	bool bUseInertialBlend; // 0x1DC(0x1)
	bool bResetOnBecomingRelevant; // 0x1DD(0x1)
	bool bShouldSearch; // 0x1DE(0x1)
	bool bShouldUseCachedChannelData; // 0x1DF(0x1)
	uint8_t Pad_0x1E0[0x98]; // 0x1E0(0x98)
	struct TArray<struct UPoseSearchDatabase*> DatabasesToSearch; // 0x278(0x10)
	EPoseSearchInterruptMode NextUpdateInterruptMode; // 0x288(0x1)
	uint8_t Pad_0x289[0x7]; // 0x289(0x7)
};

// Object: ScriptStruct PoseSearch.AnimNode_OffsetRootBone
// Size: 0x100 (Inherited: 0x10)
struct FAnimNode_OffsetRootBone : FAnimNode_Base
{
	struct FPoseLink Source; // 0x10(0x10)
	EWarpingEvaluationMode EvaluationMode; // 0x20(0x1)
	EOffsetRootBoneMode TranslationMode; // 0x21(0x1)
	EOffsetRootBoneMode RotationMode; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	float TranslationHalflife; // 0x24(0x4)
	float RotationHalfLife; // 0x28(0x4)
	float MaxTranslationError; // 0x2C(0x4)
	float MaxRotationError; // 0x30(0x4)
	bool bClampToTranslationVelocity; // 0x34(0x1)
	bool bClampToRotationVelocity; // 0x35(0x1)
	uint8_t Pad_0x36[0x2]; // 0x36(0x2)
	float TranslationSpeedRatio; // 0x38(0x4)
	float RotationSpeedRatio; // 0x3C(0x4)
	struct FVector TranslationDelta; // 0x40(0xC)
	struct FRotator RotationDelta; // 0x4C(0xC)
	EOffsetRootBone_CollisionTestingMode CollisionTestingMode; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float CollisionTestShapeRadius; // 0x5C(0x4)
	struct FVector CollisionTestShapeOffset; // 0x60(0xC)
	uint8_t Pad_0x6C[0x94]; // 0x6C(0x94)
};

// Object: ScriptStruct PoseSearch.AnimNode_OrientationWarpingMM
// Size: 0x210 (Inherited: 0xD0)
struct FAnimNode_OrientationWarpingMM : FAnimNode_SkeletalControlBase
{
	EWarpingEvaluationMode Mode; // 0xCC(0x1)
	float TargetTime; // 0xD0(0x4)
	float OrientationAngle; // 0xD4(0x4)
	float LocomotionAngle; // 0xD8(0x4)
	struct FVector LocomotionDirection; // 0xDC(0xC)
	float MinRootMotionSpeedThreshold; // 0xE8(0x4)
	float LocomotionAngleDeltaThreshold; // 0xEC(0x4)
	struct TArray<struct FBoneReference> SpineBones; // 0xF0(0x10)
	struct FBoneReference IkFootRootBone; // 0x100(0x10)
	struct TArray<struct FBoneReference> IKFootBones; // 0x110(0x10)
	struct UAnimSequence* CurrentAnimAsset; // 0x120(0x8)
	float CurrentAnimAssetTime; // 0x128(0x4)
	uint8_t RotationAxis; // 0x12C(0x1)
	uint8_t Pad_0x12E[0x2]; // 0x12E(0x2)
	float DistributedBoneOrientationAlpha; // 0x130(0x4)
	float RotationInterpSpeed; // 0x134(0x4)
	float CounterCompensateInterpSpeed; // 0x138(0x4)
	float MaxCorrectionDegrees; // 0x13C(0x4)
	float MaxRootMotionDeltaToCompensateDegrees; // 0x140(0x4)
	bool bCounterCompenstateInterpolationByRootMotion; // 0x144(0x1)
	bool bScaleByGlobalBlendWeight; // 0x145(0x1)
	bool bUseManualRootMotionVelocity; // 0x146(0x1)
	uint8_t Pad_0x147[0x1]; // 0x147(0x1)
	struct FVector ManualRootMotionVelocity; // 0x148(0xC)
	EOrientationWarpingSpace WarpingSpace; // 0x154(0x1)
	uint8_t Pad_0x155[0xB]; // 0x155(0xB)
	struct FTransform WarpingSpaceTransform; // 0x160(0x30)
	struct FName OrientationWarpingCurveName; // 0x190(0x8)
	uint8_t Pad_0x198[0x78]; // 0x198(0x78)
};

// Object: ScriptStruct PoseSearch.PoseSearchQueryTrajectory
// Size: 0x18 (Inherited: 0x0)
struct FPoseSearchQueryTrajectory
{
	struct TArray<struct FPoseSearchQueryTrajectorySample> Samples; // 0x0(0x10)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct PoseSearch.PoseSearchTrajectoryData
// Size: 0x128 (Inherited: 0x0)
struct FPoseSearchTrajectoryData
{
	float RotateTowardsMovementSpeed; // 0x0(0x4)
	float MaxControllerYawRate; // 0x4(0x4)
	float BendVelocityTowardsAcceleration; // 0x8(0x4)
	bool bUseSpeedRemappingCurve; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FRuntimeFloatCurve SpeedRemappingCurve; // 0x10(0x88)
	bool bUseAccelerationRemappingCurve; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	struct FRuntimeFloatCurve AccelerationRemappingCurve; // 0xA0(0x88)
};

// Object: ScriptStruct PoseSearch.AnimNode_PoseSearchHistoryCollector_Base
// Size: 0x2A8 (Inherited: 0x10)
struct FAnimNode_PoseSearchHistoryCollector_Base : FAnimNode_Base
{
	int32_t PoseCount; // 0x10(0x4)
	float SamplingInterval; // 0x14(0x4)
	struct TArray<struct FBoneReference> CollectedBones; // 0x18(0x10)
	bool bInitializeWithRefPose; // 0x28(0x1)
	bool bResetOnBecomingRelevant; // 0x29(0x1)
	bool bStoreScales; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x1]; // 0x2B(0x1)
	float RootBoneRecoveryTime; // 0x2C(0x4)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	bool bGenerateTrajectory; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
	struct FPoseSearchQueryTrajectory Trajectory; // 0x48(0x18)
	float TrajectorySpeedMultiplier; // 0x60(0x4)
	int32_t TrajectoryHistoryCount; // 0x64(0x4)
	int32_t TrajectoryPredictionCount; // 0x68(0x4)
	float PredictionSamplingInterval; // 0x6C(0x4)
	struct FPoseSearchTrajectoryData TrajectoryData; // 0x70(0x128)
	uint8_t Pad_0x198[0x110]; // 0x198(0x110)
};

// Object: ScriptStruct PoseSearch.PoseSearchQueryTrajectorySample
// Size: 0x20 (Inherited: 0x0)
struct FPoseSearchQueryTrajectorySample
{
	struct FQuat Facing; // 0x0(0x10)
	struct FVector position; // 0x10(0xC)
	float AccumulatedSeconds; // 0x1C(0x4)
};

// Object: ScriptStruct PoseSearch.AnimNode_PoseSearchComponentSpaceHistoryCollector
// Size: 0x2B8 (Inherited: 0x2A8)
struct FAnimNode_PoseSearchComponentSpaceHistoryCollector : FAnimNode_PoseSearchHistoryCollector_Base
{
	struct FComponentSpacePoseLink Source; // 0x2A8(0x10)
};

// Object: ScriptStruct PoseSearch.AnimNode_PoseSearchHistoryCollector
// Size: 0x2B8 (Inherited: 0x2A8)
struct FAnimNode_PoseSearchHistoryCollector : FAnimNode_PoseSearchHistoryCollector_Base
{
	struct FPoseLink Source; // 0x2A8(0x10)
};

// Object: ScriptStruct PoseSearch.WarpingVectorValue
// Size: 0x10 (Inherited: 0x0)
struct FWarpingVectorValue
{
	EWarpingVectorMode Mode; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector Value; // 0x4(0xC)
};

// Object: ScriptStruct PoseSearch.TrajectorySampleRange
// Size: 0x10 (Inherited: 0x0)
struct FTrajectorySampleRange
{
	struct TArray<struct FTrajectorySample> Samples; // 0x0(0x10)
};

// Object: ScriptStruct PoseSearch.TrajectorySample
// Size: 0x50 (Inherited: 0x0)
struct FTrajectorySample
{
	float AccumulatedSeconds; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector LinearVelocity; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct PoseSearch.PoseSearchCost
// Size: 0x4 (Inherited: 0x0)
struct FPoseSearchCost
{
	float TotalCost; // 0x0(0x4)
};

// Object: ScriptStruct PoseSearch.PoseSearchDatabaseAnimationAssetBase
// Size: 0x18 (Inherited: 0x0)
struct FPoseSearchDatabaseAnimationAssetBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UAnimSequence* Sequence; // 0x8(0x8)
	bool bLooping; // 0x10(0x1)
	bool bHasRootMotion; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct PoseSearch.PoseSearchDatabaseMultiSequence
// Size: 0x20 (Inherited: 0x18)
struct FPoseSearchDatabaseMultiSequence : FPoseSearchDatabaseAnimationAssetBase
{
	struct UPoseSearchMultiSequence* MultiSequence; // 0x18(0x8)
};

// Object: ScriptStruct PoseSearch.PoseSearchDatabaseAnimMontage
// Size: 0x20 (Inherited: 0x18)
struct FPoseSearchDatabaseAnimMontage : FPoseSearchDatabaseAnimationAssetBase
{
	struct UAnimMontage* AnimMontage; // 0x18(0x8)
};

// Object: ScriptStruct PoseSearch.PoseSearchDatabaseAnimComposite
// Size: 0x20 (Inherited: 0x18)
struct FPoseSearchDatabaseAnimComposite : FPoseSearchDatabaseAnimationAssetBase
{
	struct UAnimComposite* AnimComposite; // 0x18(0x8)
};

// Object: ScriptStruct PoseSearch.PoseSearchDatabaseBlendSpace
// Size: 0x20 (Inherited: 0x18)
struct FPoseSearchDatabaseBlendSpace : FPoseSearchDatabaseAnimationAssetBase
{
	struct UBlendSpace* BlendSpace; // 0x18(0x8)
};

// Object: ScriptStruct PoseSearch.PoseSearchDatabaseSequence
// Size: 0x18 (Inherited: 0x18)
struct FPoseSearchDatabaseSequence : FPoseSearchDatabaseAnimationAssetBase
{
};

// Object: ScriptStruct PoseSearch.PoseSearchBone
// Size: 0x14 (Inherited: 0x0)
struct FPoseSearchBone
{
	struct FBoneReference Reference; // 0x0(0x10)
	int32_t Flags; // 0x10(0x4)
};

// Object: ScriptStruct PoseSearch.PoseSearchTrajectorySample
// Size: 0x8 (Inherited: 0x0)
struct FPoseSearchTrajectorySample
{
	float Offset; // 0x0(0x4)
	int32_t Flags; // 0x4(0x4)
};

// Object: ScriptStruct PoseSearch.AnimPoseSearchStateInfo
// Size: 0x20 (Inherited: 0x8)
struct FAnimPoseSearchStateInfo : FTableRowBase
{
	struct FName AnimationName; // 0x8(0x8)
	struct TArray<struct FStateInfo> StateInfos; // 0x10(0x10)
};

// Object: ScriptStruct PoseSearch.StateInfo
// Size: 0x18 (Inherited: 0x0)
struct FStateInfo
{
	struct UAnimNotifyState_PoseSearchBase* NotifyStateClass; // 0x0(0x8)
	float TriggerTime; // 0x8(0x4)
	float DurationTime; // 0xC(0x4)
	float Cost; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct PoseSearch.PoseSearchFutureProperties
// Size: 0x10 (Inherited: 0x0)
struct FPoseSearchFutureProperties
{
	struct TWeakObjectPtr<struct UObject> Animation; // 0x0(0x8)
	float AnimationTime; // 0x8(0x4)
	float IntervalTime; // 0xC(0x4)
};

// Object: ScriptStruct PoseSearch.PoseSearchMultiSequenceItem
// Size: 0x40 (Inherited: 0x0)
struct FPoseSearchMultiSequenceItem
{
	struct UAnimSequenceBase* Sequence; // 0x0(0x8)
	struct FName Role; // 0x8(0x8)
	struct FTransform Origin; // 0x10(0x30)
};

// Object: ScriptStruct PoseSearch.PoseSearchBlueprintResult
// Size: 0x2C (Inherited: 0x0)
struct FPoseSearchBlueprintResult
{
	struct TWeakObjectPtr<struct UObject> SelectedAnimation; // 0x0(0x8)
	float SelectedTime; // 0x8(0x4)
	float WantedPlayRate; // 0xC(0x4)
	bool bLoop; // 0x10(0x1)
	bool bIsMirrored; // 0x11(0x1)
	uint8_t Pad_0x12[0x2]; // 0x12(0x2)
	struct FVector BlendParameters; // 0x14(0xC)
	struct TWeakObjectPtr<struct UPoseSearchDatabase> SelectedDatabase; // 0x20(0x8)
	float SearchCost; // 0x28(0x4)
};

// Object: ScriptStruct PoseSearch.PoseSearchRoledSkeleton
// Size: 0x30 (Inherited: 0x0)
struct FPoseSearchRoledSkeleton
{
	struct USkeleton* Skeleton; // 0x0(0x8)
	struct FName Role; // 0x8(0x8)
	struct TArray<struct FBoneReference> BoneReferences; // 0x10(0x10)
	struct TArray<uint16_t> BoneIndicesWithParents; // 0x20(0x10)
};

// Object: ScriptStruct PoseSearch.PoseSearchTrajectory_WorldCollisionResults
// Size: 0x8 (Inherited: 0x0)
struct FPoseSearchTrajectory_WorldCollisionResults
{
	float TimeToLand; // 0x0(0x4)
	float LandSpeed; // 0x4(0x4)
};

// Object: Class PoseSearch.MotionMatchingAnimNodeLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMotionMatchingAnimNodeLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMotionMatchingAnimNodeLibrary, "MotionMatchingAnimNodeLibrary")
};

// Object: Class PoseSearch.AnimNotifyState_PoseSearchBase
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_PoseSearchBase : UAnimNotifyState
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_PoseSearchBase, "AnimNotifyState_PoseSearchBase")
};

// Object: Class PoseSearch.AnimNotifyState_PoseSearchExcludeFromDatabase
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_PoseSearchExcludeFromDatabase : UAnimNotifyState_PoseSearchBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_PoseSearchExcludeFromDatabase, "AnimNotifyState_PoseSearchExcludeFromDatabase")
};

// Object: Class PoseSearch.AnimNotifyState_PoseSearchBlockTransition
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_PoseSearchBlockTransition : UAnimNotifyState_PoseSearchBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_PoseSearchBlockTransition, "AnimNotifyState_PoseSearchBlockTransition")
};

// Object: Class PoseSearch.AnimNotifyState_PoseSearchModifyCost
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_PoseSearchModifyCost : UAnimNotifyState_PoseSearchBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_PoseSearchModifyCost, "AnimNotifyState_PoseSearchModifyCost")

	float CostAddend; // 0x2C(0x4)
};

// Object: Class PoseSearch.AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : UAnimNotifyState_PoseSearchBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias, "AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias")

	float CostAddend; // 0x2C(0x4)
};

// Object: Class PoseSearch.AnimNotifyState_PoseSearchSamplingEvent
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_PoseSearchSamplingEvent : UAnimNotifyState_PoseSearchBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_PoseSearchSamplingEvent, "AnimNotifyState_PoseSearchSamplingEvent")
};

// Object: Class PoseSearch.AnimNotifyState_PoseSearchSamplingAttribute
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_PoseSearchSamplingAttribute : UAnimNotifyState_PoseSearchSamplingEvent
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_PoseSearchSamplingAttribute, "AnimNotifyState_PoseSearchSamplingAttribute")
};

// Object: Class PoseSearch.AnimNotifyState_PoseSearchBranchIn
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState_PoseSearchBranchIn : UAnimNotifyState_PoseSearchBase
{
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_PoseSearchBranchIn, "AnimNotifyState_PoseSearchBranchIn")

	struct UPoseSearchDatabase* Database; // 0x30(0x8)
};

// Object: Class PoseSearch.PoseSearchDatabase
// Size: 0x178 (Inherited: 0x30)
struct UPoseSearchDatabase : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchDatabase, "PoseSearchDatabase")

	struct UPoseSearchSchema* Schema; // 0x30(0x8)
	float ContinuingPoseCostBias; // 0x38(0x4)
	float BaseCostBias; // 0x3C(0x4)
	float LoopingCostBias; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct TArray<struct FPoseSearchDatabaseAnimationAssetBase> AnimationAssets; // 0x48(0x10)
	struct TArray<struct FName> Tags; // 0x58(0x10)
	EPoseSearchMode PoseSearchMode; // 0x68(0x4)
	int32_t KDTreeQueryNumNeighbors; // 0x6C(0x4)
	int32_t KDTreeQueryNumNeighborsWithDuplicates; // 0x70(0x4)
	uint8_t Pad_0x74[0x104]; // 0x74(0x104)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel
// Size: 0x40 (Inherited: 0x28)
struct UPoseSearchFeatureChannel : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel, "PoseSearchFeatureChannel")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	int32_t ChannelDataOffset; // 0x38(0x4)
	int32_t ChannelCardinality; // 0x3C(0x4)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_FilterCrashingLegs
// Size: 0x98 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_FilterCrashingLegs : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_FilterCrashingLegs, "PoseSearchFeatureChannel_FilterCrashingLegs")

	struct FBoneReference LeftThigh; // 0x40(0x10)
	struct FBoneReference RightThigh; // 0x50(0x10)
	struct FBoneReference LeftFoot; // 0x60(0x10)
	struct FBoneReference RightFoot; // 0x70(0x10)
	struct FName SampleRole; // 0x80(0x8)
	float Weight; // 0x88(0x4)
	int8_t LeftThighIdx; // 0x8C(0x1)
	int8_t RightThighIdx; // 0x8D(0x1)
	int8_t LeftFootIdx; // 0x8E(0x1)
	int8_t RightFootIdx; // 0x8F(0x1)
	EInputQueryPose InputQueryPose; // 0x90(0x1)
	uint8_t Pad_0x91[0x3]; // 0x91(0x3)
	float AllowedTolerance; // 0x94(0x4)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_GroupBase
// Size: 0x48 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_GroupBase : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_GroupBase, "PoseSearchFeatureChannel_GroupBase")

	struct FName SampleRole; // 0x40(0x8)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_Group
// Size: 0x58 (Inherited: 0x48)
struct UPoseSearchFeatureChannel_Group : UPoseSearchFeatureChannel_GroupBase
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_Group, "PoseSearchFeatureChannel_Group")

	struct TArray<struct UPoseSearchFeatureChannel*> SubChannels; // 0x48(0x10)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_Heading
// Size: 0x88 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_Heading : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_Heading, "PoseSearchFeatureChannel_Heading")

	struct FBoneReference Bone; // 0x40(0x10)
	struct FName SampleRole; // 0x50(0x8)
	struct FBoneReference OriginBone; // 0x58(0x10)
	struct FName OriginRole; // 0x68(0x8)
	int32_t SamplingAttributeId; // 0x70(0x4)
	float SampleTimeOffset; // 0x74(0x4)
	float OriginTimeOffset; // 0x78(0x4)
	EHeadingAxis HeadingAxis; // 0x7C(0x1)
	int8_t SchemaBoneIdx; // 0x7D(0x1)
	int8_t SchemaOriginBoneIdx; // 0x7E(0x1)
	EInputQueryPose InputQueryPose; // 0x7F(0x1)
	EComponentStrippingVector ComponentStripping; // 0x80(0x1)
	EPermutationTimeType PermutationTimeType; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)

	// Object: Function PoseSearch.PoseSearchFeatureChannel_Heading.BP_GetWorldRotation
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x20) ]
	struct FQuat BP_GetWorldRotation(struct UAnimInstance* AnimInstance);
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_Padding
// Size: 0x48 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_Padding : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_Padding, "PoseSearchFeatureChannel_Padding")

	int32_t PaddingSize; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_PermutationTime
// Size: 0x40 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_PermutationTime : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_PermutationTime, "PoseSearchFeatureChannel_PermutationTime")
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_Phase
// Size: 0x60 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_Phase : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_Phase, "PoseSearchFeatureChannel_Phase")

	struct FBoneReference Bone; // 0x40(0x10)
	struct FName SampleRole; // 0x50(0x8)
	int8_t SchemaBoneIdx; // 0x58(0x1)
	EInputQueryPose InputQueryPose; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_Pose
// Size: 0x80 (Inherited: 0x48)
struct UPoseSearchFeatureChannel_Pose : UPoseSearchFeatureChannel_GroupBase
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_Pose, "PoseSearchFeatureChannel_Pose")

	struct TArray<struct FPoseSearchBone> SampledBones; // 0x48(0x10)
	struct TArray<int8_t> SchemaBoneIdx; // 0x58(0x10)
	EInputQueryPose InputQueryPose; // 0x68(0x1)
	bool bUseCharacterSpaceVelocities; // 0x69(0x1)
	uint8_t Pad_0x6A[0x6]; // 0x6A(0x6)
	struct TArray<struct UPoseSearchFeatureChannel*> SubChannels; // 0x70(0x10)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_Position
// Size: 0x88 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_Position : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_Position, "PoseSearchFeatureChannel_Position")

	struct FBoneReference Bone; // 0x40(0x10)
	struct FName SampleRole; // 0x50(0x8)
	struct FBoneReference OriginBone; // 0x58(0x10)
	struct FName OriginRole; // 0x68(0x8)
	int32_t SamplingAttributeId; // 0x70(0x4)
	float SampleTimeOffset; // 0x74(0x4)
	float OriginTimeOffset; // 0x78(0x4)
	int8_t SchemaBoneIdx; // 0x7C(0x1)
	int8_t SchemaOriginBoneIdx; // 0x7D(0x1)
	EInputQueryPose InputQueryPose; // 0x7E(0x1)
	EComponentStrippingVector ComponentStripping; // 0x7F(0x1)
	EPermutationTimeType PermutationTimeType; // 0x80(0x1)
	uint8_t Pad_0x81[0x7]; // 0x81(0x7)

	// Object: Function PoseSearch.PoseSearchFeatureChannel_Position.BP_GetWorldPosition
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x14) ]
	struct FVector BP_GetWorldPosition(struct UAnimInstance* AnimInstance);
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_SamplingTime
// Size: 0x48 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_SamplingTime : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_SamplingTime, "PoseSearchFeatureChannel_SamplingTime")

	float Weight; // 0x40(0x4)
	float TimeToMatch; // 0x44(0x4)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_TimeToEvent
// Size: 0x50 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_TimeToEvent : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_TimeToEvent, "PoseSearchFeatureChannel_TimeToEvent")

	float Weight; // 0x40(0x4)
	int32_t SamplingAttributeId; // 0x44(0x4)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)

	// Object: Function PoseSearch.PoseSearchFeatureChannel_TimeToEvent.BP_GetTimeToEvent
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0xC) ]
	float BP_GetTimeToEvent(struct UAnimInstance* AnimInstance);
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_Trajectory
// Size: 0x68 (Inherited: 0x48)
struct UPoseSearchFeatureChannel_Trajectory : UPoseSearchFeatureChannel_GroupBase
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_Trajectory, "PoseSearchFeatureChannel_Trajectory")

	struct TArray<struct FPoseSearchTrajectorySample> Samples; // 0x48(0x10)
	struct TArray<struct UPoseSearchFeatureChannel*> SubChannels; // 0x58(0x10)
};

// Object: Class PoseSearch.PoseSearchFeatureChannel_Velocity
// Size: 0x88 (Inherited: 0x40)
struct UPoseSearchFeatureChannel_Velocity : UPoseSearchFeatureChannel
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchFeatureChannel_Velocity, "PoseSearchFeatureChannel_Velocity")

	struct FBoneReference Bone; // 0x40(0x10)
	struct FName SampleRole; // 0x50(0x8)
	struct FBoneReference OriginBone; // 0x58(0x10)
	struct FName OriginRole; // 0x68(0x8)
	int32_t SamplingAttributeId; // 0x70(0x4)
	float SampleTimeOffset; // 0x74(0x4)
	float OriginTimeOffset; // 0x78(0x4)
	int8_t SchemaBoneIdx; // 0x7C(0x1)
	int8_t SchemaOriginBoneIdx; // 0x7D(0x1)
	EInputQueryPose InputQueryPose; // 0x7E(0x1)
	bool bUseCharacterSpaceVelocities; // 0x7F(0x1)
	bool bNormalize; // 0x80(0x1)
	EComponentStrippingVector ComponentStripping; // 0x81(0x1)
	EPermutationTimeType PermutationTimeType; // 0x82(0x1)
	uint8_t Pad_0x83[0x5]; // 0x83(0x5)

	// Object: Function PoseSearch.PoseSearchFeatureChannel_Velocity.BP_GetWorldVelocity
	// Flags: [Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x14) ]
	struct FVector BP_GetWorldVelocity(struct UAnimInstance* AnimInstance);
};

// Object: Class PoseSearch.PoseSearchHistoryCollectorAnimNodeLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPoseSearchHistoryCollectorAnimNodeLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchHistoryCollectorAnimNodeLibrary, "PoseSearchHistoryCollectorAnimNodeLibrary")
};

// Object: Class PoseSearch.PoseSearchLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPoseSearchLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchLibrary, "PoseSearchLibrary")

	// Object: Function PoseSearch.PoseSearchLibrary.SetPoseSearchNotifyStateCostValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3f37218
	// Params: [ Num(2) Size(0xC) ]
	static void SetPoseSearchNotifyStateCostValue(struct UAnimNotifyState* PoseSearchNotify, float Value);

	// Object: Function PoseSearch.PoseSearchLibrary.MotionMatchMulti
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x3f372f0
	// Params: [ Num(6) Size(0x68) ]
	static void MotionMatchMulti(struct TArray<struct ACharacter*> AnimInstances, struct TArray<struct FName> Roles, struct TArray<struct UObject*> AssetsToSearch, struct FName PoseHistoryName, struct FPoseSearchBlueprintResult& Result, int32_t DebugSessionUniqueIdentifier);

	// Object: Function PoseSearch.PoseSearchLibrary.MotionMatch
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x3f37624
	// Params: [ Num(6) Size(0x60) ]
	static void MotionMatch(struct UAnimInstance* AnimInstance, struct TArray<struct UObject*> AssetsToSearch, struct FName PoseHistoryName, struct FPoseSearchFutureProperties Future, struct FPoseSearchBlueprintResult& Result, int32_t DebugSessionUniqueIdentifier);
};

// Object: Class PoseSearch.PoseSearchMultiSequence
// Size: 0x40 (Inherited: 0x30)
struct UPoseSearchMultiSequence : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchMultiSequence, "PoseSearchMultiSequence")

	struct TArray<struct FPoseSearchMultiSequenceItem> Items; // 0x30(0x10)

	// Object: Function PoseSearch.PoseSearchMultiSequence.GetSequence
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f3aed4
	// Params: [ Num(2) Size(0x10) ]
	struct UAnimSequenceBase* GetSequence(const struct FName& Role);
};

// Object: Class PoseSearch.PoseSearchNormalizationSet
// Size: 0x40 (Inherited: 0x30)
struct UPoseSearchNormalizationSet : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchNormalizationSet, "PoseSearchNormalizationSet")

	struct TArray<struct UPoseSearchDatabase*> Databases; // 0x30(0x10)
};

// Object: Class PoseSearch.PoseSearchSchema
// Size: 0x78 (Inherited: 0x30)
struct UPoseSearchSchema : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchSchema, "PoseSearchSchema")

	struct USkeleton* Skeleton; // 0x30(0x8)
	int32_t SampleRate; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FPoseSearchRoledSkeleton> Skeletons; // 0x40(0x10)
	struct TArray<struct UPoseSearchFeatureChannel*> Channels; // 0x50(0x10)
	struct TArray<struct UPoseSearchFeatureChannel*> FinalizedChannels; // 0x60(0x10)
	int32_t SchemaCardinality; // 0x70(0x4)
	bool bAddDataPadding; // 0x74(0x1)
	bool bInjectAdditionalDebugChannels; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
};

// Object: Class PoseSearch.PoseSearchTrajectoryLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPoseSearchTrajectoryLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPoseSearchTrajectoryLibrary, "PoseSearchTrajectoryLibrary")

	// Object: Function PoseSearch.PoseSearchTrajectoryLibrary.PoseSearchGenerateTrajectory
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3f3b70c
	// Params: [ Num(10) Size(0x180) ]
	static void PoseSearchGenerateTrajectory(struct UAnimInstance* InAnimInstance, const struct FPoseSearchTrajectoryData& InTrajectoryData, float InDeltaTime, struct FPoseSearchQueryTrajectory& InOutTrajectory, float& InOutDesiredControllerYawLastUpdate, struct FPoseSearchQueryTrajectory& OutTrajectory, float InHistorySamplingInterval, int32_t InTrajectoryHistoryCount, float InPredictionSamplingInterval, int32_t InTrajectoryPredictionCount);

	// Object: Function PoseSearch.PoseSearchTrajectoryLibrary.HandleTrajectoryWorldCollisions
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3f3b1f8
	// Params: [ Num(16) Size(0x94) ]
	static void HandleTrajectoryWorldCollisions(struct UObject* WorldContextObject, struct UAnimInstance* AnimInstance, const struct FPoseSearchQueryTrajectory& InTrajectory, bool bApplyGravity, float FloorCollisionsOffset, struct FPoseSearchQueryTrajectory& OutTrajectory, struct FPoseSearchTrajectory_WorldCollisionResults& CollisionResult, uint8_t TraceChannel, bool bTraceComplex, const struct TArray<struct AActor*>& ActorsToIgnore, uint8_t DrawDebugType, bool bIgnoreSelf, float MaxObstacleHeight, struct FLinearColor TraceColor, struct FLinearColor TraceHitColor, float DrawTime);

	// Object: Function PoseSearch.PoseSearchTrajectoryLibrary.GetTrajectorySampleAtTime
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x3f3b03c
	// Params: [ Num(4) Size(0x41) ]
	static void GetTrajectorySampleAtTime(const struct FPoseSearchQueryTrajectory& InTrajectory, float Time, struct FPoseSearchQueryTrajectorySample& OutTrajectorySample, bool bExtrapolate);
};

} // namespace SDK
