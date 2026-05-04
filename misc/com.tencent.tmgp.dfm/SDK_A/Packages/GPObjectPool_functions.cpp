#include "GPObjectPool.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- IGPObjectPoolInterface::* ----
void IGPObjectPoolInterface::SetMaxUsingObjects(struct UObject* objectClass, int32_t MaxObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "SetMaxUsingObjects");
    struct
    {
        struct UObject* objectClass;
        int32_t MaxObject;
    } Parms{};
    Parms.objectClass = (struct UObject*)objectClass;
    Parms.MaxObject = (int32_t)MaxObject;
    this->ProcessEvent(Func, &Parms);
}

void IGPObjectPoolInterface::SetMaxCacheObjects(struct UObject* objectClass, int32_t MaxObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "SetMaxCacheObjects");
    struct
    {
        struct UObject* objectClass;
        int32_t MaxObject;
    } Parms{};
    Parms.objectClass = (struct UObject*)objectClass;
    Parms.MaxObject = (int32_t)MaxObject;
    this->ProcessEvent(Func, &Parms);
}

void IGPObjectPoolInterface::Reclaim(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "Reclaim");
    struct
    {
        struct UObject* obj;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    this->ProcessEvent(Func, &Parms);
}

uint8_t IGPObjectPoolInterface::PreloadObject(struct UWorld* World, struct UObject* objectClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "PreloadObject");
    struct
    {
        struct UWorld* World;
        struct UObject* objectClass;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.objectClass = (struct UObject*)objectClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPObjectPoolInterface::Init(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "Init");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

int32_t IGPObjectPoolInterface::GetMaxUsingObjects(struct UObject* objectClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "GetMaxUsingObjects");
    struct
    {
        struct UObject* objectClass;
        int32_t ReturnValue;
    } Parms{};
    Parms.objectClass = (struct UObject*)objectClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IGPObjectPoolInterface::GetMaxCacheObjects(struct UObject* objectClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "GetMaxCacheObjects");
    struct
    {
        struct UObject* objectClass;
        int32_t ReturnValue;
    } Parms{};
    Parms.objectClass = (struct UObject*)objectClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGPObjectPoolInterface::Dump()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "Dump");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGPObjectPoolInterface::CleanUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "CleanUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UObject* IGPObjectPoolInterface::Acquire(struct UWorld* World, struct UObject* objectClass, EGPObjectPoolRecycleType RecycleType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPObjectPoolInterface", "Acquire");
    struct
    {
        struct UWorld* World;
        struct UObject* objectClass;
        enum EGPObjectPoolRecycleType RecycleType;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.objectClass = (struct UObject*)objectClass;
    Parms.RecycleType = (enum EGPObjectPoolRecycleType)RecycleType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
