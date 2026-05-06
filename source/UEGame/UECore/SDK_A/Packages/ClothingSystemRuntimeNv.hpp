#pragma once

#include "../CoreUObject_classes.hpp"
#include "ClothingSystemRuntimeCommon.hpp"
#include "ClothingSystemRuntimeInterface.hpp"

namespace SDK
{

// Package: ClothingSystemRuntimeNv
// Enums: 1
// Structs: 1
// Classes: 4

enum class EClothingWindMethod_Legacy : uint8_t;
struct FClothConstraintSetupNv;
struct UClothConfigNv;
struct UClothingSimulationFactoryNv;
struct UClothingSimulationInteractorNv;
struct UClothPhysicalMeshDataNv_Legacy;

// Object: Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
	Legacy = 0,
	Accurate = 1,
	EClothingWindMethodNv_MAX = 2
};

// Object: ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
// Size: 0x10 (Inherited: 0x0)
struct FClothConstraintSetupNv
{
	float Stiffness; // 0x0(0x4)
	float StiffnessMultiplier; // 0x4(0x4)
	float StretchLimit; // 0x8(0x4)
	float CompressionLimit; // 0xC(0x4)
};

// Object: Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x140 (Inherited: 0x28)
struct UClothConfigNv : UClothConfigCommon
{
	DEFINE_UE_CLASS_HELPERS(UClothConfigNv, "ClothConfigNv")

	EClothingWindMethodNv ClothingWindMethod; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FClothConstraintSetupNv VerticalConstraint; // 0x2C(0x10)
	struct FClothConstraintSetupNv HorizontalConstraint; // 0x3C(0x10)
	struct FClothConstraintSetupNv BendConstraint; // 0x4C(0x10)
	struct FClothConstraintSetupNv ShearConstraint; // 0x5C(0x10)
	float SelfCollisionRadius; // 0x6C(0x4)
	float SelfCollisionStiffness; // 0x70(0x4)
	float SelfCollisionCullScale; // 0x74(0x4)
	struct FVector Damping; // 0x78(0xC)
	float Friction; // 0x84(0x4)
	float WindDragCoefficient; // 0x88(0x4)
	float WindLiftCoefficient; // 0x8C(0x4)
	struct FVector LinearDrag; // 0x90(0xC)
	struct FVector AngularDrag; // 0x9C(0xC)
	struct FVector LinearInertiaScale; // 0xA8(0xC)
	struct FVector AngularInertiaScale; // 0xB4(0xC)
	struct FVector CentrifugalInertiaScale; // 0xC0(0xC)
	float SolverFrequency; // 0xCC(0x4)
	float StiffnessFrequency; // 0xD0(0x4)
	float GravityScale; // 0xD4(0x4)
	struct FVector GravityOverride; // 0xD8(0xC)
	bool bUseGravityOverride; // 0xE4(0x1)
	uint8_t Pad_0xE5[0x3]; // 0xE5(0x3)
	float TetherStiffness; // 0xE8(0x4)
	float TetherLimit; // 0xEC(0x4)
	float CollisionThickness; // 0xF0(0x4)
	float AnimDriveSpringStiffness; // 0xF4(0x4)
	float AnimDriveDamperStiffness; // 0xF8(0x4)
	EClothingWindMethod_Legacy WindMethod; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x100(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x110(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x120(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x130(0x10)
};

// Object: Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x28 (Inherited: 0x28)
struct UClothingSimulationFactoryNv : UClothingSimulationFactory
{
	DEFINE_UE_CLASS_HELPERS(UClothingSimulationFactoryNv, "ClothingSimulationFactoryNv")
};

// Object: Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0x40 (Inherited: 0x30)
struct UClothingSimulationInteractorNv : UClothingSimulationInteractor
{
	DEFINE_UE_CLASS_HELPERS(UClothingSimulationInteractorNv, "ClothingSimulationInteractorNv")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)

	// Object: Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbcc5a18
	// Params: [ Num(1) Size(0x4) ]
	void SetAnimDriveDamperStiffness(float InStiffness);
};

// Object: Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Size: 0x120 (Inherited: 0xE0)
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy
{
	DEFINE_UE_CLASS_HELPERS(UClothPhysicalMeshDataNv_Legacy, "ClothPhysicalMeshDataNv_Legacy")

	struct TArray<float> MaxDistances; // 0xE0(0x10)
	struct TArray<float> BackstopDistances; // 0xF0(0x10)
	struct TArray<float> BackstopRadiuses; // 0x100(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0x110(0x10)
};

} // namespace SDK
