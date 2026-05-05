// Bodies for UObject helpers + UFunction dispatch.
// Wire FName::s_NameResolver and UObject::GObjects at startup.

#include "Basic.h"
#include "CoreUObject_classes.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

constexpr int kProcessEventIndex = 69;

void UObject::ProcessEvent(struct UFunction* Function, void* Parms) const
{
    using FN = void(*)(const UObject*, struct UFunction*, void*);
    auto vtbl = *reinterpret_cast<void* const* const*>(this);
    reinterpret_cast<FN>(vtbl[kProcessEventIndex])(this, Function, Parms);
}

class UObject* UObject::FindObjectImpl(const std::string& FullName, EClassCastFlags RequiredType)
{
    if (!GObjects) return nullptr;
    const int32_t N = GObjects->Num();
    for (int32_t i = 0; i < N; ++i)
    {
        UObject* Object = GObjects->GetByIndex(i);
        if (!Object || (reinterpret_cast<uintptr_t>(Object) & 0x7) != 0)
            continue;
        if (Object->HasTypeFlag(RequiredType) && Object->GetFullName() == FullName)
            return Object;
    }
    return nullptr;
}

class UObject* UObject::FindObjectFastImpl(const std::string& Name, EClassCastFlags RequiredType)
{
    if (!GObjects) return nullptr;
    const int32_t N = GObjects->Num();
    for (int32_t i = 0; i < N; ++i)
    {
        UObject* Object = GObjects->GetByIndex(i);
        if (!Object) continue;
        if (Object->HasTypeFlag(RequiredType) && Object->GetName() == Name)
            return Object;
    }
    return nullptr;
}

class UClass* UObject::FindClass(const std::string& ClassFullName)
{
    return FindObject<UClass>(ClassFullName, EClassCastFlags::Class);
}

class UClass* UObject::FindClassFast(const std::string& ClassName)
{
    return FindObjectFast<UClass>(ClassName, EClassCastFlags::Class);
}

std::string UObject::GetName() const
{
    return NamePrivate.ToString();
}

std::string UObject::GetFullName() const
{
    if (!ClassPrivate) return "None";
    std::string Outers;
    for (UObject* o = OuterPrivate; o; o = o->OuterPrivate)
        Outers = o->GetName() + "." + Outers;
    std::string r = ClassPrivate->GetName();
    r += " ";
    r += Outers;
    r += GetName();
    return r;
}

bool UObject::HasTypeFlag(EClassCastFlags TypeFlags) const
{
    if (!ClassPrivate) return false;
    auto bits = static_cast<uint64_t>(TypeFlags);
    if (bits == 0) return true; // EClassCastFlags::None
    return (static_cast<uint64_t>(ClassPrivate->CastFlags) & bits) != 0;
}

bool UObject::IsA(EClassCastFlags TypeFlags) const
{
    return HasTypeFlag(TypeFlags);
}

bool UObject::IsA(class UClass* cmp) const
{
    if (!cmp || !ClassPrivate) return false;
    for (const struct UStruct* s = ClassPrivate; s; s = s->SuperStruct)
    {
        if (s == cmp) return true;
    }
    return false;
}

bool UObject::IsDefaultObject() const
{
    // EObjectFlags::ClassDefaultObject = 0x10
    return (ObjectFlags & 0x10u) != 0;
}

void UObject::TraverseSupers(const std::function<bool(const UObject*)>& Callback) const
{
    const struct UStruct* Clss = nullptr;
    if (HasTypeFlag(EClassCastFlags::Class))
        Clss = static_cast<const struct UStruct*>(static_cast<const UClass*>(static_cast<const UObject*>(this)));
    else if (ClassPrivate)
        Clss = ClassPrivate;
    while (Clss)
    {
        if (!Callback(Clss)) break;
        Clss = Clss->SuperStruct;
    }
}

struct UFunction* UClass::GetFunction(const std::string& ClassName, const std::string& FuncName) const
{
    for (const struct UStruct* Clss = this; Clss; Clss = Clss->SuperStruct)
    {
        if (Clss->GetName() != ClassName) continue;
        for (struct UField* Field = Clss->Children; Field; Field = Field->Next)
        {
            if (Field->HasTypeFlag(EClassCastFlags::Function) && Field->GetName() == FuncName)
                return static_cast<struct UFunction*>(Field);
        }
    }
    return nullptr;
}

// UObject
void UObject::ExecuteUbergraph(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Object", "ExecuteUbergraph");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
