#include "AIModule.hpp"
#include "Engine.hpp"
#include "GameplayTags.hpp"
#include "GameplayTasks.hpp"
#include "NavigationSystem.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

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

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsLocations");
    struct
    {
        struct TArray<struct FVector> ResultLocations;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ResultLocations = Parms.ResultLocations;
    return Parms.ReturnValue;
}

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(struct TArray<struct AActor*>& ResultActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsActors");
    struct
    {
        struct TArray<struct AActor*> ResultActors;
        bool ReturnValue;
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

void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, uint8_t QueryStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("EnvQueryInstanceBlueprintWrapper", "EQSQueryDoneSignature__DelegateSignature");
    struct
    {
        struct UEnvQueryInstanceBlueprintWrapper* QueryInstance;
        uint8_t QueryStatus;
    } Parms{};
    Parms.QueryInstance = (struct UEnvQueryInstanceBlueprintWrapper*)QueryInstance;
    Parms.QueryStatus = (uint8_t)QueryStatus;
    this->ProcessEvent(Func, &Parms);
}

// UEnvQueryManager
struct UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, uint8_t RunMode, struct UEnvQueryInstanceBlueprintWrapper* WrapperClass, uint8_t QueryPriority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EnvQueryManager", "RunEQSQuery");
    struct
    {
        struct UObject* WorldContextObject;
        struct UEnvQuery* QueryTemplate;
        struct UObject* Querier;
        uint8_t RunMode;
        struct UEnvQueryInstanceBlueprintWrapper* WrapperClass;
        uint8_t QueryPriority;
        struct UEnvQueryInstanceBlueprintWrapper* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QueryTemplate = (struct UEnvQuery*)QueryTemplate;
    Parms.Querier = (struct UObject*)Querier;
    Parms.RunMode = (uint8_t)RunMode;
    Parms.WrapperClass = (struct UEnvQueryInstanceBlueprintWrapper*)WrapperClass;
    Parms.QueryPriority = (uint8_t)QueryPriority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ANavLinkProxy
void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavLinkProxy", "SetSmartLinkEnabled");
    struct
    {
        bool bEnabled;
    } Parms{};
    Parms.bEnabled = (bool)bEnabled;
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

bool ANavLinkProxy::IsSmartLinkEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavLinkProxy", "IsSmartLinkEnabled");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool ANavLinkProxy::HasMovingAgents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NavLinkProxy", "HasMovingAgents");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

uint8_t UPathFollowingComponent::GetPathActionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PathFollowingComponent", "GetPathActionType");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAIPerceptionComponent
void UAIPerceptionComponent::SetSenseEnabled(struct UAISense* SenseClass, bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "SetSenseEnabled");
    struct
    {
        struct UAISense* SenseClass;
        bool bEnable;
    } Parms{};
    Parms.SenseClass = (struct UAISense*)SenseClass;
    Parms.bEnable = (bool)bEnable;
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

void UAIPerceptionComponent::OnOwnerEndPlay(struct AActor* Actor, uint8_t EndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "OnOwnerEndPlay");
    struct
    {
        struct AActor* Actor;
        uint8_t EndPlayReason;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.EndPlayReason = (uint8_t)EndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

void UAIPerceptionComponent::GetPerceivedHostileActorsBySense(struct UAISense* SenseToUse, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "GetPerceivedHostileActorsBySense");
    struct
    {
        struct UAISense* SenseToUse;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.SenseToUse = (struct UAISense*)SenseToUse;
    this->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
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

bool UAIPerceptionComponent::GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo& Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "GetActorsPerception");
    struct
    {
        struct AActor* Actor;
        struct FActorPerceptionBlueprintInfo Info;
        bool ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
    Info = Parms.Info;
    return Parms.ReturnValue;
}

void UAIPerceptionComponent::ForgetAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionComponent", "ForgetAll");
    struct
    {
    } Parms{};
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

bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, struct UAISense* Sense, struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIPerceptionSystem", "RegisterPerceptionStimuliSource");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAISense* Sense;
        struct AActor* Target;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Sense = (struct UAISense*)Sense;
    Parms.Target = (struct AActor*)Target;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, uint8_t EndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPerceptionSystem", "OnPerceptionStimuliSourceEndPlay");
    struct
    {
        struct AActor* Actor;
        uint8_t EndPlayReason;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.EndPlayReason = (uint8_t)EndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

struct UAISense* UAIPerceptionSystem::GetSenseClassForStimulus(struct UObject* WorldContextObject, const struct FAIStimulus& Stimulus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIPerceptionSystem", "GetSenseClassForStimulus");
    struct
    {
        struct UObject* WorldContextObject;
        struct FAIStimulus Stimulus;
        struct UAISense* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Stimulus = (struct FAIStimulus)Stimulus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

// UBTService
void UBTService::SetTickInterval(float TickInterval, float TickRandomDeviation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService", "SetTickInterval");
    struct
    {
        float TickInterval;
        float TickRandomDeviation;
    } Parms{};
    Parms.TickInterval = (float)TickInterval;
    Parms.TickRandomDeviation = (float)TickRandomDeviation;
    this->ProcessEvent(Func, &Parms);
}

// AAIController
bool AAIController::UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "UseBlackboard");
    struct
    {
        struct UBlackboardData* BlackboardAsset;
        struct UBlackboardComponent* BlackboardComponent;
        bool ReturnValue;
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

void AAIController::SetMoveBlockDetection(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "SetMoveBlockDetection");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
}

bool AAIController::RunBehaviorTree(struct UBehaviorTree* BTAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "RunBehaviorTree");
    struct
    {
        struct UBehaviorTree* BTAsset;
        bool ReturnValue;
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

uint8_t AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "MoveToLocation");
    struct
    {
        struct FVector Dest;
        float AcceptanceRadius;
        bool bStopOnOverlap;
        bool bUsePathfinding;
        bool bProjectDestinationToNavigation;
        bool bCanStrafe;
        struct UNavigationQueryFilter* FilterClass;
        bool bAllowPartialPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Dest = (struct FVector)Dest;
    Parms.AcceptanceRadius = (float)AcceptanceRadius;
    Parms.bStopOnOverlap = (bool)bStopOnOverlap;
    Parms.bUsePathfinding = (bool)bUsePathfinding;
    Parms.bProjectDestinationToNavigation = (bool)bProjectDestinationToNavigation;
    Parms.bCanStrafe = (bool)bCanStrafe;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    Parms.bAllowPartialPath = (bool)bAllowPartialPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AAIController::MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UNavigationQueryFilter* FilterClass, bool bAllowPartialPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "MoveToActor");
    struct
    {
        struct AActor* Goal;
        float AcceptanceRadius;
        bool bStopOnOverlap;
        bool bUsePathfinding;
        bool bCanStrafe;
        struct UNavigationQueryFilter* FilterClass;
        bool bAllowPartialPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Goal = (struct AActor*)Goal;
    Parms.AcceptanceRadius = (float)AcceptanceRadius;
    Parms.bStopOnOverlap = (bool)bStopOnOverlap;
    Parms.bUsePathfinding = (bool)bUsePathfinding;
    Parms.bCanStrafe = (bool)bCanStrafe;
    Parms.FilterClass = (struct UNavigationQueryFilter*)FilterClass;
    Parms.bAllowPartialPath = (bool)bAllowPartialPath;
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

bool AAIController::HasPartialPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "HasPartialPath");
    struct
    {
        bool ReturnValue;
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

uint8_t AAIController::GetMoveStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIController", "GetMoveStatus");
    struct
    {
        uint8_t ReturnValue;
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

// UBrainComponent
void UBrainComponent::StopLogic(struct FString reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrainComponent", "StopLogic");
    struct
    {
        struct FString reason;
    } Parms{};
    Parms.reason = (struct FString)reason;
    this->ProcessEvent(Func, &Parms);
}

void UBrainComponent::StartLogic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrainComponent", "StartLogic");
    struct
    {
    } Parms{};
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

bool UBrainComponent::IsRunning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrainComponent", "IsRunning");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBrainComponent::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BrainComponent", "IsPaused");
    struct
    {
        bool ReturnValue;
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

void UBehaviorTreeComponent::AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CoolDownDuration, bool bAddToExistingDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BehaviorTreeComponent", "AddCooldownTagDuration");
    struct
    {
        struct FGameplayTag CooldownTag;
        float CoolDownDuration;
        bool bAddToExistingDuration;
    } Parms{};
    Parms.CooldownTag = (struct FGameplayTag)CooldownTag;
    Parms.CoolDownDuration = (float)CoolDownDuration;
    Parms.bAddToExistingDuration = (bool)bAddToExistingDuration;
    this->ProcessEvent(Func, &Parms);
}

// UAIAsyncTaskBlueprintProxy
void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(struct FAIRequestID RequestID, uint8_t MovementResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAsyncTaskBlueprintProxy", "OnMoveCompleted");
    struct
    {
        struct FAIRequestID RequestID;
        uint8_t MovementResult;
    } Parms{};
    Parms.RequestID = (struct FAIRequestID)RequestID;
    Parms.MovementResult = (uint8_t)MovementResult;
    this->ProcessEvent(Func, &Parms);
}

// UAIBlueprintHelperLibrary
void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "UnlockAIResourcesWithAnimation");
    struct
    {
        struct UAnimInstance* AnimInstance;
        bool bUnlockMovement;
        bool UnlockAILogic;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    Parms.bUnlockMovement = (bool)bUnlockMovement;
    Parms.UnlockAILogic = (bool)UnlockAILogic;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(struct UObject* WorldContextObject, struct APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner)
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
        bool bNoCollisionFail;
        struct AActor* Owner;
        struct APawn* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PawnClass = (struct APawn*)PawnClass;
    Parms.BehaviorTree = (struct UBehaviorTree*)BehaviorTree;
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.bNoCollisionFail = (bool)bNoCollisionFail;
    Parms.Owner = (struct AActor*)Owner;
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

void UAIBlueprintHelperLibrary::SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "SendAIMessage");
    struct
    {
        struct APawn* Target;
        struct FName Message;
        struct UObject* MessageSource;
        bool bSuccess;
    } Parms{};
    Parms.Target = (struct APawn*)Target;
    Parms.Message = (struct FName)Message;
    Parms.MessageSource = (struct UObject*)MessageSource;
    Parms.bSuccess = (bool)bSuccess;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "LockAIResourcesWithAnimation");
    struct
    {
        struct UAnimInstance* AnimInstance;
        bool bLockMovement;
        bool LockAILogic;
    } Parms{};
    Parms.AnimInstance = (struct UAnimInstance*)AnimInstance;
    Parms.bLockMovement = (bool)bLockMovement;
    Parms.LockAILogic = (bool)LockAILogic;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UAIBlueprintHelperLibrary::IsValidAIRotation(struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "IsValidAIRotation");
    struct
    {
        struct FRotator Rotation;
        bool ReturnValue;
    } Parms{};
    Parms.Rotation = (struct FRotator)Rotation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAIBlueprintHelperLibrary::IsValidAILocation(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "IsValidAILocation");
    struct
    {
        struct FVector Location;
        bool ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAIBlueprintHelperLibrary::IsValidAIDirection(struct FVector DirectionVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "IsValidAIDirection");
    struct
    {
        struct FVector DirectionVector;
        bool ReturnValue;
    } Parms{};
    Parms.DirectionVector = (struct FVector)DirectionVector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAIBlueprintHelperLibrary::GetNextNavLinkIndex(struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "GetNextNavLinkIndex");
    struct
    {
        struct AController* Controller;
        int32_t ReturnValue;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UAIBlueprintHelperLibrary::GetCurrentPathPoints(struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPathPoints");
    struct
    {
        struct AController* Controller;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAIBlueprintHelperLibrary::GetCurrentPathIndex(struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPathIndex");
    struct
    {
        struct AController* Controller;
        int32_t ReturnValue;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
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

struct UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
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
        bool bStopOnOverlap;
        struct UAIAsyncTaskBlueprintProxy* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Pawn = (struct APawn*)Pawn;
    Parms.Destination = (struct FVector)Destination;
    Parms.TargetActor = (struct AActor*)TargetActor;
    Parms.AcceptanceRadius = (float)AcceptanceRadius;
    Parms.bStopOnOverlap = (bool)bStopOnOverlap;
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

// UAITask_MoveTo
struct UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, uint8_t StopOnOverlap, uint8_t AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, uint8_t ProjectGoalOnNavigation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AITask_MoveTo", "AIMoveTo");
    struct
    {
        struct AAIController* Controller;
        struct FVector GoalLocation;
        struct AActor* GoalActor;
        float AcceptanceRadius;
        uint8_t StopOnOverlap;
        uint8_t AcceptPartialPath;
        bool bUsePathfinding;
        bool bLockAILogic;
        bool bUseContinuosGoalTracking;
        uint8_t ProjectGoalOnNavigation;
        struct UAITask_MoveTo* ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.GoalLocation = (struct FVector)GoalLocation;
    Parms.GoalActor = (struct AActor*)GoalActor;
    Parms.AcceptanceRadius = (float)AcceptanceRadius;
    Parms.StopOnOverlap = (uint8_t)StopOnOverlap;
    Parms.AcceptPartialPath = (uint8_t)AcceptPartialPath;
    Parms.bUsePathfinding = (bool)bUsePathfinding;
    Parms.bLockAILogic = (bool)bLockAILogic;
    Parms.bUseContinuosGoalTracking = (bool)bUseContinuosGoalTracking;
    Parms.ProjectGoalOnNavigation = (uint8_t)ProjectGoalOnNavigation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

// IBlackboardAssetProvider
struct UBlackboardData* IBlackboardAssetProvider::GetBlackboardAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardAssetProvider", "GetBlackboardAsset");
    struct
    {
        struct UBlackboardData* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
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

void UBlackboardComponent::SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "SetValueAsBool");
    struct
    {
        struct FName KeyName;
        bool BoolValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    Parms.BoolValue = (bool)BoolValue;
    this->ProcessEvent(Func, &Parms);
}

bool UBlackboardComponent::IsVectorValueSet(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "IsVectorValueSet");
    struct
    {
        struct FName KeyName;
        bool ReturnValue;
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

bool UBlackboardComponent::GetValueAsBool(const struct FName& KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetValueAsBool");
    struct
    {
        struct FName KeyName;
        bool ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBlackboardComponent::GetRotationFromEntry(const struct FName& KeyName, struct FRotator& ResultRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetRotationFromEntry");
    struct
    {
        struct FName KeyName;
        struct FRotator ResultRotation;
        bool ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    this->ProcessEvent(Func, &Parms);
    ResultRotation = Parms.ResultRotation;
    return Parms.ReturnValue;
}

bool UBlackboardComponent::GetLocationFromEntry(const struct FName& KeyName, struct FVector& ResultLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlackboardComponent", "GetLocationFromEntry");
    struct
    {
        struct FName KeyName;
        struct FVector ResultLocation;
        bool ReturnValue;
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

void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, uint8_t NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinishAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        uint8_t NodeResult;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.NodeResult = (uint8_t)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(struct AActor* OwnerActor, uint8_t NodeResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinish");
    struct
    {
        struct AActor* OwnerActor;
        uint8_t NodeResult;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.NodeResult = (uint8_t)NodeResult;
    this->ProcessEvent(Func, &Parms);
}

bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheckAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
        bool ReturnValue;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBTDecorator_BlueprintBase::PerformConditionCheck(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheck");
    struct
    {
        struct AActor* OwnerActor;
        bool ReturnValue;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorObserverActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorExecutionActive");
    struct
    {
        bool ReturnValue;
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

void UBTFunctionLibrary::SetBlackboardValueAsBool(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsBool");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        bool Value;
    } Parms{};
    Parms.NodeOwner = (struct UBTNode*)NodeOwner;
    Parms.Key = (struct FBlackboardKeySelector)Key;
    Parms.Value = (bool)Value;
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

bool UBTFunctionLibrary::GetBlackboardValueAsBool(struct UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsBool");
    struct
    {
        struct UBTNode* NodeOwner;
        struct FBlackboardKeySelector Key;
        bool ReturnValue;
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

bool UBTService_BlueprintBase::IsServiceActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTService_BlueprintBase", "IsServiceActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UBTTask_BlueprintBase
void UBTTask_BlueprintBase::SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessageWithId");
    struct
    {
        struct FName MessageName;
        int32_t RequestID;
    } Parms{};
    Parms.MessageName = (struct FName)MessageName;
    Parms.RequestID = (int32_t)RequestID;
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

bool UBTTask_BlueprintBase::IsTaskExecuting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "IsTaskExecuting");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UBTTask_BlueprintBase::IsTaskAborting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "IsTaskAborting");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BTTask_BlueprintBase", "FinishExecute");
    struct
    {
        bool bSuccess;
    } Parms{};
    Parms.bSuccess = (bool)bSuccess;
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

// UCrowdFollowingComponent
void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CrowdFollowingComponent", "SuspendCrowdSteering");
    struct
    {
        bool bSuspend;
    } Parms{};
    Parms.bSuspend = (bool)bSuspend;
    this->ProcessEvent(Func, &Parms);
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

// UNavLocalGridManager
bool UNavLocalGridManager::SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "SetLocalNavigationGridDensity");
    struct
    {
        struct UObject* WorldContextObject;
        float CellSize;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.CellSize = (float)CellSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNavLocalGridManager::RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "RemoveLocalNavigationGrid");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t GridId;
        bool bRebuildGrids;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.GridId = (int32_t)GridId;
    Parms.bRebuildGrids = (bool)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UNavLocalGridManager::FindLocalNavigationGridPath(struct UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, struct TArray<struct FVector>& PathPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "FindLocalNavigationGridPath");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Start;
        struct FVector End;
        struct TArray<struct FVector> PathPoints;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PathPoints = Parms.PathPoints;
    return Parms.ReturnValue;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, const struct TArray<struct FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoints");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FVector> Locations;
        int32_t Radius2D;
        float Height;
        bool bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Locations = (struct TArray<struct FVector>)Locations;
    Parms.Radius2D = (int32_t)Radius2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (bool)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, const struct FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoint");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector Location;
        int32_t Radius2D;
        float Height;
        bool bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.Radius2D = (int32_t)Radius2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (bool)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids)
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
        bool bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.CapsuleRadius = (float)CapsuleRadius;
    Parms.CapsuleHalfHeight = (float)CapsuleHalfHeight;
    Parms.Radius2D = (int32_t)Radius2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (bool)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNavLocalGridManager::AddLocalNavigationGridForBox(struct UObject* WorldContextObject, const struct FVector& Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids)
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
        bool bRebuildGrids;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Location = (struct FVector)Location;
    Parms.Extent = (struct FVector)Extent;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Radius2D = (int32_t)Radius2D;
    Parms.Height = (float)Height;
    Parms.bRebuildGrids = (bool)bRebuildGrids;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPawnAction
uint8_t UPawnAction::GetActionPriority()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction", "GetActionPriority");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPawnAction::Finish(uint8_t WithResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction", "Finish");
    struct
    {
        uint8_t WithResult;
    } Parms{};
    Parms.WithResult = (uint8_t)WithResult;
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

void UPawnAction_BlueprintBase::ActionFinished(struct APawn* ControlledPawn, uint8_t WithResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnAction_BlueprintBase", "ActionFinished");
    struct
    {
        struct APawn* ControlledPawn;
        uint8_t WithResult;
    } Parms{};
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    Parms.WithResult = (uint8_t)WithResult;
    this->ProcessEvent(Func, &Parms);
}

// UPawnActionsComponent
bool UPawnActionsComponent::K2_PushAction(struct UPawnAction* NewAction, uint8_t Priority, struct UObject* Instigator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnActionsComponent", "K2_PushAction");
    struct
    {
        struct UPawnAction* NewAction;
        uint8_t Priority;
        struct UObject* Instigator;
        bool ReturnValue;
    } Parms{};
    Parms.NewAction = (struct UPawnAction*)NewAction;
    Parms.Priority = (uint8_t)Priority;
    Parms.Instigator = (struct UObject*)Instigator;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UPawnActionsComponent::K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, uint8_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PawnActionsComponent", "K2_PerformAction");
    struct
    {
        struct APawn* Pawn;
        struct UPawnAction* Action;
        uint8_t Priority;
        bool ReturnValue;
    } Parms{};
    Parms.Pawn = (struct APawn*)Pawn;
    Parms.Action = (struct UPawnAction*)Action;
    Parms.Priority = (uint8_t)Priority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPawnActionsComponent::K2_ForceAbortAction(struct UPawnAction* ActionToAbort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnActionsComponent", "K2_ForceAbortAction");
    struct
    {
        struct UPawnAction* ActionToAbort;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ActionToAbort = (struct UPawnAction*)ActionToAbort;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPawnActionsComponent::K2_AbortAction(struct UPawnAction* ActionToAbort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnActionsComponent", "K2_AbortAction");
    struct
    {
        struct UPawnAction* ActionToAbort;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ActionToAbort = (struct UPawnAction*)ActionToAbort;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPawnSensingComponent
void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PawnSensingComponent", "SetSensingUpdatesEnabled");
    struct
    {
        bool bEnabled;
    } Parms{};
    Parms.bEnabled = (bool)bEnabled;
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
