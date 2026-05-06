#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: ClothingSystemRuntimeInterface
// Enums: 0
// Structs: 6
// Classes: 6

struct FClothCollisionData;
struct FClothCollisionPrim_Box;
struct FClothCollisionPrim_Convex;
struct FClothCollisionPrim_SphereConnection;
struct FClothCollisionPrim_Sphere;
struct FClothVertBoneData;
struct UClothConfigBase;
struct UClothSharedSimConfigBase;
struct UClothingAssetBase;
struct UClothingSimulationFactory;
struct UClothingSimulationInteractor;
struct UClothPhysicalMeshDataBase_Legacy;

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
// Size: 0x30 (Inherited: 0x0)
struct FClothCollisionPrim_Box
{
	struct FVector LocalPosition; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FQuat LocalRotation; // 0x10(0x10)
	struct FVector HalfExtents; // 0x20(0xC)
	int32_t BoneIndex; // 0x2C(0x4)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Size: 0x28 (Inherited: 0x0)
struct FClothCollisionPrim_Convex
{
	struct TArray<struct FPlane> Planes; // 0x0(0x10)
	struct TArray<struct FVector> SurfacePoints; // 0x10(0x10)
	int32_t BoneIndex; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
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
	float Radius; // 0x4(0x4)
	struct FVector LocalPosition; // 0x8(0xC)
};

// Object: ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
// Size: 0x4C (Inherited: 0x0)
struct FClothVertBoneData
{
	int32_t NumInfluences; // 0x0(0x4)
	uint16_t BoneIndices[0xC]; // 0x4(0x18)
	float BoneWeights[0xC]; // 0x1C(0x30)
};

// Object: Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothConfigBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothConfigBase, "ClothConfigBase")
};

// Object: Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28 (Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothSharedSimConfigBase, "ClothSharedSimConfigBase")
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

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb229084
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimDriveSpringStiffness(float InStiffness);

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb229150
	// Params: [ Num(0) Size(0x0) ]
	void PhysicsAssetUpdated();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb228e48
	// Params: [ Num(1) Size(0x4) ]
	float GetSimulationTime();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb228e84
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumSubsteps();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb228f38
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumKinematicParticles();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb228ec0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumIterations();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb228efc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumDynamicParticles();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb228f74
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumCloths();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xb228fcc
	// Params: [ Num(1) Size(0xC) ]
	void EnableGravityOverride(const struct FVector& InVector);

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb228fb0
	// Params: [ Num(0) Size(0x0) ]
	void DisableGravityOverride();

	// Object: Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb229134
	// Params: [ Num(0) Size(0x0) ]
	void ClothConfigUpdated();
};

// Object: Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xE0 (Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject
{
	DEFINE_UE_CLASS_HELPERS(UClothPhysicalMeshDataBase_Legacy, "ClothPhysicalMeshDataBase_Legacy")

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
