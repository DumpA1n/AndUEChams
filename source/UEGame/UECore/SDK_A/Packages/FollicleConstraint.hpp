#pragma once

#include "../CoreUObject_classes.hpp"
#include "AnimGraphRuntime.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: FollicleConstraint
// Enums: 0
// Structs: 2
// Classes: 1

struct USkeletalMeshComponent;
struct FAnimNode_FollicleBoneDriver;
struct FBoneWeightData;
struct UFollicleAnimInstance;

// Object: ScriptStruct FollicleConstraint.AnimNode_FollicleBoneDriver
// Size: 0x1E0 (Inherited: 0xD0)
struct FAnimNode_FollicleBoneDriver : FAnimNode_SkeletalControlBase
{
	struct FBoneReference TargetBone; // 0xCC(0x10)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0xDC(0x8)
	bool bUseAttachedParent; // 0xE4(0x1)
	uint8_t Pad_0xE9[0xF7]; // 0xE9(0xF7)
};

// Object: ScriptStruct FollicleConstraint.BoneWeightData
// Size: 0x40 (Inherited: 0x0)
struct FBoneWeightData
{
	int32_t BoneIndex; // 0x0(0x4)
	float Weight; // 0x4(0x4)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform BindPose; // 0x10(0x30)
};

// Object: Class FollicleConstraint.FollicleAnimInstance
// Size: 0x4E0 (Inherited: 0x2D0)
struct UFollicleAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UFollicleAnimInstance, "FollicleAnimInstance")

	struct FName RootBoneName; // 0x2C4(0x8)
	bool bDebugDraw; // 0x2CC(0x1)
	struct FVector OutBoneRelativeLocation; // 0x2D0(0xC)
	struct FRotator OutBoneRelativeRotation; // 0x2DC(0xC)
	uint8_t Pad_0x2F1[0x1EF]; // 0x2F1(0x1EF)
};

} // namespace SDK
