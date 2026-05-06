#pragma once

#include "../CoreUObject_classes.hpp"
#include "ClothingSystemRuntimeInterface.hpp"

namespace SDK
{

// Package: ClothingSystemRuntimeCommon
// Enums: 2
// Structs: 6
// Classes: 5

struct FClothVertBoneData;
struct UClothConfigBase;
struct UClothPhysicalMeshDataBase_Legacy;
struct UPhysicsAsset;
struct FClothConstraintSetup_Legacy;
struct FClothConfig_Legacy;
struct FPointWeightMap;
struct FClothPhysicalMeshData;
struct FClothLODDataCommon;
struct FClothParameterMask_Legacy;
struct UClothConfigCommon;
struct UClothSharedConfigCommon;
struct UClothingAssetCustomData;
struct UClothingAssetCommon;
struct UClothLODDataCommon_Legacy;

// Object: Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethod_MAX = 2
};

// Object: Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EWeightMapTargetCommon_MAX = 5
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// Size: 0x10 (Inherited: 0x0)
struct FClothConstraintSetup_Legacy
{
	float Stiffness; // 0x0(0x4)
	float StiffnessMultiplier; // 0x4(0x4)
	float StretchLimit; // 0x8(0x4)
	float CompressionLimit; // 0xC(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// Size: 0xD4 (Inherited: 0x0)
struct FClothConfig_Legacy
{
	EClothingWindMethod_Legacy WindMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x4(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34(0x10)
	float SelfCollisionRadius; // 0x44(0x4)
	float SelfCollisionStiffness; // 0x48(0x4)
	float SelfCollisionCullScale; // 0x4C(0x4)
	struct FVector Damping; // 0x50(0xC)
	float Friction; // 0x5C(0x4)
	float WindDragCoefficient; // 0x60(0x4)
	float WindLiftCoefficient; // 0x64(0x4)
	struct FVector LinearDrag; // 0x68(0xC)
	struct FVector AngularDrag; // 0x74(0xC)
	struct FVector LinearInertiaScale; // 0x80(0xC)
	struct FVector AngularInertiaScale; // 0x8C(0xC)
	struct FVector CentrifugalInertiaScale; // 0x98(0xC)
	float SolverFrequency; // 0xA4(0x4)
	float StiffnessFrequency; // 0xA8(0x4)
	float GravityScale; // 0xAC(0x4)
	struct FVector GravityOverride; // 0xB0(0xC)
	bool bUseGravityOverride; // 0xBC(0x1)
	uint8_t Pad_0xBD[0x3]; // 0xBD(0x3)
	float TetherStiffness; // 0xC0(0x4)
	float TetherLimit; // 0xC4(0x4)
	float CollisionThickness; // 0xC8(0x4)
	float AnimDriveSpringStiffness; // 0xCC(0x4)
	float AnimDriveDamperStiffness; // 0xD0(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// Size: 0x10 (Inherited: 0x0)
struct FPointWeightMap
{
	struct TArray<float> Values; // 0x0(0x10)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// Size: 0xF8 (Inherited: 0x0)
struct FClothPhysicalMeshData
{
	struct TArray<struct FVector> Vertices; // 0x0(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<uint32_t> Indices; // 0x20(0x10)
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps; // 0x30(0x50)
	struct TArray<float> InverseMasses; // 0x80(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x90(0x10)
	int32_t MaxBoneWeights; // 0xA0(0x4)
	int32_t NumFixedVerts; // 0xA4(0x4)
	struct TArray<uint32_t> SelfCollisionIndices; // 0xA8(0x10)
	struct TArray<float> MaxDistances; // 0xB8(0x10)
	struct TArray<float> BackstopDistances; // 0xC8(0x10)
	struct TArray<float> BackstopRadiuses; // 0xD8(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0xE8(0x10)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// Size: 0x160 (Inherited: 0x0)
struct FClothLODDataCommon
{
	struct FClothPhysicalMeshData PhysicalMeshData; // 0x0(0xF8)
	struct FClothCollisionData CollisionData; // 0xF8(0x40)
	bool bUseMultipleInfluences; // 0x138(0x1)
	uint8_t Pad_0x139[0x3]; // 0x139(0x3)
	float SkinningKernelRadius; // 0x13C(0x4)
	uint8_t Pad_0x140[0x20]; // 0x140(0x20)
};

// Object: ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// Size: 0x30 (Inherited: 0x0)
struct FClothParameterMask_Legacy
{
	struct FName MaskName; // 0x0(0x8)
	EWeightMapTargetCommon CurrentTarget; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float MaxValue; // 0xC(0x4)
	float MinValue; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TArray<float> Values; // 0x18(0x10)
	bool bEnabled; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigCommon : UClothConfigBase
{
	DEFINE_UE_CLASS_HELPERS(UClothConfigCommon, "ClothConfigCommon")
};

// Object: Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedConfigCommon : UClothConfigCommon
{
	DEFINE_UE_CLASS_HELPERS(UClothSharedConfigCommon, "ClothSharedConfigCommon")
};

// Object: Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size: 0x28 (Inherited: 0x28)
struct UClothingAssetCustomData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothingAssetCustomData, "ClothingAssetCustomData")
};

// Object: Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0x1F0 (Inherited: 0x48)
struct UClothingAssetCommon : UClothingAssetBase
{
	DEFINE_UE_CLASS_HELPERS(UClothingAssetCommon, "ClothingAssetCommon")

	struct UPhysicsAsset* PhysicsAsset; // 0x48(0x8)
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs; // 0x50(0x50)
	struct UClothConfigBase* ClothSharedSimConfig; // 0xA0(0x8)
	struct UClothConfigBase* ClothSimConfig; // 0xA8(0x8)
	struct UClothConfigBase* ChaosClothSimConfig; // 0xB0(0x8)
	struct TArray<struct UClothLODDataCommon_Legacy*> ClothLODData; // 0xB8(0x10)
	struct TArray<struct FClothLODDataCommon> LODData; // 0xC8(0x10)
	struct TArray<int32_t> LodMap; // 0xD8(0x10)
	struct TArray<struct FName> UsedBoneNames; // 0xE8(0x10)
	struct TArray<int32_t> UsedBoneIndices; // 0xF8(0x10)
	int32_t ReferenceBoneIndex; // 0x108(0x4)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct UClothingAssetCustomData* CustomData; // 0x110(0x8)
	struct FClothConfig_Legacy ClothConfig; // 0x118(0xD4)
	uint8_t Pad_0x1EC[0x4]; // 0x1EC(0x4)
};

// Object: Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size: 0x188 (Inherited: 0x28)
struct UClothLODDataCommon_Legacy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothLODDataCommon_Legacy, "ClothLODDataCommon_Legacy")

	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28(0x8)
	struct FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30(0xF8)
	struct FClothCollisionData CollisionData; // 0x128(0x40)
	uint8_t Pad_0x168[0x20]; // 0x168(0x20)
};

} // namespace SDK
