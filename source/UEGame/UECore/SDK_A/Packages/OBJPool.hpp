#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OBJPool
// Enums: 2
// Structs: 1
// Classes: 10

struct AActor;
enum class ESpawnActorCollisionHandlingMethod : uint8_t;
struct FHitResult;
struct UPrimitiveComponent;
struct UProjectileMovementComponent;
struct USceneComponent;
struct USplineComponent;
struct FPoolSpawnOptions;
struct UPoolSettings;
struct UObjectPool;
struct UPawnPool;
struct UCharacterPool;
struct USharedObjectPool;
struct APooledActor;
struct APooledCharacter;
struct APooledPawn;
struct UPooledProjectile;
struct UPooledSplineProjectile;

// Object: Enum OBJPool.FOBJPoolSpawning
enum class EFOBJPoolSpawning : uint8_t
{
	SpawnSuccessful = 0,
	SpawnFailed = 1,
	FOBJPoolSpawning_MAX = 2
};

// Object: Enum OBJPool.EPoolCollisionType
enum class EPoolCollisionType : uint8_t
{
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	EPoolCollisionType_MAX = 4
};

// Object: ScriptStruct OBJPool.PoolSpawnOptions
// Size: 0x4 (Inherited: 0x0)
struct FPoolSpawnOptions
{
	EPoolCollisionType CollisionType; // 0x0(0x1)
	bool EnableCollision; // 0x1(0x1)
	bool SimulatePhysics; // 0x2(0x1)
	bool ActorTickEnabled; // 0x3(0x1)
};

// Object: Class OBJPool.PoolSettings
// Size: 0x30 (Inherited: 0x28)
struct UPoolSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPoolSettings, "PoolSettings")

	bool ReinitializeInstances; // 0x28(0x1)
	bool InstantiateOnDemand; // 0x29(0x1)
	bool NeverFailDeferredSpawn; // 0x2A(0x1)
	bool KeepOrphanActorsAlive; // 0x2B(0x1)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class OBJPool.ObjectPool
// Size: 0x100 (Inherited: 0xE0)
struct UObjectPool : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UObjectPool, "ObjectPool")

	struct TArray<struct APooledActor*> Pool; // 0xE0(0x10)
	struct APooledActor* TemplateClass; // 0xF0(0x8)
	int32_t PoolSize; // 0xF8(0x4)
	bool AutoInitialize; // 0xFC(0x1)
	bool bAlwaysUseOldestObject; // 0xFD(0x1)
	bool bInstantiateOnDemand; // 0xFE(0x1)
	uint8_t Pad_0xFF[0x1]; // 0xFF(0x1)

	// Object: Function OBJPool.ObjectPool.TryDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3664958
	// Params: [ Num(10) Size(0x70) ]
	static struct APooledActor* TryDeferredSpawnFromPool(struct UObject* WorldContextObject, struct UObjectPool* ObjectPool, struct UObject* PooledClass, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful);

	// Object: Function OBJPool.ObjectPool.ReturnActor
	// Flags: [Final|Native|Public]
	// Offset: 0x3665348
	// Params: [ Num(1) Size(0x8) ]
	void ReturnActor(struct APooledActor* PooledActor);

	// Object: Function OBJPool.ObjectPool.InitializeObjectPoolWithNewTemplateClass
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x36653f0
	// Params: [ Num(2) Size(0xC) ]
	void InitializeObjectPoolWithNewTemplateClass(struct APooledActor* Template, int32_t SizeOfPool);

	// Object: Function OBJPool.ObjectPool.InitializeObjectPool
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x36654e0
	// Params: [ Num(0) Size(0x0) ]
	void InitializeObjectPool();

	// Object: Function OBJPool.ObjectPool.GetSpawnedObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3665088
	// Params: [ Num(1) Size(0x10) ]
	void GetSpawnedObjects(struct TArray<struct APooledActor*>& Spawned);

	// Object: Function OBJPool.ObjectPool.GetSpawnedObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3664f94
	// Params: [ Num(1) Size(0x8) ]
	struct APooledActor* GetSpawnedObject();

	// Object: Function OBJPool.ObjectPool.GetObjectsFromPool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3665148
	// Params: [ Num(2) Size(0x20) ]
	void GetObjectsFromPool(struct TArray<struct APooledActor*>& Spawned, struct TArray<struct APooledActor*>& Inactive);

	// Object: Function OBJPool.ObjectPool.GetObjectArray
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3665264
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct APooledActor*> GetObjectArray();

	// Object: Function OBJPool.ObjectPool.GetInactiveObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3664fc8
	// Params: [ Num(1) Size(0x10) ]
	void GetInactiveObjects(struct TArray<struct APooledActor*>& Inactive);

	// Object: Function OBJPool.ObjectPool.GetInactiveObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3664f60
	// Params: [ Num(1) Size(0x8) ]
	struct APooledActor* GetInactiveObject();

	// Object: Function OBJPool.ObjectPool.FinishDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x36647f4
	// Params: [ Num(4) Size(0x48) ]
	static struct APooledActor* FinishDeferredSpawnFromPool(struct APooledActor* Actor, bool Reconstruct, const struct FTransform& SpawnTransform);

	// Object: Function OBJPool.ObjectPool.EmptyObjectPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3665334
	// Params: [ Num(0) Size(0x0) ]
	void EmptyObjectPool();

	// Object: Function OBJPool.ObjectPool.BeginDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3664c5c
	// Params: [ Num(10) Size(0x70) ]
	static struct APooledActor* BeginDeferredSpawnFromPool(struct UObject* WorldContextObject, struct UObjectPool* ObjectPool, struct UObject* PooledClass, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful);
};

