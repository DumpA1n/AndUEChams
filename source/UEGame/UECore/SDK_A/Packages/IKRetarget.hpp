#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: IKRetarget
// Enums: 1
// Structs: 3
// Classes: 0

struct USkeletalMesh;
struct FAnimNode_FKRetarget;
struct FAnimNode_IKFootControl;
struct FAnimNode_SingleBoneRotation;

// Object: Enum IKRetarget.EFKRetargetMode
enum class EFKRetargetMode : uint8_t
{
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EFKRetargetMode_MAX = 5
};

// Object: ScriptStruct IKRetarget.AnimNode_FKRetarget
// Size: 0x268 (Inherited: 0xD0)
struct FAnimNode_FKRetarget : FAnimNode_SkeletalControlBase
{
	uint8_t Pad_0xD0[0x108]; // 0xD0(0x108)
	struct TSoftObjectPtr<USkeletalMesh> TargetMesh; // 0x1D8(0x28)
	bool bEnableFKRetarget; // 0x200(0x1)
	EFKRetargetMode DefaultRetargetMode; // 0x201(0x1)
	bool bRetargetRoot; // 0x202(0x1)
	bool bRetargetTranslation; // 0x203(0x1)
	bool bRetargetRotation; // 0x204(0x1)
	bool bRetargetScale; // 0x205(0x1)
	uint8_t Pad_0x206[0x2]; // 0x206(0x2)
	struct TMap<struct FName, EFKRetargetMode> BoneRetargetModes; // 0x208(0x50)
	struct TArray<struct FName> ExcludedBones; // 0x258(0x10)
};

// Object: ScriptStruct IKRetarget.AnimNode_IKFootControl
// Size: 0x148 (Inherited: 0xD0)
struct FAnimNode_IKFootControl : FAnimNode_SkeletalControlBase
{
	bool bEnableLeftFootControl; // 0xCC(0x1)
	struct FVector LeftFootIKBoneScaleValue; // 0xD0(0xC)
	struct FVector LeftFootTranslationOffset; // 0xDC(0xC)
	struct FRotator LeftFootRotationOffset; // 0xE8(0xC)
	float LeftFootInfluenceAlpha; // 0xF4(0x4)
	bool bEnableRightFootControl; // 0xF8(0x1)
	uint8_t Pad_0xFA[0x2]; // 0xFA(0x2)
	struct FVector RightFootIKBoneScaleValue; // 0xFC(0xC)
	struct FVector RightFootTranslationOffset; // 0x108(0xC)
	struct FRotator RightFootRotationOffset; // 0x114(0xC)
	float RightFootInfluenceAlpha; // 0x120(0x4)
	struct FBoneReference LeftFootIKBone; // 0x124(0x10)
	struct FBoneReference RightFootIKBone; // 0x134(0x10)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
};

// Object: ScriptStruct IKRetarget.AnimNode_SingleBoneRotation
// Size: 0xF0 (Inherited: 0xD0)
struct FAnimNode_SingleBoneRotation : FAnimNode_SkeletalControlBase
{
	struct FBoneReference TargetBone; // 0xCC(0x10)
	bool bEnableRotationControl; // 0xDC(0x1)
	bool bUseAdditiveRotation; // 0xDD(0x1)
	struct FRotator TargetRotation; // 0xE0(0xC)
	uint8_t Pad_0xEE[0x2]; // 0xEE(0x2)
};

} // namespace SDK
