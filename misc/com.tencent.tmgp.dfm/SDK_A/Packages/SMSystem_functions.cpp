#include "SMSystem.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ISMInstanceInterface::* ----
struct UObject* ISMInstanceInterface::GetContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstanceInterface", "GetContext");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ISMStateMachineInterface::* ----
void ISMStateMachineInterface::Update(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineInterface", "Update");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void ISMStateMachineInterface::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineInterface", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ISMStateMachineInterface::Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineInterface", "Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ISMStateMachineInterface::Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineInterface", "Shutdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ISMStateMachineInterface::Initialize(struct UObject* Context, struct UActorComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineInterface", "Initialize");
    struct
    {
        struct UObject* Context;
        struct UActorComponent* Component;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    Parms.Component = (struct UActorComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

// ---- ISMStateMachineNetworkedInterface::* ----
uint8_t ISMStateMachineNetworkedInterface::ShouldReplicateStates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineNetworkedInterface", "ShouldReplicateStates");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ISMStateMachineNetworkedInterface::ProcessTransaction(const struct TArray<struct FSMNetworkedTransaction>& Transactions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineNetworkedInterface", "ProcessTransaction");
    struct
    {
        struct TArray<struct FSMNetworkedTransaction> Transactions;
    } Parms{};
    Parms.Transactions = (struct TArray<struct FSMNetworkedTransaction>)Transactions;
    this->ProcessEvent(Func, &Parms);
}

// ---- USMNodeInstance::* ----
uint8_t USMNodeInstance::IsInEndState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "IsInEndState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMNodeInstance::IsActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "IsActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMNodeInstance::HasUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "HasUpdated");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USMNodeInstance::GetTimeInState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetTimeInState");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMInstance* USMNodeInstance::GetStateMachineInstance(uint8_t bTopMostInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetStateMachineInstance");
    struct
    {
        uint8_t bTopMostInstance;
        struct USMInstance* ReturnValue;
    } Parms{};
    Parms.bTopMostInstance = (uint8_t)bTopMostInstance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMStateMachineInstance* USMNodeInstance::GetOwningStateMachineNodeInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetOwningStateMachineNodeInstance");
    struct
    {
        struct USMStateMachineInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString USMNodeInstance::GetNodeName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetNodeName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor USMNodeInstance::GetNodeIconTintColor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetNodeIconTintColor");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D USMNodeInstance::GetNodeIconSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetNodeIconSize");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* USMNodeInstance::GetNodeIcon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetNodeIcon");
    struct
    {
        struct UTexture2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGuid USMNodeInstance::GetGuid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetGuid");
    struct
    {
        struct FGuid ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* USMNodeInstance::GetContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "GetContext");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USMNodeInstance::EvaluateGraphProperties()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "EvaluateGraphProperties");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMNodeInstance::ConstructionScript()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMNodeInstance", "ConstructionScript");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- USMStateInstance_Base::* ----
