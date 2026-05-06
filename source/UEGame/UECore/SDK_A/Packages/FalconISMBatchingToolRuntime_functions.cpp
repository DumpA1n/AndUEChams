#include "FalconISMBatchingToolRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UFalconISMBatchingToolLibrary
void UFalconISMBatchingToolLibrary::UnbatchAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "UnbatchAll");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UFalconISMBatchingToolLibrary::ShouldBatch(const struct FFalconISMBatchingParam& Param, struct UStaticMeshComponent* SMC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "ShouldBatch");
    struct
    {
        struct FFalconISMBatchingParam Param;
        struct UStaticMeshComponent* SMC;
        bool ReturnValue;
    } Parms{};
    Parms.Param = (struct FFalconISMBatchingParam)Param;
    Parms.SMC = (struct UStaticMeshComponent*)SMC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UFalconISMBatchingToolLibrary::IsBlueprintActorWithLogic(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "IsBlueprintActorWithLogic");
    struct
    {
        struct AActor* Actor;
        bool ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UFalconISMBatchingToolLibrary::IsBatched(struct UStaticMeshComponent* SMC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "IsBatched");
    struct
    {
        struct UStaticMeshComponent* SMC;
        bool ReturnValue;
    } Parms{};
    Parms.SMC = (struct UStaticMeshComponent*)SMC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UFalconISMBatchingSettings* UFalconISMBatchingToolLibrary::GetSettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "GetSettings");
    struct
    {
        struct UFalconISMBatchingSettings* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UStaticMeshComponent*> UFalconISMBatchingToolLibrary::GetOriginalSMCs(struct UInstancedStaticMeshComponent* ISMC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "GetOriginalSMCs");
    struct
    {
        struct UInstancedStaticMeshComponent* ISMC;
        struct TArray<struct UStaticMeshComponent*> ReturnValue;
    } Parms{};
    Parms.ISMC = (struct UInstancedStaticMeshComponent*)ISMC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UFalconISMBatchingToolLibrary::CleanupLevel(struct ULevel* Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "CleanupLevel");
    struct
    {
        struct ULevel* Level;
        bool ReturnValue;
    } Parms{};
    Parms.Level = (struct ULevel*)Level;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UFalconISMBatchingToolLibrary::Cleanup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "Cleanup");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFalconISMBatchingToolLibrary::BatchAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconISMBatchingToolLibrary", "BatchAll");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
