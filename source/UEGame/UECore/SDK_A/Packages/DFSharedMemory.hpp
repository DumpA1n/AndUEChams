#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFSharedMemory
// Enums: 0
// Structs: 0
// Classes: 3

struct UDFSharedMemoryBase;
struct UDFSharedMemoryManager;
struct UDFWindowsSharedMemory;

// Object: Class DFSharedMemory.DFSharedMemoryBase
// Size: 0x28 (Inherited: 0x28)
struct UDFSharedMemoryBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFSharedMemoryBase, "DFSharedMemoryBase")
};

// Object: Class DFSharedMemory.DFSharedMemoryManager
// Size: 0x80 (Inherited: 0x30)
struct UDFSharedMemoryManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFSharedMemoryManager, "DFSharedMemoryManager")

	struct TMap<uint32_t, struct UDFSharedMemoryBase*> DFSharedMemoryPool; // 0x30(0x50)

	// Object: Function DFSharedMemory.DFSharedMemoryManager.WriteSharedMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79e2b24
	// Params: [ Num(2) Size(0x20) ]
	void WriteSharedMemory(struct FString Name, struct FString Data);

	// Object: Function DFSharedMemory.DFSharedMemoryManager.ReadSharedMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79e2a3c
	// Params: [ Num(2) Size(0x20) ]
	struct FString ReadSharedMemory(struct FString Name);

	// Object: Function DFSharedMemory.DFSharedMemoryManager.OpenSharedMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79e2948
	// Params: [ Num(3) Size(0x15) ]
	uint8_t OpenSharedMemory(struct FString Name, int32_t size);

	// Object: Function DFSharedMemory.DFSharedMemoryManager.GetSharedMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79e2894
	// Params: [ Num(2) Size(0x18) ]
	struct UDFSharedMemoryBase* GetSharedMemory(struct FString Name);

	// Object: Function DFSharedMemory.DFSharedMemoryManager.GetIns
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x79e27f0
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFSharedMemoryManager* GetIns(struct UObject* Context);

	// Object: Function DFSharedMemory.DFSharedMemoryManager.CreateSharedMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79e26fc
	// Params: [ Num(3) Size(0x15) ]
	uint8_t CreateSharedMemory(struct FString Name, int32_t size);

	// Object: Function DFSharedMemory.DFSharedMemoryManager.CloseSharedMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79e2650
	// Params: [ Num(1) Size(0x10) ]
	void CloseSharedMemory(struct FString Name);

	// Object: Function DFSharedMemory.DFSharedMemoryManager.ClearPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x79e263c
	// Params: [ Num(0) Size(0x0) ]
	void ClearPool();
};

// Object: Class DFSharedMemory.DFWindowsSharedMemory
// Size: 0x48 (Inherited: 0x28)
struct UDFWindowsSharedMemory : UDFSharedMemoryBase
{
	DEFINE_UE_CLASS_HELPERS(UDFWindowsSharedMemory, "DFWindowsSharedMemory")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)
};

} // namespace SDK