// Object: Class OBJPool.PawnPool
// Size: 0x100 (Inherited: 0xE0)
struct UPawnPool : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPawnPool, "PawnPool")

	struct TArray<struct APooledPawn*> Pool; // 0xE0(0x10)
	struct APooledPawn* TemplateClass; // 0xF0(0x8)
	int32_t PoolSize; // 0xF8(0x4)
	bool AutoInitialize; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)

	// Object: Function OBJPool.PawnPool.ReturnActor
	// Flags: [Final|Native|Public]
	// Offset: 0x3665e68
	// Params: [ Num(1) Size(0x8) ]
	void ReturnActor(struct APooledPawn* PooledActor);

	// Object: Function OBJPool.PawnPool.InitializeObjectPoolWithNewTemplateClass
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3665f10
	// Params: [ Num(2) Size(0xC) ]
	void InitializeObjectPoolWithNewTemplateClass(struct APooledPawn* Template, int32_t SizeOfPool);

	// Object: Function OBJPool.PawnPool.InitializeObjectPool
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3666000
	// Params: [ Num(0) Size(0x0) ]
	void InitializeObjectPool();

	// Object: Function OBJPool.PawnPool.GetSpawnedObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3665ba8
	// Params: [ Num(1) Size(0x10) ]
	void GetSpawnedObjects(struct TArray<struct APooledPawn*>& Spawned);

	// Object: Function OBJPool.PawnPool.GetSpawnedObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3665ab4
	// Params: [ Num(1) Size(0x8) ]
	struct APooledPawn* GetSpawnedObject();

	// Object: Function OBJPool.PawnPool.GetObjectsFromPool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3665c68
	// Params: [ Num(2) Size(0x20) ]
	void GetObjectsFromPool(struct TArray<struct APooledPawn*>& Spawned, struct TArray<struct APooledPawn*>& Inactive);

	// Object: Function OBJPool.PawnPool.GetObjectArray
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3665d84
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct APooledPawn*> GetObjectArray();

	// Object: Function OBJPool.PawnPool.GetInactiveObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3665ae8
	// Params: [ Num(1) Size(0x10) ]
	void GetInactiveObjects(struct TArray<struct APooledPawn*>& Inactive);

	// Object: Function OBJPool.PawnPool.GetInactiveObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3665a80
	// Params: [ Num(1) Size(0x8) ]
	struct APooledPawn* GetInactiveObject();

	// Object: Function OBJPool.PawnPool.FinishDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3665618
	// Params: [ Num(4) Size(0x48) ]
	static struct APooledPawn* FinishDeferredSpawnFromPool(struct APooledPawn* Pawn, bool Reconstruct, const struct FTransform& SpawnTransform);

	// Object: Function OBJPool.PawnPool.EmptyObjectPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3665e54
	// Params: [ Num(0) Size(0x0) ]
	void EmptyObjectPool();

	// Object: Function OBJPool.PawnPool.BeginDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x366577c
	// Params: [ Num(10) Size(0x70) ]
	static struct APooledPawn* BeginDeferredSpawnFromPool(struct UObject* WorldContextObject, struct UPawnPool* ObjectPool, struct UObject* PooledClass, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful);
};

