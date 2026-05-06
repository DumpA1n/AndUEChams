#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ActorLayerUtilities
// Enums: 0
// Structs: 1
// Classes: 1

struct AActor;
struct FActorLayer;
struct ULayersBlueprintLibrary;

// Object: ScriptStruct ActorLayerUtilities.ActorLayer
// Size: 0x8 (Inherited: 0x0)
struct FActorLayer
{
	struct FName Name; // 0x0(0x8)
};

// Object: Class ActorLayerUtilities.LayersBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULayersBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(ULayersBlueprintLibrary, "LayersBlueprintLibrary")

	// Object: Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x52104bc
	// Params: [ Num(2) Size(0x10) ]
	static void RemoveActorFromLayer(struct AActor* InActor, const struct FActorLayer& Layer);

	// Object: Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5210684
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct AActor*> GetActors(struct UObject* WorldContextObject, const struct FActorLayer& ActorLayer);

	// Object: Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x52105a0
	// Params: [ Num(2) Size(0x10) ]
	static void AddActorToLayer(struct AActor* InActor, const struct FActorLayer& Layer);
};

} // namespace SDK
