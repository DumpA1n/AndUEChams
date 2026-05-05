#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: ClothingSystemRuntimeInterface
// Enums: 0
// Structs: 7
// Classes: 5

struct FClothCollisionData;
struct FClothCollisionPrim_Box;
struct FClothCollisionPrim_Convex;
struct FClothCollisionPrim_SphereConnection;
struct FClothCollisionPrim_Sphere;
struct FClothVertBoneData;
struct FPointWeightMap;
struct UClothConfigBase;
struct UClothingAssetBase;
struct UClothingSimulationFactory;
struct UClothingSimulationInteractor;
struct UClothPhysicalMeshDataBase;

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// Size: 0x40 (Inherited: 0x0)
struct FClothCollisionData
{
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres; // 0x0(0x10)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10(0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes; // 0x20(0x10)
	struct TArray<struct FClothCollisionPrim_Box> Boxes; // 0x30(0x10)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// Size: 0x1C (Inherited: 0x0)
struct FClothCollisionPrim_Box
{
	int32_t BoneIndex; // 0x0(0x4)
	struct FVector LocalMin; // 0x4(0xC)
	struct FVector LocalMax; // 0x10(0xC)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x18 (Inherited: 0x0)
struct FClothCollisionPrim_Convex
{
	struct TArray<struct FPlane> Planes; // 0x0(0x10)
	int32_t BoneIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Size: 0x8 (Inherited: 0x0)
struct FClothCollisionPrim_SphereConnection
{
	int32_t SphereIndices[0x2]; // 0x0(0x8)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Size: 0x14 (Inherited: 0x0)
struct FClothCollisionPrim_Sphere
{
	int32_t BoneIndex; // 0x0(0x4)
	float radius; // 0x4(0x4)
	struct FVector LocalPosition; // 0x8(0xC)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// Size: 0x34 (Inherited: 0x0)
struct FClothVertBoneData
{
	int32_t NumInfluences; // 0x0(0x4)
	uint16_t BoneIndices[0x8]; // 0x4(0x10)
	float BoneWeights[0x8]; // 0x14(0x20)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.PointWeightMap
// Size: 0x28 (Inherited: 0x0)
struct FPointWeightMap
{
	struct FName Name; // 0x0(0x8)
	uint8_t CurrentTarget; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TArray<float> Values; // 0x10(0x10)
	uint8_t bEnabled : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothConfigBase, "ClothConfigBase")
};

// Object: Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48 (Inherited: 0x28)
struct UClothingAssetBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothingAssetBase, "ClothingAssetBase")

	struct FString ImportedFilePath; // 0x28(0x10)
	struct FGuid AssetGuid; // 0x38(0x10)
};

// Object: Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactory : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothingSimulationFactory, "ClothingSimulationFactory")
};

// Object: Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x30 (Inherited: 0x28)
struct UClothingSimulationInteractor : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothingSimulationInteractor, "ClothingSimulationInteractor")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1679e488
	// Params: [ Num(0) Size(0x0) ]
	void PhysicsAssetUpdated();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1679e46c
	// Params: [ Num(0) Size(0x0) ]
	void ClothConfigUpdated();
};

// Object: Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase
// Size: 0xE0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothPhysicalMeshDataBase, "ClothPhysicalMeshDataBase")

	struct TArray<struct FVector> Vertices; // 0x28(0x10)
	struct TArray<struct FVector> Normals; // 0x38(0x10)
	struct TArray<uint32_t> Indices; // 0x48(0x10)
	struct TArray<float> InverseMasses; // 0x58(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x4)
	int32_t MaxBoneWeights; // 0x7C(0x4)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
	uint8_t Pad_0x90[0x50]; // 0x90(0x50)
};

} // namespace SDK
