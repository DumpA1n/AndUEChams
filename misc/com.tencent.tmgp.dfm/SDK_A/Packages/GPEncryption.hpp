#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPEncryption
// Enums: 0
// Structs: 2
// Classes: 5

struct AActor;
struct USceneComponent;
struct FGPEncryptionKey;
struct FGPEncryptionInfo;
struct UGPEncryptionLibrary;
struct UGPEncryptionSubsystem;
struct UGPEncryptionCapsuleComponent;
struct IGPEncryptionInterface;
struct IGPEncryptionActiveInterface;

// Object: ScriptStruct GPEncryption.GPEncryptionKey
// Size: 0x10 (Inherited: 0x0)
struct FGPEncryptionKey
{
	struct UObject* Object; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
};

// Object: ScriptStruct GPEncryption.GPEncryptionInfo
// Size: 0x18 (Inherited: 0x0)
struct FGPEncryptionInfo
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: Class GPEncryption.GPEncryptionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGPEncryptionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function GPEncryption.GPEncryptionLibrary.SetEnableEncryptionBits
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1067fea4
	// Params: [ Num(1) Size(0x8) ]
	static void SetEnableEncryptionBits(int64_t Bits);
	DEFINE_UE_CLASS_HELPERS(UGPEncryptionLibrary, "GPEncryptionLibrary")

};

// Object: Class GPEncryption.GPEncryptionSubsystem
// Size: 0x120 (Inherited: 0x30)
struct UGPEncryptionSubsystem : UWorldSubsystem
{
	struct TMap<struct FGPEncryptionKey, struct FGPEncryptionInfo> EncryptionInfos; // 0x30(0x50)
	struct TSet<struct AActor*> Actors; // 0x80(0x50)
	struct TSet<struct USceneComponent*> PendingAddComponents; // 0xD0(0x50)
	DEFINE_UE_CLASS_HELPERS(UGPEncryptionSubsystem, "GPEncryptionSubsystem")

};

// Object: Class GPEncryption.GPEncryptionCapsuleComponent
// Size: 0x5A0 (Inherited: 0x5A0)
struct UGPEncryptionCapsuleComponent : UCapsuleComponent
{	DEFINE_UE_CLASS_HELPERS(UGPEncryptionCapsuleComponent, "GPEncryptionCapsuleComponent")

};

// Object: Class GPEncryption.GPEncryptionInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPEncryptionInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPEncryptionInterface, "GPEncryptionInterface")

};

// Object: Class GPEncryption.GPEncryptionActiveInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPEncryptionActiveInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPEncryptionActiveInterface, "GPEncryptionActiveInterface")

};

} // namespace SDK
