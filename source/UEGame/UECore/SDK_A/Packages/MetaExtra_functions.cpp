#include "MetaExtra.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMTIOTestData3
void UMTIOTestData3::TriggerContainerPassTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MTIOTestData3", "TriggerContainerPassTest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMTIOTestData3::PrintInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTIOTestData3", "PrintInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMTIOTestData3::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MTIOTestData3", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMTIOTestData3::CombinedTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MTIOTestData3", "CombinedTest");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
