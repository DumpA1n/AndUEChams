#include "MFFlowField.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFFlowFieldSubsystem
struct UMFFlowFieldSubsystem* UMFFlowFieldSubsystem::GetMFFlowFieldSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFFlowFieldSubsystem", "GetMFFlowFieldSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMFFlowFieldSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMFFlowFieldFindPathResult UMFFlowFieldSubsystem::FindPathForAgentIndex(int32_t AgentIndex, const struct FVector& Start, const struct FVector& End, struct TArray<struct FMFFlowFieldPathNode>& OutPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldSubsystem", "FindPathForAgentIndex");
    struct
    {
        int32_t AgentIndex;
        struct FVector Start;
        struct FVector End;
        struct TArray<struct FMFFlowFieldPathNode> OutPath;
        enum EMFFlowFieldFindPathResult ReturnValue;
    } Parms{};
    Parms.AgentIndex = (int32_t)AgentIndex;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    OutPath = Parms.OutPath;
    return Parms.ReturnValue;
}

EMFFlowFieldFindPathResult UMFFlowFieldSubsystem::FindPathForAgent(struct AActor* Actor, const struct FVector& Start, const struct FVector& End, struct TArray<struct FMFFlowFieldPathNode>& OutPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldSubsystem", "FindPathForAgent");
    struct
    {
        struct AActor* Actor;
        struct FVector Start;
        struct FVector End;
        struct TArray<struct FMFFlowFieldPathNode> OutPath;
        enum EMFFlowFieldFindPathResult ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    OutPath = Parms.OutPath;
    return Parms.ReturnValue;
}

// AMFFlowFieldTestActor
void AMFFlowFieldTestActor::StopBalls(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "StopBalls");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AMFFlowFieldTestActor::SpawnTestAgent(int32_t AgentClassIndex, const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "SpawnTestAgent");
    struct
    {
        int32_t AgentClassIndex;
        struct FVector Location;
    } Parms{};
    Parms.AgentClassIndex = (int32_t)AgentClassIndex;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AMFFlowFieldTestActor::SpawnRandomTestAgent(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "SpawnRandomTestAgent");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AMFFlowFieldTestActor::ServerStopBalls(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "ServerStopBalls");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AMFFlowFieldTestActor::ServerSpawnTestAgent(int32_t AgentClassIndex, struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "ServerSpawnTestAgent");
    struct
    {
        int32_t AgentClassIndex;
        struct FVector Location;
    } Parms{};
    Parms.AgentClassIndex = (int32_t)AgentClassIndex;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AMFFlowFieldTestActor::ServerRemoveAllBalls()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "ServerRemoveAllBalls");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFFlowFieldTestActor::ServerMoveBalls(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "ServerMoveBalls");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AMFFlowFieldTestActor::RemoveAllBalls()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "RemoveAllBalls");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFFlowFieldTestActor::MoveBalls(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestActor", "MoveBalls");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

// UMFFlowFieldTestHUD
struct AMFFlowFieldTestActor* UMFFlowFieldTestHUD::GetTestActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFFlowFieldTestHUD", "GetTestActor");
    struct
    {
        struct AMFFlowFieldTestActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