// Object: Class OBJPool.CharacterPool
// Size: 0x100 (Inherited: 0xE0)
struct UCharacterPool : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UCharacterPool, "CharacterPool")

	struct TArray<struct APooledCharacter*> Pool; // 0xE0(0x10)
	struct APooledCharacter* TemplateClass; // 0xF0(0x8)
	int32_t PoolSize; // 0xF8(0x4)
	bool AutoInitialize; // 0xFC(0x1)
	uint8_t Pad_0xFD[0x3]; // 0xFD(0x3)

	// Object: Function OBJPool.CharacterPool.ReturnActor
	// Flags: [Final|Native|Public]
	// Offset: 0x36668a4
	// Params: [ Num(1) Size(0x8) ]
	void ReturnActor(struct APooledCharacter* PooledActor);

	// Object: Function OBJPool.CharacterPool.InitializeObjectPoolWithNewTemplateClass
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x366694c
	// Params: [ Num(2) Size(0xC) ]
	void InitializeObjectPoolWithNewTemplateClass(struct APooledCharacter* Template, int32_t SizeOfPool);

	// Object: Function OBJPool.CharacterPool.InitializeObjectPool
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3666a3c
	// Params: [ Num(0) Size(0x0) ]
	void InitializeObjectPool();

	// Object: Function OBJPool.CharacterPool.GetSpawnedObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x36665e4
	// Params: [ Num(1) Size(0x10) ]
	void GetSpawnedObjects(struct TArray<struct APooledCharacter*>& Spawned);

	// Object: Function OBJPool.CharacterPool.GetSpawnedObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36664f0
	// Params: [ Num(1) Size(0x8) ]
	struct APooledCharacter* GetSpawnedObject();

	// Object: Function OBJPool.CharacterPool.GetObjectsFromPool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x36666a4
	// Params: [ Num(2) Size(0x20) ]
	void GetObjectsFromPool(struct TArray<struct APooledCharacter*>& Spawned, struct TArray<struct APooledCharacter*>& Inactive);

	// Object: Function OBJPool.CharacterPool.GetObjectArray
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36667c0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct APooledCharacter*> GetObjectArray();

	// Object: Function OBJPool.CharacterPool.GetInactiveObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3666524
	// Params: [ Num(1) Size(0x10) ]
	void GetInactiveObjects(struct TArray<struct APooledCharacter*>& Inactive);

	// Object: Function OBJPool.CharacterPool.GetInactiveObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36664bc
	// Params: [ Num(1) Size(0x8) ]
	struct APooledCharacter* GetInactiveObject();

	// Object: Function OBJPool.CharacterPool.FinishDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3666054
	// Params: [ Num(4) Size(0x48) ]
	static struct APooledCharacter* FinishDeferredSpawnFromPool(struct APooledCharacter* Character, bool Reconstruct, const struct FTransform& SpawnTransform);

	// Object: Function OBJPool.CharacterPool.EmptyObjectPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3666890
	// Params: [ Num(0) Size(0x0) ]
	void EmptyObjectPool();

	// Object: Function OBJPool.CharacterPool.BeginDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x36661b8
	// Params: [ Num(10) Size(0x70) ]
	static struct APooledCharacter* BeginDeferredSpawnFromPool(struct UObject* WorldContextObject, struct UCharacterPool* ObjectPool, struct UObject* PooledClass, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful);
};

