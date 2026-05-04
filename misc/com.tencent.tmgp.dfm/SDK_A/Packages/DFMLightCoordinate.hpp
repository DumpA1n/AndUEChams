#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMLightCoordinate
// Enums: 0
// Structs: 0
// Classes: 2

struct UDFMLightCoordinateSubsystem;
struct ADFMLightGroup;

// Object: Class DFMLightCoordinate.DFMLightCoordinateSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UDFMLightCoordinateSubsystem : UWorldSubsystem
{
	struct TMap<struct FName, struct ADFMLightGroup*> ManageredLightGroup; // 0x30(0x50)


	// Object: Function DFMLightCoordinate.DFMLightCoordinateSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf8b2658
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMLightCoordinateSubsystem* Get(struct UObject* WorldContextObject);

	// Object: Function DFMLightCoordinate.DFMLightCoordinateSubsystem.DeactivateLightGroup
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x10929fd0
	// Params: [ Num(1) Size(0x8) ]
	void DeactivateLightGroup(const struct FName& LightGroupName);

	// Object: Function DFMLightCoordinate.DFMLightCoordinateSubsystem.ActivateLightGroupOnly
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xfc235f4
	// Params: [ Num(1) Size(0x8) ]
	void ActivateLightGroupOnly(const struct FName& LightGroupName);

	// Object: Function DFMLightCoordinate.DFMLightCoordinateSubsystem.ActivateLightGroup
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x106df09c
	// Params: [ Num(1) Size(0x8) ]
	void ActivateLightGroup(const struct FName& LightGroupName);
	DEFINE_UE_CLASS_HELPERS(UDFMLightCoordinateSubsystem, "DFMLightCoordinateSubsystem")

};

// Object: Class DFMLightCoordinate.DFMLightGroup
// Size: 0x398 (Inherited: 0x370)
struct ADFMLightGroup : AActor
{
	struct FName LightGroupName; // 0x370(0x8)
	uint8_t Pad_0x378[0x20]; // 0x378(0x20)


	// Object: Function DFMLightCoordinate.DFMLightGroup.DeactivateLightGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ba15c
	// Params: [ Num(0) Size(0x0) ]
	void DeactivateLightGroup();

	// Object: Function DFMLightCoordinate.DFMLightGroup.ActivateLightGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x138ba148
	// Params: [ Num(0) Size(0x0) ]
	void ActivateLightGroup();
	DEFINE_UE_CLASS_HELPERS(ADFMLightGroup, "DFMLightGroup")

};

} // namespace SDK
