#include "DFCharacterProfiler.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFCharacterProfilerManager
struct UDFCharacterProfilerManager* UDFCharacterProfilerManager::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFCharacterProfilerManager", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFCharacterProfilerManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFCharacterProfilerManager::EnableAutoProfiling(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCharacterProfilerManager", "EnableAutoProfiling");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFCharacterProfilerManager::DumpResults()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCharacterProfilerManager", "DumpResults");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFCharacterProfilerManager::ClearCurData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCharacterProfilerManager", "ClearCurData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
