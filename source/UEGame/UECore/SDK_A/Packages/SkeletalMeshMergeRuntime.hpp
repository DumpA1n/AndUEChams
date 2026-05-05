#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: SkeletalMeshMergeRuntime
// Enums: 1
// Structs: 6
// Classes: 1

struct FTextureMergingInfo;
struct UMaterialInterface;
struct URuntimeSkeletalMesh;
struct USkeletalMesh;
struct UTexture2D;
struct FMergeSkeletalMeshDescriptor;
struct FMergeSkeletalMesh_TextureMergeRule;
struct FMergeSkeletalMesh_MaterialOverride;
struct FMergeSkeletalMesh_MaterialOverrideKey;
struct FTextureMergeStructInfo;
struct FSkeletalMeshes;
struct USkeletalMeshMergeRuntimeSubsystem;

// Object: Enum SkeletalMeshMergeRuntime.EMeshMergeResultType
enum class EMeshMergeResultType : uint8_t
{
	None = 0,
	Success = 1,
	ExceptionInterrupt = 2,
	MergeMeshEmpty = 3,
	MergeSkeletonEmpty = 4,
	RequestTimeOut = 5,
	SourceMeshListEmpty = 6,
	FailToFindBoneOnSkeleton = 7,
	MissSourceSkeleton = 8,
	MergeableAnalysisFailed = 9,
	LodNumNotEqual = 10,
	BoneNumsMismatch = 11,
	VertexNumsMismatch = 12,
	IndexBufferInvalid = 13,
	EMeshMergeResultType_MAX = 14
};

// Object: ScriptStruct SkeletalMeshMergeRuntime.MergeSkeletalMeshDescriptor
// Size: 0x120 (Inherited: 0x0)
struct FMergeSkeletalMeshDescriptor
{
	uint8_t Pad_0x0[0x120]; // 0x0(0x120)
};

// Object: ScriptStruct SkeletalMeshMergeRuntime.MergeSkeletalMesh_TextureMergeRule
// Size: 0x10 (Inherited: 0x0)
struct FMergeSkeletalMesh_TextureMergeRule
{
	struct FVector2D LeftTop; // 0x0(0x8)
	struct FVector2D ScaleXY; // 0x8(0x8)
};

// Object: ScriptStruct SkeletalMeshMergeRuntime.MergeSkeletalMesh_MaterialOverride
// Size: 0x30 (Inherited: 0x0)
struct FMergeSkeletalMesh_MaterialOverride
{
	int32_t MeshIndex; // 0x0(0x4)
	int32_t LOD; // 0x4(0x4)
	int32_t SectionIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FSoftObjectPath OverrideMaterialPath; // 0x10(0x18)
	struct UMaterialInterface* OverrideMaterial; // 0x28(0x8)
};

// Object: ScriptStruct SkeletalMeshMergeRuntime.MergeSkeletalMesh_MaterialOverrideKey
// Size: 0x18 (Inherited: 0x0)
struct FMergeSkeletalMesh_MaterialOverrideKey
{
	uint64_t ItemID; // 0x0(0x8)
	int32_t SectionIndex; // 0x8(0x4)
	struct FName MaterialSlotName; // 0xC(0x8)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct SkeletalMeshMergeRuntime.TextureMergeStructInfo
// Size: 0x20 (Inherited: 0x0)
struct FTextureMergeStructInfo
{
	struct TArray<struct FTextureMergingInfo> TextureMergingInfos; // 0x0(0x10)
	struct TArray<struct UTexture2D*> MergedTextureInfo; // 0x10(0x10)
};

// Object: ScriptStruct SkeletalMeshMergeRuntime.SkeletalMeshes
// Size: 0x10 (Inherited: 0x0)
struct FSkeletalMeshes
{
	struct TArray<struct USkeletalMesh*> SkeletalMeshes; // 0x0(0x10)
};

// Object: Class SkeletalMeshMergeRuntime.SkeletalMeshMergeRuntimeSubsystem
// Size: 0x1B0 (Inherited: 0x30)
struct USkeletalMeshMergeRuntimeSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(USkeletalMeshMergeRuntimeSubsystem, "SkeletalMeshMergeRuntimeSubsystem")

	uint8_t Pad_0x30[0xE0]; // 0x30(0xE0)
	struct TMap<struct URuntimeSkeletalMesh*, struct FSkeletalMeshes> RuntimeSkeletalMeshes; // 0x110(0x50)
	struct TMap<struct URuntimeSkeletalMesh*, struct FTextureMergeStructInfo> RuntimeSkeMeshTextureMergeInfos; // 0x160(0x50)
};

} // namespace SDK
