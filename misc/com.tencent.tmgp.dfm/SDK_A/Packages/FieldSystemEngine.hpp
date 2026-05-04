#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: FieldSystemEngine
// Enums: 0
// Structs: 0
// Classes: 25

struct AChaosSolverActor;
enum class EFieldCullingOperationType : uint8_t;
enum class EFieldFalloffType : uint8_t;
enum class EFieldOperationType : uint8_t;
enum class EFieldPhysicsType : uint8_t;
enum class EFieldResolutionType : uint8_t;
enum class ESetMaskConditionType : uint8_t;
struct AFieldSystemActor;
struct UFieldSystem;
struct UFieldSystemComponent;
struct UFieldSystemMetaData;
struct UFieldSystemMetaDataIteration;
struct UFieldSystemMetaDataProcessingResolution;
struct UFieldNodeBase;
struct UFieldNodeInt;
struct UFieldNodeFloat;
struct UFieldNodeVector;
struct UUniformInteger;
struct URadialIntMask;
struct UUniformScalar;
struct URadialFalloff;
struct UPlaneFalloff;
struct UBoxFalloff;
struct UNoiseField;
struct UUniformVector;
struct URadialVector;
struct URandomVector;
struct UOperatorField;
struct UToIntegerField;
struct UToFloatField;
struct UCullingField;
struct UReturnResultsTerminal;

// Object: Class FieldSystemEngine.FieldSystemActor
// Size: 0x378 (Inherited: 0x370)
struct AFieldSystemActor : AActor
{
	struct UFieldSystemComponent* FieldSystemComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(AFieldSystemActor, "FieldSystemActor")

};

// Object: Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UFieldSystem, "FieldSystem")

};

// Object: Class FieldSystemEngine.FieldSystemComponent
// Size: 0x5C0 (Inherited: 0x580)
struct UFieldSystemComponent : UPrimitiveComponent
{
	struct UFieldSystem* FieldSystem; // 0x578(0x8)
	uint8_t Pad_0x588[0x8]; // 0x588(0x8)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x590(0x10)
	uint8_t Pad_0x5A0[0x20]; // 0x5A0(0x20)


	// Object: Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178d5be8
	// Params: [ Num(0) Size(0x0) ]
	void ResetFieldSystem();

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x178d5a50
	// Params: [ Num(5) Size(0x24) ]
	void ApplyUniformVectorFalloffForce(uint8_t Enabled, struct FVector Position, struct FVector Direction, float radius, float Magnitude);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x178d58b8
	// Params: [ Num(5) Size(0x1C) ]
	void ApplyStrainField(uint8_t Enabled, struct FVector Position, float radius, float Magnitude, int32_t Iterations);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x178d5794
	// Params: [ Num(3) Size(0x14) ]
	void ApplyStayDynamicField(uint8_t Enabled, struct FVector Position, float radius);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x178d5638
	// Params: [ Num(4) Size(0x18) ]
	void ApplyRadialVectorFalloffForce(uint8_t Enabled, struct FVector Position, float radius, float Magnitude);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x178d5514
	// Params: [ Num(3) Size(0x14) ]
	void ApplyRadialForce(uint8_t Enabled, struct FVector Position, float Magnitude);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178d53b8
	// Params: [ Num(4) Size(0x18) ]
	void ApplyPhysicsField(uint8_t Enabled, EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field);

	// Object: Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x178d5294
	// Params: [ Num(3) Size(0x14) ]
	void ApplyLinearForce(uint8_t Enabled, struct FVector Direction, float Magnitude);

	// Object: Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178d5138
	// Params: [ Num(4) Size(0x18) ]
	void AddFieldCommand(uint8_t Enabled, EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field);
	DEFINE_UE_CLASS_HELPERS(UFieldSystemComponent, "FieldSystemComponent")

};

// Object: Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xF8 (Inherited: 0xF8)
struct UFieldSystemMetaData : UActorComponent
{	DEFINE_UE_CLASS_HELPERS(UFieldSystemMetaData, "FieldSystemMetaData")

};

// Object: Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0x100 (Inherited: 0xF8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData
{
	int32_t Iterations; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)


	// Object: Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d5dd8
	// Params: [ Num(2) Size(0x10) ]
	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);
	DEFINE_UE_CLASS_HELPERS(UFieldSystemMetaDataIteration, "FieldSystemMetaDataIteration")

};

// Object: Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0x100 (Inherited: 0xF8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData
{
	EFieldResolutionType ResolutionType; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)


	// Object: Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d5e8c
	// Params: [ Num(2) Size(0x10) ]
	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType);
	DEFINE_UE_CLASS_HELPERS(UFieldSystemMetaDataProcessingResolution, "FieldSystemMetaDataProcessingResolution")

};

// Object: Class FieldSystemEngine.FieldNodeBase
// Size: 0xF8 (Inherited: 0xF8)
struct UFieldNodeBase : UActorComponent
{	DEFINE_UE_CLASS_HELPERS(UFieldNodeBase, "FieldNodeBase")

};