// Object: Class OBJPool.SharedObjectPool
// Size: 0x148 (Inherited: 0xE0)
struct USharedObjectPool : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(USharedObjectPool, "SharedObjectPool")

	struct TArray<struct APooledActor*> Pool; // 0xE0(0x10)
	bool AutoInitialize; // 0xF0(0x1)
	uint8_t Pad_0xF1[0x7]; // 0xF1(0x7)
	struct TMap<struct APooledActor*, int32_t> TemplateClasses; // 0xF8(0x50)

	// Object: Function OBJPool.SharedObjectPool.ReturnActor
	// Flags: [Final|Native|Public]
	// Offset: 0x366752c
	// Params: [ Num(1) Size(0x8) ]
	void ReturnActor(struct APooledActor* PooledActor);

	// Object: Function OBJPool.SharedObjectPool.InitializeObjectPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36675d4
	// Params: [ Num(0) Size(0x0) ]
	void InitializeObjectPool();

	// Object: Function OBJPool.SharedObjectPool.GetSpawnedObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3667158
	// Params: [ Num(2) Size(0x18) ]
	void GetSpawnedObjects(struct UObject* Class, struct TArray<struct APooledActor*>& Spawned);

	// Object: Function OBJPool.SharedObjectPool.GetSpawnedObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3666fa8
	// Params: [ Num(2) Size(0x10) ]
	struct APooledActor* GetSpawnedObject(struct UObject* Class);

	// Object: Function OBJPool.SharedObjectPool.GetObjectsFromPool
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3667258
	// Params: [ Num(3) Size(0x28) ]
	void GetObjectsFromPool(struct UObject* Class, struct TArray<struct APooledActor*>& Spawned, struct TArray<struct APooledActor*>& Inactive);

	// Object: Function OBJPool.SharedObjectPool.GetObjectArray
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36673b4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct APooledActor*> GetObjectArray();

	// Object: Function OBJPool.SharedObjectPool.GetInactiveObjects
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3667058
	// Params: [ Num(2) Size(0x18) ]
	void GetInactiveObjects(struct UObject* Class, struct TArray<struct APooledActor*>& Inactive);

	// Object: Function OBJPool.SharedObjectPool.GetInactiveObject
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3666ef8
	// Params: [ Num(2) Size(0x10) ]
	struct APooledActor* GetInactiveObject(struct UObject* Class);

	// Object: Function OBJPool.SharedObjectPool.FinishDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3666a90
	// Params: [ Num(4) Size(0x48) ]
	static struct APooledActor* FinishDeferredSpawnFromPool(struct APooledActor* Actor, bool Reconstruct, const struct FTransform& SpawnTransform);

	// Object: Function OBJPool.SharedObjectPool.EmptyObjectPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3667484
	// Params: [ Num(1) Size(0x8) ]
	void EmptyObjectPool(struct UObject* Class);

	// Object: Function OBJPool.SharedObjectPool.BeginDeferredSpawnFromPool
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3666bf4
	// Params: [ Num(10) Size(0x70) ]
	static struct APooledActor* BeginDeferredSpawnFromPool(struct UObject* WorldContextObject, struct USharedObjectPool* SharedPool, struct UObject* Class, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful);
};

