#include "OBJPool.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UObjectPool
struct APooledActor* UObjectPool::TryDeferredSpawnFromPool(struct UObject* WorldContextObject, struct UObjectPool* ObjectPool, struct UObject* PooledClass, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ObjectPool", "TryDeferredSpawnFromPool");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObjectPool* ObjectPool;
        struct UObject* PooledClass;
        struct FPoolSpawnOptions SpawnOptions;
        struct FTransform SpawnTransform;
        enum ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
        struct AActor* Owner;
        bool Reconstruct;
        bool SpawnSuccessful;
        struct APooledActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ObjectPool = (struct UObjectPool*)ObjectPool;
    Parms.PooledClass = (struct UObject*)PooledClass;
    Parms.SpawnOptions = (struct FPoolSpawnOptions)SpawnOptions;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    Parms.CollisionHandlingOverride = (enum ESpawnActorCollisionHandlingMethod)CollisionHandlingOverride;
    Parms.Owner = (struct AActor*)Owner;
    Parms.Reconstruct = (bool)Reconstruct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SpawnSuccessful = Parms.SpawnSuccessful;
    return Parms.ReturnValue;
}

void UObjectPool::ReturnActor(struct APooledActor* PooledActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "ReturnActor");
    struct
    {
        struct APooledActor* PooledActor;
    } Parms{};
    Parms.PooledActor = (struct APooledActor*)PooledActor;
    this->ProcessEvent(Func, &Parms);
}

void UObjectPool::InitializeObjectPoolWithNewTemplateClass(struct APooledActor* Template, int32_t SizeOfPool)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "InitializeObjectPoolWithNewTemplateClass");
    struct
    {
        struct APooledActor* Template;
        int32_t SizeOfPool;
    } Parms{};
    Parms.Template = (struct APooledActor*)Template;
    Parms.SizeOfPool = (int32_t)SizeOfPool;
    this->ProcessEvent(Func, &Parms);
}

void UObjectPool::InitializeObjectPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "InitializeObjectPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UObjectPool::GetSpawnedObjects(struct TArray<struct APooledActor*>& Spawned)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "GetSpawnedObjects");
    struct
    {
        struct TArray<struct APooledActor*> Spawned;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Spawned = Parms.Spawned;
}

struct APooledActor* UObjectPool::GetSpawnedObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "GetSpawnedObject");
    struct
    {
        struct APooledActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UObjectPool::GetObjectsFromPool(struct TArray<struct APooledActor*>& Spawned, struct TArray<struct APooledActor*>& Inactive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "GetObjectsFromPool");
    struct
    {
        struct TArray<struct APooledActor*> Spawned;
        struct TArray<struct APooledActor*> Inactive;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Spawned = Parms.Spawned;
    Inactive = Parms.Inactive;
}

struct TArray<struct APooledActor*> UObjectPool::GetObjectArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "GetObjectArray");
    struct
    {
        struct TArray<struct APooledActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UObjectPool::GetInactiveObjects(struct TArray<struct APooledActor*>& Inactive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "GetInactiveObjects");
    struct
    {
        struct TArray<struct APooledActor*> Inactive;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Inactive = Parms.Inactive;
}

struct APooledActor* UObjectPool::GetInactiveObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "GetInactiveObject");
    struct
    {
        struct APooledActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APooledActor* UObjectPool::FinishDeferredSpawnFromPool(struct APooledActor* Actor, bool Reconstruct, const struct FTransform& SpawnTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ObjectPool", "FinishDeferredSpawnFromPool");
    struct
    {
        struct APooledActor* Actor;
        bool Reconstruct;
        struct FTransform SpawnTransform;
        struct APooledActor* ReturnValue;
    } Parms{};
    Parms.Actor = (struct APooledActor*)Actor;
    Parms.Reconstruct = (bool)Reconstruct;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UObjectPool::EmptyObjectPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ObjectPool", "EmptyObjectPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct APooledActor* UObjectPool::BeginDeferredSpawnFromPool(struct UObject* WorldContextObject, struct UObjectPool* ObjectPool, struct UObject* PooledClass, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ObjectPool", "BeginDeferredSpawnFromPool");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObjectPool* ObjectPool;
        struct UObject* PooledClass;
        struct FPoolSpawnOptions SpawnOptions;
        struct FTransform SpawnTransform;
        enum ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
        struct AActor* Owner;
        bool Reconstruct;
        bool SpawnSuccessful;
        struct APooledActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ObjectPool = (struct UObjectPool*)ObjectPool;
    Parms.PooledClass = (struct UObject*)PooledClass;
    Parms.SpawnOptions = (struct FPoolSpawnOptions)SpawnOptions;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    Parms.CollisionHandlingOverride = (enum ESpawnActorCollisionHandlingMethod)CollisionHandlingOverride;
    Parms.Owner = (struct AActor*)Owner;
    Parms.Reconstruct = (bool)Reconstruct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SpawnSuccessful = Parms.SpawnSuccessful;
    return Parms.ReturnValue;
}

// UPawnPool
void UPawnPool::ReturnActor(struct APooledPawn* PooledActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "ReturnActor");
    struct
    {
        struct APooledPawn* PooledActor;
    } Parms{};
    Parms.PooledActor = (struct APooledPawn*)PooledActor;
    this->ProcessEvent(Func, &Parms);
}

void UPawnPool::InitializeObjectPoolWithNewTemplateClass(struct APooledPawn* Template, int32_t SizeOfPool)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "InitializeObjectPoolWithNewTemplateClass");
    struct
    {
        struct APooledPawn* Template;
        int32_t SizeOfPool;
    } Parms{};
    Parms.Template = (struct APooledPawn*)Template;
    Parms.SizeOfPool = (int32_t)SizeOfPool;
    this->ProcessEvent(Func, &Parms);
}

