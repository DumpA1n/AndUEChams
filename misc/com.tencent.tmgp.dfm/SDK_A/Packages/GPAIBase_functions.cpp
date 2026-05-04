#include "GPAIBase.hpp"
#include "AIModule.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAIAdvancedPerceptionComponent::* ----
uint8_t UAIAdvancedPerceptionComponent::SetAttracted(uint8_t bActtracted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAdvancedPerceptionComponent", "SetAttracted");
    struct
    {
        uint8_t bActtracted;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bActtracted = (uint8_t)bActtracted;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAIAdvancedPerceptionComponent::RemoveSenseConfig(struct UAISenseConfig* senseType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAdvancedPerceptionComponent", "RemoveSenseConfig");
    struct
    {
        struct UAISenseConfig* senseType;
    } Parms{};
    Parms.senseType = (struct UAISenseConfig*)senseType;
    this->ProcessEvent(Func, &Parms);
}

void UAIAdvancedPerceptionComponent::MultiplySenseSize(struct UAISenseConfig* senseType, float factor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAdvancedPerceptionComponent", "MultiplySenseSize");
    struct
    {
        struct UAISenseConfig* senseType;
        float factor;
    } Parms{};
    Parms.senseType = (struct UAISenseConfig*)senseType;
    Parms.factor = (float)factor;
    this->ProcessEvent(Func, &Parms);
}

void UAIAdvancedPerceptionComponent::AdjustSightSenseSize(int32_t Index, float RadiusFactor, float AngleFactor, float VisibleRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAdvancedPerceptionComponent", "AdjustSightSenseSize");
    struct
    {
        int32_t Index;
        float RadiusFactor;
        float AngleFactor;
        float VisibleRate;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.RadiusFactor = (float)RadiusFactor;
    Parms.AngleFactor = (float)AngleFactor;
    Parms.VisibleRate = (float)VisibleRate;
    this->ProcessEvent(Func, &Parms);
}

void UAIAdvancedPerceptionComponent::AdjustHearingSenseSize(float factor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAdvancedPerceptionComponent", "AdjustHearingSenseSize");
    struct
    {
        float factor;
    } Parms{};
    Parms.factor = (float)factor;
    this->ProcessEvent(Func, &Parms);
}

// ---- UAIBPLib::* ----
void UAIBPLib::SetBDVector(struct UBlackboardComponent* BlackboardComp, struct FName Key, struct FVector Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBPLib", "SetBDVector");
    struct
    {
        struct UBlackboardComponent* BlackboardComp;
        struct FName Key;
        struct FVector Value;
    } Parms{};
    Parms.BlackboardComp = (struct UBlackboardComponent*)BlackboardComp;
    Parms.Key = (struct FName)Key;
    Parms.Value = (struct FVector)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAIBPLib::OpenBPAssetByBPClass(struct UObject* objectClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIBPLib", "OpenBPAssetByBPClass");
    struct
    {
        struct UObject* objectClass;
    } Parms{};
    Parms.objectClass = (struct UObject*)objectClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UGPAIFunctionLibrary::* ----
uint8_t UGPAIFunctionLibrary::TestCoverToLocationVisibility(struct UNZCoverPoint* FromCover, struct FVector ToLocation, uint8_t bDrawDebug)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAIFunctionLibrary", "TestCoverToLocationVisibility");
    struct
    {
        struct UNZCoverPoint* FromCover;
        struct FVector ToLocation;
        uint8_t bDrawDebug;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FromCover = (struct UNZCoverPoint*)FromCover;
    Parms.ToLocation = (struct FVector)ToLocation;
    Parms.bDrawDebug = (uint8_t)bDrawDebug;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAIFunctionLibrary::TestCoverToActorVisibility(struct UNZCoverPoint* FromCover, struct AActor* ToActor, uint8_t bDrawDebug)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAIFunctionLibrary", "TestCoverToActorVisibility");
    struct
    {
        struct UNZCoverPoint* FromCover;
        struct AActor* ToActor;
        uint8_t bDrawDebug;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FromCover = (struct UNZCoverPoint*)FromCover;
    Parms.ToActor = (struct AActor*)ToActor;
    Parms.bDrawDebug = (uint8_t)bDrawDebug;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPAIFunctionLibrary::CheckVisibility(struct AActor* FromActor, struct UObject* FromCover, struct FVector FromLocation, struct AActor* ToActor, struct UObject* ToCover, struct FVector ToLocation, struct UObject* WorldContext, uint8_t bDrawDebug)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAIFunctionLibrary", "CheckVisibility");
    struct
    {
        struct AActor* FromActor;
        struct UObject* FromCover;
        struct FVector FromLocation;
        struct AActor* ToActor;
        struct UObject* ToCover;
        struct FVector ToLocation;
        struct UObject* WorldContext;
        uint8_t bDrawDebug;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FromActor = (struct AActor*)FromActor;
    Parms.FromCover = (struct UObject*)FromCover;
    Parms.FromLocation = (struct FVector)FromLocation;
    Parms.ToActor = (struct AActor*)ToActor;
    Parms.ToCover = (struct UObject*)ToCover;
    Parms.ToLocation = (struct FVector)ToLocation;
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bDrawDebug = (uint8_t)bDrawDebug;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAIJob::* ----
void UAIJob::Update()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "Update");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAIJob::Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAIJob::SetState(EAIJobState Val)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "SetState");
    struct
    {
        enum EAIJobState Val;
    } Parms{};
    Parms.Val = (enum EAIJobState)Val;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAIJob::Join(struct AAIController* AIController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "Join");
    struct
    {
        struct AAIController* AIController;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAIJob::IsIdle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "IsIdle");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAIJob::IsFinishExtra()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "IsFinishExtra");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAIJob::IsFinish(struct AAIController* AIController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "IsFinish");
    struct
    {
        struct AAIController* AIController;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIJobType UAIJob::GetJobType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "GetJobType");
    struct
    {
        enum EAIJobType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAIJob::GetAINum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "GetAINum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAIJob::Finish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "Finish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAIJob::Exit(struct AAIController* AIController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "Exit");
    struct
    {
        struct AAIController* AIController;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAIJob::CanJoin(struct AAIController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJob", "CanJoin");
    struct
    {
        struct AAIController* Controller;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UJobFilterBase::* ----
struct UAIJob* UJobFilterBase::GetJob_Implementation(struct AAIController* AIController, const struct TArray<struct UAIJob*>& Jobs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("JobFilterBase", "GetJob_Implementation");
    struct
    {
        struct AAIController* AIController;
        struct TArray<struct UAIJob*> Jobs;
        struct UAIJob* ReturnValue;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    Parms.Jobs = (struct TArray<struct UAIJob*>)Jobs;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAIJob* UJobFilterBase::GetJob(struct AAIController* AIController, const struct TArray<struct UAIJob*>& Jobs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("JobFilterBase", "GetJob");
    struct
    {
        struct AAIController* AIController;
        struct TArray<struct UAIJob*> Jobs;
        struct UAIJob* ReturnValue;
    } Parms{};
    Parms.AIController = (struct AAIController*)AIController;
    Parms.Jobs = (struct TArray<struct UAIJob*>)Jobs;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AAIJobManager::* ----
void AAIJobManager::UpdateJobs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "UpdateJobs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAIJobManager::Tick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "Tick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void AAIJobManager::StaticSetAIJobSetting(struct FAIJobSetting Setting, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "StaticSetAIJobSetting");
    struct
    {
        struct FAIJobSetting Setting;
        struct UObject* WorldContext;
    } Parms{};
    Parms.Setting = (struct FAIJobSetting)Setting;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t AAIJobManager::StaticGetSuitableProducedJobNum(struct UObject* WorldContext, struct AAIController* Controller, EAIJobType JobType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "StaticGetSuitableProducedJobNum");
    struct
    {
        struct UObject* WorldContext;
        struct AAIController* Controller;
        enum EAIJobType JobType;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.Controller = (struct AAIController*)Controller;
    Parms.JobType = (enum EAIJobType)JobType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIJobType AAIJobManager::StaticGetAIActivatedJob(struct AAIController* Controller, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "StaticGetAIActivatedJob");
    struct
    {
        struct AAIController* Controller;
        struct UObject* WorldContext;
        enum EAIJobType ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIJobManager::StaticExitAIJob(struct AAIController* Controller, struct UAIJob* Job)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "StaticExitAIJob");
    struct
    {
        struct AAIController* Controller;
        struct UAIJob* Job;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.Job = (struct UAIJob*)Job;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void AAIJobManager::StaticDistributeAIJobContent(EAIJobType JobType, struct UAIJob* Job, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "StaticDistributeAIJobContent");
    struct
    {
        enum EAIJobType JobType;
        struct UAIJob* Job;
        struct UObject* WorldContext;
    } Parms{};
    Parms.JobType = (enum EAIJobType)JobType;
    Parms.Job = (struct UAIJob*)Job;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void AAIJobManager::StaticDistributeAIJob(EAIJobType JobType, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "StaticDistributeAIJob");
    struct
    {
        enum EAIJobType JobType;
        struct UObject* WorldContext;
    } Parms{};
    Parms.JobType = (enum EAIJobType)JobType;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t AAIJobManager::StaticAcquireAIJob(struct AAIController* Controller, EAIJobType JobType, struct UJobFilterBase* JobFilter, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "StaticAcquireAIJob");
    struct
    {
        struct AAIController* Controller;
        enum EAIJobType JobType;
        struct UJobFilterBase* JobFilter;
        struct UObject* WorldContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.JobType = (enum EAIJobType)JobType;
    Parms.JobFilter = (struct UJobFilterBase*)JobFilter;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIJobManager::SetAIJobSetting(struct FAIJobSetting Setting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "SetAIJobSetting");
    struct
    {
        struct FAIJobSetting Setting;
    } Parms{};
    Parms.Setting = (struct FAIJobSetting)Setting;
    this->ProcessEvent(Func, &Parms);
}

int32_t AAIJobManager::GetSuitableProducedJobNum(struct AAIController* Controller, EAIJobType JobType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "GetSuitableProducedJobNum");
    struct
    {
        struct AAIController* Controller;
        enum EAIJobType JobType;
        int32_t ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.JobType = (enum EAIJobType)JobType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIJobManager* AAIJobManager::GetAIJobManager(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "GetAIJobManager");
    struct
    {
        struct UObject* WorldContext;
        struct AAIJobManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAIJob* AAIJobManager::GetAIJob(struct UObject* WorldContext, EAIJobType AIJobType, struct FString JobName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIJobManager", "GetAIJob");
    struct
    {
        struct UObject* WorldContext;
        enum EAIJobType AIJobType;
        struct FString JobName;
        struct UAIJob* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.AIJobType = (enum EAIJobType)AIJobType;
    Parms.JobName = (struct FString)JobName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAIJob* AAIJobManager::GetAIActivatedJobStatus(struct AAIController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "GetAIActivatedJobStatus");
    struct
    {
        struct AAIController* Controller;
        struct UAIJob* ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAIJobType AAIJobManager::GetAIActivatedJob(struct AAIController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "GetAIActivatedJob");
    struct
    {
        struct AAIController* Controller;
        enum EAIJobType ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIJobManager::ExitAIJob(struct AAIController* Controller, struct UAIJob* Job)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "ExitAIJob");
    struct
    {
        struct AAIController* Controller;
        struct UAIJob* Job;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.Job = (struct UAIJob*)Job;
    this->ProcessEvent(Func, &Parms);
}

void AAIJobManager::DistributeAIJob(EAIJobType JobType, struct UAIJob* Job)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "DistributeAIJob");
    struct
    {
        enum EAIJobType JobType;
        struct UAIJob* Job;
    } Parms{};
    Parms.JobType = (enum EAIJobType)JobType;
    Parms.Job = (struct UAIJob*)Job;
    this->ProcessEvent(Func, &Parms);
}

void AAIJobManager::CheckProduceAIJob()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "CheckProduceAIJob");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAIJobManager::CheckAIJobOver()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "CheckAIJobOver");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAIJobManager::BeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "BeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AAIJobManager::AcquireAIJob(struct AAIController* Controller, EAIJobType JobType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIJobManager", "AcquireAIJob");
    struct
    {
        struct AAIController* Controller;
        enum EAIJobType JobType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.JobType = (enum EAIJobType)JobType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AAILayoutConfigActor::* ----
void AAILayoutConfigActor::LoadAILayoutCustom(struct UObject* WorldContextObject, const struct TArray<struct FString>& LevelList, struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AILayoutConfigActor", "LoadAILayoutCustom");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FString> LevelList;
        struct FString MapName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelList = (struct TArray<struct FString>)LevelList;
    Parms.MapName = (struct FString)MapName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void AAILayoutConfigActor::LoadAILayout(struct UObject* WorldContextObject, struct FString ConfigCategory, struct FString MapName, int32_t TagId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AILayoutConfigActor", "LoadAILayout");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ConfigCategory;
        struct FString MapName;
        int32_t TagId;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ConfigCategory = (struct FString)ConfigCategory;
    Parms.MapName = (struct FString)MapName;
    Parms.TagId = (int32_t)TagId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UAIThreatWeightsComponent::* ----
void UAIThreatWeightsComponent::SetThreatTypeWeight(uint8_t threatType, float Weight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatWeightsComponent", "SetThreatTypeWeight");
    struct
    {
        uint8_t threatType;
        float Weight;
    } Parms{};
    Parms.threatType = (uint8_t)threatType;
    Parms.Weight = (float)Weight;
    this->ProcessEvent(Func, &Parms);
}

void UAIThreatWeightsComponent::SetThreatCampWeight(uint8_t ThreatCamp, float Weight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatWeightsComponent", "SetThreatCampWeight");
    struct
    {
        uint8_t ThreatCamp;
        float Weight;
    } Parms{};
    Parms.ThreatCamp = (uint8_t)ThreatCamp;
    Parms.Weight = (float)Weight;
    this->ProcessEvent(Func, &Parms);
}

// ---- APointGrid::* ----
void APointGrid::ThreatAreaClear(int64_t& AreaToken, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PointGrid", "ThreatAreaClear");
    struct
    {
        int64_t AreaToken;
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AreaToken = Parms.AreaToken;
}

void APointGrid::ThreatAreaCircleVisible(int64_t& AreaToken, uint8_t threatType, uint8_t CampType, struct AActor* Actor, struct AActor* Enemy, float radius, float threatValue, EAIThreatAreaWeightPainter Painter, uint8_t DebugDraw, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PointGrid", "ThreatAreaCircleVisible");
    struct
    {
        int64_t AreaToken;
        uint8_t threatType;
        uint8_t CampType;
        struct AActor* Actor;
        struct AActor* Enemy;
        float radius;
        float threatValue;
        enum EAIThreatAreaWeightPainter Painter;
        uint8_t DebugDraw;
        struct UObject* WorldContext;
    } Parms{};
    Parms.threatType = (uint8_t)threatType;
    Parms.CampType = (uint8_t)CampType;
    Parms.Actor = (struct AActor*)Actor;
    Parms.Enemy = (struct AActor*)Enemy;
    Parms.radius = (float)radius;
    Parms.threatValue = (float)threatValue;
    Parms.Painter = (enum EAIThreatAreaWeightPainter)Painter;
    Parms.DebugDraw = (uint8_t)DebugDraw;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AreaToken = Parms.AreaToken;
}

void APointGrid::ThreatAreaCircleConnect(int64_t& AreaToken, uint8_t threatType, uint8_t CampType, struct AActor* Actor, float radius, float threatValue, EAIThreatAreaWeightPainter Painter, uint8_t DebugDraw, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PointGrid", "ThreatAreaCircleConnect");
    struct
    {
        int64_t AreaToken;
        uint8_t threatType;
        uint8_t CampType;
        struct AActor* Actor;
        float radius;
        float threatValue;
        enum EAIThreatAreaWeightPainter Painter;
        uint8_t DebugDraw;
        struct UObject* WorldContext;
    } Parms{};
    Parms.threatType = (uint8_t)threatType;
    Parms.CampType = (uint8_t)CampType;
    Parms.Actor = (struct AActor*)Actor;
    Parms.radius = (float)radius;
    Parms.threatValue = (float)threatValue;
    Parms.Painter = (enum EAIThreatAreaWeightPainter)Painter;
    Parms.DebugDraw = (uint8_t)DebugDraw;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AreaToken = Parms.AreaToken;
}

void APointGrid::ThreatAreaCircle(int64_t& AreaToken, uint8_t threatType, uint8_t CampType, struct AActor* Actor, float radius, float threatValue, EAIThreatAreaWeightPainter Painter, uint8_t DebugDraw, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PointGrid", "ThreatAreaCircle");
    struct
    {
        int64_t AreaToken;
        uint8_t threatType;
        uint8_t CampType;
        struct AActor* Actor;
        float radius;
        float threatValue;
        enum EAIThreatAreaWeightPainter Painter;
        uint8_t DebugDraw;
        struct UObject* WorldContext;
    } Parms{};
    Parms.threatType = (uint8_t)threatType;
    Parms.CampType = (uint8_t)CampType;
    Parms.Actor = (struct AActor*)Actor;
    Parms.radius = (float)radius;
    Parms.threatValue = (float)threatValue;
    Parms.Painter = (enum EAIThreatAreaWeightPainter)Painter;
    Parms.DebugDraw = (uint8_t)DebugDraw;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AreaToken = Parms.AreaToken;
}

struct FAIPathFindingResult APointGrid::RunPathFindingSingle(struct UAIThreatWeightsComponent* ThreatWeights, struct FVector StartPoint, struct FVector GoalPoints, float radius, uint8_t DebugDraw, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PointGrid", "RunPathFindingSingle");
    struct
    {
        struct UAIThreatWeightsComponent* ThreatWeights;
        struct FVector StartPoint;
        struct FVector GoalPoints;
        float radius;
        uint8_t DebugDraw;
        struct UObject* WorldContext;
        struct FAIPathFindingResult ReturnValue;
    } Parms{};
    Parms.ThreatWeights = (struct UAIThreatWeightsComponent*)ThreatWeights;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.GoalPoints = (struct FVector)GoalPoints;
    Parms.radius = (float)radius;
    Parms.DebugDraw = (uint8_t)DebugDraw;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAIPathFindingResult APointGrid::RunPathFindingArrayBest(struct UAIThreatWeightsComponent* ThreatWeights, struct FVector StartPoint, const struct TArray<struct FVector>& GoalPoints, float radius, uint8_t DebugDraw, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PointGrid", "RunPathFindingArrayBest");
    struct
    {
        struct UAIThreatWeightsComponent* ThreatWeights;
        struct FVector StartPoint;
        struct TArray<struct FVector> GoalPoints;
        float radius;
        uint8_t DebugDraw;
        struct UObject* WorldContext;
        struct FAIPathFindingResult ReturnValue;
    } Parms{};
    Parms.ThreatWeights = (struct UAIThreatWeightsComponent*)ThreatWeights;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.GoalPoints = (struct TArray<struct FVector>)GoalPoints;
    Parms.radius = (float)radius;
    Parms.DebugDraw = (uint8_t)DebugDraw;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FAIPathFindingResult> APointGrid::RunPathFindingArrayAll(struct UAIThreatWeightsComponent* ThreatWeights, struct FVector StartPoint, const struct TArray<struct FVector>& GoalPoints, float radius, uint8_t DebugDraw, struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PointGrid", "RunPathFindingArrayAll");
    struct
    {
        struct UAIThreatWeightsComponent* ThreatWeights;
        struct FVector StartPoint;
        struct TArray<struct FVector> GoalPoints;
        float radius;
        uint8_t DebugDraw;
        struct UObject* WorldContext;
        struct TArray<struct FAIPathFindingResult> ReturnValue;
    } Parms{};
    Parms.ThreatWeights = (struct UAIThreatWeightsComponent*)ThreatWeights;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.GoalPoints = (struct TArray<struct FVector>)GoalPoints;
    Parms.radius = (float)radius;
    Parms.DebugDraw = (uint8_t)DebugDraw;
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- IThreatAreaInterface::* ----
EAIThreatAreaType IThreatAreaInterface::GetThreatAreaType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatAreaInterface", "GetThreatAreaType");
    struct
    {
        enum EAIThreatAreaType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IThreatAreaInterface::GetThreatAreaScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatAreaInterface", "GetThreatAreaScore");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IThreatAreaInterface::GetThreatAreaRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatAreaInterface", "GetThreatAreaRadius");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IThreatAreaInterface::GetThreatAreaHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatAreaInterface", "GetThreatAreaHeight");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IThreatAreaInterface::GetThreatAreaDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatAreaInterface", "GetThreatAreaDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AAIThreatAreaSystem::* ----
void AAIThreatAreaSystem::Tick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatAreaSystem", "Tick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void AAIThreatAreaSystem::RegisterAsStaticThreatAreaInWorld(struct FVector Center, float radius, float Height, float Duration, float Score, struct AActor* RelatedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIThreatAreaSystem", "RegisterAsStaticThreatAreaInWorld");
    struct
    {
        struct FVector Center;
        float radius;
        float Height;
        float Duration;
        float Score;
        struct AActor* RelatedActor;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.radius = (float)radius;
    Parms.Height = (float)Height;
    Parms.Duration = (float)Duration;
    Parms.Score = (float)Score;
    Parms.RelatedActor = (struct AActor*)RelatedActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void AAIThreatAreaSystem::RegisterAsStaticThreatArea(struct FVector Center, float radius, float Height, float Duration, float Score, struct AActor* RelatedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatAreaSystem", "RegisterAsStaticThreatArea");
    struct
    {
        struct FVector Center;
        float radius;
        float Height;
        float Duration;
        float Score;
        struct AActor* RelatedActor;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.radius = (float)radius;
    Parms.Height = (float)Height;
    Parms.Duration = (float)Duration;
    Parms.Score = (float)Score;
    Parms.RelatedActor = (struct AActor*)RelatedActor;
    this->ProcessEvent(Func, &Parms);
}

void AAIThreatAreaSystem::RegisterAsDynamicThreatAreaInWorld(struct AActor* RelatedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIThreatAreaSystem", "RegisterAsDynamicThreatAreaInWorld");
    struct
    {
        struct AActor* RelatedActor;
    } Parms{};
    Parms.RelatedActor = (struct AActor*)RelatedActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void AAIThreatAreaSystem::RegisterAsDynamicThreatArea(struct AActor* RelatedActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatAreaSystem", "RegisterAsDynamicThreatArea");
    struct
    {
        struct AActor* RelatedActor;
    } Parms{};
    Parms.RelatedActor = (struct AActor*)RelatedActor;
    this->ProcessEvent(Func, &Parms);
}

float AAIThreatAreaSystem::GetPositionThreatScoreStatic(struct AActor* worldRelatedActor, struct FVector inCheckLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIThreatAreaSystem", "GetPositionThreatScoreStatic");
    struct
    {
        struct AActor* worldRelatedActor;
        struct FVector inCheckLoc;
        float ReturnValue;
    } Parms{};
    Parms.worldRelatedActor = (struct AActor*)worldRelatedActor;
    Parms.inCheckLoc = (struct FVector)inCheckLoc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AAIThreatAreaSystem::GetPositionThreatScore(struct FVector inCheckLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatAreaSystem", "GetPositionThreatScore");
    struct
    {
        struct FVector inCheckLoc;
        float ReturnValue;
    } Parms{};
    Parms.inCheckLoc = (struct FVector)inCheckLoc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIThreatAreaSystem* AAIThreatAreaSystem::GetAIThreatAreaSystem(struct UWorld* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIThreatAreaSystem", "GetAIThreatAreaSystem");
    struct
    {
        struct UWorld* WorldContext;
        struct AAIThreatAreaSystem* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UWorld*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIThreatAreaSystem::BeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatAreaSystem", "BeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- IThreatSourceInterface::* ----
float IThreatSourceInterface::GetThreat_Sight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatSourceInterface", "GetThreat_Sight");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IThreatSourceInterface::GetThreat_Hurt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatSourceInterface", "GetThreat_Hurt");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IThreatSourceInterface::GetThreat_Heard()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatSourceInterface", "GetThreat_Heard");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IThreatSourceInterface::GetThreat_Default()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatSourceInterface", "GetThreat_Default");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IThreatSourceInterface::GetThreat_AirHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatSourceInterface", "GetThreat_AirHit");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAIThreatRecordComponent::* ----
void UAIThreatRecordComponent::RecordPerceptionThreat(struct AAIController* perceptionOwner, struct ACHARACTER* threatRelatedCharacter, struct FAIStimulus Stimulus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatRecordComponent", "RecordPerceptionThreat");
    struct
    {
        struct AAIController* perceptionOwner;
        struct ACHARACTER* threatRelatedCharacter;
        struct FAIStimulus Stimulus;
    } Parms{};
    Parms.perceptionOwner = (struct AAIController*)perceptionOwner;
    Parms.threatRelatedCharacter = (struct ACHARACTER*)threatRelatedCharacter;
    Parms.Stimulus = (struct FAIStimulus)Stimulus;
    this->ProcessEvent(Func, &Parms);
}

struct FCharacterThreatRecord UAIThreatRecordComponent::RecordNewThreadEvent(EAIThreatType threatType, float threatValue, struct ACHARACTER* RelatedCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatRecordComponent", "RecordNewThreadEvent");
    struct
    {
        enum EAIThreatType threatType;
        float threatValue;
        struct ACHARACTER* RelatedCharacter;
        struct FCharacterThreatRecord ReturnValue;
    } Parms{};
    Parms.threatType = (enum EAIThreatType)threatType;
    Parms.threatValue = (float)threatValue;
    Parms.RelatedCharacter = (struct ACHARACTER*)RelatedCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAIThreatRecordComponent::GetLastHeardLocationFromHighestHeardTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatRecordComponent", "GetLastHeardLocationFromHighestHeardTarget");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAIThreatRecordComponent::GetHighestThreatCharacterValueInSpecType(EAIThreatType threatType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatRecordComponent", "GetHighestThreatCharacterValueInSpecType");
    struct
    {
        enum EAIThreatType threatType;
        float ReturnValue;
    } Parms{};
    Parms.threatType = (enum EAIThreatType)threatType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAIThreatRecordComponent::GetHighestThreatCharacterValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatRecordComponent", "GetHighestThreatCharacterValue");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACHARACTER* UAIThreatRecordComponent::GetHighestThreatCharacterInSpecType(EAIThreatType threatType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatRecordComponent", "GetHighestThreatCharacterInSpecType");
    struct
    {
        enum EAIThreatType threatType;
        struct ACHARACTER* ReturnValue;
    } Parms{};
    Parms.threatType = (enum EAIThreatType)threatType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACHARACTER* UAIThreatRecordComponent::GetHighestThreatCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatRecordComponent", "GetHighestThreatCharacter");
    struct
    {
        struct ACHARACTER* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAIThreatRecordComponent::ClearAllThreats()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIThreatRecordComponent", "ClearAllThreats");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- IAISpecificBehaviorFlagsInterface::* ----
uint8_t IAISpecificBehaviorFlagsInterface::ShouldRecheckBTbySpecificBehaviorType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISpecificBehaviorFlagsInterface", "ShouldRecheckBTbySpecificBehaviorType");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IAISpecificBehaviorFlagsInterface::RecheckedBTType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISpecificBehaviorFlagsInterface", "RecheckedBTType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IAISpecificBehaviorFlagsInterface::OnBTRechecked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISpecificBehaviorFlagsInterface", "OnBTRechecked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IAISpecificBehaviorFlagsInterface::ApplyOrRegisterSpecificBehaviorFactor(EGPSpecificBehaviorType factorType, int32_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AISpecificBehaviorFlagsInterface", "ApplyOrRegisterSpecificBehaviorFactor");
    struct
    {
        enum EGPSpecificBehaviorType factorType;
        int32_t NewValue;
    } Parms{};
    Parms.factorType = (enum EGPSpecificBehaviorType)factorType;
    Parms.NewValue = (int32_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPAIBehaviorTreeComponent::* ----
void UGPAIBehaviorTreeComponent::SetPathfindCommand(const struct FAIPathFindingResult& Command)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAIBehaviorTreeComponent", "SetPathfindCommand");
    struct
    {
        struct FAIPathFindingResult Command;
    } Parms{};
    Parms.Command = (struct FAIPathFindingResult)Command;
    this->ProcessEvent(Func, &Parms);
}

void UGPAIBehaviorTreeComponent::ReMakeSpecificBehaviorType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAIBehaviorTreeComponent", "ReMakeSpecificBehaviorType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FGPBehaviorFactor UGPAIBehaviorTreeComponent::GetBehaviorFactor(EGPSpecificBehaviorType Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAIBehaviorTreeComponent", "GetBehaviorFactor");
    struct
    {
        enum EGPSpecificBehaviorType Index;
        struct FGPBehaviorFactor ReturnValue;
    } Parms{};
    Parms.Index = (enum EGPSpecificBehaviorType)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAIBehaviorTreeComponent::ApplyValueToBehaviorFactor(EGPSpecificBehaviorType Index, int32_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAIBehaviorTreeComponent", "ApplyValueToBehaviorFactor");
    struct
    {
        enum EGPSpecificBehaviorType Index;
        int32_t NewValue;
    } Parms{};
    Parms.Index = (enum EGPSpecificBehaviorType)Index;
    Parms.NewValue = (int32_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UGPAIBehaviorTreeComponent::ApplyOrRegisterBehaviorFactor(EGPSpecificBehaviorType Index, int32_t NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAIBehaviorTreeComponent", "ApplyOrRegisterBehaviorFactor");
    struct
    {
        enum EGPSpecificBehaviorType Index;
        int32_t NewValue;
    } Parms{};
    Parms.Index = (enum EGPSpecificBehaviorType)Index;
    Parms.NewValue = (int32_t)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPAI_CoverPointAnimSetting::* ----
void UGPAI_CoverPointAnimSetting::SetCharacterCoverPointCondition(ECoverPointCondition Condition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAI_CoverPointAnimSetting", "SetCharacterCoverPointCondition");
    struct
    {
        enum ECoverPointCondition Condition;
    } Parms{};
    Parms.Condition = (enum ECoverPointCondition)Condition;
    this->ProcessEvent(Func, &Parms);
}

void UGPAI_CoverPointAnimSetting::LerpToCoverPointTransform(struct FVector CoverLocation, struct FVector coverToWallDir, float Duration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAI_CoverPointAnimSetting", "LerpToCoverPointTransform");
    struct
    {
        struct FVector CoverLocation;
        struct FVector coverToWallDir;
        float Duration;
    } Parms{};
    Parms.CoverLocation = (struct FVector)CoverLocation;
    Parms.coverToWallDir = (struct FVector)coverToWallDir;
    Parms.Duration = (float)Duration;
    this->ProcessEvent(Func, &Parms);
}

struct UAnimMontage* UGPAI_CoverPointAnimSetting::GetBestMontageToEnterCover(struct AAIController* Controller, struct UNZCoverPoint* coverPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAI_CoverPointAnimSetting", "GetBestMontageToEnterCover");
    struct
    {
        struct AAIController* Controller;
        struct UNZCoverPoint* coverPoint;
        struct UAnimMontage* ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.coverPoint = (struct UNZCoverPoint*)coverPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPAI_PlayMontageCallbackProxy::* ----
void UGPAI_PlayMontageCallbackProxy::OnNotifyEndReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAI_PlayMontageCallbackProxy", "OnNotifyEndReceived");
    struct
    {
        struct FName NotifyName;
        struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;
    } Parms{};
    Parms.NotifyName = (struct FName)NotifyName;
    Parms.BranchingPointNotifyPayload = (struct FBranchingPointNotifyPayload)BranchingPointNotifyPayload;
    this->ProcessEvent(Func, &Parms);
}

void UGPAI_PlayMontageCallbackProxy::OnNotifyBeginReceived(struct FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAI_PlayMontageCallbackProxy", "OnNotifyBeginReceived");
    struct
    {
        struct FName NotifyName;
        struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;
    } Parms{};
    Parms.NotifyName = (struct FName)NotifyName;
    Parms.BranchingPointNotifyPayload = (struct FBranchingPointNotifyPayload)BranchingPointNotifyPayload;
    this->ProcessEvent(Func, &Parms);
}

void UGPAI_PlayMontageCallbackProxy::OnMontageEnded(struct UAnimMontage* Montage, uint8_t bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAI_PlayMontageCallbackProxy", "OnMontageEnded");
    struct
    {
        struct UAnimMontage* Montage;
        uint8_t bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (uint8_t)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void UGPAI_PlayMontageCallbackProxy::OnMontageBlendingOut(struct UAnimMontage* Montage, uint8_t bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAI_PlayMontageCallbackProxy", "OnMontageBlendingOut");
    struct
    {
        struct UAnimMontage* Montage;
        uint8_t bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (uint8_t)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

struct UGPAI_PlayMontageCallbackProxy* UGPAI_PlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* montageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAI_PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");
    struct
    {
        struct USkeletalMeshComponent* InSkeletalMeshComponent;
        struct UAnimMontage* montageToPlay;
        float PlayRate;
        float StartingPosition;
        struct FName StartingSection;
        struct UGPAI_PlayMontageCallbackProxy* ReturnValue;
    } Parms{};
    Parms.InSkeletalMeshComponent = (struct USkeletalMeshComponent*)InSkeletalMeshComponent;
    Parms.montageToPlay = (struct UAnimMontage*)montageToPlay;
    Parms.PlayRate = (float)PlayRate;
    Parms.StartingPosition = (float)StartingPosition;
    Parms.StartingSection = (struct FName)StartingSection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAI_PlayMontageCallbackProxy::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAI_PlayMontageCallbackProxy", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPBTTaskBase::* ----
float UGPBTTaskBase::GetCurrentGameTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTaskBase", "GetCurrentGameTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPBTTask_Blueprint::* ----
void UGPBTTask_Blueprint::SetFinishOnMessageWithId(struct FName MessageName, int32_t requestId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "SetFinishOnMessageWithId");
    struct
    {
        struct FName MessageName;
        int32_t requestId;
    } Parms{};
    Parms.MessageName = (struct FName)MessageName;
    Parms.requestId = (int32_t)requestId;
    this->ProcessEvent(Func, &Parms);
}

void UGPBTTask_Blueprint::SetFinishOnMessage(struct FName MessageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "SetFinishOnMessage");
    struct
    {
        struct FName MessageName;
    } Parms{};
    Parms.MessageName = (struct FName)MessageName;
    this->ProcessEvent(Func, &Parms);
}

void UGPBTTask_Blueprint::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "ReceiveTickAI");
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

void UGPBTTask_Blueprint::ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "ReceiveTick");
    struct
    {
        struct AActor* OwnerActor;
        float DeltaSeconds;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UGPBTTask_Blueprint::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "ReceiveExecuteAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UGPBTTask_Blueprint::ReceiveExecute(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "ReceiveExecute");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

void UGPBTTask_Blueprint::ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "ReceiveAbortAI");
    struct
    {
        struct AAIController* OwnerController;
        struct APawn* ControlledPawn;
    } Parms{};
    Parms.OwnerController = (struct AAIController*)OwnerController;
    Parms.ControlledPawn = (struct APawn*)ControlledPawn;
    this->ProcessEvent(Func, &Parms);
}

void UGPBTTask_Blueprint::ReceiveAbort(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "ReceiveAbort");
    struct
    {
        struct AActor* OwnerActor;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPBTTask_Blueprint::IsTaskExecuting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "IsTaskExecuting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPBTTask_Blueprint::IsTaskAborting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "IsTaskAborting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPBTTask_Blueprint::GetSpecDescription()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "GetSpecDescription");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPBTTask_Blueprint::FinishExecute(uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "FinishExecute");
    struct
    {
        uint8_t bSuccess;
    } Parms{};
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UGPBTTask_Blueprint::FinishAbort()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPBTTask_Blueprint", "FinishAbort");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPEnvQueryInstanceBPWrapper::* ----
struct TArray<struct UObject*> UGPEnvQueryInstanceBPWrapper::GetResultsAsObjects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPEnvQueryInstanceBPWrapper", "GetResultsAsObjects");
    struct
    {
        struct TArray<struct UObject*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UGPEnvQueryInstanceBPWrapper::GetResultAsObject(int32_t ResultIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPEnvQueryInstanceBPWrapper", "GetResultAsObject");
    struct
    {
        int32_t ResultIndex;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.ResultIndex = (int32_t)ResultIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPEnvQueryInstanceBPWrapper::CheckPosInTopRange(struct FVector CheckLocation, float DestTopPercent, int32_t DestTopRank, float CheckDistTolerence)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPEnvQueryInstanceBPWrapper", "CheckPosInTopRange");
    struct
    {
        struct FVector CheckLocation;
        float DestTopPercent;
        int32_t DestTopRank;
        float CheckDistTolerence;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CheckLocation = (struct FVector)CheckLocation;
    Parms.DestTopPercent = (float)DestTopPercent;
    Parms.DestTopRank = (int32_t)DestTopRank;
    Parms.CheckDistTolerence = (float)CheckDistTolerence;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UGPEQSGenerator_RoundArea::* ----
uint8_t UGPEQSGenerator_RoundArea::ShouldAvoidPoint(const struct FVector& avoidTargetPoint, const struct FVector& testingPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPEQSGenerator_RoundArea", "ShouldAvoidPoint");
    struct
    {
        struct FVector avoidTargetPoint;
        struct FVector testingPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.avoidTargetPoint = (struct FVector)avoidTargetPoint;
    Parms.testingPoint = (struct FVector)testingPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ANZCoverGenerator::* ----
void ANZCoverGenerator::ReleaseCover(struct UNZCoverPoint* NZCoverPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverGenerator", "ReleaseCover");
    struct
    {
        struct UNZCoverPoint* NZCoverPoint;
    } Parms{};
    Parms.NZCoverPoint = (struct UNZCoverPoint*)NZCoverPoint;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ANZCoverGenerator::OccupyCover(struct UNZCoverPoint* NZCoverPoint, struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverGenerator", "OccupyCover");
    struct
    {
        struct UNZCoverPoint* NZCoverPoint;
        struct AController* Controller;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NZCoverPoint = (struct UNZCoverPoint*)NZCoverPoint;
    Parms.Controller = (struct AController*)Controller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ANZCoverGenerator::IsFreeNZCoverPoint(struct UNZCoverPoint* NZCoverPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverGenerator", "IsFreeNZCoverPoint");
    struct
    {
        struct UNZCoverPoint* NZCoverPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NZCoverPoint = (struct UNZCoverPoint*)NZCoverPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UNZCoverPoint*> ANZCoverGenerator::GetCoverWithinBox(const struct FBox& BoxIn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverGenerator", "GetCoverWithinBox");
    struct
    {
        struct FBox BoxIn;
        struct TArray<struct UNZCoverPoint*> ReturnValue;
    } Parms{};
    Parms.BoxIn = (struct FBox)BoxIn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ANZCoverGenerator::CoverExistWithinBox(const struct FBox& BoxIn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverGenerator", "CoverExistWithinBox");
    struct
    {
        struct FBox BoxIn;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BoxIn = (struct FBox)BoxIn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ICoverOccupierInterface::* ----
void ICoverOccupierInterface::StopCoverPointMontage(struct UAnimMontage* montageToStop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverOccupierInterface", "StopCoverPointMontage");
    struct
    {
        struct UAnimMontage* montageToStop;
    } Parms{};
    Parms.montageToStop = (struct UAnimMontage*)montageToStop;
    this->ProcessEvent(Func, &Parms);
}

void ICoverOccupierInterface::PlayCoverPointMontage(struct UAnimMontage* montageToPlay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverOccupierInterface", "PlayCoverPointMontage");
    struct
    {
        struct UAnimMontage* montageToPlay;
    } Parms{};
    Parms.montageToPlay = (struct UAnimMontage*)montageToPlay;
    this->ProcessEvent(Func, &Parms);
}

void ICoverOccupierInterface::OnCoverOccupyLost(struct UNZCoverPoint* cover)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverOccupierInterface", "OnCoverOccupyLost");
    struct
    {
        struct UNZCoverPoint* cover;
    } Parms{};
    Parms.cover = (struct UNZCoverPoint*)cover;
    this->ProcessEvent(Func, &Parms);
}

void ICoverOccupierInterface::OnCoverOccupy(struct UNZCoverPoint* cover)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverOccupierInterface", "OnCoverOccupy");
    struct
    {
        struct UNZCoverPoint* cover;
    } Parms{};
    Parms.cover = (struct UNZCoverPoint*)cover;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ICoverOccupierInterface::CanApproachToCover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverOccupierInterface", "CanApproachToCover");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UNZCoverPoint::* ----
uint8_t UNZCoverPoint::TryOccupyCover(struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverPoint", "TryOccupyCover");
    struct
    {
        struct AController* Controller;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Controller = (struct AController*)Controller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNZCoverPoint::ReleaseCover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverPoint", "ReleaseCover");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNZCoverPoint::PlayerHoldCover(struct AActor* OwnerChar, float InHoldTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverPoint", "PlayerHoldCover");
    struct
    {
        struct AActor* OwnerChar;
        float InHoldTime;
    } Parms{};
    Parms.OwnerChar = (struct AActor*)OwnerChar;
    Parms.InHoldTime = (float)InHoldTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UNZCoverPoint::IsOccupiedBy(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverPoint", "IsOccupiedBy");
    struct
    {
        struct AActor* InActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ANZCoverGenerator* UNZCoverPoint::GetCoverGen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverPoint", "GetCoverGen");
    struct
    {
        struct ANZCoverGenerator* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UNZCoverPoint::CanSeenFromPoint(struct FVector InFromPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverPoint", "CanSeenFromPoint");
    struct
    {
        struct FVector InFromPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFromPoint = (struct FVector)InFromPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UNZCoverPoint::BestCoverShootLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NZCoverPoint", "BestCoverShootLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
