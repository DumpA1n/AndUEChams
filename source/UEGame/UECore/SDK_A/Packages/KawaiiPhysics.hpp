#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: KawaiiPhysics
// Enums: 7
// Structs: 16
// Classes: 1

enum class ESphericalLimitType : uint8_t;
struct FBoneReference;
struct UCurveFloat;
struct FAnimNode_BoneConstrain;
struct FBoneConstrain_BoneConfig;
struct FBoneConstrain_ConstrainConfig;
struct FKawaiiPhysicsSettings;
struct FAnimNode_KawaiiPhysics;
struct FKawaiiPhysicsModifyBone;
struct FCollisionLimitBase;
struct FCapsuleLimit;
struct FEdgeDebugInfo;
struct FPlanarLimit;
struct FSphericalLimit;
struct FAdjacentEdgesInfo;
struct FCollisionLimitDataBase;
struct FPlanarLimitData;
struct FCapsuleLimitData;
struct FSphericalLimitData;
struct UKawaiiPhysicsLimitsDataAsset;

// Object: Enum KawaiiPhysics.EBoneConstrainType
enum class EBoneConstrainType : uint8_t
{
	PositiontConstraint = 0,
	OrientConstraint = 1,
	RotationConstraint = 2,
	EBoneConstrainType_MAX = 3
};

// Object: Enum KawaiiPhysics.BoneConstraintMode
enum class EBoneConstraintMode : uint8_t
{
	PBD = 0,
	XPBD = 1,
	BoneConstraintMode_MAX = 2
};

// Object: Enum KawaiiPhysics.EXPBDComplianceType
enum class EXPBDComplianceType : uint8_t
{
	Concrete = 0,
	Wood = 1,
	Leather = 2,
	Tendon = 3,
	Rubber = 4,
	Muscle = 5,
	Fat = 6,
	EXPBDComplianceType_MAX = 7
};

// Object: Enum KawaiiPhysics.EWindMode
enum class EWindMode : uint8_t
{
	World = 0,
	Component = 1,
	BaseBone = 2,
	WorldAndComponent = 3,
	WorldAndBaseBone = 4,
	EWindMode_MAX = 5
};

// Object: Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8_t
{
	None = 0,
	Spherical = 1,
	Capsule = 2,
	Planar = 3,
	ECollisionLimitType_MAX = 4
};

// Object: Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8_t
{
	X_Positive = 0,
	X_Negative = 1,
	Y_Positive = 2,
	Y_Negative = 3,
	Z_Positive = 4,
	Z_Negative = 5,
	EBoneForwardAxis_MAX = 6
};

// Object: Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8_t
{
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EPlanarConstraint_MAX = 4
};

// Object: ScriptStruct KawaiiPhysics.AnimNode_BoneConstrain
// Size: 0xE8 (Inherited: 0xD0)
struct FAnimNode_BoneConstrain : FAnimNode_SkeletalControlBase
{
	struct TArray<struct FBoneConstrain_BoneConfig> BoneConfigs; // 0xD0(0x10)
	uint8_t Pad_0xE0[0x8]; // 0xE0(0x8)
};

// Object: ScriptStruct KawaiiPhysics.BoneConstrain_BoneConfig
// Size: 0x20 (Inherited: 0x0)
struct FBoneConstrain_BoneConfig
{
	struct FBoneReference DrivenBone; // 0x0(0x10)
	struct TArray<struct FBoneConstrain_ConstrainConfig> Contrains; // 0x10(0x10)
};