void UPawnPool::InitializeObjectPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "InitializeObjectPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPawnPool::GetSpawnedObjects(struct TArray<struct APooledPawn*>& Spawned)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "GetSpawnedObjects");
    struct
    {
        struct TArray<struct APooledPawn*> Spawned;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Spawned = Parms.Spawned;
}

struct APooledPawn* UPawnPool::GetSpawnedObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "GetSpawnedObject");
    struct
    {
        struct APooledPawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPawnPool::GetObjectsFromPool(struct TArray<struct APooledPawn*>& Spawned, struct TArray<struct APooledPawn*>& Inactive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "GetObjectsFromPool");
    struct
    {
        struct TArray<struct APooledPawn*> Spawned;
        struct TArray<struct APooledPawn*> Inactive;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Spawned = Parms.Spawned;
    Inactive = Parms.Inactive;
}

struct TArray<struct APooledPawn*> UPawnPool::GetObjectArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "GetObjectArray");
    struct
    {
        struct TArray<struct APooledPawn*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPawnPool::GetInactiveObjects(struct TArray<struct APooledPawn*>& Inactive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "GetInactiveObjects");
    struct
    {
        struct TArray<struct APooledPawn*> Inactive;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Inactive = Parms.Inactive;
}

struct APooledPawn* UPawnPool::GetInactiveObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "GetInactiveObject");
    struct
    {
        struct APooledPawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APooledPawn* UPawnPool::FinishDeferredSpawnFromPool(struct APooledPawn* Pawn, bool Reconstruct, const struct FTransform& SpawnTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PawnPool", "FinishDeferredSpawnFromPool");
    struct
    {
        struct APooledPawn* Pawn;
        bool Reconstruct;
        struct FTransform SpawnTransform;
        struct APooledPawn* ReturnValue;
    } Parms{};
    Parms.Pawn = (struct APooledPawn*)Pawn;
    Parms.Reconstruct = (bool)Reconstruct;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPawnPool::EmptyObjectPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnPool", "EmptyObjectPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct APooledPawn* UPawnPool::BeginDeferredSpawnFromPool(struct UObject* WorldContextObject, struct UPawnPool* ObjectPool, struct UObject* PooledClass, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PawnPool", "BeginDeferredSpawnFromPool");
    struct
    {
        struct UObject* WorldContextObject;
        struct UPawnPool* ObjectPool;
        struct UObject* PooledClass;
        struct FPoolSpawnOptions SpawnOptions;
        struct FTransform SpawnTransform;
        enum ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
        struct AActor* Owner;
        bool Reconstruct;
        bool SpawnSuccessful;
        struct APooledPawn* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ObjectPool = (struct UPawnPool*)ObjectPool;
    Parms.PooledClass = (struct UObject*)PooledClass;
    Parms.SpawnOptions = (struct FPoolSpawnOptions)SpawnOptions;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    Parms.CollisionHandlingOverride = (enum ESpawnActorCollisionHandlingMethod)CollisionHandlingOverride;
    Parms.Owner = (struct AActor*)Owner;
    Parms.Reconstruct = (bool)Reconstruct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SpawnSuccessful = Parms.SpawnSuccessful;
    return Parms.ReturnValue;
}

// UCharacterPool
void UCharacterPool::ReturnActor(struct APooledCharacter* PooledActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "ReturnActor");
    struct
    {
        struct APooledCharacter* PooledActor;
    } Parms{};
    Parms.PooledActor = (struct APooledCharacter*)PooledActor;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterPool::InitializeObjectPoolWithNewTemplateClass(struct APooledCharacter* Template, int32_t SizeOfPool)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "InitializeObjectPoolWithNewTemplateClass");
    struct
    {
        struct APooledCharacter* Template;
        int32_t SizeOfPool;
    } Parms{};
    Parms.Template = (struct APooledCharacter*)Template;
    Parms.SizeOfPool = (int32_t)SizeOfPool;
    this->ProcessEvent(Func, &Parms);
}

void UCharacterPool::InitializeObjectPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "InitializeObjectPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCharacterPool::GetSpawnedObjects(struct TArray<struct APooledCharacter*>& Spawned)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "GetSpawnedObjects");
    struct
    {
        struct TArray<struct APooledCharacter*> Spawned;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Spawned = Parms.Spawned;
}

struct APooledCharacter* UCharacterPool::GetSpawnedObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "GetSpawnedObject");
    struct
    {
        struct APooledCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCharacterPool::GetObjectsFromPool(struct TArray<struct APooledCharacter*>& Spawned, struct TArray<struct APooledCharacter*>& Inactive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "GetObjectsFromPool");
    struct
    {
        struct TArray<struct APooledCharacter*> Spawned;
        struct TArray<struct APooledCharacter*> Inactive;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Spawned = Parms.Spawned;
    Inactive = Parms.Inactive;
}

struct TArray<struct APooledCharacter*> UCharacterPool::GetObjectArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "GetObjectArray");
    struct
    {
        struct TArray<struct APooledCharacter*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCharacterPool::GetInactiveObjects(struct TArray<struct APooledCharacter*>& Inactive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "GetInactiveObjects");
    struct
    {
        struct TArray<struct APooledCharacter*> Inactive;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Inactive = Parms.Inactive;
}

struct APooledCharacter* UCharacterPool::GetInactiveObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "GetInactiveObject");
    struct
    {
        struct APooledCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APooledCharacter* UCharacterPool::FinishDeferredSpawnFromPool(struct APooledCharacter* Character, bool Reconstruct, const struct FTransform& SpawnTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CharacterPool", "FinishDeferredSpawnFromPool");
    struct
    {
        struct APooledCharacter* Character;
        bool Reconstruct;
        struct FTransform SpawnTransform;
        struct APooledCharacter* ReturnValue;
    } Parms{};
    Parms.Character = (struct APooledCharacter*)Character;
    Parms.Reconstruct = (bool)Reconstruct;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCharacterPool::EmptyObjectPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CharacterPool", "EmptyObjectPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct APooledCharacter* UCharacterPool::BeginDeferredSpawnFromPool(struct UObject* WorldContextObject, struct UCharacterPool* ObjectPool, struct UObject* PooledClass, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CharacterPool", "BeginDeferredSpawnFromPool");
    struct
    {
        struct UObject* WorldContextObject;
        struct UCharacterPool* ObjectPool;
        struct UObject* PooledClass;
        struct FPoolSpawnOptions SpawnOptions;
        struct FTransform SpawnTransform;
        enum ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
        struct AActor* Owner;
        bool Reconstruct;
        bool SpawnSuccessful;
        struct APooledCharacter* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ObjectPool = (struct UCharacterPool*)ObjectPool;
    Parms.PooledClass = (struct UObject*)PooledClass;
    Parms.SpawnOptions = (struct FPoolSpawnOptions)SpawnOptions;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    Parms.CollisionHandlingOverride = (enum ESpawnActorCollisionHandlingMethod)CollisionHandlingOverride;
    Parms.Owner = (struct AActor*)Owner;
    Parms.Reconstruct = (bool)Reconstruct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SpawnSuccessful = Parms.SpawnSuccessful;
    return Parms.ReturnValue;
}

// USharedObjectPool
void USharedObjectPool::ReturnActor(struct APooledActor* PooledActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "ReturnActor");
    struct
    {
        struct APooledActor* PooledActor;
    } Parms{};
    Parms.PooledActor = (struct APooledActor*)PooledActor;
    this->ProcessEvent(Func, &Parms);
}

void USharedObjectPool::InitializeObjectPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "InitializeObjectPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USharedObjectPool::GetSpawnedObjects(struct UObject* Class, struct TArray<struct APooledActor*>& Spawned)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "GetSpawnedObjects");
    struct
    {
        struct UObject* Class;
        struct TArray<struct APooledActor*> Spawned;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    this->ProcessEvent(Func, &Parms);
    Spawned = Parms.Spawned;
}

struct APooledActor* USharedObjectPool::GetSpawnedObject(struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "GetSpawnedObject");
    struct
    {
        struct UObject* Class;
        struct APooledActor* ReturnValue;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USharedObjectPool::GetObjectsFromPool(struct UObject* Class, struct TArray<struct APooledActor*>& Spawned, struct TArray<struct APooledActor*>& Inactive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "GetObjectsFromPool");
    struct
    {
        struct UObject* Class;
        struct TArray<struct APooledActor*> Spawned;
        struct TArray<struct APooledActor*> Inactive;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    this->ProcessEvent(Func, &Parms);
    Spawned = Parms.Spawned;
    Inactive = Parms.Inactive;
}

struct TArray<struct APooledActor*> USharedObjectPool::GetObjectArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "GetObjectArray");
    struct
    {
        struct TArray<struct APooledActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USharedObjectPool::GetInactiveObjects(struct UObject* Class, struct TArray<struct APooledActor*>& Inactive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "GetInactiveObjects");
    struct
    {
        struct UObject* Class;
        struct TArray<struct APooledActor*> Inactive;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    this->ProcessEvent(Func, &Parms);
    Inactive = Parms.Inactive;
}

struct APooledActor* USharedObjectPool::GetInactiveObject(struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "GetInactiveObject");
    struct
    {
        struct UObject* Class;
        struct APooledActor* ReturnValue;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct APooledActor* USharedObjectPool::FinishDeferredSpawnFromPool(struct APooledActor* Actor, bool Reconstruct, const struct FTransform& SpawnTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SharedObjectPool", "FinishDeferredSpawnFromPool");
    struct
    {
        struct APooledActor* Actor;
        bool Reconstruct;
        struct FTransform SpawnTransform;
        struct APooledActor* ReturnValue;
    } Parms{};
    Parms.Actor = (struct APooledActor*)Actor;
    Parms.Reconstruct = (bool)Reconstruct;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USharedObjectPool::EmptyObjectPool(struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SharedObjectPool", "EmptyObjectPool");
    struct
    {
        struct UObject* Class;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    this->ProcessEvent(Func, &Parms);
}

struct APooledActor* USharedObjectPool::BeginDeferredSpawnFromPool(struct UObject* WorldContextObject, struct USharedObjectPool* SharedPool, struct UObject* Class, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, struct AActor* Owner, bool Reconstruct, bool& SpawnSuccessful)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SharedObjectPool", "BeginDeferredSpawnFromPool");
    struct
    {
        struct UObject* WorldContextObject;
        struct USharedObjectPool* SharedPool;
        struct UObject* Class;
        struct FPoolSpawnOptions SpawnOptions;
        struct FTransform SpawnTransform;
        enum ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
        struct AActor* Owner;
        bool Reconstruct;
        bool SpawnSuccessful;
        struct APooledActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SharedPool = (struct USharedObjectPool*)SharedPool;
    Parms.Class = (struct UObject*)Class;
    Parms.SpawnOptions = (struct FPoolSpawnOptions)SpawnOptions;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    Parms.CollisionHandlingOverride = (enum ESpawnActorCollisionHandlingMethod)CollisionHandlingOverride;
    Parms.Owner = (struct AActor*)Owner;
    Parms.Reconstruct = (bool)Reconstruct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SpawnSuccessful = Parms.SpawnSuccessful;
    return Parms.ReturnValue;
}

// APooledActor
void APooledActor::SpawnFromPool(bool Reconstruct, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledActor", "SpawnFromPool");
    struct
    {
        bool Reconstruct;
        struct FPoolSpawnOptions SpawnOptions;
        struct FTransform SpawnTransform;
    } Parms{};
    Parms.Reconstruct = (bool)Reconstruct;
    Parms.SpawnOptions = (struct FPoolSpawnOptions)SpawnOptions;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    this->ProcessEvent(Func, &Parms);
}

void APooledActor::SetLifeSpanPool(float InLifespan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledActor", "SetLifeSpanPool");
    struct
    {
        float InLifespan;
    } Parms{};
    Parms.InLifespan = (float)InLifespan;
    this->ProcessEvent(Func, &Parms);
}

void APooledActor::ReturnToPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledActor", "ReturnToPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct USharedObjectPool* APooledActor::GetSharedPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledActor", "GetSharedPool");
    struct
    {
        struct USharedObjectPool* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObjectPool* APooledActor::GetOwningPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledActor", "GetOwningPool");
    struct
    {
        struct UObjectPool* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float APooledActor::GetLifeSpanPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledActor", "GetLifeSpanPool");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APooledActor::EVENT_OnPoolEndPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledActor", "EVENT_OnPoolEndPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APooledActor::EVENT_OnPoolBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledActor", "EVENT_OnPoolBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// APooledCharacter
void APooledCharacter::SpawnFromPool(bool Reconstruct, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledCharacter", "SpawnFromPool");
    struct
    {
        bool Reconstruct;
        struct FPoolSpawnOptions SpawnOptions;
        struct FTransform SpawnTransform;
    } Parms{};
    Parms.Reconstruct = (bool)Reconstruct;
    Parms.SpawnOptions = (struct FPoolSpawnOptions)SpawnOptions;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    this->ProcessEvent(Func, &Parms);
}

void APooledCharacter::SetLifeSpanPool(float InLifespan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledCharacter", "SetLifeSpanPool");
    struct
    {
        float InLifespan;
    } Parms{};
    Parms.InLifespan = (float)InLifespan;
    this->ProcessEvent(Func, &Parms);
}

void APooledCharacter::ReturnToPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledCharacter", "ReturnToPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UCharacterPool* APooledCharacter::GetOwningPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledCharacter", "GetOwningPool");
    struct
    {
        struct UCharacterPool* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float APooledCharacter::GetLifeSpanPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledCharacter", "GetLifeSpanPool");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APooledCharacter::EVENT_OnPoolEndPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledCharacter", "EVENT_OnPoolEndPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APooledCharacter::EVENT_OnPoolBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledCharacter", "EVENT_OnPoolBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// APooledPawn
void APooledPawn::SpawnFromPool(bool Reconstruct, const struct FPoolSpawnOptions& SpawnOptions, const struct FTransform& SpawnTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledPawn", "SpawnFromPool");
    struct
    {
        bool Reconstruct;
        struct FPoolSpawnOptions SpawnOptions;
        struct FTransform SpawnTransform;
    } Parms{};
    Parms.Reconstruct = (bool)Reconstruct;
    Parms.SpawnOptions = (struct FPoolSpawnOptions)SpawnOptions;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    this->ProcessEvent(Func, &Parms);
}

void APooledPawn::SetLifeSpanPool(float InLifespan)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledPawn", "SetLifeSpanPool");
    struct
    {
        float InLifespan;
    } Parms{};
    Parms.InLifespan = (float)InLifespan;
    this->ProcessEvent(Func, &Parms);
}

void APooledPawn::ReturnToPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledPawn", "ReturnToPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UPawnPool* APooledPawn::GetOwningPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledPawn", "GetOwningPool");
    struct
    {
        struct UPawnPool* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float APooledPawn::GetLifeSpanPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledPawn", "GetLifeSpanPool");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void APooledPawn::EVENT_OnPoolEndPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledPawn", "EVENT_OnPoolEndPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APooledPawn::EVENT_OnPoolBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledPawn", "EVENT_OnPoolBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPooledProjectile
void UPooledProjectile::Shoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledProjectile", "Shoot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPooledProjectile::ProjectileStop(const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledProjectile", "ProjectileStop");
    struct
    {
        struct FHitResult HitResult;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
}

void UPooledProjectile::ProjectileBounce(const struct FHitResult& HitResult, const struct FVector& Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledProjectile", "ProjectileBounce");
    struct
    {
        struct FHitResult HitResult;
        struct FVector Velocity;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    Parms.Velocity = (struct FVector)Velocity;
    this->ProcessEvent(Func, &Parms);
}

struct UProjectileMovementComponent* UPooledProjectile::GetMovementComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledProjectile", "GetMovementComponent");
    struct
    {
        struct UProjectileMovementComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPooledProjectile::Break()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledProjectile", "Break");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPooledSplineProjectile
void UPooledSplineProjectile::Shoot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledSplineProjectile", "Shoot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPooledSplineProjectile::SetSplineComponent(struct USplineComponent* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledSplineProjectile", "SetSplineComponent");
    struct
    {
        struct USplineComponent* Target;
    } Parms{};
    Parms.Target = (struct USplineComponent*)Target;
    this->ProcessEvent(Func, &Parms);
}

struct USplineComponent* UPooledSplineProjectile::GetSplineComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledSplineProjectile", "GetSplineComponent");
    struct
    {
        struct USplineComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPooledSplineProjectile::Break()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PooledSplineProjectile", "Break");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
