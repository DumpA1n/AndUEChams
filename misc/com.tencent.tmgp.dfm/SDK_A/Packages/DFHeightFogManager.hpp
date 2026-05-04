#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFHeightFogManager
// Enums: 0
// Structs: 0
// Classes: 2

struct ADFHeightFogActor;
struct UDFHeightFogSubsystem;

// Object: Class DFHeightFogManager.DFHeightFogActor
// Size: 0x388 (Inherited: 0x370)
struct ADFHeightFogActor : AActor
{
	struct FName HeightFogName; // 0x370(0x8)
	struct FMulticastInlineDelegate OnToggleActiveHeightFog; // 0x378(0x10)
	DEFINE_UE_CLASS_HELPERS(ADFHeightFogActor, "DFHeightFogActor")

};

// Object: Class DFHeightFogManager.DFHeightFogSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UDFHeightFogSubsystem : UWorldSubsystem
{
	struct TMap<struct FName, struct ADFHeightFogActor*> ManagedHeightFogs; // 0x30(0x50)


	// Object: Function DFHeightFogManager.DFHeightFogSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf705b64
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFHeightFogSubsystem* Get(struct UObject* WorldContextObject);

	// Object: Function DFHeightFogManager.DFHeightFogSubsystem.DeactivateHeightFog
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf76f870
	// Params: [ Num(1) Size(0x8) ]
	void DeactivateHeightFog(const struct FName& InFogName);

	// Object: Function DFHeightFogManager.DFHeightFogSubsystem.ActivateHeightFog
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf8f28e0
	// Params: [ Num(1) Size(0x8) ]
	void ActivateHeightFog(const struct FName& InFogName);
	DEFINE_UE_CLASS_HELPERS(UDFHeightFogSubsystem, "DFHeightFogSubsystem")

};

} // namespace SDK
