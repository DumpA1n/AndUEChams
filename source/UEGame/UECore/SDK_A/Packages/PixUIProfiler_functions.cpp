#include "PixUIProfiler.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPxProfilerMgr
void UPxProfilerMgr::StartProfiler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxProfilerMgr", "StartProfiler");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPxProfilerMgr::PxProfilerCapabilitySwitch(EPxProfilerCapability EPxProfilerCapability, uint8_t bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxProfilerMgr", "PxProfilerCapabilitySwitch");
    struct
    {
        enum EPxProfilerCapability EPxProfilerCapability;
        uint8_t bOpen;
    } Parms{};
    Parms.EPxProfilerCapability = (enum EPxProfilerCapability)EPxProfilerCapability;
    Parms.bOpen = (uint8_t)bOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPxProfilerMgr::Print()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxProfilerMgr", "Print");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UPxProfilerMgr::GetPxProfilerCapability(EPxProfilerCapability EPxProfilerCapability)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxProfilerMgr", "GetPxProfilerCapability");
    struct
    {
        enum EPxProfilerCapability EPxProfilerCapability;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EPxProfilerCapability = (enum EPxProfilerCapability)EPxProfilerCapability;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPxProfilerMgr::EndProfiler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxProfilerMgr", "EndProfiler");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPxProfilerMgr::Check()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxProfilerMgr", "Check");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