uint8_t USMStateInstance_Base::SwitchToLinkedState(struct USMStateInstance_Base* NextStateInstance, uint8_t bRequireTransitionToPass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "SwitchToLinkedState");
    struct
    {
        struct USMStateInstance_Base* NextStateInstance;
        uint8_t bRequireTransitionToPass;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NextStateInstance = (struct USMStateInstance_Base*)NextStateInstance;
    Parms.bRequireTransitionToPass = (uint8_t)bRequireTransitionToPass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USMStateInstance_Base::SetActive(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "SetActive");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void USMStateInstance_Base::OnStateEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "OnStateEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateInstance_Base::OnStateBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "OnStateBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USMStateInstance_Base::IsStateMachine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "IsStateMachine");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMTransitionInstance* USMStateInstance_Base::GetTransitionToTake()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "GetTransitionToTake");
    struct
    {
        struct USMTransitionInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMTransitionInstance* USMStateInstance_Base::GetTransitionByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "GetTransitionByIndex");
    struct
    {
        int32_t Index;
        struct USMTransitionInstance* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USMStateInstance_Base::GetStateInfo(struct FSMStateInfo& State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "GetStateInfo");
    struct
    {
        struct FSMStateInfo State;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    State = Parms.State;
}

uint8_t USMStateInstance_Base::GetOutgoingTransitions(struct TArray<struct USMTransitionInstance*>& Transitions, uint8_t bExcludeAlwaysFalse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "GetOutgoingTransitions");
    struct
    {
        struct TArray<struct USMTransitionInstance*> Transitions;
        uint8_t bExcludeAlwaysFalse;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bExcludeAlwaysFalse = (uint8_t)bExcludeAlwaysFalse;
    this->ProcessEvent(Func, &Parms);
    Transitions = Parms.Transitions;
    return Parms.ReturnValue;
}

struct USMStateInstance_Base* USMStateInstance_Base::GetNextStateByTransitionIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "GetNextStateByTransitionIndex");
    struct
    {
        int32_t Index;
        struct USMStateInstance_Base* ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMStateInstance_Base::GetIncomingTransitions(struct TArray<struct USMTransitionInstance*>& Transitions, uint8_t bExcludeAlwaysFalse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "GetIncomingTransitions");
    struct
    {
        struct TArray<struct USMTransitionInstance*> Transitions;
        uint8_t bExcludeAlwaysFalse;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bExcludeAlwaysFalse = (uint8_t)bExcludeAlwaysFalse;
    this->ProcessEvent(Func, &Parms);
    Transitions = Parms.Transitions;
    return Parms.ReturnValue;
}

void USMStateInstance_Base::EvaluateTransitions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateInstance_Base", "EvaluateTransitions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- USMConduitInstance::* ----
void USMConduitInstance::SetCanEvaluate(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMConduitInstance", "SetCanEvaluate");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USMConduitInstance::GetCanEvaluate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMConduitInstance", "GetCanEvaluate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMConduitInstance::CanEnterTransition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMConduitInstance", "CanEnterTransition");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USMInstance::* ----
void USMInstance::Update(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Update");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::TryGetTransitionInfo(const struct FGuid& Guid, struct FSMTransitionInfo& TransitionInfo, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "TryGetTransitionInfo");
    struct
    {
        struct FGuid Guid;
        struct FSMTransitionInfo TransitionInfo;
        uint8_t bSuccess;
    } Parms{};
    Parms.Guid = (struct FGuid)Guid;
    this->ProcessEvent(Func, &Parms);
    TransitionInfo = Parms.TransitionInfo;
    bSuccess = Parms.bSuccess;
}

void USMInstance::TryGetStateInfo(const struct FGuid& Guid, struct FSMStateInfo& StateInfo, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "TryGetStateInfo");
    struct
    {
        struct FGuid Guid;
        struct FSMStateInfo StateInfo;
        uint8_t bSuccess;
    } Parms{};
    Parms.Guid = (struct FGuid)Guid;
    this->ProcessEvent(Func, &Parms);
    StateInfo = Parms.StateInfo;
    bSuccess = Parms.bSuccess;
}

void USMInstance::TryGetNestedActiveState(struct FSMStateInfo& FoundState, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "TryGetNestedActiveState");
    struct
    {
        struct FSMStateInfo FoundState;
        uint8_t bSuccess;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    FoundState = Parms.FoundState;
    bSuccess = Parms.bSuccess;
}

