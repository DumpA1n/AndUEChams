#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "AnimationCore.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PBDPhysics
// Enums: 4
// Structs: 41
// Classes: 4

enum class EBoneControlSpace : uint8_t;
struct FBoneReference;
struct UCurveFloat;
struct FConstraintInfoBase;
struct FAngleConstraintInfo;
struct FEulerAngleConstraintInfo;
struct FOuterCapsuleCollisionInfos;
struct FParticleExternalRadialForceInfo;
struct FPoseSphereConstraintInfo;
struct FShearConstraintInfo;
struct FAnimNode_Chain;
struct FGlobalConstraintPhyAttrOverride;
struct FLocalConstraintPhyAttrOverride;
struct FLengthConstraintPhyAttrOverride;
struct FParticlePhyAttrOverride;
struct FCollisionInfoBase;
struct FCapsuleCollisionInfoBase;
struct FOuterCapsuleCollisionInfo;
struct FPlaneCollisionInfoBase;
struct FPlaneCollisionInfo;
struct FBoxCollisionInfoBase;
struct FBoxCollisionInfo;
struct FCapsuleCollisionBonePair;
struct FCapsuleCollisionInfo;
struct FSphereCollisionInfoBase;
struct FSphereCollisionInfo;
struct FBonePair;
struct FExternalFixedLocation;
struct FChainVirtualParticleConnectInfo;
struct FChainVirtualParticleInfo;
struct FChainBones;
struct FChainVirtualParticleData;
struct FChainWindTurbulenceData;
struct FCollisionBase;
struct FBoxCollision;
struct FPlaneCollision;
struct FCapsuleCollision;
struct FCapsuleCollisionPreCache;
struct FSphereCollision;
struct FPredictCollisionContact;
struct FOutSideBoxCollisionInfo;
struct FOutsidePlaneCollisionInfo;
struct FOutsideCapsuleCollisionInfo;
struct FOutSideSphereCollisionInfo;
struct UPBDChainCollisionData;
struct UPBDChainWindData;
struct UPBDChainWindConfig;
struct UPBDPhysicsBPLibrary;

// Object: Enum PBDPhysics.EChainSAPGridNumMode
enum class EChainSAPGridNumMode : uint8_t
{
	None = 0,
	Grid8 = 1,
	Grid12 = 2,
	Grid16 = 3,
	EChainSAPGridNumMode_MAX = 4
};

// Object: Enum PBDPhysics.EChainCollisionMode
enum class EChainCollisionMode : uint8_t
{
	None = 0,
	Discrete = 1,
	CCD = 2,
	EChainCollisionMode_MAX = 3
};

// Object: Enum PBDPhysics.ELengthConstraintMode
enum class ELengthConstraintMode : uint8_t
{
	SimpleClamp = 0,
	LengthConstraint = 1,
	Custom = 2,
	ELengthConstraintMode_MAX = 3
};

// Object: Enum PBDPhysics.EWindType
enum class EWindType : uint8_t
{
	Wind_TriangleWave = 0,
	Wind_SinWave = 1,
	Wind_Custom = 2,
	Wind_MAX = 3
};

// Object: ScriptStruct PBDPhysics.ConstraintInfoBase
// Size: 0x10 (Inherited: 0x0)
struct FConstraintInfoBase
{
	uint8_t bEnable : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Stiffness; // 0x4(0x4)
	struct UCurveFloat* StrengthCurve; // 0x8(0x8)
};

