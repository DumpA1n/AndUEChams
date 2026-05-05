#include "PerfSnapshot.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPerfSnapshotBlueprintFunctionLibrary
void UPerfSnapshotBlueprintFunctionLibrary::StopPerfSnapshot(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfSnapshotBlueprintFunctionLibrary", "StopPerfSnapshot");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPerfSnapshotBlueprintFunctionLibrary::StartPerfSnapshot(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfSnapshotBlueprintFunctionLibrary", "StartPerfSnapshot");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