// Object: ScriptStruct KawaiiPhysics.BoneConstrain_ConstrainConfig
// Size: 0x50 (Inherited: 0x0)
struct FBoneConstrain_ConstrainConfig
{
	struct FBoneReference DriverBone; // 0x0(0x10)
	EBoneConstrainType ConstrainType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Weight; // 0x14(0x4)
	uint8_t Pad_0x18[0x38]; // 0x18(0x38)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// Size: 0x18 (Inherited: 0x0)
struct FKawaiiPhysicsSettings
{
	float Damping; // 0x0(0x4)
	float WorldDampingLocation; // 0x4(0x4)
	float WorldDampingRotation; // 0x8(0x4)
	float Stiffness; // 0xC(0x4)
	float Radius; // 0x10(0x4)
	float LimitAngle; // 0x14(0x4)
};

// Object: ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// Size: 0x790 (Inherited: 0xD0)
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase
{
	struct FBoneReference RootBone; // 0xCC(0x10)
	struct TArray<struct FBoneReference> ExcludeBones; // 0xE0(0x10)
	bool bEnableEdgeCollide; // 0xF0(0x1)
	bool bEnableEndBoneControl; // 0xF1(0x1)
	uint8_t Pad_0xF2[0x2]; // 0xF2(0x2)
	struct FVector EndBoneControlOffset; // 0xF4(0xC)
	struct FRotator EndBoneControlRotation; // 0x100(0xC)
	int32_t ModiftStartIndex; // 0x10C(0x4)
	int32_t StripIndex; // 0x110(0x4)
	bool IsLastStrip; // 0x114(0x1)
	uint8_t Pad_0x115[0x3]; // 0x115(0x3)
	struct TArray<int32_t> FocusedDebugBoneIndex; // 0x118(0x10)
	int32_t CircleStartIndex; // 0x128(0x4)
	int32_t TargetFramerate; // 0x12C(0x4)
	bool OverrideTargetFramerate; // 0x130(0x1)
	uint8_t Pad_0x131[0x3]; // 0x131(0x3)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x134(0x18)
	uint8_t Pad_0x14C[0x4]; // 0x14C(0x4)
	struct UCurveFloat* DampingCurve; // 0x150(0x8)
	struct UCurveFloat* WorldDampingLocationCurve; // 0x158(0x8)
	struct UCurveFloat* WorldDampingRotationCurve; // 0x160(0x8)
	struct UCurveFloat* StiffnessCurve; // 0x168(0x8)
	struct UCurveFloat* RadiusCurve; // 0x170(0x8)
	struct UCurveFloat* LimitAngleCurve; // 0x178(0x8)
	struct FRuntimeFloatCurve DampingCurveData; // 0x180(0x88)
	struct FRuntimeFloatCurve WorldDampingLocationCurveData; // 0x208(0x88)
	struct FRuntimeFloatCurve WorldDampingRotationCurveData; // 0x290(0x88)
	struct FRuntimeFloatCurve StiffnessCurveData; // 0x318(0x88)
	struct FRuntimeFloatCurve RadiusCurveData; // 0x3A0(0x88)
	struct FRuntimeFloatCurve LimitAngleCurveData; // 0x428(0x88)
	bool bUpdatePhysicsSettingsInGame; // 0x4B0(0x1)
	uint8_t Pad_0x4B1[0x3]; // 0x4B1(0x3)
	float DummyBoneLength; // 0x4B4(0x4)
	EBoneForwardAxis BoneForwardAxis; // 0x4B8(0x1)
	EPlanarConstraint PlanarConstraint; // 0x4B9(0x1)
	bool ResetBoneTransformWhenBoneNotFound; // 0x4BA(0x1)
	uint8_t Pad_0x4BB[0x5]; // 0x4BB(0x5)
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x4C0(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x4D0(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x4E0(0x10)
	struct UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset; // 0x4F0(0x8)
	struct TArray<struct FSphericalLimit> SphericalLimitsData; // 0x4F8(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimitsData; // 0x508(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimitsData; // 0x518(0x10)
	float TeleportDistanceThreshold; // 0x528(0x4)
	float TeleportRotationThreshold; // 0x52C(0x4)
	struct FVector Gravity; // 0x530(0xC)
	bool bEnableWind; // 0x53C(0x1)
	uint8_t Pad_0x53D[0x3]; // 0x53D(0x3)
	float WindScale; // 0x540(0x4)
	EWindMode WindMode; // 0x544(0x1)
	uint8_t Pad_0x545[0x3]; // 0x545(0x3)
	struct FVector LocalWindDirection; // 0x548(0xC)
	float LocalWindSpeed; // 0x554(0x4)
	float LocalWindWeight; // 0x558(0x4)
	struct FBoneReference BaseBone; // 0x55C(0x10)
	float VelocityRandomScale; // 0x56C(0x4)
	bool bAllowWorldCollision; // 0x570(0x1)
	bool bOverrideCollisionParams; // 0x571(0x1)
	uint8_t Pad_0x572[0x6]; // 0x572(0x6)
	struct FBodyInstance CollisionChannelSettings; // 0x578(0x150)
	bool bIgnoreSelfComponent; // 0x6C8(0x1)
	uint8_t Pad_0x6C9[0x7]; // 0x6C9(0x7)
	struct TArray<struct FBoneReference> IgnoreBones; // 0x6D0(0x10)
	struct TArray<struct FName> IgnoreBoneNamePrefix; // 0x6E0(0x10)
	struct TArray<struct FKawaiiPhysicsModifyBone> ModifyBones; // 0x6F0(0x10)
	bool bActiveDebugging; // 0x700(0x1)
	bool bActiveLateralConstraint; // 0x701(0x1)
	uint8_t Pad_0x702[0x2]; // 0x702(0x2)
	int32_t LateralConstraintIterationCountAfterCollision; // 0x704(0x4)
	EBoneConstraintMode LateralConstraintMode; // 0x708(0x1)
	EXPBDComplianceType ComplianceType; // 0x709(0x1)
	uint8_t Pad_0x70A[0x2]; // 0x70A(0x2)
	float ComplianceValueOverride; // 0x70C(0x4)
	float TotalBoneLength; // 0x710(0x4)
	uint8_t Pad_0x714[0xC]; // 0x714(0xC)
	struct FTransform PreSkelCompTransform; // 0x720(0x30)
	bool bInitPhysicsSettings; // 0x750(0x1)
	uint8_t Pad_0x751[0x3F]; // 0x751(0x3F)
};

// Object: ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// Size: 0x1A0 (Inherited: 0x0)
struct FKawaiiPhysicsModifyBone
{
	struct FBoneReference BoneRef; // 0x0(0x10)
	int32_t SelfIndex; // 0x10(0x4)
	int32_t ParentIndex; // 0x14(0x4)
	struct TArray<int32_t> ChildIndexs; // 0x18(0x10)
	struct TArray<struct FBoneReference> BoneIndices; // 0x28(0x10)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x38(0x18)
	struct FVector Location; // 0x50(0xC)
	struct FVector PrevLocation; // 0x5C(0xC)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	struct FQuat PrevRotation; // 0x70(0x10)
	struct FVector PoseLocation; // 0x80(0xC)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)
	struct FQuat PoseRotation; // 0x90(0x10)
	struct FVector PoseScale; // 0xA0(0xC)
	float LengthFromRoot; // 0xAC(0x4)
	bool bDummy; // 0xB0(0x1)
	bool bIsEndBone; // 0xB1(0x1)
	uint8_t Pad_0xB2[0xE]; // 0xB2(0xE)
	struct FQuat FinalRotation; // 0xC0(0x10)
	struct TArray<int32_t> RightEdgeIndexs; // 0xD0(0x10)
	struct TArray<float> RightEdgeIndexsLength; // 0xE0(0x10)
	struct TArray<float> RightEdgeIndexsLambda; // 0xF0(0x10)
	struct TArray<struct FEdgeDebugInfo> DebugCollideInfo; // 0x100(0x10)
	struct FVector PlanarProjection; // 0x110(0xC)
	struct FVector PlanarOrigin; // 0x11C(0xC)
	struct FVector ParentLocationBeforeFinalPlanarAdjust; // 0x128(0xC)
	uint8_t Pad_0x134[0xC]; // 0x134(0xC)
	struct FQuat ParentRotationBeforeFinalPlanarAdjust; // 0x140(0x10)
	struct FVector LocalLocationBeforeFinalPlanarAdjust; // 0x150(0xC)
	struct FVector WorldPoseLocation; // 0x15C(0xC)
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
	struct FQuat WorldPoseRotation; // 0x170(0x10)
	struct FVector ForwardPos; // 0x180(0xC)
	struct FVector BackwardPos; // 0x18C(0xC)
	uint8_t Pad_0x198[0x8]; // 0x198(0x8)
};

// Object: ScriptStruct KawaiiPhysics.CollisionLimitBase
// Size: 0x60 (Inherited: 0x0)
struct FCollisionLimitBase
{
	struct FBoneReference DrivingBone; // 0x0(0x10)
	struct FVector OffsetLocation; // 0x10(0xC)
	struct FRotator OffsetRotation; // 0x1C(0xC)
	struct FVector Location; // 0x28(0xC)
	uint8_t Pad_0x34[0xC]; // 0x34(0xC)
	struct FQuat Rotation; // 0x40(0x10)
	bool bEnable; // 0x50(0x1)
	uint8_t Pad_0x51[0xF]; // 0x51(0xF)
};

// Object: ScriptStruct KawaiiPhysics.CapsuleLimit
// Size: 0x60 (Inherited: 0x60)
struct FCapsuleLimit : FCollisionLimitBase
{
	float Radius; // 0x54(0x4)
	float Length; // 0x58(0x4)
};

// Object: ScriptStruct KawaiiPhysics.EdgeDebugInfo
// Size: 0xF0 (Inherited: 0x0)
struct FEdgeDebugInfo
{
	int32_t CurrentBoneIndex; // 0x0(0x4)
	int32_t AdjacentBoneIndex; // 0x4(0x4)
	bool AdjacentBoneSameChain; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct FCapsuleLimit CapsuleInfo; // 0x10(0x60)
	struct FVector EdgeCollideLocation; // 0x70(0xC)
	struct FVector CapsuleCollideLocation; // 0x7C(0xC)
	bool EdgeCollide; // 0x88(0x1)
	bool AdjacentBoneCannotMove; // 0x89(0x1)
	uint8_t Pad_0x8A[0x2]; // 0x8A(0x2)
	struct FVector EdgeStartLocation; // 0x8C(0xC)
	struct FVector EdgeEndLocation; // 0x98(0xC)
	struct FVector ExtrudeLocation; // 0xA4(0xC)
	struct FVector ExtrudeReverseLocation; // 0xB0(0xC)
	struct FVector AssumedStartLocation; // 0xBC(0xC)
	struct FVector AssumedEndLocation; // 0xC8(0xC)
	struct FVector AdjustedStartLocation; // 0xD4(0xC)
	struct FVector AdjustedEndLocation; // 0xE0(0xC)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
};

// Object: ScriptStruct KawaiiPhysics.PlanarLimit
// Size: 0x90 (Inherited: 0x60)
struct FPlanarLimit : FCollisionLimitBase
{
	struct FPlane Plane; // 0x60(0x10)
	struct TArray<int32_t> LimitIndexs; // 0x70(0x10)
	bool DebugVisible; // 0x80(0x1)
	bool DebugEnable; // 0x81(0x1)
	bool CompareFront; // 0x82(0x1)
	uint8_t Pad_0x83[0xD]; // 0x83(0xD)
};

// Object: ScriptStruct KawaiiPhysics.SphericalLimit
// Size: 0x60 (Inherited: 0x60)
struct FSphericalLimit : FCollisionLimitBase
{
	float Radius; // 0x54(0x4)
	ESphericalLimitType LimitType; // 0x58(0x1)
};

// Object: ScriptStruct KawaiiPhysics.AdjacentEdgesInfo
// Size: 0x10 (Inherited: 0x0)
struct FAdjacentEdgesInfo
{
	struct TArray<struct FBoneReference> AdjacentBones; // 0x0(0x10)
};

// Object: ScriptStruct KawaiiPhysics.CollisionLimitDataBase
// Size: 0x50 (Inherited: 0x0)
struct FCollisionLimitDataBase
{
	struct FName DrivingBoneName; // 0x0(0x8)
	struct FVector OffsetLocation; // 0x8(0xC)
	struct FRotator OffsetRotation; // 0x14(0xC)
	struct FVector Location; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat Rotation; // 0x30(0x10)
	struct FGuid Guid; // 0x40(0x10)
};

// Object: ScriptStruct KawaiiPhysics.PlanarLimitData
// Size: 0x60 (Inherited: 0x50)
struct FPlanarLimitData : FCollisionLimitDataBase
{
	struct FPlane Plane; // 0x50(0x10)
};

// Object: ScriptStruct KawaiiPhysics.CapsuleLimitData
// Size: 0x60 (Inherited: 0x50)
struct FCapsuleLimitData : FCollisionLimitDataBase
{
	float Radius; // 0x50(0x4)
	float Length; // 0x54(0x4)
	uint8_t Pad_0x58[0x8]; // 0x58(0x8)
};

// Object: ScriptStruct KawaiiPhysics.SphericalLimitData
// Size: 0x60 (Inherited: 0x50)
struct FSphericalLimitData : FCollisionLimitDataBase
{
	float Radius; // 0x50(0x4)
	ESphericalLimitType LimitType; // 0x54(0x1)
	uint8_t Pad_0x55[0xB]; // 0x55(0xB)
};

// Object: Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
// Size: 0x60 (Inherited: 0x30)
struct UKawaiiPhysicsLimitsDataAsset : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UKawaiiPhysicsLimitsDataAsset, "KawaiiPhysicsLimitsDataAsset")

	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x30(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x40(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x50(0x10)
};

} // namespace SDK