// Object: ScriptStruct PBDPhysics.AngleConstraintInfo
// Size: 0x20 (Inherited: 0x10)
struct FAngleConstraintInfo : FConstraintInfoBase
{
	float AngleLimit; // 0x10(0x4)
	float ConstraintAxisWeight; // 0x14(0x4)
	EAxis ConstraintAxis; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct PBDPhysics.EulerAngleConstraintInfo
// Size: 0x20 (Inherited: 0x10)
struct FEulerAngleConstraintInfo : FConstraintInfoBase
{
	struct FRotator EulerAngleLimit; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct PBDPhysics.OuterCapsuleCollisionInfos
// Size: 0x18 (Inherited: 0x0)
struct FOuterCapsuleCollisionInfos
{
	uint8_t bTriggerChange : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FOuterCapsuleCollisionInfo> OuterCapsuleCollisionInfos; // 0x8(0x10)
};

// Object: ScriptStruct PBDPhysics.ParticleExternalRadialForceInfo
// Size: 0x30 (Inherited: 0x0)
struct FParticleExternalRadialForceInfo
{
	struct TArray<struct FVector> ForceCentersWS; // 0x0(0x10)
	struct TArray<float> ForceStrength; // 0x10(0x10)
	struct TArray<float> ForceRadius; // 0x20(0x10)
};

// Object: ScriptStruct PBDPhysics.PoseSphereConstraintInfo
// Size: 0x18 (Inherited: 0x10)
struct FPoseSphereConstraintInfo : FConstraintInfoBase
{
	float radius; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct PBDPhysics.ShearConstraintInfo
// Size: 0x28 (Inherited: 0x10)
struct FShearConstraintInfo : FConstraintInfoBase
{
	uint8_t bShearLoopConstraint : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<struct FBonePair> ShearBonePairs; // 0x18(0x10)
};

// Object: ScriptStruct PBDPhysics.AnimNode_Chain
// Size: 0x810 (Inherited: 0x108)
struct FAnimNode_Chain : FAnimNode_SkeletalControlBase
{
	uint8_t bToggleReset : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t bShouldRootFixed : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0x6]; // 0x10A(0x6)
	struct TArray<struct FChainBones> ChainBones; // 0x110(0x10)
	struct TArray<struct FBoneReference> ChainFixedBones; // 0x120(0x10)
	struct TArray<struct FChainVirtualParticleConnectInfo> VirtualParticleConnectInfo; // 0x130(0x10)
	struct TArray<struct FExternalFixedLocation> ExternalFixedBoneLocations; // 0x140(0x10)
	uint8_t bUpdatePhysicsSettingsRuntime : 1; // 0x150(0x1), Mask(0x1)
	uint8_t BitPad_0x150_1 : 7; // 0x150(0x1)
	uint8_t Pad_0x151[0x3]; // 0x151(0x3)
	int32_t TargetFrameRate; // 0x154(0x4)
	struct FVector GravityAcceleration; // 0x158(0xC)
	float DampFrameRateScaleWhenLargeThanTargetFrame; // 0x164(0x4)
	float EliminatePhantomVelocityScale; // 0x168(0x4)
	float Damp; // 0x16C(0x4)
	uint8_t bEnableHighFPSOpt : 1; // 0x170(0x1), Mask(0x1)
	uint8_t BitPad_0x170_1 : 7; // 0x170(0x1)
	uint8_t bEnableHighFPSOptVelocityInterp : 1; // 0x171(0x1), Mask(0x1)
	uint8_t BitPad_0x171_1 : 7; // 0x171(0x1)
	uint8_t Pad_0x172[0x2]; // 0x172(0x2)
	float VelocityInterpSpeed; // 0x174(0x4)
	float RadiusSize; // 0x178(0x4)
	float MaxIntegrateVelocity; // 0x17C(0x4)
	struct UCurveFloat* ParticleDampingCoefficientCurve; // 0x180(0x8)
	struct UCurveFloat* ParticleRadiusCurve; // 0x188(0x8)
	float ComponentFrameRateScaleWhenLargeThanTargetFrame; // 0x190(0x4)
	uint8_t Pad_0x194[0xC]; // 0x194(0xC)
	struct FTransform OffsetTransform; // 0x1A0(0x30)
	uint8_t bUseCustomComponentTransform : 1; // 0x1D0(0x1), Mask(0x1)
	uint8_t BitPad_0x1D0_1 : 7; // 0x1D0(0x1)
	uint8_t Pad_0x1D1[0xF]; // 0x1D1(0xF)
	struct FTransform CustomComponentTransform; // 0x1E0(0x30)
	uint8_t bEnableComponentZOffset : 1; // 0x210(0x1), Mask(0x1)
	uint8_t BitPad_0x210_1 : 7; // 0x210(0x1)
	uint8_t Pad_0x211[0x3]; // 0x211(0x3)
	float ComponentMaxMoveValue; // 0x214(0x4)
	struct FVector ComponentMoveInfluence; // 0x218(0xC)
	float ComponentRotateInfluence; // 0x224(0x4)
	uint8_t bUseOriginRotation : 1; // 0x228(0x1), Mask(0x1)
	uint8_t BitPad_0x228_1 : 7; // 0x228(0x1)
	uint8_t Pad_0x229[0x3]; // 0x229(0x3)
	float SphapeConstraintFrameRateScaleWhenLargeThanTargetFrame; // 0x22C(0x4)
	struct FPoseSphereConstraintInfo PoseSphereConstraintInfo; // 0x230(0x18)
	struct FAngleConstraintInfo PoseAngleConstraintInfo; // 0x248(0x20)
	struct FEulerAngleConstraintInfo PoseEulerAngleConstraintInfo; // 0x268(0x20)
	struct FConstraintInfoBase LocalShapeConstraintInfo; // 0x288(0x10)
	struct FConstraintInfoBase GlobalShapeConstraintInfo; // 0x298(0x10)
	ELengthConstraintMode LengthConstraintMode; // 0x2A8(0x1)
	uint8_t ChainLengthNeverChange : 1; // 0x2A9(0x1), Mask(0x1)
	uint8_t BitPad_0x2A9_1 : 7; // 0x2A9(0x1)
	uint8_t Pad_0x2AA[0x2]; // 0x2AA(0x2)
	int32_t LengthConstraintIteration; // 0x2AC(0x4)
	struct FConstraintInfoBase StretchInfo; // 0x2B0(0x10)
	struct FConstraintInfoBase BendInfo; // 0x2C0(0x10)
	struct FShearConstraintInfo ShearInfo; // 0x2D0(0x28)
	struct FConstraintInfoBase LRAInfo; // 0x2F8(0x10)
	uint8_t bEvaluateWindFromWindDirectionSource : 1; // 0x308(0x1), Mask(0x1)
	uint8_t BitPad_0x308_1 : 7; // 0x308(0x1)
	uint8_t Pad_0x309[0x3]; // 0x309(0x3)
	float WindFromWindDirectionSourceScale; // 0x30C(0x4)
	struct FVector2D WindFromWindDirectionSourceScaleRandRange; // 0x310(0x8)
	float WindScale; // 0x318(0x4)
	int32_t WindDataIndex; // 0x31C(0x4)
	float WindDataIndexChangeSpeed; // 0x320(0x4)
	uint8_t Pad_0x324[0x4]; // 0x324(0x4)
	struct UPBDChainWindConfig* WindDataConfig; // 0x328(0x8)
	struct FParticleExternalRadialForceInfo ExternalRadialForce; // 0x330(0x30)
	EChainCollisionMode CollisionType; // 0x360(0x1)
	uint8_t Pad_0x361[0x3]; // 0x361(0x3)
	float CollisionFriction; // 0x364(0x4)
	float CollisionStrength; // 0x368(0x4)
	EChainSAPGridNumMode CollisionSAPGrid; // 0x36C(0x1)
	uint8_t Pad_0x36D[0x3]; // 0x36D(0x3)
	int32_t CollisionSAPBoundsUpdateInterval; // 0x370(0x4)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
	struct TArray<struct FSphereCollisionInfo> Spheres; // 0x378(0x10)
	struct TArray<struct FCapsuleCollisionInfo> Capsules; // 0x388(0x10)
	struct TArray<struct FBoxCollisionInfo> Boxes; // 0x398(0x10)
	struct TArray<struct FPlaneCollisionInfo> Planes; // 0x3A8(0x10)
	struct FOuterCapsuleCollisionInfos OuterCapsuleCollisionInfos; // 0x3B8(0x18)
	struct UPBDChainCollisionData* ConfigCollisionData; // 0x3D0(0x8)
	uint8_t bEnableDebugRuntimeDraw : 1; // 0x3D8(0x1), Mask(0x1)
	uint8_t BitPad_0x3D8_1 : 7; // 0x3D8(0x1)
	uint8_t Pad_0x3D9[0x3]; // 0x3D9(0x3)
	float DebugLengthConstraintDrawSize; // 0x3DC(0x4)
	float DebugLocalShapeConstraintDrawSize; // 0x3E0(0x4)
	uint8_t Pad_0x3E4[0x4]; // 0x3E4(0x4)
	struct TArray<struct FParticlePhyAttrOverride> OverrideParticlePhysInfo; // 0x3E8(0x10)
	struct TArray<struct FLengthConstraintPhyAttrOverride> OverrideLengthConstraintPhysInfo; // 0x3F8(0x10)
	struct TArray<struct FLocalConstraintPhyAttrOverride> OverrideLocalConstraintPhysInfo; // 0x408(0x10)
	struct TArray<struct FGlobalConstraintPhyAttrOverride> OverrideGlobalConstraintPhysInfo; // 0x418(0x10)
	uint8_t NeedUpdateWhenMeshNotVisible : 1; // 0x428(0x1), Mask(0x1)
	uint8_t BitPad_0x428_1 : 7; // 0x428(0x1)
	uint8_t Pad_0x429[0x3]; // 0x429(0x3)
	struct FName ChildSkeletonMeshContainName; // 0x42C(0x8)
	int32_t MaxSubsteps; // 0x434(0x4)
	float MaxPhysicsDeltaTime; // 0x438(0x4)
	int32_t MaxSimulateFrameRate; // 0x43C(0x4)
	float ExponentialScaleWhenLessThanOne; // 0x440(0x4)
	int32_t ForceLODLevel; // 0x444(0x4)
	struct TArray<EChainCollisionMode> CollisionModeByLOD; // 0x448(0x10)
	uint8_t bResetOnBecomingRelevant : 1; // 0x458(0x1), Mask(0x1)
	uint8_t BitPad_0x458_1 : 7; // 0x458(0x1)
	uint8_t Pad_0x459[0x3B7]; // 0x459(0x3B7)
};

// Object: ScriptStruct PBDPhysics.GlobalConstraintPhyAttrOverride
// Size: 0x10 (Inherited: 0x0)
struct FGlobalConstraintPhyAttrOverride
{
	struct FName ChildParticleRelatedBoneName; // 0x0(0x8)
	uint8_t OverrideStiffnessValue : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Stiffness; // 0xC(0x4)
};

// Object: ScriptStruct PBDPhysics.LocalConstraintPhyAttrOverride
// Size: 0x1C (Inherited: 0x0)
struct FLocalConstraintPhyAttrOverride
{
	struct FName ParentParticleRelatedBoneName; // 0x0(0x8)
	struct FName ChildParticleRelatedBoneName; // 0x8(0x8)
	uint8_t OverrideStiffnessValue : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Stiffness; // 0x14(0x4)
	uint8_t ParentDominate : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct PBDPhysics.LengthConstraintPhyAttrOverride
// Size: 0x1C (Inherited: 0x0)
struct FLengthConstraintPhyAttrOverride
{
	struct FName ParentParticleRelatedBoneName; // 0x0(0x8)
	struct FName ChildParticleRelatedBoneName; // 0x8(0x8)
	uint8_t OverrideStiffnessValue : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float Stiffness; // 0x14(0x4)
	uint8_t ParentDominate : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x3]; // 0x19(0x3)
};

// Object: ScriptStruct PBDPhysics.ParticlePhyAttrOverride
// Size: 0x18 (Inherited: 0x0)
struct FParticlePhyAttrOverride
{
	struct FName ParticleRelatedBoneName; // 0x0(0x8)
	uint8_t OverrideDampingValue : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float DampingValue; // 0xC(0x4)
	uint8_t OverrideParticleRadiusValue : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float ParticleRadiusValue; // 0x14(0x4)
};

// Object: ScriptStruct PBDPhysics.CollisionInfoBase
// Size: 0x10 (Inherited: 0x0)
struct FCollisionInfoBase
{
	struct FVector TranslationOffset; // 0x0(0xC)
	int32_t LODThreshold; // 0xC(0x4)
};

// Object: ScriptStruct PBDPhysics.CapsuleCollisionInfoBase
// Size: 0x30 (Inherited: 0x10)
struct FCapsuleCollisionInfoBase : FCollisionInfoBase
{
	float radius; // 0x10(0x4)
	uint8_t bEnableDiffRadius : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	float Radius1; // 0x18(0x4)
	float HalfHeight; // 0x1C(0x4)
	struct FAxis LocalAxis; // 0x20(0x10)
};

// Object: ScriptStruct PBDPhysics.OuterCapsuleCollisionInfo
// Size: 0x60 (Inherited: 0x30)
struct FOuterCapsuleCollisionInfo : FCapsuleCollisionInfoBase
{
	struct FName Key; // 0x30(0x8)
	struct FVector LocationWS; // 0x38(0xC)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
	struct FQuat RotationWS; // 0x50(0x10)
};

// Object: ScriptStruct PBDPhysics.PlaneCollisionInfoBase
// Size: 0x20 (Inherited: 0x10)
struct FPlaneCollisionInfoBase : FCollisionInfoBase
{
	struct FAxis LocalNormal; // 0x10(0x10)
};

// Object: ScriptStruct PBDPhysics.PlaneCollisionInfo
// Size: 0x40 (Inherited: 0x20)
struct FPlaneCollisionInfo : FPlaneCollisionInfoBase
{
	struct FBoneReference AttachedBone; // 0x20(0x10)
	struct TArray<struct FBoneReference> IgnoredBones; // 0x30(0x10)
};

// Object: ScriptStruct PBDPhysics.BoxCollisionInfoBase
// Size: 0x1C (Inherited: 0x10)
struct FBoxCollisionInfoBase : FCollisionInfoBase
{
	struct FVector BoxExtend; // 0x10(0xC)
};

// Object: ScriptStruct PBDPhysics.BoxCollisionInfo
// Size: 0x40 (Inherited: 0x1C)
struct FBoxCollisionInfo : FBoxCollisionInfoBase
{
	struct FBoneReference AttachedBone; // 0x1C(0x10)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FBoneReference> IgnoredBones; // 0x30(0x10)
};

// Object: ScriptStruct PBDPhysics.CapsuleCollisionBonePair
// Size: 0x20 (Inherited: 0x0)
struct FCapsuleCollisionBonePair
{
	struct FBoneReference FirstBone; // 0x0(0x10)
	struct FBoneReference SecondBone; // 0x10(0x10)
};

// Object: ScriptStruct PBDPhysics.CapsuleCollisionInfo
// Size: 0x70 (Inherited: 0x30)
struct FCapsuleCollisionInfo : FCapsuleCollisionInfoBase
{
	struct FCapsuleCollisionBonePair PairBone; // 0x30(0x20)
	struct FBoneReference AttachedBone; // 0x50(0x10)
	struct TArray<struct FBoneReference> IgnoredBones; // 0x60(0x10)
};

// Object: ScriptStruct PBDPhysics.SphereCollisionInfoBase
// Size: 0x14 (Inherited: 0x10)
struct FSphereCollisionInfoBase : FCollisionInfoBase
{
	float radius; // 0x10(0x4)
};

// Object: ScriptStruct PBDPhysics.SphereCollisionInfo
// Size: 0x38 (Inherited: 0x14)
struct FSphereCollisionInfo : FSphereCollisionInfoBase
{
	struct FBoneReference AttachedBone; // 0x14(0x10)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct TArray<struct FBoneReference> IgnoredBones; // 0x28(0x10)
};

// Object: ScriptStruct PBDPhysics.BonePair
// Size: 0x20 (Inherited: 0x0)
struct FBonePair
{
	struct FBoneReference FirstBone; // 0x0(0x10)
	struct FBoneReference SecondBone; // 0x10(0x10)
};

// Object: ScriptStruct PBDPhysics.ExternalFixedLocation
// Size: 0x14 (Inherited: 0x0)
struct FExternalFixedLocation
{
	struct FName BoneName; // 0x0(0x8)
	struct FVector FixedLocation; // 0x8(0xC)
};

// Object: ScriptStruct PBDPhysics.ChainVirtualParticleConnectInfo
// Size: 0x20 (Inherited: 0x0)
struct FChainVirtualParticleConnectInfo
{
	int32_t ChainBoneRootIndex1; // 0x0(0x4)
	int32_t ChainBoneRootIndex2; // 0x4(0x4)
	int32_t VirtualParticleBetweenBone; // 0x8(0x4)
	float RadiusScale; // 0xC(0x4)
	struct TArray<int32_t> ExcludeConnectIndex; // 0x10(0x10)
};

// Object: ScriptStruct PBDPhysics.ChainVirtualParticleInfo
// Size: 0x18 (Inherited: 0x0)
struct FChainVirtualParticleInfo
{
	int32_t VirtualParticleBetweenBone; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct TArray<struct FChainVirtualParticleData> VirtualParticleAttach; // 0x8(0x10)
};

// Object: ScriptStruct PBDPhysics.ChainBones
// Size: 0x68 (Inherited: 0x0)
struct FChainBones
{
	struct FBoneReference ChainHeadBone; // 0x0(0x10)
	struct TArray<struct FBoneReference> ChainEndBones; // 0x10(0x10)
	struct TArray<struct FBoneReference> CustomChainBones; // 0x20(0x10)
	float DampScale; // 0x30(0x4)
	float RadiusScale; // 0x34(0x4)
	float WindScale; // 0x38(0x4)
	struct FVector DummyBoneLocation; // 0x3C(0xC)
	struct FChainVirtualParticleInfo VirtualParticleInfo; // 0x48(0x18)
	int32_t LODThreshold; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct PBDPhysics.ChainVirtualParticleData
// Size: 0x10 (Inherited: 0x0)
struct FChainVirtualParticleData
{
	struct FVector Axis; // 0x0(0xC)
	float Distance; // 0xC(0x4)
};

// Object: ScriptStruct PBDPhysics.ChainWindTurbulenceData
// Size: 0x1C (Inherited: 0x0)
struct FChainWindTurbulenceData
{
	float Intensity1; // 0x0(0x4)
	float Intensity2; // 0x4(0x4)
	float Frequency1; // 0x8(0x4)
	float Frequency2; // 0xC(0x4)
	struct FVector TBDir; // 0x10(0xC)
};

// Object: ScriptStruct PBDPhysics.CollisionBase
// Size: 0xF0 (Inherited: 0x0)
struct FCollisionBase
{
	uint8_t Pad_0x0[0xF0]; // 0x0(0xF0)
};

// Object: ScriptStruct PBDPhysics.BoxCollision
// Size: 0x150 (Inherited: 0xF0)
struct FBoxCollision : FCollisionBase
{
	uint8_t Pad_0xF0[0x60]; // 0xF0(0x60)
};

// Object: ScriptStruct PBDPhysics.PlaneCollision
// Size: 0x100 (Inherited: 0xF0)
struct FPlaneCollision : FCollisionBase
{
	uint8_t Pad_0xF0[0x10]; // 0xF0(0x10)
};

// Object: ScriptStruct PBDPhysics.CapsuleCollision
// Size: 0x240 (Inherited: 0xF0)
struct FCapsuleCollision : FCollisionBase
{
	uint8_t Pad_0xF0[0x150]; // 0xF0(0x150)
};

// Object: ScriptStruct PBDPhysics.CapsuleCollisionPreCache
// Size: 0x90 (Inherited: 0x0)
struct FCapsuleCollisionPreCache
{
	uint8_t Pad_0x0[0x90]; // 0x0(0x90)
};

// Object: ScriptStruct PBDPhysics.SphereCollision
// Size: 0x100 (Inherited: 0xF0)
struct FSphereCollision : FCollisionBase
{
	uint8_t Pad_0xF0[0x10]; // 0xF0(0x10)
};

// Object: ScriptStruct PBDPhysics.PredictCollisionContact
// Size: 0x10 (Inherited: 0x0)
struct FPredictCollisionContact
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct PBDPhysics.OutSideBoxCollisionInfo
// Size: 0x2C (Inherited: 0x1C)
struct FOutSideBoxCollisionInfo : FBoxCollisionInfoBase
{
	struct FName AttachedBoneName; // 0x1C(0x8)
	struct FName AttachedSkeletalMeshName; // 0x24(0x8)
};

// Object: ScriptStruct PBDPhysics.OutsidePlaneCollisionInfo
// Size: 0x30 (Inherited: 0x20)
struct FOutsidePlaneCollisionInfo : FPlaneCollisionInfoBase
{
	struct FName AttachedBoneName; // 0x20(0x8)
	struct FName AttachedSkeletalMeshName; // 0x28(0x8)
};

// Object: ScriptStruct PBDPhysics.OutsideCapsuleCollisionInfo
// Size: 0x50 (Inherited: 0x30)
struct FOutsideCapsuleCollisionInfo : FCapsuleCollisionInfoBase
{
	struct FName AttachedBoneName; // 0x30(0x8)
	struct FName AttachedPairBoneFirstName; // 0x38(0x8)
	struct FName AttachedPairBoneSecondName; // 0x40(0x8)
	struct FName AttachedSkeletalMeshName; // 0x48(0x8)
};

// Object: ScriptStruct PBDPhysics.OutSideSphereCollisionInfo
// Size: 0x24 (Inherited: 0x14)
struct FOutSideSphereCollisionInfo : FSphereCollisionInfoBase
{
	struct FName AttachedBoneName; // 0x14(0x8)
	struct FName AttachedSkeletalMeshName; // 0x1C(0x8)
};

// Object: Class PBDPhysics.PBDChainCollisionData
// Size: 0x70 (Inherited: 0x30)
struct UPBDChainCollisionData : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UPBDChainCollisionData, "PBDChainCollisionData")

