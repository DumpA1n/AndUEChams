#include "DFSharedMemory.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFSharedMemoryManager
void UDFSharedMemoryManager::WriteSharedMemory(struct FString Name, struct FString Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSharedMemoryManager", "WriteSharedMemory");
    struct
    {
        struct FString Name;
        struct FString Data;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.Data = (struct FString)Data;
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFSharedMemoryManager::ReadSharedMemory(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSharedMemoryManager", "ReadSharedMemory");
    struct
    {
        struct FString Name;
        struct FString ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFSharedMemoryManager::OpenSharedMemory(struct FString Name, int32_t size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSharedMemoryManager", "OpenSharedMemory");
    struct
    {
        struct FString Name;
        int32_t size;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.size = (int32_t)size;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFSharedMemoryBase* UDFSharedMemoryManager::GetSharedMemory(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSharedMemoryManager", "GetSharedMemory");
    struct
    {
        struct FString Name;
        struct UDFSharedMemoryBase* ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFSharedMemoryManager* UDFSharedMemoryManager::GetIns(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFSharedMemoryManager", "GetIns");
    struct
    {
        struct UObject* Context;
        struct UDFSharedMemoryManager* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFSharedMemoryManager::CreateSharedMemory(struct FString Name, int32_t size)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSharedMemoryManager", "CreateSharedMemory");
    struct
    {
        struct FString Name;
        int32_t size;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    Parms.size = (int32_t)size;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFSharedMemoryManager::CloseSharedMemory(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSharedMemoryManager", "CloseSharedMemory");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UDFSharedMemoryManager::ClearPool()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSharedMemoryManager", "ClearPool");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
