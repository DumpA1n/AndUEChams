#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: StandinActor
// Enums: 0
// Structs: 1
// Classes: 2

struct UMaterialInterface;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UTexture2D;
struct FStandinProxyEntry;
struct AStandInMeshActor;
struct UStandinProxyContainer;

// Object: ScriptStruct StandinActor.StandinProxyEntry
// Size: 0x48 (Inherited: 0x0)
struct FStandinProxyEntry
{
	struct TLazyObjectPtr<struct AStandInMeshActor> StandinActor; // 0x0(0x1C)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct UStaticMesh* StaticMesh; // 0x20(0x8)
	struct UMaterialInterface* Material; // 0x28(0x8)
	struct TArray<struct UTexture2D*> Textures; // 0x30(0x10)
	struct FName Key; // 0x40(0x8)
};

// Object: Class StandinActor.StandInMeshActor
// Size: 0x378 (Inherited: 0x370)
struct AStandInMeshActor : AActor
{
	struct UStaticMeshComponent* StaticMeshComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(AStandInMeshActor, "StandInMeshActor")

};

// Object: Class StandinActor.StandinProxyContainer
// Size: 0x38 (Inherited: 0x28)
struct UStandinProxyContainer : UObject
{
	struct TArray<struct FStandinProxyEntry> Standins; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UStandinProxyContainer, "StandinProxyContainer")

};

} // namespace SDK
