#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFAnimationRuntime
// Enums: 4
// Structs: 17
// Classes: 1

struct FBoneReference;
struct UAnimMontage;
struct UAnimNotify;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UBlendSpace1D;
struct UBlendSpaceBase;
struct UCurveFloat;
struct USkeletalMeshComponent;
struct UWorld;
struct FAnimNode_AdjustArmStretch;
struct FAnimNode_ApplyBonesAdditive;
struct FAnimNode_BoneAdjustment;
struct FADSSetting;
struct FAnimNode_GunKick;
struct FAnimNode_ModifyBoneByParent;
struct FAnimNode_MotionForceWarping;
struct FAnimNode_ProfilingNode;
struct FAnimNode_SpeedWarping;
struct FIKBones;
struct FPelvisAdjustmentInterp;
struct FIKFootLocation;
struct FAnimNode_UseCrossBPCachedPose;
struct FAnimNode_VirtualPivot;
struct FMontageBlendTimePair;
struct FAnimationFloatCurvesMap;
struct FAnimationCurvesMap;
struct UMFAnimationtFunctionLibrary;

// Object: Enum MFAnimationRuntime.ECalcStretchAlgorithm
enum class ECalcStretchAlgorithm : uint8_t
{
	ModifyBoneByAxisX = 0,
	ModifyBoneByTwoBoneDirection = 1,
	ECalcStretchAlgorithm_MAX = 2
};

// Object: Enum MFAnimationRuntime.EAdjustType
enum class EAdjustType : uint8_t
{
	Adjust_Scale = 0,
	Adjust_Additive = 1,
	Adjust_MAX = 2
};

// Object: Enum MFAnimationRuntime.EProfilingType
enum class EProfilingType : uint8_t
{
	Update = 0,
	Evaluate = 1,
	Max = 2
};

