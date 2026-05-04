#include "ReplicationGraph.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AReplicationGraphDebugActor::* ----
void AReplicationGraphDebugActor::ServerStopDebugging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ServerStopDebugging");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AReplicationGraphDebugActor::ServerStartDebugging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ServerStartDebugging");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(struct UObject* Class, int32_t PeriodFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ServerSetPeriodFrameForClass");
    struct
    {
        struct UObject* Class;
        int32_t PeriodFrame;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    Parms.PeriodFrame = (int32_t)PeriodFrame;
    this->ProcessEvent(Func, &Parms);
}

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(struct UObject* Class, float CullDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ServerSetCullDistanceForClass");
    struct
    {
        struct UObject* Class;
        float CullDistance;
    } Parms{};
    Parms.Class = (struct UObject*)Class;
    Parms.CullDistance = (float)CullDistance;
    this->ProcessEvent(Func, &Parms);
}

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ServerSetConditionalActorBreakpoint");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void AReplicationGraphDebugActor::ServerPrintCullDistances()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ServerPrintCullDistances");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ServerPrintAllActorInfo");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
}

void AReplicationGraphDebugActor::ServerCellInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ServerCellInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AReplicationGraphDebugActor::ClientCellInfo(struct FVector CellLocation, struct FVector CellExtent, struct TArray<struct AActor*> Actors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReplicationGraphDebugActor", "ClientCellInfo");
    struct
    {
        struct FVector CellLocation;
        struct FVector CellExtent;
        struct TArray<struct AActor*> Actors;
    } Parms{};
    Parms.CellLocation = (struct FVector)CellLocation;
    Parms.CellExtent = (struct FVector)CellExtent;
    Parms.Actors = (struct TArray<struct AActor*>)Actors;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
