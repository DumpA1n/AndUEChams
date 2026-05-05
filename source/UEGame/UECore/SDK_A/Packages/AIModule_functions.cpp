#include "AIModule.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include "GameplayTasks.hpp"
#include "NavigationSystem.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAIPerceptionComponent
void UAIPerceptionComponent::SetSenseEnabled(struct UAISense* SenseClass, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "SetSenseEnabled");
    struct
    {
        struct UAISense* SenseClass;
        uint8_t bEnable;
    } Parms{};
    Parms.SenseClass = (struct UAISense*)SenseClass;
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UAIPerceptionComponent::RequestStimuliListenerUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "RequestStimuliListenerUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAIPerceptionComponent::OnOwnerEndPlay(struct AActor* Actor, EEndPlayReason EndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "OnOwnerEndPlay");
    struct
    {
        struct AActor* Actor;
        enum EEndPlayReason EndPlayReason;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.EndPlayReason = (enum EEndPlayReason)EndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

void UAIPerceptionComponent::GetPerceivedHostileActors(struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "GetPerceivedHostileActors");
    struct
    {
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UAIPerceptionComponent::GetPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "GetPerceivedActors");
    struct
    {
        struct UAISense* SenseToUse;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.SenseToUse = (struct UAISense*)SenseToUse;
    this->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UAIPerceptionComponent::GetKnownPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "GetKnownPerceivedActors");
    struct
    {
        struct UAISense* SenseToUse;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.SenseToUse = (struct UAISense*)SenseToUse;
    this->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UAIPerceptionComponent::GetCurrentlyPerceivedActors(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "GetCurrentlyPerceivedActors");
    struct
    {
        struct UAISense* SenseToUse;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.SenseToUse = (struct UAISense*)SenseToUse;
    this->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

uint8_t UAIPerceptionComponent::GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "GetActorsPerception");
    struct
    {
        struct AActor* Actor;
        struct FActorPerceptionBlueprintInfo Info;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
    Info = Parms.Info;
    return Parms.ReturnValue;
}

// UBlackboardComponent
void UBlackboardComponent::SetValueAsVector(const struct FName& KeyName, struct FVector VectorValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsVector");
    struct
    {
        struct FName KeyName;
        struct FVector VectorValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.VectorValue = (struct FVector)VectorValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsString(const struct FName& KeyName, struct FString StringValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsString");
    struct
    {
        struct FName KeyName;
        struct FString StringValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.StringValue = (struct FString)StringValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsRotator(const struct FName& KeyName, struct FRotator VectorValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsRotator");
    struct
    {
        struct FName KeyName;
        struct FRotator VectorValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.VectorValue = (struct FRotator)VectorValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsObject(const struct FName& KeyName, struct UObject* ObjectValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsObject");
    struct
    {
        struct FName KeyName;
        struct UObject* ObjectValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.ObjectValue = (struct UObject*)ObjectValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsName(const struct FName& KeyName, struct FName NameValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsName");
    struct
    {
        struct FName KeyName;
        struct FName NameValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.NameValue = (struct FName)NameValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsInt(const struct FName& KeyName, int32_t IntValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsInt");
    struct
    {
        struct FName KeyName;
        int32_t IntValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.IntValue = (int32_t)IntValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsFloat");
    struct
    {
        struct FName KeyName;
        float FloatValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.FloatValue = (float)FloatValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsEnum(const struct FName& KeyName, uint8_t EnumValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsEnum");
    struct
    {
        struct FName KeyName;
        uint8_t EnumValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.EnumValue = (uint8_t)EnumValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsClass(const struct FName& KeyName, struct UObject* ClassValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsClass");
    struct
    {
        struct FName KeyName;
        struct UObject* ClassValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.ClassValue = (struct UObject*)ClassValue;
    this->ProcessEvent(Func, &Parms);
}

void UBlackboardComponent::SetValueAsBool(const struct FName& KeyName, uint8_t BoolValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsBool");
    struct
    {
        struct FName KeyName;
        uint8_t BoolValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.BoolValue = (uint8_t)BoolValue;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBlackboardComponent::IsVectorValueSet(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "IsVectorValueSet");
    struct
    {
        struct FName KeyName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UBlackboardComponent::GetValueAsVector(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsVector");
    struct
    {
        struct FName KeyName;
        struct FVector ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBlackboardComponent::GetValueAsString(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsString");
    struct
    {
        struct FName KeyName;
        struct FString ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UBlackboardComponent::GetValueAsRotator(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsRotator");
    struct
    {
        struct FName KeyName;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UBlackboardComponent::GetValueAsObject(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsObject");
    struct
    {
        struct FName KeyName;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UBlackboardComponent::GetValueAsName(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsName");
    struct
    {
        struct FName KeyName;
        struct FName ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBlackboardComponent::GetValueAsInt(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsInt");
    struct
    {
        struct FName KeyName;
        int32_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UBlackboardComponent::GetValueAsFloat(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsFloat");
    struct
    {
        struct FName KeyName;
        float ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlackboardComponent::GetValueAsEnum(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsEnum");
    struct
    {
        struct FName KeyName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UBlackboardComponent::GetValueAsClass(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsClass");
    struct
    {
        struct FName KeyName;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlackboardComponent::GetValueAsBool(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsBool");
    struct
    {
        struct FName KeyName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator& ResultRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetRotationFromEntry");
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

uint8_t UBlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct FVector& ResultLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetLocationFromEntry");
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

void UBlackboardComponent::ClearValue(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "ClearValue");
    struct
    {
        struct FName KeyName;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
}

// UBrainComponent
void UBrainComponent::StopLogic(struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrainComponent", "StopLogic");
    struct
    {
        struct FString Reason;
    } Parms{};
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UBrainComponent::RestartLogic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrainComponent", "RestartLogic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBrainComponent::IsRunning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrainComponent", "IsRunning");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBrainComponent::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrainComponent", "IsPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UBehaviorTreeComponent
void UBehaviorTreeComponent::SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BehaviorTreeComponent", "SetDynamicSubtree");
    struct
    {
        struct FGameplayTag InjectTag;
        struct UBehaviorTree* BehaviorAsset;
    } Parms{};
    Parms.InjectTag = (struct FGameplayTag)InjectTag;
    Parms.BehaviorAsset = (struct UBehaviorTree*)BehaviorAsset;
    this->ProcessEvent(Func, &Parms);
}

float UBehaviorTreeComponent::GetTagCooldownEndTime(struct FGameplayTag CooldownTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BehaviorTreeComponent", "GetTagCooldownEndTime");
    struct
    {
        struct FGameplayTag CooldownTag;
        float ReturnValue;
    } Parms{};
    Parms.CooldownTag = (struct FGameplayTag)CooldownTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBehaviorTreeComponent::AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, uint8_t bAddToExistingDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BehaviorTreeComponent", "AddCooldownTagDuration");
    struct
    {
        struct FGameplayTag CooldownTag;
        float CooldownDuration;
        uint8_t bAddToExistingDuration;
    } Parms{};
    Parms.CooldownTag = (struct FGameplayTag)CooldownTag;
    Parms.CooldownDuration = (float)CooldownDuration;
    Parms.bAddToExistingDuration = (uint8_t)bAddToExistingDuration;
    this->ProcessEvent(Func, &Parms);
}

// UEnvQueryInstanceBlueprintWrapper
void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(struct FName ParamName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "SetNamedParam");
    struct
    {
        struct FName ParamName;
        float Value;
    } Parms{};
    Parms.ParamName = (struct FName)ParamName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetResultsAsLocations");
    struct
    {
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetResultsAsActors");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsLocations");
    struct
    {
        struct TArray<struct FVector> ResultLocations;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ResultLocations = Parms.ResultLocations;
    return Parms.ReturnValue;
}

uint8_t UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsActors");
    struct
    {
        struct TArray<struct AActor*> ResultActors;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ResultActors = Parms.ResultActors;
    return Parms.ReturnValue;
}

float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetItemScore");
    struct
    {
        int32_t ItemIndex;
        float ReturnValue;
    } Parms{};
    Parms.ItemIndex = (int32_t)ItemIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "EQSQueryDoneSignature__DelegateSignature");
    struct
    {
        struct UEnvQueryInstanceBlueprintWrapper* QueryInstance;
        enum EEnvQueryStatus QueryStatus;
    } Parms{};
    Parms.QueryInstance = (struct UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    Parms.QueryStatus = (enum EEnvQueryStatus)QueryStatus;
    this->ProcessEvent(Func, &Parms);
}

// UAITask_MoveTo
struct UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, uint8_t bUsePathfinding, uint8_t bLockAILogic, uint8_t bUseContinuosGoalTracking, EAIOptionFlag ProjectGoalOnNavigation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AITask_MoveTo", "AIMoveTo");
    struct
    {
        struct AAIController* Controller;
        struct FVector GoalLocation;
        struct AActor* GoalActor;
        float AcceptanceRadius;
        enum EAIOptionFlag StopOnOverlap;
        enum EAIOptionFlag AcceptPartialPath;
        uint8_t bUsePathfinding;
        uint8_t bLockAILogic;
        uint8_t bUseContinuosGoalTracking;
        enum EAIOptionFlag ProjectGoalOnNavigation;
        struct UAITask_MoveTo* ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.GoalLocation = (struct FVector)GoalLocation;
    Parms.GoalActor = (struct AActor*)GoalActor;
    Parms.AcceptanceRadius = (float)AcceptanceRadius;
    Parms.StopOnOverlap = (enum EAIOptionFlag)StopOnOverlap;
    Parms.AcceptPartialPath = (enum EAIOptionFlag)AcceptPartialPath;
    Parms.bUsePathfinding = (uint8_t)bUsePathfinding;
    Parms.bLockAILogic = (uint8_t)bLockAILogic;
    Parms.bUseContinuosGoalTracking = (uint8_t)bUseContinuosGoalTracking;
    Parms.ProjectGoalOnNavigation = (enum EAIOptionFlag)ProjectGoalOnNavigation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AAIController
uint8_t AAIController::UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "UseBlackboard");
    struct
    {
        struct UBlackboardData* BlackboardAsset;
        struct UBlackboardComponent* BlackboardComponent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BlackboardAsset = (struct UBlackboardData*)BlackboardAsset;
    this->ProcessEvent(Func, &Parms);
    BlackboardComponent = Parms.BlackboardComponent;
    return Parms.ReturnValue;
}

void AAIController::UnclaimTaskResource(struct UGameplayTaskResource* ResourceClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "UnclaimTaskResource");
    struct
    {
        struct UGameplayTaskResource* ResourceClass;
    } Parms{};
    Parms.ResourceClass = (struct UGameplayTaskResource*)ResourceClass;
    this->ProcessEvent(Func, &Parms);
}

void AAIController::SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "SetPathFollowingComponent");
    struct
    {
        struct UPathFollowingComponent* NewPFComponent;
    } Parms{};
    Parms.NewPFComponent = (struct UPathFollowingComponent*)NewPFComponent;
    this->ProcessEvent(Func, &Parms);
}

void AAIController::SetMoveBlockDetection(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "SetMoveBlockDetection");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AAIController::RunBehaviorTree(struct UBehaviorTree* BTAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "RunBehaviorTree");
    struct
    {
        struct UBehaviorTree* BTAsset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BTAsset = (struct UBehaviorTree*)BTAsset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIController::OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "OnUsingBlackBoard");
    struct
    {
        struct UBlackboardComponent* BlackboardComp;
        struct UBlackboardData* BlackboardAsset;
    } Parms{};
    Parms.BlackboardComp = (struct UBlackboardComponent*)BlackboardComp;
    Parms.BlackboardAsset = (struct UBlackboardData*)BlackboardAsset;
    this->ProcessEvent(Func, &Parms);
}

void AAIController::OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "OnGameplayTaskResourcesClaimed");
    struct
    {
        struct FGameplayResourceSet NewlyClaimed;
        struct FGameplayResourceSet FreshlyReleased;
    } Parms{};
    Parms.NewlyClaimed = (struct FGameplayResourceSet)NewlyClaimed;
    Parms.FreshlyReleased = (struct FGameplayResourceSet)FreshlyReleased;
    this->ProcessEvent(Func, &Parms);
}

EPathFollowingRequestResult AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, uint8_t bStopOnOverlap, uint8_t bUsePathfinding, uint8_t bProjectDestinationToNavigation, uint8_t bCanStrafe, struct UNavigationQueryFilter* FilterClass, uint8_t bAllowPartialPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "MoveToLocation");
    struct
    {
        struct FVector Dest;
        float AcceptanceRadius;
        uint8_t bStopOnOverlap;
        uint8_t bUsePathfinding;
        uint8_t bProjectDestinationToNavigation;
        uint8_t bCanStrafe;
        struct UNavigationQueryFilter* FilterClass;
        uint8_t bAllowPartialPath;
        enum EPathFollowingRequestResult ReturnValue;
    } Parms{};
    Parms.Dest = (struct FVector)Dest;
    Parms.AcceptanceRadius = (float)AcceptanceRadius;
    Parms.bStopOnOverlap = (uint8_t)bStopOnOverlap;
    Parms.bUsePathfinding = (uint8_t)bUsePathfinding;
    Parms.bProjectDestinationToNavigation = (uint8_t)bProjectDestinationToNavigation;
    Parms.bCanStrafe = (uint8_t)bCanStrafe;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    Parms.bAllowPartialPath = (uint8_t)bAllowPartialPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPathFollowingRequestResult AAIController::MoveToActor(struct AActor* Goal, float AcceptanceRadius, uint8_t bStopOnOverlap, uint8_t bUsePathfinding, uint8_t bCanStrafe, struct UNavigationQueryFilter* FilterClass, uint8_t bAllowPartialPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "MoveToActor");
    struct
    {
        struct AActor* Goal;
        float AcceptanceRadius;
        uint8_t bStopOnOverlap;
        uint8_t bUsePathfinding;
        uint8_t bCanStrafe;
        struct UNavigationQueryFilter* FilterClass;
        uint8_t bAllowPartialPath;
        enum EPathFollowingRequestResult ReturnValue;
    } Parms{};
    Parms.Goal = (struct AActor*)Goal;
    Parms.AcceptanceRadius = (float)AcceptanceRadius;
    Parms.bStopOnOverlap = (uint8_t)bStopOnOverlap;
    Parms.bUsePathfinding = (uint8_t)bUsePathfinding;
    Parms.bCanStrafe = (uint8_t)bCanStrafe;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    Parms.bAllowPartialPath = (uint8_t)bAllowPartialPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIController::K2_SetFocus(struct AActor* NewFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "K2_SetFocus");
    struct
    {
        struct AActor* NewFocus;
    } Parms{};
    Parms.NewFocus = (struct AActor*)NewFocus;
    this->ProcessEvent(Func, &Parms);
}

void AAIController::K2_SetFocalPoint(struct FVector FP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "K2_SetFocalPoint");
    struct
    {
        struct FVector FP;
    } Parms{};
    Parms.FP = (struct FVector)FP;
    this->ProcessEvent(Func, &Parms);
}

void AAIController::K2_ClearFocus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "K2_ClearFocus");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AAIController::HasPartialPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "HasPartialPath");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPathFollowingComponent* AAIController::GetPathFollowingComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "GetPathFollowingComponent");
    struct
    {
        struct UPathFollowingComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPathFollowingStatus AAIController::GetMoveStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "GetMoveStatus");
    struct
    {
        enum EPathFollowingStatus ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAIController::GetImmediateMoveDestination()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "GetImmediateMoveDestination");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AAIController::GetFocusActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "GetFocusActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAIController::GetFocalPointOnActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "GetFocalPointOnActor");
    struct
    {
        struct AActor* Actor;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAIController::GetFocalPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "GetFocalPoint");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "GetAIPerceptionComponent");
    struct
    {
        struct UAIPerceptionComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIController::ClaimTaskResource(struct UGameplayTaskResource* ResourceClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "ClaimTaskResource");
    struct
    {
        struct UGameplayTaskResource* ResourceClass;
    } Parms{};
    Parms.ResourceClass = (struct UGameplayTaskResource*)ResourceClass;
    this->ProcessEvent(Func, &Parms);
}

// UAISense_Hearing
void UAISense_Hearing::ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AISense_Hearing", "ReportNoiseEvent");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector NoiseLocation;
        float Loudness;
        struct AActor* Instigator;
        float MaxRange;
        struct FName Tag;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.NoiseLocation = (struct FVector)NoiseLocation;
    Parms.Loudness = (float)Loudness;
    Parms.Instigator = (struct AActor*)Instigator;
    Parms.MaxRange = (float)MaxRange;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UPathFollowingComponent
void UPathFollowingComponent::OnNavDataRegistered(struct ANavigationData* NavData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PathFollowingComponent", "OnNavDataRegistered");
    struct
    {
        struct ANavigationData* NavData;
    } Parms{};
    Parms.NavData = (struct ANavigationData*)NavData;
    this->ProcessEvent(Func, &Parms);
}

void UPathFollowingComponent::OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PathFollowingComponent", "OnActorBump");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

struct FVector UPathFollowingComponent::GetPathDestination()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PathFollowingComponent", "GetPathDestination");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPathFollowingAction UPathFollowingComponent::GetPathActionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PathFollowingComponent", "GetPathActionType");
    struct
    {
        enum EPathFollowingAction ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCrowdFollowingComponent
void UCrowdFollowingComponent::SuspendCrowdSteering(uint8_t bSuspend)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CrowdFollowingComponent", "SuspendCrowdSteering");
    struct
    {
        uint8_t bSuspend;
    } Parms{};
    Parms.bSuspend = (uint8_t)bSuspend;
    this->ProcessEvent(Func, &Parms);
}

// UBTTask_BlueprintBase
void UBTTask_BlueprintBase::SetFinishOnMessageWithId(struct FName MessageName, int32_t requestId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessageWithId");
    struct
    {
        struct FName MessageName;
        int32_t requestId;
    } Parms{};
    Parms.MessageName = (struct FName)MessageName;
    Parms.requestId = (int32_t)requestId;
    this->ProcessEvent(Func, &Parms);
}

void UBTTask_BlueprintBase::SetFinishOnMessage(struct FName MessageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessage");
    struct
    {
        struct FName MessageName;
    } Parms{};
    Parms.MessageName = (struct FName)MessageName;
    this->ProcessEvent(Func, &Parms);
}

void UBTTask_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "ReceiveTickAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UBTTask_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UBTTask_BlueprintBase::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "ReceiveExecuteAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UBTTask_BlueprintBase::ReceiveExecute(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "ReceiveExecute");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UBTTask_BlueprintBase::ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "ReceiveAbortAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UBTTask_BlueprintBase::ReceiveAbort(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "ReceiveAbort");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBTTask_BlueprintBase::IsTaskExecuting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "IsTaskExecuting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBTTask_BlueprintBase::IsTaskAborting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "IsTaskAborting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBTTask_BlueprintBase::FinishExecute(uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "FinishExecute");
    struct
    {
        uint8_t bSuccess;
    } Parms{};
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UBTTask_BlueprintBase::FinishAbort()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "FinishAbort");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ANavLinkProxy
void ANavLinkProxy::SetSmartLinkEnabled(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavLinkProxy", "SetSmartLinkEnabled");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void ANavLinkProxy::ResumePathFollowing(struct AActor* Agent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavLinkProxy", "ResumePathFollowing");
    struct
    {
        struct AActor* Agent;
    } Parms{};
    Parms.Agent = (struct AActor*)Agent;
    this->ProcessEvent(Func, &Parms);
}

void ANavLinkProxy::ReceiveSmartLinkReached(struct AActor* Agent, const struct FVector& Destination)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavLinkProxy", "ReceiveSmartLinkReached");
    struct
    {
        struct AActor* Agent;
        struct FVector Destination;
    } Parms{};
    Parms.Agent = (struct AActor*)Agent;
    Parms.Destination = (struct FVector)Destination;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ANavLinkProxy::IsSmartLinkEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavLinkProxy", "IsSmartLinkEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ANavLinkProxy::HasMovingAgents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavLinkProxy", "HasMovingAgents");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAIAsyncTaskBlueprintProxy
void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(struct FAIRequestID requestId, EPathFollowingResult MovementResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAsyncTaskBlueprintProxy", "OnMoveCompleted");
    struct
    {
        struct FAIRequestID requestId;
        enum EPathFollowingResult MovementResult;
    } Parms{};
    Parms.requestId = (struct FAIRequestID)requestId;
    Parms.MovementResult = (enum EPathFollowingResult)MovementResult;
    this->ProcessEvent(Func, &Parms);
}

// UAIBlueprintHelperLibrary
void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, uint8_t bUnlockMovement, uint8_t UnlockAILogic)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "UnlockAIResourcesWithAnimation");
    struct
    {
        struct UAnimInstance* AnimInstance;
        uint8_t bUnlockMovement;
        uint8_t UnlockAILogic;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    Parms.bUnlockMovement = (uint8_t)bUnlockMovement;
    Parms.UnlockAILogic = (uint8_t)UnlockAILogic;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, uint8_t bNoCollisionFail, struct UObject* ArchtypeClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "SpawnAIFromClass");
    struct
    {
        struct UObject* WorldContextObject;
        struct APawn* PawnClass;
        struct UBehaviorTree* BehaviorTree;
        struct FVector Location;
        struct FRotator Rotation;
        uint8_t bNoCollisionFail;
        struct UObject* ArchtypeClass;
        struct APawn* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PawnClass = (struct APawn*)PawnClass;
    Parms.BehaviorTree = (struct UBehaviorTree*)BehaviorTree;
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.bNoCollisionFail = (uint8_t)bNoCollisionFail;
    Parms.ArchtypeClass = (struct UObject*)ArchtypeClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAIBlueprintHelperLibrary::SimpleMoveToLocation(struct AController* Controller, const struct FVector& Goal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "SimpleMoveToLocation");
    struct
    {
        struct AController* Controller;
        struct FVector Goal;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    Parms.Goal = (struct FVector)Goal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAIBlueprintHelperLibrary::SimpleMoveToActor(struct AController* Controller, struct AActor* Goal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "SimpleMoveToActor");
    struct
    {
        struct AController* Controller;
        struct AActor* Goal;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    Parms.Goal = (struct AActor*)Goal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAIBlueprintHelperLibrary::SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "SendAIMessage");
    struct
    {
        struct APawn* Target;
        struct FName Message;
        struct UObject* MessageSource;
        uint8_t bSuccess;
    } Parms{};
    Parms.Target = (struct APawn*)Target;
    Parms.Message = (struct FName)Message;
    Parms.MessageSource = (struct UObject*)MessageSource;
    Parms.bSuccess = (uint8_t)bSuccess;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, uint8_t bLockMovement, uint8_t LockAILogic)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "LockAIResourcesWithAnimation");
    struct
    {
        struct UAnimInstance* AnimInstance;
        uint8_t bLockMovement;
        uint8_t LockAILogic;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    Parms.bLockMovement = (uint8_t)bLockMovement;
    Parms.LockAILogic = (uint8_t)LockAILogic;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UAIBlueprintHelperLibrary::IsValidAIRotation(struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "IsValidAIRotation");
    struct
    {
        struct FRotator Rotation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Rotation = (struct FRotator)Rotation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAIBlueprintHelperLibrary::IsValidAILocation(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "IsValidAILocation");
    struct
    {
        struct FVector Location;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAIBlueprintHelperLibrary::IsValidAIDirection(struct FVector DirectionVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "IsValidAIDirection");
    struct
    {
        struct FVector DirectionVector;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DirectionVector = (struct FVector)DirectionVector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPath");
    struct
    {
        struct AController* Controller;
        struct UNavigationPath* ReturnValue;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "GetBlackboard");
    struct
    {
        struct AActor* Target;
        struct UBlackboardComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIController* UAIBlueprintHelperLibrary::GetAIController(struct AActor* ControlledActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "GetAIController");
    struct
    {
        struct AActor* ControlledActor;
        struct AAIController* ReturnValue;
    } Parms{};
    Parms.ControlledActor = (struct AActor*)ControlledActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, uint8_t bStopOnOverlap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "CreateMoveToProxyObject");
    struct
    {
        struct UObject* WorldContextObject;
        struct APawn* Pawn;
        struct FVector Destination;
        struct AActor* TargetActor;
        float AcceptanceRadius;
        uint8_t bStopOnOverlap;
        struct UAIAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Pawn = (struct APawn*)Pawn;
    Parms.Destination = (struct FVector)Destination;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.AcceptanceRadius = (float)AcceptanceRadius;
    Parms.bStopOnOverlap = (uint8_t)bStopOnOverlap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAIPerceptionStimuliSourceComponent
void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(struct UAISense* SenseClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionStimuliSourceComponent", "UnregisterFromSense");
    struct
    {
        struct UAISense* SenseClass;
    } Parms{};
    Parms.SenseClass = (struct UAISense*)SenseClass;
    this->ProcessEvent(Func, &Parms);
}

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionStimuliSourceComponent", "UnregisterFromPerceptionSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionStimuliSourceComponent", "RegisterWithPerceptionSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAIPerceptionStimuliSourceComponent::RegisterForSense(struct UAISense* SenseClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionStimuliSourceComponent", "RegisterForSense");
    struct
    {
        struct UAISense* SenseClass;
    } Parms{};
    Parms.SenseClass = (struct UAISense*)SenseClass;
    this->ProcessEvent(Func, &Parms);
}

// UAIPerceptionSystem
void UAIPerceptionSystem::ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIPerceptionSystem", "ReportPerceptionEvent");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAISenseEvent* PerceptionEvent;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PerceptionEvent = (struct UAISenseEvent*)PerceptionEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAIPerceptionSystem::ReportEvent(struct UAISenseEvent* PerceptionEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionSystem", "ReportEvent");
    struct
    {
        struct UAISenseEvent* PerceptionEvent;
    } Parms{};
    Parms.PerceptionEvent = (struct UAISenseEvent*)PerceptionEvent;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAIPerceptionSystem::RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIPerceptionSystem", "RegisterPerceptionStimuliSource");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAISense* Sense;
        struct AActor* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Sense = (struct UAISense*)Sense;
    Parms.Target = (struct AActor*)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, EEndPlayReason EndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionSystem", "OnPerceptionStimuliSourceEndPlay");
    struct
    {
        struct AActor* Actor;
        enum EEndPlayReason EndPlayReason;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.EndPlayReason = (enum EEndPlayReason)EndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct UAISense*> UAIPerceptionSystem::GetSenseClassForStimulus(struct UObject* WorldContextObject, const struct FAIStimulus& Stimulus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIPerceptionSystem", "GetSenseClassForStimulus");
    struct
    {
        struct UObject* WorldContextObject;
        struct FAIStimulus Stimulus;
        struct TArray<struct UAISense*> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Stimulus = (struct FAIStimulus)Stimulus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAISense_Blueprint
float UAISense_Blueprint::OnUpdate(const struct TArray<struct UAISenseEvent*>& EventsToProcess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISense_Blueprint", "OnUpdate");
    struct
    {
        struct TArray<struct UAISenseEvent*> EventsToProcess;
        float ReturnValue;
    } Parms{};
    Parms.EventsToProcess = (struct TArray<struct UAISenseEvent*>)EventsToProcess;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAISense_Blueprint::OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISense_Blueprint", "OnListenerUpdated");
    struct
    {
        struct AActor* ActorListener;
        struct UAIPerceptionComponent* PerceptionComponent;
    } Parms{};
    Parms.ActorListener = (struct AActor*)ActorListener;
    Parms.PerceptionComponent = (struct UAIPerceptionComponent*)PerceptionComponent;
    this->ProcessEvent(Func, &Parms);
}

void UAISense_Blueprint::OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISense_Blueprint", "OnListenerUnregistered");
    struct
    {
        struct AActor* ActorListener;
        struct UAIPerceptionComponent* PerceptionComponent;
    } Parms{};
    Parms.ActorListener = (struct AActor*)ActorListener;
    Parms.PerceptionComponent = (struct UAIPerceptionComponent*)PerceptionComponent;
    this->ProcessEvent(Func, &Parms);
}

void UAISense_Blueprint::OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISense_Blueprint", "OnListenerRegistered");
    struct
    {
        struct AActor* ActorListener;
        struct UAIPerceptionComponent* PerceptionComponent;
    } Parms{};
    Parms.ActorListener = (struct AActor*)ActorListener;
    Parms.PerceptionComponent = (struct UAIPerceptionComponent*)PerceptionComponent;
    this->ProcessEvent(Func, &Parms);
}

void UAISense_Blueprint::K2_OnNewPawn(struct APawn* NewPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISense_Blueprint", "K2_OnNewPawn");
    struct
    {
        struct APawn* NewPawn;
    } Parms{};
    Parms.NewPawn = (struct APawn*)NewPawn;
    this->ProcessEvent(Func, &Parms);
}

void UAISense_Blueprint::GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*>& ListenerComponents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISense_Blueprint", "GetAllListenerComponents");
    struct
    {
        struct TArray<struct UAIPerceptionComponent*> ListenerComponents;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ListenerComponents = Parms.ListenerComponents;
}

void UAISense_Blueprint::GetAllListenerActors(struct TArray<struct AActor*>& ListenerActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISense_Blueprint", "GetAllListenerActors");
    struct
    {
        struct TArray<struct AActor*> ListenerActors;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ListenerActors = Parms.ListenerActors;
}

// UAISense_Damage
void UAISense_Damage::ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AISense_Damage", "ReportDamageEvent");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* DamagedActor;
        struct AActor* Instigator;
        float DamageAmount;
        struct FVector EventLocation;
        struct FVector HitLocation;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.DamagedActor = (struct AActor*)DamagedActor;
    Parms.Instigator = (struct AActor*)Instigator;
    Parms.DamageAmount = (float)DamageAmount;
    Parms.EventLocation = (struct FVector)EventLocation;
    Parms.HitLocation = (struct FVector)HitLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UAISense_Prediction
void UAISense_Prediction::RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AISense_Prediction", "RequestPawnPredictionEvent");
    struct
    {
        struct APawn* Requestor;
        struct AActor* PredictedActor;
        float PredictionTime;
    } Parms{};
    Parms.Requestor = (struct APawn*)Requestor;
    Parms.PredictedActor = (struct AActor*)PredictedActor;
    Parms.PredictionTime = (float)PredictionTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAISense_Prediction::RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AISense_Prediction", "RequestControllerPredictionEvent");
    struct
    {
        struct AAIController* Requestor;
        struct AActor* PredictedActor;
        float PredictionTime;
    } Parms{};
    Parms.Requestor = (struct AAIController*)Requestor;
    Parms.PredictedActor = (struct AActor*)PredictedActor;
    Parms.PredictionTime = (float)PredictionTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UAISystem
void UAISystem::AILoggingVerbose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISystem", "AILoggingVerbose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAISystem::AIIgnorePlayers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISystem", "AIIgnorePlayers");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAITask_RunEQS
struct UAITask_RunEQS* UAITask_RunEQS::RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AITask_RunEQS", "RunEQS");
    struct
    {
        struct AAIController* Controller;
        struct UEnvQuery* QueryTemplate;
        struct UAITask_RunEQS* ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.QueryTemplate = (struct UEnvQuery*)QueryTemplate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UBTDecorator_BlueprintBase
void UBTDecorator_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveTickAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverDeactivatedAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverDeactivated");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverActivatedAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveObserverActivated(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverActivated");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionStartAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionStart(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionStart");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, EBTNodeResult NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinishAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        enum EBTNodeResult NodeResult;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.NodeResult = (enum EBTNodeResult)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(struct AActor* OwnerActor, EBTNodeResult NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinish");
    struct
    {
        struct AActor* OwnerActor;
        enum EBTNodeResult NodeResult;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.NodeResult = (enum EBTNodeResult)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBTDecorator_BlueprintBase::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheckAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBTDecorator_BlueprintBase::PerformConditionCheck(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheck");
    struct
    {
        struct AActor* OwnerActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorObserverActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorExecutionActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UBTFunctionLibrary
void UBTFunctionLibrary::StopUsingExternalEvent(struct UBTNode* NodeOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "StopUsingExternalEvent");
    struct
    {
        struct UBTNode* NodeOwner;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "StartUsingExternalEvent");
    struct
    {
        struct UBTNode* NodeOwner;
        struct AActor* OwningActor;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.OwningActor = (struct AActor*)OwningActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsVector(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FVector Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsVector");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct FVector Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct FVector)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsString(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsString");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct FString Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FRotator Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsRotator");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct FRotator Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct FRotator)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsObject(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct UObject* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsObject");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct UObject* Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct UObject*)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsName(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct FName Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsName");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct FName Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct FName)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsInt(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsInt");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        int32_t Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsFloat");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        float Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsEnum");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        uint8_t Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsClass(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, struct UObject* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsClass");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct UObject* Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (struct UObject*)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::SetBlackboardValueAsBool(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsBool");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        uint8_t Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(struct UBTNode* NodeOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetOwnersBlackboard");
    struct
    {
        struct UBTNode* NodeOwner;
        struct UBlackboardComponent* ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(struct UBTNode* NodeOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetOwnerComponent");
    struct
    {
        struct UBTNode* NodeOwner;
        struct UBehaviorTreeComponent* ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UBTFunctionLibrary::GetBlackboardValueAsVector(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsVector");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct FVector ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBTFunctionLibrary::GetBlackboardValueAsString(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsString");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsRotator");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsObject");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UBTFunctionLibrary::GetBlackboardValueAsName(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsName");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct FName ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBTFunctionLibrary::GetBlackboardValueAsInt(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsInt");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        int32_t ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UBTFunctionLibrary::GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsFloat");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        float ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBTFunctionLibrary::GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsEnum");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UBTFunctionLibrary::GetBlackboardValueAsClass(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsClass");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBTFunctionLibrary::GetBlackboardValueAsBool(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsBool");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UBTFunctionLibrary::GetBlackboardValueAsActor(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsActor");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBTFunctionLibrary::ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "ClearBlackboardValueAsVector");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBTFunctionLibrary::ClearBlackboardValue(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "ClearBlackboardValue");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UBTService_BlueprintBase
void UBTService_BlueprintBase::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "ReceiveTickAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UBTService_BlueprintBase::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UBTService_BlueprintBase::ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "ReceiveSearchStartAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UBTService_BlueprintBase::ReceiveSearchStart(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "ReceiveSearchStart");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UBTService_BlueprintBase::ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "ReceiveDeactivationAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UBTService_BlueprintBase::ReceiveDeactivation(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "ReceiveDeactivation");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UBTService_BlueprintBase::ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "ReceiveActivationAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UBTService_BlueprintBase::ReceiveActivation(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "ReceiveActivation");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBTService_BlueprintBase::IsServiceActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "IsServiceActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UEnvQueryContext_BlueprintBase
void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_BlueprintBase", "ProvideSingleLocation");
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

void UEnvQueryContext_BlueprintBase::ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor*& ResultingActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_BlueprintBase", "ProvideSingleActor");
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

void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector>& ResultingLocationSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_BlueprintBase", "ProvideLocationsSet");
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

void UEnvQueryContext_BlueprintBase::ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*>& ResultingActorsSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryContext_BlueprintBase", "ProvideActorsSet");
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

// UEnvQueryGenerator_BlueprintBase
struct UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryGenerator_BlueprintBase", "GetQuerier");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(const struct TArray<struct FVector>& ContextLocations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryGenerator_BlueprintBase", "DoItemGeneration");
    struct
    {
        struct TArray<struct FVector> ContextLocations;
    } Parms{};
    Parms.ContextLocations = (struct TArray<struct FVector>)ContextLocations;
    this->ProcessEvent(Func, &Parms);
}

void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(struct FVector GeneratedVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryGenerator_BlueprintBase", "AddGeneratedVector");
    struct
    {
        struct FVector GeneratedVector;
    } Parms{};
    Parms.GeneratedVector = (struct FVector)GeneratedVector;
    this->ProcessEvent(Func, &Parms);
}

void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(struct AActor* GeneratedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryGenerator_BlueprintBase", "AddGeneratedActor");
    struct
    {
        struct AActor* GeneratedActor;
    } Parms{};
    Parms.GeneratedActor = (struct AActor*)GeneratedActor;
    this->ProcessEvent(Func, &Parms);
}

// UEnvQueryManager
struct UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, EEnvQueryRunMode RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EnvQueryManager", "RunEQSQuery");
    struct
    {
        struct UObject* WorldContextObject;
        struct UEnvQuery* QueryTemplate;
        struct UObject* Querier;
        enum EEnvQueryRunMode RunMode;
        struct UEnvQueryInstanceBlueprintWrapper* WrapperClass;
        struct UEnvQueryInstanceBlueprintWrapper* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QueryTemplate = (struct UEnvQuery*)QueryTemplate;
    Parms.Querier = (struct UObject*)Querier;
    Parms.RunMode = (enum EEnvQueryRunMode)RunMode;
    Parms.WrapperClass = (struct UEnvQueryInstanceBlueprintWrapper*)WrapperClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNavLocalGridManager
uint8_t UNavLocalGridManager::SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "SetLocalNavigationGridDensity");
    struct
    {
        struct UObject* WorldContextObject;
        float CellSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.CellSize = (float)CellSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNavLocalGridManager::RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridID, uint8_t bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "RemoveLocalNavigationGrid");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t GridID;
        uint8_t bRebuildGrids;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.GridID = (int32_t)GridID;
    Parms.bRebuildGrids = (uint8_t)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UNavLocalGridManager::FindLocalNavigationGridPath(struct UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, struct TArray<struct FVector>& PathPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "FindLocalNavigationGridPath");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        struct TArray<struct FVector> PathPoints;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PathPoints = Parms.PathPoints;
    return Parms.ReturnValue;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, const struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, uint8_t bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoints");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FVector> Locations;
        int32_t Radius2D;
        float Height;
        uint8_t bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Locations = (struct TArray<struct FVector>)Locations;
    Parms.Radius2D = (int32_t)Radius2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (uint8_t)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, const struct FVector& Location, int32_t Radius2D, float Height, uint8_t bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoint");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        int32_t Radius2D;
        float Height;
        uint8_t bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.Radius2D = (int32_t)Radius2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (uint8_t)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, uint8_t bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForCapsule");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        float CapsuleRadius;
        float CapsuleHalfHeight;
        int32_t Radius2D;
        float Height;
        uint8_t bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.CapsuleRadius = (float)CapsuleRadius;
    Parms.CapsuleHalfHeight = (float)CapsuleHalfHeight;
    Parms.Radius2D = (int32_t)Radius2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (uint8_t)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForBox(struct UObject* WorldContextObject, const struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, uint8_t bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForBox");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        struct FVector Extent;
        struct FRotator Rotation;
        int32_t Radius2D;
        float Height;
        uint8_t bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.Extent = (struct FVector)Extent;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Radius2D = (int32_t)Radius2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (uint8_t)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPawnAction
EAIRequestPriority UPawnAction::GetActionPriority()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction", "GetActionPriority");
    struct
    {
        enum EAIRequestPriority ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPawnAction::Finish(EPawnActionResult WithResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction", "Finish");
    struct
    {
        enum EPawnActionResult WithResult;
    } Parms{};
    Parms.WithResult = (enum EPawnActionResult)WithResult;
    this->ProcessEvent(Func, &Parms);
}

struct UPawnAction* UPawnAction::CreateActionInstance(struct UObject* WorldContextObject, struct UPawnAction* ActionClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PawnAction", "CreateActionInstance");
    struct
    {
        struct UObject* WorldContextObject;
        struct UPawnAction* ActionClass;
        struct UPawnAction* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActionClass = (struct UPawnAction*)ActionClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPawnAction_BlueprintBase
void UPawnAction_BlueprintBase::ActionTick(struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction_BlueprintBase", "ActionTick");
    struct
    {
        struct APawn* ControlledPawn;
        float DeltaSeconds;
    } Parms{};
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UPawnAction_BlueprintBase::ActionStart(struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction_BlueprintBase", "ActionStart");
    struct
    {
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UPawnAction_BlueprintBase::ActionResume(struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction_BlueprintBase", "ActionResume");
    struct
    {
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UPawnAction_BlueprintBase::ActionPause(struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction_BlueprintBase", "ActionPause");
    struct
    {
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UPawnAction_BlueprintBase::ActionFinished(struct APawn* ControlledPawn, EPawnActionResult WithResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction_BlueprintBase", "ActionFinished");
    struct
    {
        struct APawn* ControlledPawn;
        enum EPawnActionResult WithResult;
    } Parms{};
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.WithResult = (enum EPawnActionResult)WithResult;
    this->ProcessEvent(Func, &Parms);
}

// UPawnActionsComponent
uint8_t UPawnActionsComponent::K2_PushAction(struct UPawnAction* NewAction, EAIRequestPriority Priority, struct UObject* Instigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnActionsComponent", "K2_PushAction");
    struct
    {
        struct UPawnAction* NewAction;
        enum EAIRequestPriority Priority;
        struct UObject* Instigator;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewAction = (struct UPawnAction*)NewAction;
    Parms.Priority = (enum EAIRequestPriority)Priority;
    Parms.Instigator = (struct UObject*)Instigator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPawnActionsComponent::K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, EAIRequestPriority Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PawnActionsComponent", "K2_PerformAction");
    struct
    {
        struct APawn* Pawn;
        struct UPawnAction* Action;
        enum EAIRequestPriority Priority;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Pawn = (struct APawn*)Pawn;
    Parms.Action = (struct UPawnAction*)Action;
    Parms.Priority = (enum EAIRequestPriority)Priority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPawnActionAbortState UPawnActionsComponent::K2_ForceAbortAction(struct UPawnAction* ActionToAbort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnActionsComponent", "K2_ForceAbortAction");
    struct
    {
        struct UPawnAction* ActionToAbort;
        enum EPawnActionAbortState ReturnValue;
    } Parms{};
    Parms.ActionToAbort = (struct UPawnAction*)ActionToAbort;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPawnActionAbortState UPawnActionsComponent::K2_AbortAction(struct UPawnAction* ActionToAbort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnActionsComponent", "K2_AbortAction");
    struct
    {
        struct UPawnAction* ActionToAbort;
        enum EPawnActionAbortState ReturnValue;
    } Parms{};
    Parms.ActionToAbort = (struct UPawnAction*)ActionToAbort;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPawnSensingComponent
void UPawnSensingComponent::SetSensingUpdatesEnabled(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnSensingComponent", "SetSensingUpdatesEnabled");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnSensingComponent", "SetSensingInterval");
    struct
    {
        float NewSensingInterval;
    } Parms{};
    Parms.NewSensingInterval = (float)NewSensingInterval;
    this->ProcessEvent(Func, &Parms);
}

void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnSensingComponent", "SetPeripheralVisionAngle");
    struct
    {
        float NewPeripheralVisionAngle;
    } Parms{};
    Parms.NewPeripheralVisionAngle = (float)NewPeripheralVisionAngle;
    this->ProcessEvent(Func, &Parms);
}

void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(struct APawn* Pawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnSensingComponent", "SeePawnDelegate__DelegateSignature");
    struct
    {
        struct APawn* Pawn;
    } Parms{};
    Parms.Pawn = (struct APawn*)Pawn;
    this->ProcessEvent(Func, &Parms);
}

void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, const struct FVector& Location, float Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnSensingComponent", "HearNoiseDelegate__DelegateSignature");
    struct
    {
        struct APawn* Instigator;
        struct FVector Location;
        float Volume;
    } Parms{};
    Parms.Instigator = (struct APawn*)Instigator;
    Parms.Location = (struct FVector)Location;
    Parms.Volume = (float)Volume;
    this->ProcessEvent(Func, &Parms);
}

float UPawnSensingComponent::GetPeripheralVisionCosine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnSensingComponent", "GetPeripheralVisionCosine");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPawnSensingComponent::GetPeripheralVisionAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnSensingComponent", "GetPeripheralVisionAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
