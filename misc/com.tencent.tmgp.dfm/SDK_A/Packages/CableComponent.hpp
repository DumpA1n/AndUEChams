#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: CableComponent
// Enums: 0
// Structs: 0
// Classes: 2

struct AActor;
struct USceneComponent;
struct ACableActor;
struct UCableComponent;

// Object: Class CableComponent.CableActor
// Size: 0x378 (Inherited: 0x370)
struct ACableActor : AActor
{
	struct UCableComponent* CableComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(ACableActor, "CableActor")

};

// Object: Class CableComponent.CableComponent
// Size: 0x770 (Inherited: 0x6F0)
struct UCableComponent : UMeshComponent
{
	uint8_t bAttachStart : 1; // 0x6E1(0x1), Mask(0x1)
	uint8_t bAttachEnd : 1; // 0x6E2(0x1), Mask(0x1)
	struct FComponentReference AttachEndTo; // 0x6E8(0x28)
	struct FName AttachEndToSocketName; // 0x710(0x8)
	struct FVector EndLocation; // 0x718(0xC)
	float CableLength; // 0x724(0x4)
	int32_t NumSegments; // 0x728(0x4)
	float subStepTime; // 0x72C(0x4)
	int32_t SolverIterations; // 0x730(0x4)
	uint8_t bEnableStiffness : 1; // 0x734(0x1), Mask(0x1)
	uint8_t bEnableCollision : 1; // 0x735(0x1), Mask(0x1)
	float CollisionFriction; // 0x738(0x4)
	struct FVector CableForce; // 0x73C(0xC)
	float CableGravityScale; // 0x748(0x4)
	float CableWidth; // 0x74C(0x4)
	int32_t NumSides; // 0x750(0x4)
	float TileMaterial; // 0x754(0x4)
	uint8_t BitPad_0x75C_4 : 4; // 0x75C(0x1)
	uint8_t Pad_0x75D[0x13]; // 0x75D(0x13)


	// Object: Function CableComponent.CableComponent.SetAttachEndToComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e7c900
	// Params: [ Num(2) Size(0x10) ]
	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName);

	// Object: Function CableComponent.CableComponent.SetAttachEndTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e7c7e8
	// Params: [ Num(3) Size(0x18) ]
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName);

	// Object: Function CableComponent.CableComponent.GetCableParticleLocations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e7c72c
	// Params: [ Num(1) Size(0x10) ]
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations);

	// Object: Function CableComponent.CableComponent.GetAttachedComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e7c6f8
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetAttachedComponent();

	// Object: Function CableComponent.CableComponent.GetAttachedActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8e7c6c4
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetAttachedActor();
	DEFINE_UE_CLASS_HELPERS(UCableComponent, "CableComponent")

};

} // namespace SDK