// Object: Class FieldSystemEngine.FieldNodeInt
// Size: 0xF8 (Inherited: 0xF8)
struct UFieldNodeInt : UFieldNodeBase
{	DEFINE_UE_CLASS_HELPERS(UFieldNodeInt, "FieldNodeInt")

};

// Object: Class FieldSystemEngine.FieldNodeFloat
// Size: 0xF8 (Inherited: 0xF8)
struct UFieldNodeFloat : UFieldNodeBase
{	DEFINE_UE_CLASS_HELPERS(UFieldNodeFloat, "FieldNodeFloat")

};

// Object: Class FieldSystemEngine.FieldNodeVector
// Size: 0xF8 (Inherited: 0xF8)
struct UFieldNodeVector : UFieldNodeBase
{	DEFINE_UE_CLASS_HELPERS(UFieldNodeVector, "FieldNodeVector")

};

// Object: Class FieldSystemEngine.UniformInteger
// Size: 0x100 (Inherited: 0xF8)
struct UUniformInteger : UFieldNodeInt
{
	int32_t Magnitude; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)


	// Object: Function FieldSystemEngine.UniformInteger.SetUniformInteger
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d618c
	// Params: [ Num(2) Size(0x10) ]
	struct UUniformInteger* SetUniformInteger(int32_t Magnitude);
	DEFINE_UE_CLASS_HELPERS(UUniformInteger, "UniformInteger")

};

// Object: Class FieldSystemEngine.RadialIntMask
// Size: 0x118 (Inherited: 0xF8)
struct URadialIntMask : UFieldNodeInt
{
	float radius; // 0xF8(0x4)
	struct FVector Position; // 0xFC(0xC)
	int32_t InteriorValue; // 0x108(0x4)
	int32_t ExteriorValue; // 0x10C(0x4)
	ESetMaskConditionType SetMaskCondition; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)


	// Object: Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d6240
	// Params: [ Num(6) Size(0x28) ]
	struct URadialIntMask* SetRadialIntMask(float radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, ESetMaskConditionType SetMaskConditionIn);
	DEFINE_UE_CLASS_HELPERS(URadialIntMask, "RadialIntMask")

};

// Object: Class FieldSystemEngine.UniformScalar
// Size: 0x100 (Inherited: 0xF8)
struct UUniformScalar : UFieldNodeFloat
{
	float Magnitude; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)


	// Object: Function FieldSystemEngine.UniformScalar.SetUniformScalar
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d63e0
	// Params: [ Num(2) Size(0x10) ]
	struct UUniformScalar* SetUniformScalar(float Magnitude);
	DEFINE_UE_CLASS_HELPERS(UUniformScalar, "UniformScalar")

};

// Object: Class FieldSystemEngine.RadialFalloff
// Size: 0x120 (Inherited: 0xF8)
struct URadialFalloff : UFieldNodeFloat
{
	float Magnitude; // 0xF8(0x4)
	float MinRange; // 0xFC(0x4)
	float MaxRange; // 0x100(0x4)
	float Default; // 0x104(0x4)
	float radius; // 0x108(0x4)
	struct FVector Position; // 0x10C(0xC)
	EFieldFalloffType Falloff; // 0x118(0x1)
	uint8_t Pad_0x119[0x7]; // 0x119(0x7)


	// Object: Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d6494
	// Params: [ Num(8) Size(0x30) ]
	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float radius, struct FVector Position, EFieldFalloffType Falloff);
	DEFINE_UE_CLASS_HELPERS(URadialFalloff, "RadialFalloff")

};

// Object: Class FieldSystemEngine.PlaneFalloff
// Size: 0x128 (Inherited: 0xF8)
struct UPlaneFalloff : UFieldNodeFloat
{
	float Magnitude; // 0xF8(0x4)
	float MinRange; // 0xFC(0x4)
	float MaxRange; // 0x100(0x4)
	float Default; // 0x104(0x4)
	float Distance; // 0x108(0x4)
	struct FVector Position; // 0x10C(0xC)
	struct FVector Normal; // 0x118(0xC)
	EFieldFalloffType Falloff; // 0x124(0x1)
	uint8_t Pad_0x125[0x3]; // 0x125(0x3)


	// Object: Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d66a8
	// Params: [ Num(9) Size(0x38) ]
	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, EFieldFalloffType Falloff);
	DEFINE_UE_CLASS_HELPERS(UPlaneFalloff, "PlaneFalloff")

};

// Object: Class FieldSystemEngine.BoxFalloff
// Size: 0x150 (Inherited: 0xF8)
struct UBoxFalloff : UFieldNodeFloat
{
	float Magnitude; // 0xF8(0x4)
	float MinRange; // 0xFC(0x4)
	float MaxRange; // 0x100(0x4)
	float Default; // 0x104(0x4)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)
	struct FTransform Transform; // 0x110(0x30)
	EFieldFalloffType Falloff; // 0x140(0x1)
	uint8_t Pad_0x141[0xF]; // 0x141(0xF)


	// Object: Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d6900
	// Params: [ Num(7) Size(0x50) ]
	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, EFieldFalloffType Falloff);
	DEFINE_UE_CLASS_HELPERS(UBoxFalloff, "BoxFalloff")

};

