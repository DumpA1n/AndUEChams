#pragma once

#include "../CoreUObject_classes.hpp"
#include "Chaos.hpp"
#include "DeveloperSettings.hpp"

namespace SDK
{

// Package: PhysicsCore
// Enums: 10
// Structs: 1
// Classes: 5

struct FBodyInstanceCore;
struct UBodySetupCore;
struct UChaosPhysicalMaterial;
struct UPhysicalMaterial;
struct UPhysicalMaterialPropertyBase;
struct UPhysicsSettingsCore;

// Object: Enum PhysicsCore.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};

// Object: Enum PhysicsCore.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	BodyCollision_Enabled = 0,
	BodyCollision_Disabled = 1,
	BodyCollision_MAX = 2
};

// Object: Enum PhysicsCore.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default = 0,
	PhysType_Kinematic = 1,
	PhysType_Simulated = 2,
	PhysType_MAX = 3
};

// Object: Enum PhysicsCore.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault = 0,
	CTF_UseSimpleAndComplex = 1,
	CTF_UseSimpleAsComplex = 2,
	CTF_UseComplexAsSimple = 3,
	CTF_MAX = 4
};

// Object: Enum PhysicsCore.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free = 0,
	LCM_Limited = 1,
	LCM_Locked = 2,
	LCM_MAX = 3
};

// Object: Enum PhysicsCore.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	Frame1 = 0,
	Frame2 = 1,
	EConstraintFrame_MAX = 2
};

// Object: Enum PhysicsCore.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free = 0,
	ACM_Limited = 1,
	ACM_Locked = 2,
	ACM_MAX = 3
};

// Object: Enum PhysicsCore.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal = 0,
	Sensitive = 1,
	Custom = 2,
	ESleepFamily_MAX = 3
};

// Object: Enum PhysicsCore.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant = 0,
	RIF_Linear = 1,
	RIF_MAX = 2
};

// Object: Enum PhysicsCore.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average = 0,
	Min = 1,
	Multiply = 2,
	Max = 3
};

// Object: ScriptStruct PhysicsCore.BodyInstanceCore
// Size: 0x18 (Inherited: 0x0)
struct FBodyInstanceCore
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
	uint8_t bSimulatePhysics : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bOverrideMass : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bEnableGravity : 1; // 0x10(0x1), Mask(0x4)
	uint8_t bAutoWeld : 1; // 0x10(0x1), Mask(0x8)
	uint8_t bStartAwake : 1; // 0x10(0x1), Mask(0x10)
	uint8_t bGenerateWakeEvents : 1; // 0x10(0x1), Mask(0x20)
	uint8_t bUpdateMassWhenScaleChanges : 1; // 0x10(0x1), Mask(0x40)
	uint8_t BitPad_0x10_7 : 1; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: Class PhysicsCore.BodySetupCore
// Size: 0x48 (Inherited: 0x28)
struct UBodySetupCore : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBodySetupCore, "BodySetupCore")

	struct FName BoneName; // 0x28(0x8)
	uint8_t PhysicsType; // 0x30(0x1)
	uint8_t CollisionTraceFlag; // 0x31(0x1)
	uint8_t CollisionReponse; // 0x32(0x1)
	uint8_t Pad_0x33[0x15]; // 0x33(0x15)
};

// Object: Class PhysicsCore.ChaosPhysicalMaterial
// Size: 0x48 (Inherited: 0x28)
struct UChaosPhysicalMaterial : UObject
{
	DEFINE_UE_CLASS_HELPERS(UChaosPhysicalMaterial, "ChaosPhysicalMaterial")

	float Friction; // 0x28(0x4)
	float StaticFriction; // 0x2C(0x4)
	float Restitution; // 0x30(0x4)
	float LinearEtherDrag; // 0x34(0x4)
	float AngularEtherDrag; // 0x38(0x4)
	float SleepingLinearVelocityThreshold; // 0x3C(0x4)
	float SleepingAngularVelocityThreshold; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: Class PhysicsCore.PhysicalMaterial
// Size: 0x80 (Inherited: 0x28)
struct UPhysicalMaterial : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPhysicalMaterial, "PhysicalMaterial")

	float Friction; // 0x28(0x4)
	float StaticFriction; // 0x2C(0x4)
	uint8_t FrictionCombineMode; // 0x30(0x1)
	bool bOverrideFrictionCombineMode; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	float Restitution; // 0x34(0x4)
	uint8_t RestitutionCombineMode; // 0x38(0x1)
	bool bOverrideRestitutionCombineMode; // 0x39(0x1)
	uint8_t Pad_0x3A[0x2]; // 0x3A(0x2)
	float Density; // 0x3C(0x4)
	float SleepLinearVelocityThreshold; // 0x40(0x4)
	float SleepAngularVelocityThreshold; // 0x44(0x4)
	int32_t SleepCounterThreshold; // 0x48(0x4)
	float RaiseMassToPower; // 0x4C(0x4)
	float DestructibleDamageThresholdScale; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x58(0x8)
	uint8_t SurfaceType; // 0x60(0x1)
	uint8_t Pad_0x61[0x1F]; // 0x61(0x1F)
};

// Object: Class PhysicsCore.PhysicalMaterialPropertyBase
// Size: 0x28 (Inherited: 0x28)
struct UPhysicalMaterialPropertyBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPhysicalMaterialPropertyBase, "PhysicalMaterialPropertyBase")
};

// Object: Class PhysicsCore.PhysicsSettingsCore
// Size: 0xE0 (Inherited: 0x38)
struct UPhysicsSettingsCore : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UPhysicsSettingsCore, "PhysicsSettingsCore")

	float DefaultGravityZ; // 0x38(0x4)
	float DefaultTerminalVelocity; // 0x3C(0x4)
	float DefaultFluidFriction; // 0x40(0x4)
	int32_t SimulateScratchMemorySize; // 0x44(0x4)
	int32_t RagdollAggregateThreshold; // 0x48(0x4)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4C(0x4)
	bool bEnableShapeSharing; // 0x50(0x1)
	bool bEnablePCM; // 0x51(0x1)
	bool bEnableStabilization; // 0x52(0x1)
	bool bWarnMissingLocks; // 0x53(0x1)
	bool bEnable2DPhysics; // 0x54(0x1)
	bool bDefaultHasComplexCollision; // 0x55(0x1)
	uint8_t Pad_0x56[0x2]; // 0x56(0x2)
	float BounceThresholdVelocity; // 0x58(0x4)
	uint8_t FrictionCombineMode; // 0x5C(0x1)
	uint8_t RestitutionCombineMode; // 0x5D(0x1)
	uint8_t Pad_0x5E[0x2]; // 0x5E(0x2)
	float MaxAngularVelocity; // 0x60(0x4)
	float MaxDepenetrationVelocity; // 0x64(0x4)
	float ContactOffsetMultiplier; // 0x68(0x4)
	float MinContactOffset; // 0x6C(0x4)
	float MaxContactOffset; // 0x70(0x4)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74(0x1)
	uint8_t DefaultShapeComplexity; // 0x75(0x1)
	uint8_t Pad_0x76[0x2]; // 0x76(0x2)
	struct FChaosSolverConfiguration SolverOptions; // 0x78(0x68)
};

} // namespace SDK
