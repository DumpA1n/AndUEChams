#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: Chaos
// Enums: 18
// Structs: 9
// Classes: 0

struct FSolverBreakingFilterSettings;
struct FSolverCollisionFilterSettings;
struct FSolverTrailingFilterSettings;
struct FChaosSolverConfiguration;
struct FRecordedTransformTrack;
struct FSolverTrailingData;
struct FRecordedFrame;
struct FSolverBreakingData;
struct FSolverCollisionData;

// Object: Enum Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
	PointImplicit = 0,
	DelaunayTriangulation = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	None = 4,
	EClusterUnionMethod_MAX = 5
};

// Object: Enum Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask = 0,
	Field_RadialFalloff = 1,
	Field_UniformVector = 2,
	Field_RadialVector = 3,
	Field_RadialVectorFalloff = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
	Field_MAX = 6
};

// Object: Enum Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
	Field_None = 0,
	Field_DynamicState = 1,
	Field_LinearForce = 2,
	Field_ExternalClusterStrain = 3,
	Field_Kill = 4,
	Field_LinearVelocity = 5,
	Field_AngularVelociy = 6,
	Field_AngularTorque = 7,
	Field_InternalClusterStrain = 8,
	Field_DisableThreshold = 9,
	Field_SleepingThreshold = 10,
	Field_PositionStatic = 11,
	Field_PositionAnimated = 12,
	Field_PositionTarget = 13,
	Field_DynamicConstraint = 14,
	Field_CollisionGroup = 15,
	Field_ActivateDisabled = 16,
	Field_PhysicsType_Max = 17
};

// Object: Enum Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5
};

// Object: Enum Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3
};

// Object: Enum Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3
};

// Object: Enum Chaos.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4
};

// Object: Enum Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3
};

// Object: Enum Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	Chaos_AngularVelocity = 0,
	Chaos_DynamicState = 1,
	Chaos_LinearVelocity = 2,
	Chaos_InitialAngularVelocity = 3,
	Chaos_InitialLinearVelocity = 4,
	Chaos_CollisionGroup = 5,
	Chaos_LinearForce = 6,
	Chaos_AngularTorque = 7,
	Chaos_Max = 8
};

// Object: Enum Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 100,
	Chaos_Max = 101
};

// Object: Enum Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Max = 5
};

// Object: Enum Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2
};

// Object: Enum Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4
};

// Object: Enum Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5
};

// Object: Enum Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4
};

// Object: Enum Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4
};

// Object: ScriptStruct Chaos.SolverBreakingFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverBreakingFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// Object: ScriptStruct Chaos.SolverCollisionFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverCollisionFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
};

// Object: ScriptStruct Chaos.SolverTrailingFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverTrailingFilterSettings
{
	bool FilterEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// Object: ScriptStruct Chaos.ChaosSolverConfiguration
// Size: 0x68 (Inherited: 0x0)
struct FChaosSolverConfiguration
{
	int32_t Iterations; // 0x0(0x4)
	int32_t CollisionPairIterations; // 0x4(0x4)
	int32_t PushOutIterations; // 0x8(0x4)
	int32_t CollisionPushOutPairIterations; // 0xC(0x4)
	float CollisionMarginFraction; // 0x10(0x4)
	float CollisionMarginMax; // 0x14(0x4)
	float CollisionCullDistance; // 0x18(0x4)
	int32_t JointPairIterations; // 0x1C(0x4)
	int32_t JointPushOutPairIterations; // 0x20(0x4)
	float ClusterConnectionFactor; // 0x24(0x4)
	EClusterUnionMethod ClusterUnionConnectionType; // 0x28(0x1)
	bool bGenerateCollisionData; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2C(0x10)
	bool bGenerateBreakData; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x40(0x10)
	bool bGenerateTrailingData; // 0x50(0x1)
	uint8_t Pad_0x51[0x3]; // 0x51(0x3)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x54(0x10)
	bool bGenerateContactGraph; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
};

// Object: ScriptStruct Chaos.RecordedTransformTrack
// Size: 0x10 (Inherited: 0x0)
struct FRecordedTransformTrack
{
	struct TArray<struct FRecordedFrame> Records; // 0x0(0x10)
};

// Object: ScriptStruct Chaos.SolverTrailingData
// Size: 0x30 (Inherited: 0x0)
struct FSolverTrailingData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
	int32_t ParticleIndexMesh; // 0x2C(0x4)
};

// Object: ScriptStruct Chaos.RecordedFrame
// Size: 0xB8 (Inherited: 0x0)
struct FRecordedFrame
{
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<int32_t> TransformIndices; // 0x10(0x10)
	struct TArray<int32_t> PreviousTransformIndices; // 0x20(0x10)
	struct TArray<bool> DisabledFlags; // 0x30(0x10)
	struct TArray<struct FSolverCollisionData> Collisions; // 0x40(0x10)
	struct TArray<struct FSolverBreakingData> Breakings; // 0x50(0x10)
	struct TSet<struct FSolverTrailingData> Trailings; // 0x60(0x50)
	float Timestamp; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct Chaos.SolverBreakingData
// Size: 0x30 (Inherited: 0x0)
struct FSolverBreakingData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
	int32_t ParticleIndexMesh; // 0x2C(0x4)
};

// Object: ScriptStruct Chaos.SolverCollisionData
// Size: 0x6C (Inherited: 0x0)
struct FSolverCollisionData
{
	struct FVector Location; // 0x0(0xC)
	struct FVector AccumulatedImpulse; // 0xC(0xC)
	struct FVector Normal; // 0x18(0xC)
	struct FVector Velocity1; // 0x24(0xC)
	struct FVector Velocity2; // 0x30(0xC)
	struct FVector AngularVelocity1; // 0x3C(0xC)
	struct FVector AngularVelocity2; // 0x48(0xC)
	float Mass1; // 0x54(0x4)
	float Mass2; // 0x58(0x4)
	int32_t ParticleIndex; // 0x5C(0x4)
	int32_t LevelsetIndex; // 0x60(0x4)
	int32_t ParticleIndexMesh; // 0x64(0x4)
	int32_t LevelsetIndexMesh; // 0x68(0x4)
};

} // namespace SDK
