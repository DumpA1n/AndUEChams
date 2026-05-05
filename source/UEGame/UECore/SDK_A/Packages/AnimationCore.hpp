#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: AnimationCore
// Enums: 2
// Structs: 18
// Classes: 1

struct FAxis;
struct FCCDIKChainLink;
struct FConstraintDescriptor;
struct FConstraintData;
struct FFilterOptionPerAxis;
struct FConstraintDescriptionEx;
struct FAimConstraintDescription;
struct FTransformConstraintDescription;
struct FConstraintDescription;
struct FTransformConstraint;
struct FConstraintOffset;
struct FTransformFilter;
struct FEulerTransform;
struct FFABRIKChainLink;
struct FNodeChain;
struct FNodeHierarchyData;
struct FNodeHierarchyWithUserData;
struct FNodeObject;
struct UAnimationDataSourceRegistry;

// Object: Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
	Translation = 0,
	Rotation = 1,
	Scale = 2,
	Parent = 3,
	ETransformConstraintType_MAX = 4
};

// Object: Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
	Transform = 0,
	Aim = 1,
	MAX = 2
};

// Object: ScriptStruct AnimationCore.Axis
// Size: 0x10 (Inherited: 0x0)
struct FAxis
{
	struct FVector Axis; // 0x0(0xC)
	uint8_t bInLocalSpace : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct AnimationCore.CCDIKChainLink
// Size: 0x80 (Inherited: 0x0)
struct FCCDIKChainLink
{
	uint8_t Pad_0x0[0x80]; // 0x0(0x80)
};

// Object: ScriptStruct AnimationCore.ConstraintDescriptor
// Size: 0x10 (Inherited: 0x0)
struct FConstraintDescriptor
{
	EConstraintType Type; // 0x0(0x1)
	uint8_t Pad_0x1[0xF]; // 0x1(0xF)
};

// Object: ScriptStruct AnimationCore.ConstraintData
// Size: 0x80 (Inherited: 0x0)
struct FConstraintData
{
	struct FConstraintDescriptor Constraint; // 0x0(0x10)
	float Weight; // 0x10(0x4)
	uint8_t bMaintainOffset : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0xB]; // 0x15(0xB)
	struct FTransform offset; // 0x20(0x30)
	struct FTransform CurrentTransform; // 0x50(0x30)
};

// Object: ScriptStruct AnimationCore.FilterOptionPerAxis
// Size: 0x3 (Inherited: 0x0)
struct FFilterOptionPerAxis
{
	uint8_t bX : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bY : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bZ : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
};

// Object: ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size: 0x10 (Inherited: 0x0)
struct FConstraintDescriptionEx
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FFilterOptionPerAxis AxesFilterOption; // 0x8(0x3)
	uint8_t Pad_0xB[0x5]; // 0xB(0x5)
};

// Object: ScriptStruct AnimationCore.AimConstraintDescription
// Size: 0x40 (Inherited: 0x10)
struct FAimConstraintDescription : FConstraintDescriptionEx
{
	struct FAxis LookAt_Axis; // 0xC(0x10)
	struct FAxis LookUp_Axis; // 0x1C(0x10)
	uint8_t bUseLookUp : 1; // 0x2C(0x1), Mask(0x1)
	struct FVector LookUpTarget; // 0x30(0xC)
	uint8_t BitPad_0x3C_1 : 7; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: ScriptStruct AnimationCore.TransformConstraintDescription
// Size: 0x10 (Inherited: 0x10)
struct FTransformConstraintDescription : FConstraintDescriptionEx
{
	ETransformConstraintType TransformType; // 0xB(0x1)
};

// Object: ScriptStruct AnimationCore.ConstraintDescription
// Size: 0xD (Inherited: 0x0)
struct FConstraintDescription
{
	uint8_t bTranslation : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t bRotation : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t bScale : 1; // 0x2(0x1), Mask(0x1)
	uint8_t BitPad_0x2_1 : 7; // 0x2(0x1)
	uint8_t bParent : 1; // 0x3(0x1), Mask(0x1)
	uint8_t BitPad_0x3_1 : 7; // 0x3(0x1)
	struct FFilterOptionPerAxis TranslationAxes; // 0x4(0x3)
	struct FFilterOptionPerAxis RotationAxes; // 0x7(0x3)
	struct FFilterOptionPerAxis ScaleAxes; // 0xA(0x3)
};

// Object: ScriptStruct AnimationCore.TransformConstraint
// Size: 0x28 (Inherited: 0x0)
struct FTransformConstraint
{
	struct FConstraintDescription Operator; // 0x0(0xD)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	struct FName SourceNode; // 0x10(0x8)
	struct FName TargetNode; // 0x18(0x8)
	float Weight; // 0x20(0x4)
	uint8_t bMaintainOffset : 1; // 0x24(0x1), Mask(0x1)
	uint8_t BitPad_0x24_1 : 7; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct AnimationCore.ConstraintOffset
// Size: 0x60 (Inherited: 0x0)
struct FConstraintOffset
{
	struct FVector translation; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FTransform Parent; // 0x30(0x30)
};

// Object: ScriptStruct AnimationCore.TransformFilter
// Size: 0x9 (Inherited: 0x0)
struct FTransformFilter
{
	struct FFilterOptionPerAxis TranslationFilter; // 0x0(0x3)
	struct FFilterOptionPerAxis RotationFilter; // 0x3(0x3)
	struct FFilterOptionPerAxis ScaleFilter; // 0x6(0x3)
};

// Object: ScriptStruct AnimationCore.EulerTransform
// Size: 0x24 (Inherited: 0x0)
struct FEulerTransform
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	struct FVector Scale; // 0x18(0xC)
};

// Object: ScriptStruct AnimationCore.FABRIKChainLink
// Size: 0x38 (Inherited: 0x0)
struct FFABRIKChainLink
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct AnimationCore.NodeChain
// Size: 0x10 (Inherited: 0x0)
struct FNodeChain
{
	struct TArray<struct FName> Nodes; // 0x0(0x10)
};

// Object: ScriptStruct AnimationCore.NodeHierarchyData
// Size: 0x70 (Inherited: 0x0)
struct FNodeHierarchyData
{
	struct TArray<struct FNodeObject> Nodes; // 0x0(0x10)
	struct TArray<struct FTransform> Transforms; // 0x10(0x10)
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping; // 0x20(0x50)
};

// Object: ScriptStruct AnimationCore.NodeHierarchyWithUserData
// Size: 0x78 (Inherited: 0x0)
struct FNodeHierarchyWithUserData
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct FNodeHierarchyData Hierarchy; // 0x8(0x70)
};

// Object: ScriptStruct AnimationCore.NodeObject
// Size: 0x10 (Inherited: 0x0)
struct FNodeObject
{
	struct FName Name; // 0x0(0x8)
	struct FName ParentName; // 0x8(0x8)
};

// Object: Class AnimationCore.AnimationDataSourceRegistry
// Size: 0x78 (Inherited: 0x28)
struct UAnimationDataSourceRegistry : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAnimationDataSourceRegistry, "AnimationDataSourceRegistry")

	struct TMap<struct FName, struct UObject*> DataSources; // 0x28(0x50)
};

} // namespace SDK