	struct TArray<struct FOutSideSphereCollisionInfo> Spheres; // 0x30(0x10)
	struct TArray<struct FOutsideCapsuleCollisionInfo> Capsules; // 0x40(0x10)
	struct TArray<struct FOutSideBoxCollisionInfo> Boxes; // 0x50(0x10)
	struct TArray<struct FOutsidePlaneCollisionInfo> Planes; // 0x60(0x10)
};

// Object: Class PBDPhysics.PBDChainWindData
// Size: 0x90 (Inherited: 0x28)
struct UPBDChainWindData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPBDChainWindData, "PBDChainWindData")

	struct FName WindName; // 0x28(0x8)
	float WindPower; // 0x30(0x4)
	EBoneControlSpace WindSpace; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
	struct FVector WindDirection; // 0x38(0xC)
	float WindPowerFluctuation; // 0x44(0x4)
	float WindPowerFluctuationFrequency; // 0x48(0x4)
	EWindType WindWaveType; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
	float WaveFrequency; // 0x50(0x4)
	struct FVector2D WaveRange; // 0x54(0x8)
	uint8_t bEnableTurbulence : 1; // 0x5C(0x1), Mask(0x1)
	uint8_t BitPad_0x5C_1 : 7; // 0x5C(0x1)
	uint8_t Pad_0x5D[0x3]; // 0x5D(0x3)
	struct FChainWindTurbulenceData WindTurbulenceData; // 0x60(0x1C)
	float WindBoneDepthDelay; // 0x7C(0x4)
	float WindRootBoneDelay; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct UCurveFloat* WindPowerScaleCurve; // 0x88(0x8)
};

// Object: Class PBDPhysics.PBDChainWindConfig
// Size: 0x40 (Inherited: 0x30)
struct UPBDChainWindConfig : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UPBDChainWindConfig, "PBDChainWindConfig")

	struct TArray<struct UPBDChainWindData*> WinDataArray; // 0x30(0x10)
};

// Object: Class PBDPhysics.PBDPhysicsBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPBDPhysicsBPLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPBDPhysicsBPLibrary, "PBDPhysicsBPLibrary")

	// Object: Function PBDPhysics.PBDPhysicsBPLibrary.SquaredDistanceFromPointToSegment
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8b37380
	// Params: [ Num(4) Size(0x28) ]
	static float SquaredDistanceFromPointToSegment(struct FVector CapsulePointA, struct FVector CapsulePointB, struct FVector TestPoint);

	// Object: Function PBDPhysics.PBDPhysicsBPLibrary.SquaredDistanceAndReferencePointFromPointToSegment
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8b37214
	// Params: [ Num(5) Size(0x34) ]
	static float SquaredDistanceAndReferencePointFromPointToSegment(struct FVector CapsulePointA, struct FVector CapsulePointB, struct FVector TestPoint, struct FVector& ReferencePoint);
};

} // namespace SDK
