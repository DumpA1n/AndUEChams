#include "PrefabricatorRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- APrefabActor::* ----
void APrefabActor::SavePrefab()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabActor", "SavePrefab");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APrefabActor::RandomizeSeed(const struct FRandomStream& InRandom, uint8_t bRecursive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabActor", "RandomizeSeed");
    struct
    {
        struct FRandomStream InRandom;
        uint8_t bRecursive;
    } Parms{};
    Parms.InRandom = (struct FRandomStream)InRandom;
    Parms.bRecursive = (uint8_t)bRecursive;
    this->ProcessEvent(Func, &Parms);
}

void APrefabActor::LoadPrefab()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabActor", "LoadPrefab");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t APrefabActor::IsPrefabOutdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabActor", "IsPrefabOutdated");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPrefabricatorAsset* APrefabActor::GetPrefabAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabActor", "GetPrefabAsset");
    struct
    {
        struct UPrefabricatorAsset* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UActorComponent*> APrefabActor::GetChildComponentsByComponent(struct UActorComponent* ComponentClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabActor", "GetChildComponentsByComponent");
    struct
    {
        struct UActorComponent* ComponentClass;
        struct TArray<struct UActorComponent*> ReturnValue;
    } Parms{};
    Parms.ComponentClass = (struct UActorComponent*)ComponentClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> APrefabActor::GetChildActorsByComponent(struct UActorComponent* ComponentClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabActor", "GetChildActorsByComponent");
    struct
    {
        struct UActorComponent* ComponentClass;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.ComponentClass = (struct UActorComponent*)ComponentClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> APrefabActor::GetChildActorsByClass(struct AActor* ActorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabActor", "GetChildActorsByClass");
    struct
    {
        struct AActor* ActorClass;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.ActorClass = (struct AActor*)ActorClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- APrefabRandomizer::* ----
void APrefabRandomizer::Randomize(int32_t InSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabRandomizer", "Randomize");
    struct
    {
        int32_t InSeed;
    } Parms{};
    Parms.InSeed = (int32_t)InSeed;
    this->ProcessEvent(Func, &Parms);
}

// ---- UPrefabricatorEventListener::* ----
void UPrefabricatorEventListener::PostSpawn(struct APrefabActor* Prefab)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PrefabricatorEventListener", "PostSpawn");
    struct
    {
        struct APrefabActor* Prefab;
    } Parms{};
    Parms.Prefab = (struct APrefabActor*)Prefab;
    this->ProcessEvent(Func, &Parms);
}

// ---- UPrefabricatorBlueprintLibrary::* ----
struct APrefabActor* UPrefabricatorBlueprintLibrary::SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int32_t Seed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "SpawnPrefab");
    struct
    {
        struct UObject* WorldContextObject;
        struct UPrefabricatorAssetInterface* Prefab;
        struct FTransform Transform;
        int32_t Seed;
        struct APrefabActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Prefab = (struct UPrefabricatorAssetInterface*)Prefab;
    Parms.Transform = (struct FTransform)Transform;
    Parms.Seed = (int32_t)Seed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPrefabricatorBlueprintLibrary::RandomizePrefab(struct APrefabActor* PrefabActor, const struct FRandomStream& InRandom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "RandomizePrefab");
    struct
    {
        struct APrefabActor* PrefabActor;
        struct FRandomStream InRandom;
    } Parms{};
    Parms.PrefabActor = (struct APrefabActor*)PrefabActor;
    Parms.InRandom = (struct FRandomStream)InRandom;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPrefabricatorBlueprintLibrary::GetAllAttachedActors(struct AActor* Prefab, struct TArray<struct AActor*>& AttachedActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PrefabricatorBlueprintLibrary", "GetAllAttachedActors");
    struct
    {
        struct AActor* Prefab;
        struct TArray<struct AActor*> AttachedActors;
    } Parms{};
    Parms.Prefab = (struct AActor*)Prefab;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AttachedActors = Parms.AttachedActors;
}

} // namespace SDK
