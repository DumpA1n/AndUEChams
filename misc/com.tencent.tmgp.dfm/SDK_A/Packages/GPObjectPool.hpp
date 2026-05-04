#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPObjectPool
// Enums: 1
// Structs: 1
// Classes: 3

struct UWorld;
struct FGPObjectPoolData;
struct IGPObjectPoolInterface;
struct IGPObjectPoolItemInterface;
struct UGPObjectPoolWorld;

// Object: Enum GPObjectPool.EGPObjectPoolRecycleType
enum class EGPObjectPoolRecycleType : uint8_t
{
	Auto = 0,
	EGPObjectPoolRecycleType_MAX = 1
};

// Object: ScriptStruct GPObjectPool.GPObjectPoolData
// Size: 0x38 (Inherited: 0x0)
struct FGPObjectPoolData
{
	struct TArray<struct UObject*> InPoolObjectList; // 0x0(0x10)
	struct TArray<struct UObject*> InUsingObjectList; // 0x10(0x10)
	uint8_t Pad_0x20[0x18]; // 0x20(0x18)
};

// Object: Class GPObjectPool.GPObjectPoolInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPObjectPoolInterface : IInterface
{

	// Object: Function GPObjectPool.GPObjectPoolInterface.SetMaxUsingObjects
	// Flags: [Native|Public]
	// Offset: 0x8396974
	// Params: [ Num(2) Size(0xC) ]
	void SetMaxUsingObjects(struct UObject* objectClass, int32_t MaxObject);

	// Object: Function GPObjectPool.GPObjectPoolInterface.SetMaxCacheObjects
	// Flags: [Native|Public]
	// Offset: 0x839688c
	// Params: [ Num(2) Size(0xC) ]
	void SetMaxCacheObjects(struct UObject* objectClass, int32_t MaxObject);

	// Object: Function GPObjectPool.GPObjectPoolInterface.Reclaim
	// Flags: [Native|Public]
	// Offset: 0x83967e0
	// Params: [ Num(1) Size(0x8) ]
	void Reclaim(struct UObject* obj);

	// Object: Function GPObjectPool.GPObjectPoolInterface.PreloadObject
	// Flags: [Native|Public]
	// Offset: 0x83966f0
	// Params: [ Num(3) Size(0x11) ]
	uint8_t PreloadObject(struct UWorld* World, struct UObject* objectClass);

	// Object: Function GPObjectPool.GPObjectPoolInterface.Init
	// Flags: [Native|Public]
	// Offset: 0x8396644
	// Params: [ Num(1) Size(0x8) ]
	void Init(struct UWorld* World);

	// Object: Function GPObjectPool.GPObjectPoolInterface.GetMaxUsingObjects
	// Flags: [Native|Public]
	// Offset: 0x8396590
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetMaxUsingObjects(struct UObject* objectClass);

	// Object: Function GPObjectPool.GPObjectPoolInterface.GetMaxCacheObjects
	// Flags: [Native|Public]
	// Offset: 0x83964dc
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetMaxCacheObjects(struct UObject* objectClass);

	// Object: Function GPObjectPool.GPObjectPoolInterface.Dump
	// Flags: [Native|Public]
	// Offset: 0x83964c0
	// Params: [ Num(0) Size(0x0) ]
	void Dump();

	// Object: Function GPObjectPool.GPObjectPoolInterface.CleanUp
	// Flags: [Native|Public]
	// Offset: 0x83964a4
	// Params: [ Num(0) Size(0x0) ]
	void CleanUp();

	// Object: Function GPObjectPool.GPObjectPoolInterface.Acquire
	// Flags: [Native|Public]
	// Offset: 0x839637c
	// Params: [ Num(4) Size(0x20) ]
	struct UObject* Acquire(struct UWorld* World, struct UObject* objectClass, EGPObjectPoolRecycleType RecycleType);
	DEFINE_UE_CLASS_HELPERS(IGPObjectPoolInterface, "GPObjectPoolInterface")

};

// Object: Class GPObjectPool.GPObjectPoolItemInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPObjectPoolItemInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPObjectPoolItemInterface, "GPObjectPoolItemInterface")

};

// Object: Class GPObjectPool.GPObjectPoolWorld
// Size: 0x88 (Inherited: 0x30)
struct UGPObjectPoolWorld : UWorldSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct TMap<struct FName, struct FGPObjectPoolData> ObjectMap; // 0x38(0x50)
	DEFINE_UE_CLASS_HELPERS(UGPObjectPoolWorld, "GPObjectPoolWorld")

};

} // namespace SDK
