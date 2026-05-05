#include "HTN.hpp"
#include "AIModule.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UEnvQueryContext_HTNBlueprintBase
void UEnvQueryContext_HTNBlueprintBase::ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_HTNBlueprintBase", "ProvideSingleLocation");
    struct
    {
        struct UObject* QuerierObject;
        struct AActor* QuerierActor;
        struct FVector ResultingLocation;
    } Parms{};
    Parms.QuerierObject = (struct UObject*)QuerierObject;
    Parms.QuerierActor = (struct AActor*)QuerierActor;
    this->ProcessEvent(Func, &Parms);
    ResultingLocation = Parms.ResultingLocation;
}

void UEnvQueryContext_HTNBlueprintBase::ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_HTNBlueprintBase", "ProvideSingleActor");
    struct
    {
        struct UObject* QuerierObject;
        struct AActor* QuerierActor;
        struct AActor* ResultingActor;
    } Parms{};
    Parms.QuerierObject = (struct UObject*)QuerierObject;
    Parms.QuerierActor = (struct AActor*)QuerierActor;
    this->ProcessEvent(Func, &Parms);
    ResultingActor = Parms.ResultingActor;
}

void UEnvQueryContext_HTNBlueprintBase::ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_HTNBlueprintBase", "ProvideLocationsSet");
    struct
    {
        struct UObject* QuerierObject;
        struct AActor* QuerierActor;
        struct TArray<struct FVector> ResultingLocationSet;
    } Parms{};
    Parms.QuerierObject = (struct UObject*)QuerierObject;
    Parms.QuerierActor = (struct AActor*)QuerierActor;
    this->ProcessEvent(Func, &Parms);
    ResultingLocationSet = Parms.ResultingLocationSet;
}

void UEnvQueryContext_HTNBlueprintBase::ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_HTNBlueprintBase", "ProvideActorsSet");
    struct
    {
        struct UObject* QuerierObject;
        struct AActor* QuerierActor;
        struct TArray<struct AActor*> ResultingActorsSet;
    } Parms{};
    Parms.QuerierObject = (struct UObject*)QuerierObject;
    Parms.QuerierActor = (struct AActor*)QuerierActor;
    this->ProcessEvent(Func, &Parms);
    ResultingActorsSet = Parms.ResultingActorsSet;
}

