#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BpExpansionActions
// Enums: 0
// Structs: 0
// Classes: 1

struct UStaticMesh;
struct UStaticMeshComponent;
struct UBpExpansionActions;

// Object: Class BpExpansionActions.BpExpansionActions
// Size: 0x28 (Inherited: 0x28)
struct UBpExpansionActions : UBlueprintFunctionLibrary
{

	// Object: Function BpExpansionActions.BpExpansionActions.SetStaticMeshCullingScreenSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b0cdf8
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t SetStaticMeshCullingScreenSize(struct UStaticMeshComponent* InStaticMeshComponent, float CullingScreenSize);

	// Object: Function BpExpansionActions.BpExpansionActions.SetStaticMeshCullingDistance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1068d220
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t SetStaticMeshCullingDistance(struct UStaticMeshComponent* InStaticMeshComponent, int32_t CullingDistance);

	// Object: Function BpExpansionActions.BpExpansionActions.GetStaticMeshCullingScreenSize
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7b0cd04
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t GetStaticMeshCullingScreenSize(struct UStaticMesh* InStaticMesh, float& OutCullingScreenSize);

	// Object: Function BpExpansionActions.BpExpansionActions.GetStaticMeshCullingDistance
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7b0cc10
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t GetStaticMeshCullingDistance(struct UStaticMesh* InStaticMesh, int32_t& OutCullingDistance);
	DEFINE_UE_CLASS_HELPERS(UBpExpansionActions, "BpExpansionActions")

};

} // namespace SDK
