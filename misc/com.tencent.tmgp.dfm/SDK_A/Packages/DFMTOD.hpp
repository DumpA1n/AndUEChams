#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMTOD
// Enums: 0
// Structs: 2
// Classes: 2

struct AActor;
struct UBlueprint;
struct UStaticMesh;
struct UStaticMeshComponent;
struct FBlueprintAndOffset;
struct FMeshAndOffset;
struct ULightingDebuggerComponent;
struct ALightingDebuggerActor;

// Object: ScriptStruct DFMTOD.BlueprintAndOffset
// Size: 0x58 (Inherited: 0x0)
struct FBlueprintAndOffset
{
	struct TSoftObjectPtr<UBlueprint> Blueprint; // 0x0(0x28)
	struct FVector offset; // 0x28(0xC)
	struct FVector Scale; // 0x34(0xC)
	struct FRotator Rotator; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct AActor* BlueprintActor; // 0x50(0x8)
};

// Object: ScriptStruct DFMTOD.MeshAndOffset
// Size: 0x58 (Inherited: 0x0)
struct FMeshAndOffset
{
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x0(0x28)
	struct FVector offset; // 0x28(0xC)
	struct FVector Scale; // 0x34(0xC)
	struct FRotator Rotator; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct UStaticMeshComponent* MeshComponent; // 0x50(0x8)
};

// Object: Class DFMTOD.LightingDebuggerComponent
// Size: 0x270 (Inherited: 0x240)
struct ULightingDebuggerComponent : USceneComponent
{
	struct TArray<struct FBlueprintAndOffset> BlueprintAndOffset; // 0x240(0x10)
	struct TArray<struct FMeshAndOffset> MeshAndOffset; // 0x250(0x10)
	uint8_t bEnableTick : 1; // 0x260(0x1), Mask(0x1)
	uint8_t BitPad_0x260_1 : 7; // 0x260(0x1)
	uint8_t bNeedRebuild : 1; // 0x261(0x1), Mask(0x1)
	uint8_t BitPad_0x261_1 : 7; // 0x261(0x1)
	uint8_t Pad_0x262[0xE]; // 0x262(0xE)
	DEFINE_UE_CLASS_HELPERS(ULightingDebuggerComponent, "LightingDebuggerComponent")

};

// Object: Class DFMTOD.LightingDebuggerActor
// Size: 0x378 (Inherited: 0x370)
struct ALightingDebuggerActor : AActor
{
	struct ULightingDebuggerComponent* Component; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(ALightingDebuggerActor, "LightingDebuggerActor")

};

} // namespace SDK
