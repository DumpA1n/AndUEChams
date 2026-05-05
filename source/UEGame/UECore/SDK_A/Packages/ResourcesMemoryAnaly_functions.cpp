#include "ResourcesMemoryAnaly.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UResourcesMemoryAnalyBPTools
void UResourcesMemoryAnalyBPTools::TickMemoryAnaly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ResourcesMemoryAnalyBPTools", "TickMemoryAnaly");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UResourcesMemoryAnalyBPTools::StopMemoryAnaly(struct FString InSaveFileName, uint8_t bInUpload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ResourcesMemoryAnalyBPTools", "StopMemoryAnaly");
    struct
    {
        struct FString InSaveFileName;
        uint8_t bInUpload;
    } Parms{};
    Parms.InSaveFileName = (struct FString)InSaveFileName;
    Parms.bInUpload = (uint8_t)bInUpload;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UResourcesMemoryAnalyBPTools::PushMemoryDetailInfo(struct FString InMemoryType, int64_t InMemoryBits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ResourcesMemoryAnalyBPTools", "PushMemoryDetailInfo");
    struct
    {
        struct FString InMemoryType;
        int64_t InMemoryBits;
    } Parms{};
    Parms.InMemoryType = (struct FString)InMemoryType;
    Parms.InMemoryBits = (int64_t)InMemoryBits;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UResourcesMemoryAnalyBPTools::IsMemoryAnalying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ResourcesMemoryAnalyBPTools", "IsMemoryAnalying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UResourcesMemoryAnalyBPTools::BeginMemoryAnaly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ResourcesMemoryAnalyBPTools", "BeginMemoryAnaly");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