struct UWorldStateProxy* UEnvQueryContext_HTNBlueprintBase::GetWorldState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_HTNBlueprintBase", "GetWorldState");
    struct
    {
        struct UWorldStateProxy* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UEnvQueryContext_HTNBlueprintBase::GetQuerierLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_HTNBlueprintBase", "GetQuerierLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHTNBlueprintLibrary
uint8_t UHTNBlueprintLibrary::RunHTN(struct AAIController* AIController, struct UHTN* HTNAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNBlueprintLibrary", "RunHTN");
    struct
    {
        struct AAIController* AIController;
        struct UHTN* HTNAsset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    Parms.HTNAsset = (struct UHTN*)HTNAsset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHTNNodeLibrary
void UHTNNodeLibrary::SetWorldStateValueAsVector(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct FVector Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsVector");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct FVector Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct FVector)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsString(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsString");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct FString Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsRotator(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct FRotator Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsRotator");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct FRotator Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct FRotator)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsObject(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct UObject* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsObject");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct UObject* Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct UObject*)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsName(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct FName Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsName");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct FName Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct FName)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsInt(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsInt");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        int32_t Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsFloat(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsFloat");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        float Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsEnum(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsEnum");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        uint8_t Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsClass(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, struct UObject* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsClass");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct UObject* Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct UObject*)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::SetWorldStateValueAsBool(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "SetWorldStateValueAsBool");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        uint8_t Value;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FVector UHTNNodeLibrary::GetWorldStateValueAsVector(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsVector");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UHTNNodeLibrary::GetWorldStateValueAsString(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsString");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UHTNNodeLibrary::GetWorldStateValueAsRotator(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsRotator");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UHTNNodeLibrary::GetWorldStateValueAsObject(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsObject");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UHTNNodeLibrary::GetWorldStateValueAsName(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsName");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct FName ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHTNNodeLibrary::GetWorldStateValueAsInt(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsInt");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        int32_t ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHTNNodeLibrary::GetWorldStateValueAsFloat(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsFloat");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        float ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHTNNodeLibrary::GetWorldStateValueAsEnum(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsEnum");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UHTNNodeLibrary::GetWorldStateValueAsClass(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsClass");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHTNNodeLibrary::GetWorldStateValueAsBool(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsBool");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UHTNNodeLibrary::GetWorldStateValueAsActor(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetWorldStateValueAsActor");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UHTNNodeLibrary::GetSelfLocationFromWorldState(struct UHTNNode* Node)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetSelfLocationFromWorldState");
    struct
    {
        struct UHTNNode* Node;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorldStateProxy* UHTNNodeLibrary::GetOwnersWorldState(struct UHTNNode* Node)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetOwnersWorldState");
    struct
    {
        struct UHTNNode* Node;
        struct UWorldStateProxy* ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHTNNodeLibrary::GetLocationFromWorldState(struct UHTNNode* Node, const struct FBlackboardKeySelector& KeySelector, struct FVector& OutLocation, struct AActor*& OutActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "GetLocationFromWorldState");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector KeySelector;
        struct FVector OutLocation;
        struct AActor* OutActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.KeySelector = (struct FBlackboardKeySelector)KeySelector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutLocation = Parms.OutLocation;
    OutActor = Parms.OutActor;
    return Parms.ReturnValue;
}

void UHTNNodeLibrary::ForceReplan(struct UHTNNode* Node, uint8_t bForceAbortPlan, uint8_t bForceRestartActivePlanning)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "ForceReplan");
    struct
    {
        struct UHTNNode* Node;
        uint8_t bForceAbortPlan;
        uint8_t bForceRestartActivePlanning;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.bForceAbortPlan = (uint8_t)bForceAbortPlan;
    Parms.bForceRestartActivePlanning = (uint8_t)bForceRestartActivePlanning;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHTNNodeLibrary::ClearWorldStateValue(struct UHTNNode* Node, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HTNNodeLibrary", "ClearWorldStateValue");
    struct
    {
        struct UHTNNode* Node;
        struct FBlackboardKeySelector Key;
    } Parms{};
    Parms.Node = (struct UHTNNode*)Node;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UHTNComponent
void UHTNComponent::StopHTN(uint8_t bDisregardLatentAbort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "StopHTN");
    struct
    {
        uint8_t bDisregardLatentAbort;
    } Parms{};
    Parms.bDisregardLatentAbort = (uint8_t)bDisregardLatentAbort;
    this->ProcessEvent(Func, &Parms);
}

void UHTNComponent::StartHTN(struct UHTN* Asset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "StartHTN");
    struct
    {
        struct UHTN* Asset;
    } Parms{};
    Parms.Asset = (struct UHTN*)Asset;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHTNComponent::SetDynamicHTN(struct FGameplayTag InjectTag, struct UHTN* HTN, uint8_t bForceAbortCurrentPlanIfChanged)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "SetDynamicHTN");
    struct
    {
        struct FGameplayTag InjectTag;
        struct UHTN* HTN;
        uint8_t bForceAbortCurrentPlanIfChanged;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InjectTag = (struct FGameplayTag)InjectTag;
    Parms.HTN = (struct UHTN*)HTN;
    Parms.bForceAbortCurrentPlanIfChanged = (uint8_t)bForceAbortCurrentPlanIfChanged;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHTNComponent::NotifyEventBasedDecoratorCondition(struct UHTNDecorator* Decorator, uint8_t bRawConditionValue, uint8_t bCanAbortPlanInstantly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "NotifyEventBasedDecoratorCondition");
    struct
    {
        struct UHTNDecorator* Decorator;
        uint8_t bRawConditionValue;
        uint8_t bCanAbortPlanInstantly;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Decorator = (struct UHTNDecorator*)Decorator;
    Parms.bRawConditionValue = (uint8_t)bRawConditionValue;
    Parms.bCanAbortPlanInstantly = (uint8_t)bCanAbortPlanInstantly;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHTNComponent::IsWaitingForAbortingTasks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "IsWaitingForAbortingTasks");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHTNComponent::IsPlanning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "IsPlanning");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHTNComponent::HasActivePlan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "HasActivePlan");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorldStateProxy* UHTNComponent::GetWorldStateProxy(uint8_t bForPlanning)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "GetWorldStateProxy");
    struct
    {
        uint8_t bForPlanning;
        struct UWorldStateProxy* ReturnValue;
    } Parms{};
    Parms.bForPlanning = (uint8_t)bForPlanning;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorldStateProxy* UHTNComponent::GetPlanningWorldStateProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "GetPlanningWorldStateProxy");
    struct
    {
        struct UWorldStateProxy* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHTN* UHTNComponent::GetDynamicHTN(struct FGameplayTag InjectTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "GetDynamicHTN");
    struct
    {
        struct FGameplayTag InjectTag;
        struct UHTN* ReturnValue;
    } Parms{};
    Parms.InjectTag = (struct FGameplayTag)InjectTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHTN* UHTNComponent::GetCurrentHTN()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "GetCurrentHTN");
    struct
    {
        struct UHTN* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHTNComponent::GetCooldownEndTime(struct UObject* CooldownOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "GetCooldownEndTime");
    struct
    {
        struct UObject* CooldownOwner;
        float ReturnValue;
    } Parms{};
    Parms.CooldownOwner = (struct UObject*)CooldownOwner;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorldStateProxy* UHTNComponent::GetBlackboardProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "GetBlackboardProxy");
    struct
    {
        struct UWorldStateProxy* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHTNComponent::ForceReplan(uint8_t bForceAbortPlan, uint8_t bForceRestartActivePlanning, uint8_t bForceDeferToNextFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "ForceReplan");
    struct
    {
        uint8_t bForceAbortPlan;
        uint8_t bForceRestartActivePlanning;
        uint8_t bForceDeferToNextFrame;
    } Parms{};
    Parms.bForceAbortPlan = (uint8_t)bForceAbortPlan;
    Parms.bForceRestartActivePlanning = (uint8_t)bForceRestartActivePlanning;
    Parms.bForceDeferToNextFrame = (uint8_t)bForceDeferToNextFrame;
    this->ProcessEvent(Func, &Parms);
}