// Object: Class FieldSystemEngine.NoiseField
// Size: 0x130 (Inherited: 0xF8)
struct UNoiseField : UFieldNodeFloat
{
	float MinRange; // 0xF8(0x4)
	float MaxRange; // 0xFC(0x4)
	struct FTransform Transform; // 0x100(0x30)


	// Object: Function FieldSystemEngine.NoiseField.SetNoiseField
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d6b10
	// Params: [ Num(4) Size(0x48) ]
	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform);
	DEFINE_UE_CLASS_HELPERS(UNoiseField, "NoiseField")

};

// Object: Class FieldSystemEngine.UniformVector
// Size: 0x108 (Inherited: 0xF8)
struct UUniformVector : UFieldNodeVector
{
	float Magnitude; // 0xF8(0x4)
	struct FVector Direction; // 0xFC(0xC)


	// Object: Function FieldSystemEngine.UniformVector.SetUniformVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d6c70
	// Params: [ Num(3) Size(0x18) ]
	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction);
	DEFINE_UE_CLASS_HELPERS(UUniformVector, "UniformVector")

};

// Object: Class FieldSystemEngine.RadialVector
// Size: 0x108 (Inherited: 0xF8)
struct URadialVector : UFieldNodeVector
{
	float Magnitude; // 0xF8(0x4)
	struct FVector Position; // 0xFC(0xC)


	// Object: Function FieldSystemEngine.RadialVector.SetRadialVector
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d6d60
	// Params: [ Num(3) Size(0x18) ]
	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position);
	DEFINE_UE_CLASS_HELPERS(URadialVector, "RadialVector")

};

// Object: Class FieldSystemEngine.RandomVector
// Size: 0x100 (Inherited: 0xF8)
struct URandomVector : UFieldNodeVector
{
	float Magnitude; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)


	// Object: Function FieldSystemEngine.RandomVector.SetRandomVector
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d6e50
	// Params: [ Num(2) Size(0x10) ]
	struct URandomVector* SetRandomVector(float Magnitude);
	DEFINE_UE_CLASS_HELPERS(URandomVector, "RandomVector")

};

// Object: Class FieldSystemEngine.OperatorField
// Size: 0x118 (Inherited: 0xF8)
struct UOperatorField : UFieldNodeBase
{
	float Magnitude; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)
	struct UFieldNodeBase* RightField; // 0x100(0x8)
	struct UFieldNodeBase* LeftField; // 0x108(0x8)
	EFieldOperationType Operation; // 0x110(0x1)
	uint8_t Pad_0x111[0x7]; // 0x111(0x7)


	// Object: Function FieldSystemEngine.OperatorField.SetOperatorField
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d6f04
	// Params: [ Num(5) Size(0x28) ]
	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, EFieldOperationType Operation);
	DEFINE_UE_CLASS_HELPERS(UOperatorField, "OperatorField")

};

// Object: Class FieldSystemEngine.ToIntegerField
// Size: 0x100 (Inherited: 0xF8)
struct UToIntegerField : UFieldNodeInt
{
	struct UFieldNodeFloat* FloatField; // 0xF8(0x8)


	// Object: Function FieldSystemEngine.ToIntegerField.SetToIntegerField
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d7068
	// Params: [ Num(2) Size(0x10) ]
	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField);
	DEFINE_UE_CLASS_HELPERS(UToIntegerField, "ToIntegerField")

};

// Object: Class FieldSystemEngine.ToFloatField
// Size: 0x100 (Inherited: 0xF8)
struct UToFloatField : UFieldNodeFloat
{
	struct UFieldNodeInt* IntField; // 0xF8(0x8)


	// Object: Function FieldSystemEngine.ToFloatField.SetToFloatField
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d711c
	// Params: [ Num(2) Size(0x10) ]
	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField);
	DEFINE_UE_CLASS_HELPERS(UToFloatField, "ToFloatField")

};

// Object: Class FieldSystemEngine.CullingField
// Size: 0x110 (Inherited: 0xF8)
struct UCullingField : UFieldNodeBase
{
	struct UFieldNodeBase* Culling; // 0xF8(0x8)
	struct UFieldNodeBase* Field; // 0x100(0x8)
	EFieldCullingOperationType Operation; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)


	// Object: Function FieldSystemEngine.CullingField.SetCullingField
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d71d0
	// Params: [ Num(4) Size(0x20) ]
	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, EFieldCullingOperationType Operation);
	DEFINE_UE_CLASS_HELPERS(UCullingField, "CullingField")

};

// Object: Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xF8 (Inherited: 0xF8)
struct UReturnResultsTerminal : UFieldNodeBase
{

	// Object: Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x178d72f8
	// Params: [ Num(1) Size(0x8) ]
	struct UReturnResultsTerminal* SetReturnResultsTerminal();
	DEFINE_UE_CLASS_HELPERS(UReturnResultsTerminal, "ReturnResultsTerminal")

};

} // namespace SDK
