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
// Size: 0x308 (Inherited: 0x300)
struct ACableActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACableActor, "CableActor")

	struct UCableComponent* CableComponent; // 0x300(0x8)
};

// Object: Class CableComponent.CableComponent
// Size: 0x750 (Inherited: 0x6D0)
struct UCableComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UCableComponent, "CableComponent")

	bool bAttachStart; // 0x6C1(0x1)
	bool bAttachEnd; // 0x6C2(0x1)
	struct FComponentReference AttachEndTo; // 0x6C8(0x28)
	struct FName AttachEndToSocketName; // 0x6F0(0x8)
	struct FVector EndLocation; // 0x6F8(0xC)
	float CableLength; // 0x704(0x4)
	int32_t NumSegments; // 0x708(0x4)
	float SubstepTime; // 0x70C(0x4)
	int32_t SolverIterations; // 0x710(0x4)
	bool bEnableStiffness; // 0x714(0x1)
	bool bUseSubstepping; // 0x715(0x1)
	bool bSkipCableUpdateWhenNotVisible; // 0x716(0x1)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x717(0x1)
	bool bEnableCollision; // 0x718(0x1)
	float CollisionFriction; // 0x71C(0x4)
	struct FVector CableForce; // 0x720(0xC)
	float CableGravityScale; // 0x72C(0x4)
	float CableWidth; // 0x730(0x4)
	int32_t NumSides; // 0x734(0x4)
	float TileMaterial; // 0x738(0x4)
	uint8_t Pad_0x743[0xD]; // 0x743(0xD)

	// Object: Function CableComponent.CableComponent.SetAttachEndToComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f7ce70
	// Params: [ Num(2) Size(0x10) ]
	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName);

	// Object: Function CableComponent.CableComponent.SetAttachEndTo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3f7cd4c
	// Params: [ Num(3) Size(0x18) ]
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName);

	// Object: Function CableComponent.CableComponent.GetCableParticleLocations
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f7cc24
	// Params: [ Num(1) Size(0x10) ]
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations);

	// Object: Function CableComponent.CableComponent.GetAttachedComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f7cce4
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetAttachedComponent();

	// Object: Function CableComponent.CableComponent.GetAttachedActor
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3f7cd18
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetAttachedActor();
};

} // namespace SDK
