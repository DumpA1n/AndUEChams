#include "MFBenchmark.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AMFBenchmarkManager
void AMFBenchmarkManager::PerformBenchmark()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBenchmarkManager", "PerformBenchmark");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AMFMarkerDataWriter
void AMFMarkerDataWriter::WriteTestData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMarkerDataWriter", "WriteTestData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFMarkerDataWriter::WriteMarkerData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMarkerDataWriter", "WriteMarkerData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
