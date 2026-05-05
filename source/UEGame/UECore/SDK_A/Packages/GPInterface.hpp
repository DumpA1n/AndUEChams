#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: GPInterface
// Enums: 0
// Structs: 1
// Classes: 3

struct APawn;
struct UPhysicsCapsuleComponent;
struct FConvexVolumeData;
struct IDFMPlayerCharacterInterface;
struct IGPCharacterIGetVehiclenterface;
struct IGPPlayerCameraManagerInterface;

// Object: ScriptStruct GPInterface.ConvexVolumeData
// Size: 0x20 (Inherited: 0x0)
struct FConvexVolumeData
{
	struct TArray<struct FVector> PlaneNormals; // 0x0(0x10)
	struct TArray<float> PlaneDistances; // 0x10(0x10)
};

// Object: Class GPInterface.DFMPlayerCharacterInterface
// Size: 0x28 (Inherited: 0x28)
struct IDFMPlayerCharacterInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IDFMPlayerCharacterInterface, "DFMPlayerCharacterInterface")

	// Object: Function GPInterface.DFMPlayerCharacterInterface.GetCharacterPhysicsCapsuleComponent
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x864a9e0
	// Params: [ Num(1) Size(0x8) ]
	struct UPhysicsCapsuleComponent* GetCharacterPhysicsCapsuleComponent();
};

// Object: Class GPInterface.GPCharacterIGetVehiclenterface
// Size: 0x28 (Inherited: 0x28)
struct IGPCharacterIGetVehiclenterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGPCharacterIGetVehiclenterface, "GPCharacterIGetVehiclenterface")

	// Object: Function GPInterface.GPCharacterIGetVehiclenterface.GetCharacterVehicle
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x864ab20
	// Params: [ Num(1) Size(0x8) ]
	struct APawn* GetCharacterVehicle();
};

// Object: Class GPInterface.GPPlayerCameraManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPPlayerCameraManagerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGPPlayerCameraManagerInterface, "GPPlayerCameraManagerInterface")

	// Object: Function GPInterface.GPPlayerCameraManagerInterface.GetFrustumVolume
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x864ab64
	// Params: [ Num(1) Size(0x20) ]
	struct FConvexVolumeData GetFrustumVolume();
};

} // namespace SDK