// Object: Class OBJPool.PooledActor
// Size: 0x348 (Inherited: 0x300)
struct APooledActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APooledActor, "PooledActor")

	bool Spawned; // 0x300(0x1)
	uint8_t Pad_0x301[0x7]; // 0x301(0x7)
	struct UObjectPool* OwningPool; // 0x308(0x8)
	struct USharedObjectPool* SharedPool; // 0x310(0x8)
	struct FTimerHandle LifeSpanHandle; // 0x318(0x8)
	float SpawnTimeSeconds; // 0x320(0x4)
	float LifeSpanPool; // 0x324(0x4)
	struct FMulticastInlineDelegate OnPoolBeginPlay; // 0x328(0x10)
	struct FMulticastInlineDelegate OnPoolEndPlay; // 0x338(0x10)

	// Object: Function OBJPool.PooledActor.SpawnFromPool
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x36677c0
	// Params: [ Num(3) Size(0x40) ]
	void SpawnFromPool(bool Reconstruct, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform);

	// Object: Function OBJPool.PooledActor.SetLifeSpanPool
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3667694
	// Params: [ Num(1) Size(0x4) ]
	void SetLifeSpanPool(float InLifespan);

	// Object: Function OBJPool.PooledActor.ReturnToPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x36677ac
	// Params: [ Num(0) Size(0x0) ]
	void ReturnToPool();

	// Object: Function OBJPool.PooledActor.GetSharedPool
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3667744
	// Params: [ Num(1) Size(0x8) ]
	struct USharedObjectPool* GetSharedPool();

	// Object: Function OBJPool.PooledActor.GetOwningPool
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3667778
	// Params: [ Num(1) Size(0x8) ]
	struct UObjectPool* GetOwningPool();

	// Object: Function OBJPool.PooledActor.GetLifeSpanPool
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3667658
	// Params: [ Num(1) Size(0x4) ]
	float GetLifeSpanPool();

	// Object: Function OBJPool.PooledActor.EVENT_OnPoolEndPlay
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3667620
	// Params: [ Num(0) Size(0x0) ]
	void EVENT_OnPoolEndPlay();

	// Object: Function OBJPool.PooledActor.EVENT_OnPoolBeginPlay
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x366763c
	// Params: [ Num(0) Size(0x0) ]
	void EVENT_OnPoolBeginPlay();
};

// Object: Class OBJPool.PooledCharacter
// Size: 0x600 (Inherited: 0x5C0)
struct APooledCharacter : ACharacter
{
	DEFINE_UE_CLASS_HELPERS(APooledCharacter, "PooledCharacter")

	struct UCharacterPool* OwningPool; // 0x5B8(0x8)
	bool Spawned; // 0x5C0(0x1)
	struct FTimerHandle LifeSpanHandle; // 0x5C8(0x8)
	float LifeSpanPool; // 0x5D0(0x4)
	uint8_t Pad_0x5D5[0x3]; // 0x5D5(0x3)
	struct FMulticastInlineDelegate OnPoolBeginPlay; // 0x5D8(0x10)
	struct FMulticastInlineDelegate OnPoolEndPlay; // 0x5E8(0x10)
	uint8_t Pad_0x5F8[0x8]; // 0x5F8(0x8)

	// Object: Function OBJPool.PooledCharacter.SpawnFromPool
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3667ac4
	// Params: [ Num(3) Size(0x40) ]
	void SpawnFromPool(bool Reconstruct, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform);

	// Object: Function OBJPool.PooledCharacter.SetLifeSpanPool
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x36679cc
	// Params: [ Num(1) Size(0x4) ]
	void SetLifeSpanPool(float InLifespan);

	// Object: Function OBJPool.PooledCharacter.ReturnToPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3667ab0
	// Params: [ Num(0) Size(0x0) ]
	void ReturnToPool();

	// Object: Function OBJPool.PooledCharacter.GetOwningPool
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3667a7c
	// Params: [ Num(1) Size(0x8) ]
	struct UCharacterPool* GetOwningPool();

	// Object: Function OBJPool.PooledCharacter.GetLifeSpanPool
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3667990
	// Params: [ Num(1) Size(0x4) ]
	float GetLifeSpanPool();

	// Object: Function OBJPool.PooledCharacter.EVENT_OnPoolEndPlay
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3667958
	// Params: [ Num(0) Size(0x0) ]
	void EVENT_OnPoolEndPlay();

	// Object: Function OBJPool.PooledCharacter.EVENT_OnPoolBeginPlay
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3667974
	// Params: [ Num(0) Size(0x0) ]
	void EVENT_OnPoolBeginPlay();
};

