#include "UE4Singletons.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UComponentBookKeeper::* ----
void UComponentBookKeeper::RegisterAutoSpawnComponents(struct AActor* Class, const struct TSet<struct UActorComponent*>& RegDatas, uint8_t bPersistent, uint8_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ComponentBookKeeper", "RegisterAutoSpawnComponents");
    struct
    {
        struct AActor* Class;
        struct TSet<struct UActorComponent*> RegDatas;
        uint8_t bPersistent;
        uint8_t Flags;
    } Parms{};
    Parms.Class = (struct AActor*)Class;
    Parms.RegDatas = (struct TSet<struct UActorComponent*>)RegDatas;
    Parms.bPersistent = (uint8_t)bPersistent;
    Parms.Flags = (uint8_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UComponentBookKeeper::RegisterAutoSpawnComponent(struct AActor* Class, struct UActorComponent* RegClass, uint8_t bPersistent, uint8_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ComponentBookKeeper", "RegisterAutoSpawnComponent");
    struct
    {
        struct AActor* Class;
        struct UActorComponent* RegClass;
        uint8_t bPersistent;
        uint8_t Flags;
    } Parms{};
    Parms.Class = (struct AActor*)Class;
    Parms.RegClass = (struct UActorComponent*)RegClass;
    Parms.bPersistent = (uint8_t)bPersistent;
    Parms.Flags = (uint8_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UComponentBookKeeper::EnableAdd(uint8_t bNewEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ComponentBookKeeper", "EnableAdd");
    struct
    {
        uint8_t bNewEnabled;
    } Parms{};
    Parms.bNewEnabled = (uint8_t)bNewEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UComponentRegistryLib::* ----
struct TArray<struct UActorComponent*> UComponentRegistryLib::AllComponent(struct UObject* WorldContextObj, struct UActorComponent* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ComponentRegistryLib", "AllComponent");
    struct
    {
        struct UObject* WorldContextObj;
        struct UActorComponent* Class;
        struct TArray<struct UActorComponent*> ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.Class = (struct UActorComponent*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UObjectRegistrys::* ----
void UObjectRegistrys::SetObject(struct UObject* Object, struct UObject* StopClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ObjectRegistrys", "SetObject");
    struct
    {
        struct UObject* Object;
        struct UObject* StopClass;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.StopClass = (struct UObject*)StopClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UObject* UObjectRegistrys::GetObject(struct UObject* WorldContextObj, struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ObjectRegistrys", "GetObject");
    struct
    {
        struct UObject* WorldContextObj;
        struct UObject* Class;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UObject*> UObjectRegistrys::AllObject(struct UObject* WorldContextObj, struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ObjectRegistrys", "AllObject");
    struct
    {
        struct UObject* WorldContextObj;
        struct UObject* Class;
        struct TArray<struct UObject*> ReturnValue;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UE4Singletons::* ----
struct UObject* UE4Singletons::RegisterAsSingletonImpl(struct UObject* Object, struct UObject* WorldContextObject, uint8_t bReplaceExist, struct UObject* InNativeClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("E4Singletons", "RegisterAsSingletonImpl");
    struct
    {
        struct UObject* Object;
        struct UObject* WorldContextObject;
        uint8_t bReplaceExist;
        struct UObject* InNativeClass;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bReplaceExist = (uint8_t)bReplaceExist;
    Parms.InNativeClass = (struct UObject*)InNativeClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UE4Singletons::GetSingletonImpl(struct UObject* Class, struct UObject* WorldContextObject, uint8_t bCreate, struct UObject* RegClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("E4Singletons", "GetSingletonImpl");
    struct
    {
        struct UObject* Class;
        struct UObject* WorldContextObject;
        uint8_t bCreate;
        struct UObject* RegClass;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bCreate = (uint8_t)bCreate;
    Parms.RegClass = (struct UObject*)RegClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
