#include "GameplayTasks.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGameplayTasksComponent
void UGameplayTasksComponent::OnRep_SimulatedTasks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTasksComponent", "OnRep_SimulatedTasks");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct UGameplayTask* Task, uint8_t Priority, struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameplayTasksComponent", "K2_RunGameplayTask");
    struct
    {
        struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
        struct UGameplayTask* Task;
        uint8_t Priority;
        struct TArray<struct UGameplayTaskResource*> AdditionalRequiredResources;
        struct TArray<struct UGameplayTaskResource*> AdditionalClaimedResources;
        enum EGameplayTaskRunResult ReturnValue;
    } Parms{};
    Parms.TaskOwner = (struct TScriptInterface<IGameplayTaskOwnerInterface>)TaskOwner;
    Parms.Task = (struct UGameplayTask*)Task;
    Parms.Priority = (uint8_t)Priority;
    Parms.AdditionalRequiredResources = (struct TArray<struct UGameplayTaskResource*>)AdditionalRequiredResources;
    Parms.AdditionalClaimedResources = (struct TArray<struct UGameplayTaskResource*>)AdditionalClaimedResources;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameplayTask
void UGameplayTask::ReadyForActivation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTask", "ReadyForActivation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTask", "GenericGameplayTaskDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameplayTask::EndTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTask", "EndTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGameplayTask_ClaimResource
struct UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResources(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UGameplayTaskResource*> ResourceClasses, uint8_t Priority, struct FName TaskInstanceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameplayTask_ClaimResource", "ClaimResources");
    struct
    {
        struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;
        struct TArray<struct UGameplayTaskResource*> ResourceClasses;
        uint8_t Priority;
        struct FName TaskInstanceName;
        struct UGameplayTask_ClaimResource* ReturnValue;
    } Parms{};
    Parms.InTaskOwner = (struct TScriptInterface<IGameplayTaskOwnerInterface>)InTaskOwner;
    Parms.ResourceClasses = (struct TArray<struct UGameplayTaskResource*>)ResourceClasses;
    Parms.Priority = (uint8_t)Priority;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResource(struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct UGameplayTaskResource* ResourceClass, uint8_t Priority, struct FName TaskInstanceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameplayTask_ClaimResource", "ClaimResource");
    struct
    {
        struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;
        struct UGameplayTaskResource* ResourceClass;
        uint8_t Priority;
        struct FName TaskInstanceName;
        struct UGameplayTask_ClaimResource* ReturnValue;
    } Parms{};
    Parms.InTaskOwner = (struct TScriptInterface<IGameplayTaskOwnerInterface>)InTaskOwner;
    Parms.ResourceClass = (struct UGameplayTaskResource*)ResourceClass;
    Parms.Priority = (uint8_t)Priority;
    Parms.TaskInstanceName = (struct FName)TaskInstanceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameplayTask_SpawnActor
struct UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct AActor* Class, bool bSpawnOnlyOnAuthority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameplayTask_SpawnActor", "SpawnActor");
    struct
    {
        struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
        struct FVector SpawnLocation;
        struct FRotator SpawnRotation;
        struct AActor* Class;
        bool bSpawnOnlyOnAuthority;
        struct UGameplayTask_SpawnActor* ReturnValue;
    } Parms{};
    Parms.TaskOwner = (struct TScriptInterface<IGameplayTaskOwnerInterface>)TaskOwner;
    Parms.SpawnLocation = (struct FVector)SpawnLocation;
    Parms.SpawnRotation = (struct FRotator)SpawnRotation;
    Parms.Class = (struct AActor*)Class;
    Parms.bSpawnOnlyOnAuthority = (bool)bSpawnOnlyOnAuthority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayTask_SpawnActor::FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTask_SpawnActor", "FinishSpawningActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* SpawnedActor;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SpawnedActor = (struct AActor*)SpawnedActor;
    this->ProcessEvent(Func, &Parms);
}

bool UGameplayTask_SpawnActor::BeginSpawningActor(struct UObject* WorldContextObject, struct AActor*& SpawnedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTask_SpawnActor", "BeginSpawningActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* SpawnedActor;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    SpawnedActor = Parms.SpawnedActor;
    return Parms.ReturnValue;
}

// UGameplayTask_WaitDelay
struct UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, uint8_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameplayTask_WaitDelay", "TaskWaitDelay");
    struct
    {
        struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
        float Time;
        uint8_t Priority;
        struct UGameplayTask_WaitDelay* ReturnValue;
    } Parms{};
    Parms.TaskOwner = (struct TScriptInterface<IGameplayTaskOwnerInterface>)TaskOwner;
    Parms.Time = (float)Time;
    Parms.Priority = (uint8_t)Priority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTask_WaitDelay", "TaskDelayDelegate__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