// Object: Class OBJPool.PooledPawn
// Size: 0x3B0 (Inherited: 0x370)
struct APooledPawn : APawn
{
	DEFINE_UE_CLASS_HELPERS(APooledPawn, "PooledPawn")

	struct UPawnPool* OwningPool; // 0x370(0x8)
	bool Spawned; // 0x378(0x1)
	uint8_t Pad_0x379[0x7]; // 0x379(0x7)
	struct FTimerHandle LifeSpanHandle; // 0x380(0x8)
	float LifeSpanPool; // 0x388(0x4)
	uint8_t Pad_0x38C[0x4]; // 0x38C(0x4)
	struct FMulticastInlineDelegate OnPoolBeginPlay; // 0x390(0x10)
	struct FMulticastInlineDelegate OnPoolEndPlay; // 0x3A0(0x10)

	// Object: Function OBJPool.PooledPawn.SpawnFromPool
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3667e40
	// Params: [ Num(3) Size(0x40) ]
	void SpawnFromPool(bool Reconstruct, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform);

	// Object: Function OBJPool.PooledPawn.SetLifeSpanPool
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3667d48
	// Params: [ Num(1) Size(0x4) ]
	void SetLifeSpanPool(float InLifespan);

	// Object: Function OBJPool.PooledPawn.ReturnToPool
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3667e2c
	// Params: [ Num(0) Size(0x0) ]
	void ReturnToPool();

	// Object: Function OBJPool.PooledPawn.GetOwningPool
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3667df8
	// Params: [ Num(1) Size(0x8) ]
	struct UPawnPool* GetOwningPool();

	// Object: Function OBJPool.PooledPawn.GetLifeSpanPool
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3667d0c
	// Params: [ Num(1) Size(0x4) ]
	float GetLifeSpanPool();

	// Object: Function OBJPool.PooledPawn.EVENT_OnPoolEndPlay
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3667cd4
	// Params: [ Num(0) Size(0x0) ]
	void EVENT_OnPoolEndPlay();

	// Object: Function OBJPool.PooledPawn.EVENT_OnPoolBeginPlay
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3667cf0
	// Params: [ Num(0) Size(0x0) ]
	void EVENT_OnPoolBeginPlay();
};