void UHTNComponent::CancelActivePlanning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "CancelActivePlanning");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UHTNComponent::AddCooldownDuration(struct UObject* CooldownOwner, float CooldownDuration, uint8_t bAddToExistingDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNComponent", "AddCooldownDuration");
    struct
    {
        struct UObject* CooldownOwner;
        float CooldownDuration;
        uint8_t bAddToExistingDuration;
    } Parms{};
    Parms.CooldownOwner = (struct UObject*)CooldownOwner;
    Parms.CooldownDuration = (float)CooldownDuration;
    Parms.bAddToExistingDuration = (uint8_t)bAddToExistingDuration;
    this->ProcessEvent(Func, &Parms);
}

// UHTNNode
struct UHTNComponent* UHTNNode::GetOwnerComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNNode", "GetOwnerComponent");
    struct
    {
        struct UHTNComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UHTNNode::GetNodeName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNNode", "GetNodeName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHTNDecorator
uint8_t UHTNDecorator::IsInversed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNDecorator", "IsInversed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHTNDecorator_BlueprintBase
void UHTNDecorator_BlueprintBase::ReceiveTick(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNDecorator_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
        float DeltaTime;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UHTNDecorator_BlueprintBase::ReceiveOnPlanExit(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNDecorator_BlueprintBase", "ReceiveOnPlanExit");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UHTNDecorator_BlueprintBase::ReceiveOnPlanEnter(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNDecorator_BlueprintBase", "ReceiveOnPlanEnter");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

int32_t UHTNDecorator_BlueprintBase::ReceiveModifyStepCost(int32_t OriginalCost, struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNDecorator_BlueprintBase", "ReceiveModifyStepCost");
    struct
    {
        int32_t OriginalCost;
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
        int32_t ReturnValue;
    } Parms{};
    Parms.OriginalCost = (int32_t)OriginalCost;
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHTNDecorator_BlueprintBase::ReceiveExecutionStart(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNDecorator_BlueprintBase", "ReceiveExecutionStart");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UHTNDecorator_BlueprintBase::ReceiveExecutionFinish(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, EHTNNodeResult NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNDecorator_BlueprintBase", "ReceiveExecutionFinish");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
        enum EHTNNodeResult NodeResult;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.NodeResult = (enum EHTNNodeResult)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHTNDecorator_BlueprintBase::PerformConditionCheck(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, EHTNDecoratorConditionCheckType CheckType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNDecorator_BlueprintBase", "PerformConditionCheck");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
        enum EHTNDecoratorConditionCheckType CheckType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.CheckType = (enum EHTNDecoratorConditionCheckType)CheckType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHTNService_BlueprintBase
void UHTNService_BlueprintBase::ReceiveTick(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNService_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
        float DeltaTime;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UHTNService_BlueprintBase::ReceiveExecutionStart(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNService_BlueprintBase", "ReceiveExecutionStart");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UHTNService_BlueprintBase::ReceiveExecutionFinish(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, EHTNNodeResult NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNService_BlueprintBase", "ReceiveExecutionFinish");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerAsController;
        struct APawn* ControlledPawn;
        enum EHTNNodeResult NodeResult;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerAsController = (struct AAIController*)OwnerAsController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.NodeResult = (enum EHTNNodeResult)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

// UHTNTask_BlueprintBase
void UHTNTask_BlueprintBase::SubmitPlanStep(int32_t Cost)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "SubmitPlanStep");
    struct
    {
        int32_t Cost;
    } Parms{};
    Parms.Cost = (int32_t)Cost;
    this->ProcessEvent(Func, &Parms);
}

void UHTNTask_BlueprintBase::ReceiveTick(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHTNTask_BlueprintBase::ReceiveRecheckPlan(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "ReceiveRecheckPlan");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHTNTask_BlueprintBase::ReceiveOnFinished(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn, EHTNNodeResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "ReceiveOnFinished");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        enum EHTNNodeResult Result;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.Result = (enum EHTNNodeResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UHTNTask_BlueprintBase::ReceiveExecute(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "ReceiveExecute");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UHTNTask_BlueprintBase::ReceiveDescribePlanStepToVisualLog(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn, struct FName VisLogCategoryName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "ReceiveDescribePlanStepToVisualLog");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        struct FName VisLogCategoryName;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.VisLogCategoryName = (struct FName)VisLogCategoryName;
    this->ProcessEvent(Func, &Parms);
}

void UHTNTask_BlueprintBase::ReceiveCreatePlanSteps(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "ReceiveCreatePlanSteps");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UHTNTask_BlueprintBase::ReceiveAbort(struct AActor* Owner, struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "ReceiveAbort");
    struct
    {
        struct AActor* Owner;
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.Owner = (struct AActor*)Owner;
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHTNTask_BlueprintBase::IsTaskExecuting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "IsTaskExecuting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHTNTask_BlueprintBase::IsTaskAborting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "IsTaskAborting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHTNTask_BlueprintBase::FinishExecute(uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "FinishExecute");
    struct
    {
        uint8_t bSuccess;
    } Parms{};
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UHTNTask_BlueprintBase::FinishAbort()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HTNTask_BlueprintBase", "FinishAbort");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWorldStateProxy
void UWorldStateProxy::SetValueAsVector(const struct FName& KeyName, struct FVector Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsVector");
    struct
    {
        struct FName KeyName;
        struct FVector Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (struct FVector)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsString(const struct FName& KeyName, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsString");
    struct
    {
        struct FName KeyName;
        struct FString Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsRotator(const struct FName& KeyName, struct FRotator Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsRotator");
    struct
    {
        struct FName KeyName;
        struct FRotator Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (struct FRotator)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsObject(const struct FName& KeyName, struct UObject* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsObject");
    struct
    {
        struct FName KeyName;
        struct UObject* Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (struct UObject*)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsName(const struct FName& KeyName, struct FName Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsName");
    struct
    {
        struct FName KeyName;
        struct FName Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (struct FName)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsInt(const struct FName& KeyName, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsInt");
    struct
    {
        struct FName KeyName;
        int32_t Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsFloat(const struct FName& KeyName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsFloat");
    struct
    {
        struct FName KeyName;
        float Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsEnum(const struct FName& KeyName, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsEnum");
    struct
    {
        struct FName KeyName;
        uint8_t Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsClass(const struct FName& KeyName, struct UObject* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsClass");
    struct
    {
        struct FName KeyName;
        struct UObject* Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (struct UObject*)Value;
    this->ProcessEvent(Func, &Parms);
}

void UWorldStateProxy::SetValueAsBool(const struct FName& KeyName, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "SetValueAsBool");
    struct
    {
        struct FName KeyName;
        uint8_t Value;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWorldStateProxy::IsVectorValueSet(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "IsVectorValueSet");
    struct
    {
        struct FName KeyName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UWorldStateProxy::GetValueAsVector(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsVector");
    struct
    {
        struct FName KeyName;
        struct FVector ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UWorldStateProxy::GetValueAsString(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsString");
    struct
    {
        struct FName KeyName;
        struct FString ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UWorldStateProxy::GetValueAsRotator(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsRotator");
    struct
    {
        struct FName KeyName;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UWorldStateProxy::GetValueAsObject(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsObject");
    struct
    {
        struct FName KeyName;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UWorldStateProxy::GetValueAsName(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsName");
    struct
    {
        struct FName KeyName;
        struct FName ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWorldStateProxy::GetValueAsInt(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsInt");
    struct
    {
        struct FName KeyName;
        int32_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWorldStateProxy::GetValueAsFloat(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsFloat");
    struct
    {
        struct FName KeyName;
        float ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWorldStateProxy::GetValueAsEnum(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsEnum");
    struct
    {
        struct FName KeyName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UWorldStateProxy::GetValueAsClass(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsClass");
    struct
    {
        struct FName KeyName;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWorldStateProxy::GetValueAsBool(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsBool");
    struct
    {
        struct FName KeyName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UWorldStateProxy::GetValueAsActor(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetValueAsActor");
    struct
    {
        struct FName KeyName;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UWorldStateProxy::GetSelfLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetSelfLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWorldStateProxy::GetRotationFromEntry(const struct FName& KeyName, struct FRotator& ResultRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetRotationFromEntry");
    struct
    {
        struct FName KeyName;
        struct FRotator ResultRotation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    ResultRotation = Parms.ResultRotation;
    return Parms.ReturnValue;
}

uint8_t UWorldStateProxy::GetLocationFromEntry(const struct FName& KeyName, struct FVector& ResultLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetLocationFromEntry");
    struct
    {
        struct FName KeyName;
        struct FVector ResultLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    ResultLocation = Parms.ResultLocation;
    return Parms.ReturnValue;
}

uint8_t UWorldStateProxy::GetLocation(const struct FBlackboardKeySelector& KeySelector, struct FVector& OutLocation, struct AActor*& OutActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "GetLocation");
    struct
    {
        struct FBlackboardKeySelector KeySelector;
        struct FVector OutLocation;
        struct AActor* OutActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeySelector = (struct FBlackboardKeySelector)KeySelector;
    this->ProcessEvent(Func, &Parms);
    OutLocation = Parms.OutLocation;
    OutActor = Parms.OutActor;
    return Parms.ReturnValue;
}

void UWorldStateProxy::ClearValue(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WorldStateProxy", "ClearValue");
    struct
    {
        struct FName KeyName;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
