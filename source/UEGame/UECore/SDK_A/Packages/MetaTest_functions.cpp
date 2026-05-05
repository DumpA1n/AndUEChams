#include "MetaTest.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMetaTestManager
void UMetaTestManager::StubCallCountPlusOne(struct FString Func_)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "StubCallCountPlusOne");
    struct
    {
        struct FString Func_;
    } Parms{};
    Parms.Func_ = (struct FString)Func_;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::StopMetaTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "StopMetaTest");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::StartMetaTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "StartMetaTest");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::ShowTypeExpectStat(struct FString Title)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "ShowTypeExpectStat");
    struct
    {
        struct FString Title;
    } Parms{};
    Parms.Title = (struct FString)Title;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::ShowExpectStat(struct FString Title)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "ShowExpectStat");
    struct
    {
        struct FString Title;
    } Parms{};
    Parms.Title = (struct FString)Title;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::ResetTypeExpectCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "ResetTypeExpectCount");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::ResetExpectCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "ResetExpectCount");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::ReportStubTestResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "ReportStubTestResult");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::ReportRTTITestResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "ReportRTTITestResult");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::RegisterStub(struct FString Func_)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "RegisterStub");
    struct
    {
        struct FString Func_;
    } Parms{};
    Parms.Func_ = (struct FString)Func_;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::PerfTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "PerfTest");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "Init");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TMap<struct FString, struct FMTExpectStat> UMetaTestManager::GetTypeExpectStatMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "GetTypeExpectStatMap");
    struct
    {
        struct TMap<struct FString, struct FMTExpectStat> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FString, struct FMTExpectStat> UMetaTestManager::GetExpectStatMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "GetExpectStatMap");
    struct
    {
        struct TMap<struct FString, struct FMTExpectStat> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMTExpectStat UMetaTestManager::GetExpectStat(struct FString Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "GetExpectStat");
    struct
    {
        struct FString Type;
        struct FMTExpectStat ReturnValue;
    } Parms{};
    Parms.Type = (struct FString)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMetaTestManager::AddTypeExpectStat(struct FString Property, struct FString TypeName, uint8_t bPassed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "AddTypeExpectStat");
    struct
    {
        struct FString Property;
        struct FString TypeName;
        uint8_t bPassed;
    } Parms{};
    Parms.Property = (struct FString)Property;
    Parms.TypeName = (struct FString)TypeName;
    Parms.bPassed = (uint8_t)bPassed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaTestManager::AddExpectStat(struct FString Type, uint8_t bPassed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaTestManager", "AddExpectStat");
    struct
    {
        struct FString Type;
        uint8_t bPassed;
    } Parms{};
    Parms.Type = (struct FString)Type;
    Parms.bPassed = (uint8_t)bPassed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
