#include "DFMPSO.hpp"
#include "GPGameFlow.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFMPSOAutomation
void UDFMPSOAutomation::OnOpenWorldProfileState(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOAutomation", "OnOpenWorldProfileState");
    struct
    {
        int32_t State;
    } Parms{};
    Parms.State = (int32_t)State;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOAutomation::OnOpenWorldProfileEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOAutomation", "OnOpenWorldProfileEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOAutomation::CreateNewLoadReq(const struct FSoftObjectPath& InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOAutomation", "CreateNewLoadReq");
    struct
    {
        struct FSoftObjectPath InPath;
    } Parms{};
    Parms.InPath = (struct FSoftObjectPath)InPath;
    this->ProcessEvent(Func, &Parms);
}

// UDFMPSOCacheSystem
void UDFMPSOCacheSystem::StopPrecompile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "StopPrecompile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOCacheSystem::StartAutomation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "StartAutomation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPSOCacheSystem::ShouldPrecompileAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "ShouldPrecompileAll");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPSOCacheSystem::SetBackgroundBatchMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPSOCacheSystem", "SetBackgroundBatchMode");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMPSOCacheSystem::ResumePSOBatching()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "ResumePSOBatching");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOCacheSystem::ReportPSOEvent(EPSOPrecompileEvent EventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "ReportPSOEvent");
    struct
    {
        enum EPSOPrecompileEvent EventType;
    } Parms{};
    Parms.EventType = (enum EPSOPrecompileEvent)EventType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPSOCacheSystem::PSOCacheFileValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "PSOCacheFileValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMPSOCacheSystem::PrecompilePSOStartup(const struct TArray<struct FString>& InPrecompileAreaNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "PrecompilePSOStartup");
    struct
    {
        struct TArray<struct FString> InPrecompileAreaNames;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPrecompileAreaNames = (struct TArray<struct FString>)InPrecompileAreaNames;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMPSOCacheSystem::PrecompileAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "PrecompileAll");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPSOCacheSystem::OnGameFlowEnter(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "OnGameFlowEnter");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOCacheSystem::OnEndSOLLoadingPrecompilePSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "OnEndSOLLoadingPrecompilePSO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOCacheSystem::OnEndMPLoadingPrecompilePSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "OnEndMPLoadingPrecompilePSO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOCacheSystem::OnBeginSOLLoadingPrecompilePSO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "OnBeginSOLLoadingPrecompilePSO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOCacheSystem::OnBeginMPLoadingPrecompilePSO(struct FString InAreaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "OnBeginMPLoadingPrecompilePSO");
    struct
    {
        struct FString InAreaName;
    } Parms{};
    Parms.InAreaName = (struct FString)InAreaName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPSOCacheSystem::IsPSOCacheRedirected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "IsPSOCacheRedirected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMPSOCacheSystem::IsEnablePSOAutomation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPSOCacheSystem", "IsEnablePSOAutomation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMPSOTaskScheduler* UDFMPSOCacheSystem::GetTaskScheduler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "GetTaskScheduler");
    struct
    {
        struct UDFMPSOTaskScheduler* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPSOCachePrecompileState UDFMPSOCacheSystem::GetPrecompileState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "GetPrecompileState");
    struct
    {
        enum EPSOCachePrecompileState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMPSOCacheSystem::GetPrecompileAllPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "GetPrecompileAllPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMPSOCacheSystem* UDFMPSOCacheSystem::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPSOCacheSystem", "Get");
    struct
    {
        struct UDFMPSOCacheSystem* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPSOCacheSystem::EnterUsageMaskStage(EDFMPSOStage MaskStage, struct FString AreaName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOCacheSystem", "EnterUsageMaskStage");
    struct
    {
        enum EDFMPSOStage MaskStage;
        struct FString AreaName;
    } Parms{};
    Parms.MaskStage = (enum EDFMPSOStage)MaskStage;
    Parms.AreaName = (struct FString)AreaName;
    this->ProcessEvent(Func, &Parms);
}

// UDFMPSOTaskScheduler
void UDFMPSOTaskScheduler::Stop(uint8_t bFinished)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "Stop");
    struct
    {
        uint8_t bFinished;
    } Parms{};
    Parms.bFinished = (uint8_t)bFinished;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOTaskScheduler::Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOTaskScheduler::SkipPrecompile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "SkipPrecompile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPSOTaskScheduler::RunPSOTaskScheduler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPSOTaskScheduler", "RunPSOTaskScheduler");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMPSOTaskScheduler::PSOTaskSchedulerDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPSOTaskScheduler", "PSOTaskSchedulerDebug");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPSOTaskScheduler::LoadingToGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "LoadingToGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPSOTaskScheduler::IsRunning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "IsRunning");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPSOTaskScheduler::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOTaskScheduler::Fullspeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "Fullspeed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOTaskScheduler::Background()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "Background");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMPSOTaskScheduler::BackgoundPSOTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMPSOTaskScheduler", "BackgoundPSOTask");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMPSOTaskScheduler::AutoSchedule(uint8_t bLowestGear)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "AutoSchedule");
    struct
    {
        uint8_t bLowestGear;
    } Parms{};
    Parms.bLowestGear = (uint8_t)bLowestGear;
    this->ProcessEvent(Func, &Parms);
}

void UDFMPSOTaskScheduler::AddPendingFinishedIniMark(struct FString Section, struct FString Key, struct FString Value, struct FString ini)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPSOTaskScheduler", "AddPendingFinishedIniMark");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FString Value;
        struct FString ini;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    Parms.ini = (struct FString)ini;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