// Object: Enum MFAnimationRuntime.EIKFootRootLocalAxis
enum class EIKFootRootLocalAxis : uint8_t
{
	NONE = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EIKFootRootLocalAxis_MAX = 4
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_AdjustArmStretch
// Size: 0x128 (Inherited: 0xD0)
struct FAnimNode_AdjustArmStretch : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xCC(0x10)
	struct FBoneReference EndBone; // 0xDC(0x10)
	struct FBoneReference IKHandBone; // 0xEC(0x10)
	struct FVector ExtraOffset; // 0xFC(0xC)
	float ExpectAngleBetweenBones; // 0x108(0x4)
	ECalcStretchAlgorithm CalcStretchAlgorithm; // 0x10C(0x1)
	uint8_t Pad_0x111[0x17]; // 0x111(0x17)
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_ApplyBonesAdditive
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_ApplyBonesAdditive : FAnimNode_Base
{
	struct FPoseLink SourceBase; // 0x10(0x10)
	struct FPoseLink Base; // 0x20(0x10)
	struct FPoseLink Additive; // 0x30(0x10)
	struct TArray<struct FBoneReference> TargetBoneList; // 0x40(0x10)
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_BoneAdjustment
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_BoneAdjustment : FAnimNode_Base
{
	struct FPoseLink Input; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	struct FPoseLink Target; // 0x30(0x10)
	struct UAnimSequenceBase* Sequence; // 0x40(0x8)
	struct FBoneReference ScaledBone; // 0x48(0x10)
	bool bEvaluateSequenceEndFrame; // 0x58(0x1)
	bool bShouldDoAdjusting; // 0x59(0x1)
	uint8_t Pad_0x5A[0x6]; // 0x5A(0x6)
	struct TArray<struct FADSSetting> ADSSettings; // 0x60(0x10)
	struct UAnimSequenceBase* LastAnimSequence; // 0x70(0x8)
	uint8_t Pad_0x78[0x18]; // 0x78(0x18)
};

// Object: ScriptStruct MFAnimationRuntime.ADSSetting
// Size: 0xC (Inherited: 0x0)
struct FADSSetting
{
	uint8_t Axis; // 0x0(0x1)
	EAdjustType AdjustType; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FName CurveName; // 0x4(0x8)
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_GunKick
// Size: 0x208 (Inherited: 0xD0)
struct FAnimNode_GunKick : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify_ItemR; // 0xCC(0x10)
	struct FBoneReference VirtualParent_ItemR; // 0xDC(0x10)
	struct FBoneReference BoneToModify_IKHandGun; // 0xEC(0x10)
	struct FBoneReference VirtualParent_IKHandGun; // 0xFC(0x10)
	struct FName ADSAdditiveWeight_CurveName; // 0x10C(0x8)
	struct FVector ADSWeaponSightShakePivotOffset; // 0x114(0xC)
	struct FRotator ADSWeaponSightRotator; // 0x120(0xC)
	struct FVector WeaponShakePivotOffset; // 0x12C(0xC)
	struct FRotator WeaponGunRotator; // 0x138(0xC)
	struct FVector ADSWeaponShakePivotOffset_X; // 0x144(0xC)
	struct FRotator ADSWeaponGunRotator_Roll; // 0x150(0xC)
	struct FVector ADSWeaponShakePivotOffset_Y; // 0x15C(0xC)
	struct FRotator ADSWeaponGunRotator_Pitch; // 0x168(0xC)
	struct FVector ADSWeaponShakePivotOffset_Z; // 0x174(0xC)
	struct FRotator ADSWeaponGunRotator_Yaw; // 0x180(0xC)
	struct FVector ADSWeaponShakePivotOffset; // 0x18C(0xC)
	struct FRotator ADSWeaponGunRotator; // 0x198(0xC)
	struct FVector ADSWeaponGunTranslation; // 0x1A4(0xC)
	struct FVector WeaponGunTranslation; // 0x1B0(0xC)
	bool bIsFPPAndAiming; // 0x1BC(0x1)
	bool bIsFPPAndNotAiming; // 0x1BD(0x1)
	float TacticalLeftHandGunkickAlpha_Aiming; // 0x1C0(0x4)
	float TacticalLeftHandGunkickAlpha_NotAiming; // 0x1C4(0x4)
	float FPPAimActualAlpha; // 0x1C8(0x4)
	float FPPNotAimActualAlpha; // 0x1CC(0x4)
	float FPPTacticalAimActualAlpha; // 0x1D0(0x4)
	float FPPTacticalNotAimActualAlpha; // 0x1D4(0x4)
	struct FBoneReference SourceBone; // 0x1D8(0x10)
	struct FBoneReference TargetBone; // 0x1E8(0x10)
	bool bCopyTranslation; // 0x1F8(0x1)
	bool bCopyRotation; // 0x1F9(0x1)
	bool bCopyScale; // 0x1FA(0x1)
	uint8_t ControlSpace; // 0x1FB(0x1)
	float CopyBoneAlpha; // 0x1FC(0x4)
	float CopyBoneActualAlpha; // 0x200(0x4)
	uint8_t Pad_0x206[0x2]; // 0x206(0x2)
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_ModifyBoneByParent
// Size: 0x108 (Inherited: 0xD0)
struct FAnimNode_ModifyBoneByParent : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToAlign; // 0xCC(0x10)
	bool bOnlyAlignZByRotation; // 0xDC(0x1)
	struct FBoneReference ParentBoneToModify; // 0xE0(0x10)
	struct FVector TargetWorldPos; // 0xF0(0xC)
	struct FVector AdditiveMeshSpaceOffset; // 0xFC(0xC)
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_MotionForceWarping
// Size: 0x240 (Inherited: 0xD0)
struct FAnimNode_MotionForceWarping : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xD0[0x110]; // 0xD0(0x110)
	struct FBoneReference MotionBone; // 0x1E0(0x10)
	struct FBoneReference MotionParentBone; // 0x1F0(0x10)
	bool bAccelChange; // 0x200(0x1)
	uint8_t Pad_0x201[0x3]; // 0x201(0x3)
	struct FVector MotionLinearAccScale; // 0x204(0xC)
	struct FVector MotionLinearVelScale; // 0x210(0xC)
	struct FVector LocalMotionAppliedLinearAccClamp; // 0x21C(0xC)
	struct USkeletalMeshComponent* MotionReciever; // 0x228(0x8)
	struct FName MotionRecieverBone; // 0x230(0x8)
	uint8_t Pad_0x238[0x8]; // 0x238(0x8)
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_ProfilingNode
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_ProfilingNode : FAnimNode_Base
{
	struct FPoseLink Input; // 0x10(0x10)
	bool bStartNode; // 0x20(0x1)
	bool bTotalTimeNode; // 0x21(0x1)
	uint8_t Pad_0x22[0x2]; // 0x22(0x2)
	struct FName ProfilingNodeName; // 0x24(0x8)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_SpeedWarping
// Size: 0x188 (Inherited: 0xD0)
struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase
{
	struct FBoneReference IkFootRootBone; // 0xCC(0x10)
	struct TArray<struct FIKBones> FeetDefinitions; // 0xE0(0x10)
	struct FBoneReference PelvisBone; // 0xF0(0x10)
	float SpeedScaling; // 0x100(0x4)
	float ActualSpeedScaling; // 0x104(0x4)
	struct FInputScaleBiasClamp SpeedScalingBiasClamp; // 0x108(0x30)
	bool ClampIKUsingFKLeg; // 0x138(0x1)
	uint8_t Pad_0x139[0x4F]; // 0x139(0x4F)
};

// Object: ScriptStruct MFAnimationRuntime.IKBones
// Size: 0x28 (Inherited: 0x0)
struct FIKBones
{
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInUpperLimb; // 0x20(0x4)
	int32_t NumBonesInLowerLimb; // 0x24(0x4)
};

// Object: ScriptStruct MFAnimationRuntime.PelvisAdjustmentInterp
// Size: 0x8 (Inherited: 0x0)
struct FPelvisAdjustmentInterp
{
	float Stiffness; // 0x0(0x4)
	float Dampen; // 0x4(0x4)
};

// Object: ScriptStruct MFAnimationRuntime.IKFootLocation
// Size: 0x30 (Inherited: 0x0)
struct FIKFootLocation
{
	struct FVector LimbRootLocation; // 0x0(0xC)
	struct FVector OriginLocation; // 0xC(0xC)
	struct FVector ActualLocation; // 0x18(0xC)
	struct FVector NewLocation; // 0x24(0xC)
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_UseCrossBPCachedPose
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_UseCrossBPCachedPose : FAnimNode_Base
{
};

// Object: ScriptStruct MFAnimationRuntime.AnimNode_VirtualPivot
// Size: 0x108 (Inherited: 0xD0)
struct FAnimNode_VirtualPivot : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xCC(0x10)
	struct FBoneReference VirtualParent; // 0xDC(0x10)
	struct FVector PivotOffset; // 0xEC(0xC)
	struct FRotator Rotation; // 0xF8(0xC)
};

// Object: ScriptStruct MFAnimationRuntime.MontageBlendTimePair
// Size: 0x8 (Inherited: 0x0)
struct FMontageBlendTimePair
{
	float BlendInTime; // 0x0(0x4)
	float BlendOutTime; // 0x4(0x4)
};

// Object: ScriptStruct MFAnimationRuntime.AnimationFloatCurvesMap
// Size: 0x50 (Inherited: 0x0)
struct FAnimationFloatCurvesMap
{
	struct TMap<struct FString, struct UCurveFloat*> NameToCurveMap; // 0x0(0x50)
};

// Object: ScriptStruct MFAnimationRuntime.AnimationCurvesMap
// Size: 0x50 (Inherited: 0x0)
struct FAnimationCurvesMap
{
	struct TMap<struct FString, float> CurveToValueMap; // 0x0(0x50)
};

// Object: Class MFAnimationRuntime.MFAnimationtFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMFAnimationtFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFAnimationtFunctionLibrary, "MFAnimationtFunctionLibrary")

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.SpringDamper_Stiffness_Damping
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x387209c
	// Params: [ Num(8) Size(0x20) ]
	static void SpringDamper_Stiffness_Damping(float& X, float& V, float x_goal, float v_goal, float Stiffness, float Damping, float dt, float eps);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.SoftGetBoneTransformByBoneIndex
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3873218
	// Params: [ Num(5) Size(0x5E) ]
	static bool SoftGetBoneTransformByBoneIndex(struct FTransform& OutTransform, struct TSoftObjectPtr<UAnimSequence> InAnimSequence, int32_t InBoneIndex, bool bUseRawData);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.RemoveAnimationNotifyEventsByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x387230c
	// Params: [ Num(3) Size(0x14) ]
	static int32_t RemoveAnimationNotifyEventsByName(struct UAnimMontage* AnimMontage, struct FName NotifyName);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.IsExistSample
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3873634
	// Params: [ Num(3) Size(0xD) ]
	static bool IsExistSample(struct UBlendSpaceBase* InBlendSpace, float InTransitionType);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.GetCurveValueByName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3872ed4
	// Params: [ Num(5) Size(0x1C) ]
	static float GetCurveValueByName(struct UAnimSequenceBase* InAnimSequence, struct FName CurveName, float Time, bool bUseRawData);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.GetBoneTransformByBoneIndex
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3873444
	// Params: [ Num(6) Size(0x45) ]
	static bool GetBoneTransformByBoneIndex(struct FTransform& OutTransform, struct UAnimSequence* InAnimSequence, int32_t InBoneIndex, bool bUseRawData, float Time);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.GetBlendSpaceAnimationByType
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3873130
	// Params: [ Num(3) Size(0x18) ]
	static struct UAnimSequence* GetBlendSpaceAnimationByType(struct UBlendSpace1D* BlendSpace, int32_t BlendType);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.GetBlendSpaceAnimationByInput
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3873040
	// Params: [ Num(3) Size(0x20) ]
	static struct UAnimSequence* GetBlendSpaceAnimationByInput(struct UBlendSpaceBase* BlendSpace, struct FVector& BlendInput);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.FindBlendSpaceNormalizeTimeFromCurveValue
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x3873720
	// Params: [ Num(10) Size(0x38) ]
	static float FindBlendSpaceNormalizeTimeFromCurveValue(struct UBlendSpaceBase* InBlendSpace, struct FName Curve, float CurveValue, float InputX, float InputY, float& AnimSeqLength, float& AnimSeqTime, struct UAnimSequenceBase*& OutAnimSequence, float LastEvaluateTime);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.FindAnimSeqTimeFromCurveValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x38739ec
	// Params: [ Num(7) Size(0x24) ]
	static float FindAnimSeqTimeFromCurveValue(struct UAnimSequenceBase* InAnimSequence, struct FName CurveName, float CurveValue, float LastEvaluateTime, float ErrorTolerance, int32_t CompareType);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawDebugSphere
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3872b94
	// Params: [ Num(5) Size(0x20) ]
	static void DrawDebugSphere(struct UWorld* InWorld, const struct FVector& InPosition, float InRadius, const struct FColor& InColor, float InDuration);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawDebugLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x38729d4
	// Params: [ Num(5) Size(0x28) ]
	static void DrawDebugLine(struct UWorld* InWorld, const struct FVector& InStart, const struct FVector& InEnd, const struct FColor& InColor, float InDuration);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawDebugCone
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3872558
	// Params: [ Num(8) Size(0x34) ]
	static void DrawDebugCone(struct UWorld* InWorld, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, const struct FColor& DrawColor, float Duration);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawDebugCapsule
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x38727d4
	// Params: [ Num(6) Size(0x2C) ]
	static void DrawDebugCapsule(struct UWorld* InWorld, const struct FVector& P0, const struct FVector& P1, float InRadius, const struct FColor& InColor, float InDuration);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawCoordinateSystem
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x3872d44
	// Params: [ Num(4) Size(0x48) ]
	static void DrawCoordinateSystem(struct UWorld* InWorld, struct FTransform& InTransform, float InScale, float InDuration);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.Damper_Exact_Vector
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3871dd0
	// Params: [ Num(5) Size(0x2C) ]
	static struct FVector Damper_Exact_Vector(struct FVector InVector, struct FVector TargetVector, float Damping, float DeltaTime);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.Damper_Exact_Rotator
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3871c68
	// Params: [ Num(5) Size(0x2C) ]
	static struct FRotator Damper_Exact_Rotator(struct FRotator InRotator, struct FRotator TargetRotator, float Damping, float DeltaTime);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.Damper_Exact_Damping
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3871f38
	// Params: [ Num(5) Size(0x14) ]
	static float Damper_Exact_Damping(float X, float G, float Damping, float dt);

	// Object: Function MFAnimationRuntime.MFAnimationtFunctionLibrary.AddAnimationNotifyEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x38723f0
	// Params: [ Num(5) Size(0x28) ]
	static struct UAnimNotify* AddAnimationNotifyEvent(struct UAnimMontage* AnimMontage, struct FName NotifyTrackName, float startTime, struct UAnimNotify* NotifyClass);
};

} // namespace SDK