void USMInstance::Tick(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Tick");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::StartWithNewContext(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "StartWithNewContext");
    struct
    {
        struct UObject* Context;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Shutdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetTickOnManualUpdate(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetTickOnManualUpdate");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetTickInterval(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetTickInterval");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetStopOnEndState(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetStopOnEndState");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetStateMachineClass(struct USMStateMachineInstance* NewStateMachineClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetStateMachineClass");
    struct
    {
        struct USMStateMachineInstance* NewStateMachineClass;
    } Parms{};
    Parms.NewStateMachineClass = (struct USMStateMachineInstance*)NewStateMachineClass;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetContext(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetContext");
    struct
    {
        struct UObject* Context;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetCanTickWhenPaused(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetCanTickWhenPaused");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetCanEverTickGeneralUpdate(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetCanEverTickGeneralUpdate");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetCanEverTick(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetCanEverTick");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::SetAutoManageTime(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "SetAutoManageTime");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::REP_StartChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "REP_StartChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::OnStateMachineUpdate(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "OnStateMachineUpdate");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::OnStateMachineTransitionTaken(const struct FSMTransitionInfo& Transition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "OnStateMachineTransitionTaken");
    struct
    {
        struct FSMTransitionInfo Transition;
    } Parms{};
    Parms.Transition = (struct FSMTransitionInfo)Transition;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::OnStateMachineStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "OnStateMachineStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::OnStateMachineStateChanged(const struct FSMStateInfo& ToState, const struct FSMStateInfo& FromState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "OnStateMachineStateChanged");
    struct
    {
        struct FSMStateInfo ToState;
        struct FSMStateInfo FromState;
    } Parms{};
    Parms.ToState = (struct FSMStateInfo)ToState;
    Parms.FromState = (struct FSMStateInfo)FromState;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::OnStateMachineStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "OnStateMachineStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::OnStateMachineInitialized()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "OnStateMachineInitialized");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::OnRep_RootStatePathGuidArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "OnRep_RootStatePathGuidArray");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::OnRep_ActiveStateChanges()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "OnRep_ActiveStateChanges");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::LoadFromState(const struct FGuid& FromGuid, uint8_t bAllParents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "LoadFromState");
    struct
    {
        struct FGuid FromGuid;
        uint8_t bAllParents;
    } Parms{};
    Parms.FromGuid = (struct FGuid)FromGuid;
    Parms.bAllParents = (uint8_t)bAllParents;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::LoadFromMultipleStates(const struct TArray<struct FGuid>& FromGuids)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "LoadFromMultipleStates");
    struct
    {
        struct TArray<struct FGuid> FromGuids;
    } Parms{};
    Parms.FromGuids = (struct TArray<struct FGuid>)FromGuids;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::LazyInitalize(struct UObject* Context, struct UActorComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "LazyInitalize");
    struct
    {
        struct UObject* Context;
        struct UActorComponent* Component;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    Parms.Component = (struct UActorComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USMInstance::IsTickableWhenPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "IsTickableWhenPaused");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMInstance::IsTickable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "IsTickable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMInstance::IsInitialized()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "IsInitialized");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMInstance::IsInEndState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "IsInEndState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMInstance::IsActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "IsActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USMInstance::Internal_Update(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Internal_Update");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::Internal_EventUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Internal_EventUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMInstance::Internal_EventCleanup(const struct FGuid& NodeGuid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Internal_EventCleanup");
    struct
    {
        struct FGuid NodeGuid;
    } Parms{};
    Parms.NodeGuid = (struct FGuid)NodeGuid;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USMInstance::Internal_EvaluateAndTakeTransitionChainByGuid(const struct FGuid& PathGuid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Internal_EvaluateAndTakeTransitionChainByGuid");
    struct
    {
        struct FGuid PathGuid;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PathGuid = (struct FGuid)PathGuid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USMInstance::Initialize(struct UObject* Context, struct UActorComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "Initialize");
    struct
    {
        struct UObject* Context;
        struct UActorComponent* Component;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    Parms.Component = (struct UActorComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USMInstance::HasStarted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "HasStarted");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMTransitionInstance* USMInstance::GetTransitionInstanceByGuid(const struct FGuid& Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetTransitionInstanceByGuid");
    struct
    {
        struct FGuid Guid;
        struct USMTransitionInstance* ReturnValue;
    } Parms{};
    Parms.Guid = (struct FGuid)Guid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USMInstance::GetTickInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetTickInterval");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMStateMachineInstance* USMInstance::GetStateMachineClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetStateMachineClass");
    struct
    {
        struct USMStateMachineInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMStateInstance_Base* USMInstance::GetStateInstanceByGuid(const struct FGuid& Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetStateInstanceByGuid");
    struct
    {
        struct FGuid Guid;
        struct USMStateInstance_Base* ReturnValue;
    } Parms{};
    Parms.Guid = (struct FGuid)Guid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMStateInstance_Base* USMInstance::GetSingleActiveStateInstance(uint8_t bCheckNested)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetSingleActiveStateInstance");
    struct
    {
        uint8_t bCheckNested;
        struct USMStateInstance_Base* ReturnValue;
    } Parms{};
    Parms.bCheckNested = (uint8_t)bCheckNested;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGuid USMInstance::GetSingleActiveStateGuid(uint8_t bCheckNested)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetSingleActiveStateGuid");
    struct
    {
        uint8_t bCheckNested;
        struct FGuid ReturnValue;
    } Parms{};
    Parms.bCheckNested = (uint8_t)bCheckNested;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMInstance* USMInstance::GetReferenceOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetReferenceOwner");
    struct
    {
        struct USMInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMInstance* USMInstance::GetReferencedInstanceByGuid(const struct FGuid& Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetReferencedInstanceByGuid");
    struct
    {
        struct FGuid Guid;
        struct USMInstance* ReturnValue;
    } Parms{};
    Parms.Guid = (struct FGuid)Guid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString USMInstance::GetNestedActiveStateName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetNestedActiveStateName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGuid USMInstance::GetNestedActiveStateGuid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetNestedActiveStateGuid");
    struct
    {
        struct FGuid ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMInstance* USMInstance::GetMasterReferenceOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetMasterReferenceOwner");
    struct
    {
        struct USMInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* USMInstance::GetContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetContext");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USMInstance::GetAllTransitionInstances(struct TArray<struct USMTransitionInstance*>& TransitionInstances)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetAllTransitionInstances");
    struct
    {
        struct TArray<struct USMTransitionInstance*> TransitionInstances;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    TransitionInstances = Parms.TransitionInstances;
}

void USMInstance::GetAllStateInstances(struct TArray<struct USMStateInstance_Base*>& StateInstances)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetAllStateInstances");
    struct
    {
        struct TArray<struct USMStateInstance_Base*> StateInstances;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    StateInstances = Parms.StateInstances;
}

struct TArray<struct USMInstance*> USMInstance::GetAllReferencedInstances(uint8_t bIncludeChildren)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetAllReferencedInstances");
    struct
    {
        uint8_t bIncludeChildren;
        struct TArray<struct USMInstance*> ReturnValue;
    } Parms{};
    Parms.bIncludeChildren = (uint8_t)bIncludeChildren;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FGuid> USMInstance::GetAllCurrentStateGuids()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetAllCurrentStateGuids");
    struct
    {
        struct TArray<struct FGuid> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USMInstance::GetAllActiveStateInstances(struct TArray<struct USMStateInstance_Base*>& ActiveStateInstances)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetAllActiveStateInstances");
    struct
    {
        struct TArray<struct USMStateInstance_Base*> ActiveStateInstances;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ActiveStateInstances = Parms.ActiveStateInstances;
}

void USMInstance::GetAllActiveStateGuids(struct TArray<struct FGuid>& ActiveGuids, uint8_t IncludeNotRepState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetAllActiveStateGuids");
    struct
    {
        struct TArray<struct FGuid> ActiveGuids;
        uint8_t IncludeNotRepState;
    } Parms{};
    Parms.IncludeNotRepState = (uint8_t)IncludeNotRepState;
    this->ProcessEvent(Func, &Parms);
    ActiveGuids = Parms.ActiveGuids;
}

struct FString USMInstance::GetActiveStateName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetActiveStateName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMStateInstance_Base* USMInstance::GetActiveStateInstance(uint8_t bCheckNested)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetActiveStateInstance");
    struct
    {
        uint8_t bCheckNested;
        struct USMStateInstance_Base* ReturnValue;
    } Parms{};
    Parms.bCheckNested = (uint8_t)bCheckNested;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGuid USMInstance::GetActiveStateGuid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "GetActiveStateGuid");
    struct
    {
        struct FGuid ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USMInstance::EvaluateTransitions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "EvaluateTransitions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USMInstance::CanTickOnManualUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "CanTickOnManualUpdate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMInstance::CanEverTickGeneralUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "CanEverTickGeneralUpdate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMInstance::CanEverTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "CanEverTick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMInstance::CanAutoManageTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMInstance", "CanAutoManageTime");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USMNodeArrayLibrary::* ----
void USMNodeArrayLibrary::bCanEvaluateFromEvent(struct FSMTransition& Transition, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SMNodeArrayLibrary", "bCanEvaluateFromEvent");
    struct
    {
        struct FSMTransition Transition;
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Transition = Parms.Transition;
}

void USMNodeArrayLibrary::bCanEvaluate(struct FSMTransition& Transition, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SMNodeArrayLibrary", "bCanEvaluate");
    struct
    {
        struct FSMTransition Transition;
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Transition = Parms.Transition;
}

void USMNodeArrayLibrary::bCanEnterTransitionFromEvent(struct FSMTransition& Transition, uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SMNodeArrayLibrary", "bCanEnterTransitionFromEvent");
    struct
    {
        struct FSMTransition Transition;
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Transition = Parms.Transition;
}

// ---- USMStateMachineComponent::* ----
void USMStateMachineComponent::Update(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Update");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Shutdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::SERVER_Update(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "SERVER_Update");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::SERVER_Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "SERVER_Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::SERVER_Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "SERVER_Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::SERVER_Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "SERVER_Shutdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::SERVER_ProcessTransaction(struct TArray<struct FSMNetworkedTransaction> Transactions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "SERVER_ProcessTransaction");
    struct
    {
        struct TArray<struct FSMNetworkedTransaction> Transactions;
    } Parms{};
    Parms.Transactions = (struct TArray<struct FSMNetworkedTransaction>)Transactions;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::SERVER_Initialize(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "SERVER_Initialize");
    struct
    {
        struct UObject* Context;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::REP_ShuttingDown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "REP_ShuttingDown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::REP_OnInstanceLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "REP_OnInstanceLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::REP_NetworkedTransactions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "REP_NetworkedTransactions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::PrintAllStates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "PrintAllStates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Internal_OnStateMachineUpdated(struct USMInstance* Instance, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineUpdated");
    struct
    {
        struct USMInstance* Instance;
        float DeltaSeconds;
    } Parms{};
    Parms.Instance = (struct USMInstance*)Instance;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Internal_OnStateMachineTransitionTaken(struct USMInstance* Instance, struct FSMTransitionInfo Transition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineTransitionTaken");
    struct
    {
        struct USMInstance* Instance;
        struct FSMTransitionInfo Transition;
    } Parms{};
    Parms.Instance = (struct USMInstance*)Instance;
    Parms.Transition = (struct FSMTransitionInfo)Transition;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Internal_OnStateMachineStopped(struct USMInstance* Instance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineStopped");
    struct
    {
        struct USMInstance* Instance;
    } Parms{};
    Parms.Instance = (struct USMInstance*)Instance;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Internal_OnStateMachineStateChanged(struct USMInstance* Instance, struct FSMStateInfo ToState, struct FSMStateInfo FromState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineStateChanged");
    struct
    {
        struct USMInstance* Instance;
        struct FSMStateInfo ToState;
        struct FSMStateInfo FromState;
    } Parms{};
    Parms.Instance = (struct USMInstance*)Instance;
    Parms.ToState = (struct FSMStateInfo)ToState;
    Parms.FromState = (struct FSMStateInfo)FromState;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Internal_OnStateMachineStarted(struct USMInstance* Instance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Internal_OnStateMachineStarted");
    struct
    {
        struct USMInstance* Instance;
    } Parms{};
    Parms.Instance = (struct USMInstance*)Instance;
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineComponent::Initialize(struct UObject* Context, struct UActorComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "Initialize");
    struct
    {
        struct UObject* Context;
        struct UActorComponent* Component;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    Parms.Component = (struct UActorComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

struct USMInstance* USMStateMachineComponent::GetInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineComponent", "GetInstance");
    struct
    {
        struct USMInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USMStateMachineInstance::* ----
void USMStateMachineInstance::OnStateMachineCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineInstance", "OnStateMachineCompleted");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineInstance::OnEndStateReached()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineInstance", "OnEndStateReached");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMStateMachineInstance::GetAllStateInstances(struct TArray<struct USMStateInstance_Base*>& StateInstances)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMStateMachineInstance", "GetAllStateInstances");
    struct
    {
        struct TArray<struct USMStateInstance_Base*> StateInstances;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    StateInstances = Parms.StateInstances;
}

// ---- USMTransitionInstance::* ----
void USMTransitionInstance::SetCanEvaluate(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "SetCanEvaluate");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void USMTransitionInstance::OnTransitionShutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "OnTransitionShutdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMTransitionInstance::OnTransitionInitialized()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "OnTransitionInitialized");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMTransitionInstance::OnTransitionEntered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "OnTransitionEntered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USMTransitionInstance::GetTransitionInfo(struct FSMTransitionInfo& Transition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "GetTransitionInfo");
    struct
    {
        struct FSMTransitionInfo Transition;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Transition = Parms.Transition;
}

struct USMStateInstance_Base* USMTransitionInstance::GetPreviousStateInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "GetPreviousStateInstance");
    struct
    {
        struct USMStateInstance_Base* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMStateInstance_Base* USMTransitionInstance::GetNextStateInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "GetNextStateInstance");
    struct
    {
        struct USMStateInstance_Base* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMTransitionInstance::GetCanEvaluate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "GetCanEvaluate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USMTransitionInstance::CanEnterTransition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SMTransitionInstance", "CanEnterTransition");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USMBlueprintUtils::* ----
struct USMInstance* USMBlueprintUtils::CreateStateMachineInstanceFromTemplate(struct USMInstance* StateMachineClass, struct UObject* Context, struct USMInstance* Template, struct USMInstance* Owner, struct UActorComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SMBlueprintUtils", "CreateStateMachineInstanceFromTemplate");
    struct
    {
        struct USMInstance* StateMachineClass;
        struct UObject* Context;
        struct USMInstance* Template;
        struct USMInstance* Owner;
        struct UActorComponent* Component;
        struct USMInstance* ReturnValue;
    } Parms{};
    Parms.StateMachineClass = (struct USMInstance*)StateMachineClass;
    Parms.Context = (struct UObject*)Context;
    Parms.Template = (struct USMInstance*)Template;
    Parms.Owner = (struct USMInstance*)Owner;
    Parms.Component = (struct UActorComponent*)Component;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USMInstance* USMBlueprintUtils::CreateStateMachineInstance(struct USMInstance* StateMachineClass, struct UObject* Context, struct UActorComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SMBlueprintUtils", "CreateStateMachineInstance");
    struct
    {
        struct USMInstance* StateMachineClass;
        struct UObject* Context;
        struct UActorComponent* Component;
        struct USMInstance* ReturnValue;
    } Parms{};
    Parms.StateMachineClass = (struct USMInstance*)StateMachineClass;
    Parms.Context = (struct UObject*)Context;
    Parms.Component = (struct UActorComponent*)Component;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
