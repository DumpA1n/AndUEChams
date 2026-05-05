#include "AsyncTraceSystem.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPAsyncTraceSystem
void UGPAsyncTraceSystem::WaitForAsyncTraceTasksInPostPhysics()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "WaitForAsyncTraceTasksInPostPhysics");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::WaitForAsyncTraceTasksInLastDemotable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "WaitForAsyncTraceTasksInLastDemotable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::UnRegisterTickFunction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "UnRegisterTickFunction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::StartAyncWork()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "StartAyncWork");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPAsyncTraceSystem::ShouldProjectileUseAsyncTrace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "ShouldProjectileUseAsyncTrace");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAsyncTraceSystem::SetTickFunctionEanble(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "SetTickFunctionEanble");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::RunAllTaskInGT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "RunAllTaskInGT");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::RegisterTickFunction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "RegisterTickFunction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::EndAyncWorkInPostPhysics()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "EndAyncWorkInPostPhysics");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::EndAyncWorkInLastDemotable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "EndAyncWorkInLastDemotable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::CancelGPAyncTrace(uint32_t Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "CancelGPAyncTrace");
    struct
    {
        uint32_t Handle;
    } Parms{};
    Parms.Handle = (uint32_t)Handle;
    this->ProcessEvent(Func, &Parms);
}

void UGPAsyncTraceSystem::CancelAyncPredictProjectilePath(uint32_t Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAsyncTraceSystem", "CancelAyncPredictProjectilePath");
    struct
    {
        uint32_t Handle;
    } Parms{};
    Parms.Handle = (uint32_t)Handle;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