// Object: Class OBJPool.PooledProjectile
// Size: 0x178 (Inherited: 0xE0)
struct UPooledProjectile : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPooledProjectile, "PooledProjectile")

	struct UProjectileMovementComponent* Movement; // 0xE0(0x8)
	struct APooledActor* AOwner; // 0xE8(0x8)
	struct APooledPawn* POwner; // 0xF0(0x8)
	struct UPrimitiveComponent* Primitive; // 0xF8(0x8)
	struct FVector Direction; // 0x100(0xC)
	float InitialSpeed; // 0x10C(0x4)
	float MaxSpeed; // 0x110(0x4)
	bool UpdateOnlyIfRendered; // 0x114(0x1)
	uint8_t RotationFollowsVelocity : 1; // 0x115(0x1), Mask(0x1)
	uint8_t InitialVelocityInLocalSpace : 1; // 0x115(0x1), Mask(0x2)
	uint8_t BitPad_0x115_2 : 6; // 0x115(0x1)
	uint8_t Pad_0x116[0x2]; // 0x116(0x2)
	float ProjectileGravityScale; // 0x118(0x4)
	uint8_t ShouldBounce : 1; // 0x11C(0x1), Mask(0x1)
	uint8_t BounceAngleAffectsFriction : 1; // 0x11C(0x1), Mask(0x2)
	uint8_t BitPad_0x11C_2 : 6; // 0x11C(0x1)
	uint8_t Pad_0x11D[0x3]; // 0x11D(0x3)
	float Bounciness; // 0x120(0x4)
	float Friction; // 0x124(0x4)
	float BounceVelocityStopSimulatingThreshold; // 0x128(0x4)
	uint8_t ForceSubStepping : 1; // 0x12C(0x1), Mask(0x1)
	uint8_t BitPad_0x12C_1 : 7; // 0x12C(0x1)
	uint8_t Pad_0x12D[0x3]; // 0x12D(0x3)
	int32_t MaxSimulationIterations; // 0x130(0x4)
	float MaxSimulationTimeStep; // 0x134(0x4)
	uint8_t IsHomingProjectile : 1; // 0x138(0x1), Mask(0x1)
	uint8_t BitPad_0x138_1 : 7; // 0x138(0x1)
	uint8_t Pad_0x139[0x7]; // 0x139(0x7)
	struct FMulticastInlineDelegate OnProjectileBounce; // 0x140(0x10)
	struct FMulticastInlineDelegate OnProjectileStop; // 0x150(0x10)
	struct AActor* HomingTarget; // 0x160(0x8)
	struct TWeakObjectPtr<struct USceneComponent> HomingTargetComponent; // 0x168(0x8)
	float HomingAccelerationMagnitude; // 0x170(0x4)
	uint8_t Pad_0x174[0x4]; // 0x174(0x4)

	// Object: Function OBJPool.PooledProjectile.Shoot
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3668288
	// Params: [ Num(0) Size(0x0) ]
	void Shoot();

	// Object: Function OBJPool.PooledProjectile.ProjectileStop
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x3668168
	// Params: [ Num(1) Size(0x98) ]
	void ProjectileStop(const struct FHitResult& HitResult);

	// Object: Function OBJPool.PooledProjectile.ProjectileBounce
	// Flags: [Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3668050
	// Params: [ Num(2) Size(0xA4) ]
	void ProjectileBounce(const struct FHitResult& HitResult, const struct FVector& Velocity);

	// Object: Function OBJPool.PooledProjectile.GetMovementComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3668238
	// Params: [ Num(1) Size(0x8) ]
	struct UProjectileMovementComponent* GetMovementComponent();

	// Object: Function OBJPool.PooledProjectile.Break
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x366826c
	// Params: [ Num(0) Size(0x0) ]
	void Break();
};

// Object: Class OBJPool.PooledSplineProjectile
// Size: 0x1E0 (Inherited: 0xE0)
struct UPooledSplineProjectile : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UPooledSplineProjectile, "PooledSplineProjectile")

	uint8_t Pad_0xE0[0xA0]; // 0xE0(0xA0)
	struct APooledPawn* POwner; // 0x180(0x8)
	struct APooledActor* AOwner; // 0x188(0x8)
	struct UPrimitiveComponent* Primitive; // 0x190(0x8)
	struct USplineComponent* SplineComponent; // 0x198(0x8)
	float PathWidth; // 0x1A0(0x4)
	float Speed; // 0x1A4(0x4)
	struct TArray<uint8_t> PathCollisionQueryTypes; // 0x1A8(0x10)
	struct TArray<struct AActor*> IgnoredActorsOnCollisionQuery; // 0x1B8(0x10)
	uint8_t CollisionQueryDebugMode; // 0x1C8(0x1)
	uint8_t Pad_0x1C9[0x7]; // 0x1C9(0x7)
	struct FMulticastInlineDelegate OnProjectileHit; // 0x1D0(0x10)

	// Object: Function OBJPool.PooledSplineProjectile.Shoot
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3668334
	// Params: [ Num(0) Size(0x0) ]
	void Shoot();

	// Object: Function OBJPool.PooledSplineProjectile.SetSplineComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3668350
	// Params: [ Num(1) Size(0x8) ]
	void SetSplineComponent(struct USplineComponent* Target);

	// Object: Function OBJPool.PooledSplineProjectile.GetSplineComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x36683f8
	// Params: [ Num(1) Size(0x8) ]
	struct USplineComponent* GetSplineComponent();

	// Object: Function OBJPool.PooledSplineProjectile.Break
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3668318
	// Params: [ Num(0) Size(0x0) ]
	void Break();
};

} // namespace SDK
