#include "DFMGameSDKGameplay.hpp"
#include "DFLoading.hpp"
#include "DFMGameLoading.hpp"
#include "PerfGear.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFMGameGPMManager
void UDFMGameGPMManager::UploadMetaperfInfoToApm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "UploadMetaperfInfoToApm");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::UploadMemoryToApm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "UploadMemoryToApm");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::UploadGlobalQualityToApm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "UploadGlobalQualityToApm");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::UploadAudioToApm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "UploadAudioToApm");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::OnUploadFullScreenEffectChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "OnUploadFullScreenEffectChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::OnSeamlessEnterStageChanged(uint8_t NewStageType, uint8_t OldStageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "OnSeamlessEnterStageChanged");
    struct
    {
        uint8_t NewStageType;
        uint8_t OldStageType;
    } Parms{};
    Parms.NewStageType = (uint8_t)NewStageType;
    Parms.OldStageType = (uint8_t)OldStageType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::OnQuestStageChanged(struct FName QuestStageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "OnQuestStageChanged");
    struct
    {
        struct FName QuestStageName;
    } Parms{};
    Parms.QuestStageName = (struct FName)QuestStageName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::OnPrecompileAllPSOFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "OnPrecompileAllPSOFinish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::OnLowFpsModeChanged(ELowFpsOP FpsOP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "OnLowFpsModeChanged");
    struct
    {
        enum ELowFpsOP FpsOP;
    } Parms{};
    Parms.FpsOP = (enum ELowFpsOP)FpsOP;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::OnGfxStatsUpdate(uint32_t Hit, uint32_t Precompiled, uint32_t Total)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "OnGfxStatsUpdate");
    struct
    {
        uint32_t Hit;
        uint32_t Precompiled;
        uint32_t Total;
    } Parms{};
    Parms.Hit = (uint32_t)Hit;
    Parms.Precompiled = (uint32_t)Precompiled;
    Parms.Total = (uint32_t)Total;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::OnClientGameLoadingFinishedNew(EDFLoadingFlowStepResult Result, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "OnClientGameLoadingFinishedNew");
    struct
    {
        enum EDFLoadingFlowStepResult Result;
        struct FString Reason;
    } Parms{};
    Parms.Result = (enum EDFLoadingFlowStepResult)Result;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::OnClientGameLoadingFinished(EFlowResult Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "OnClientGameLoadingFinished");
    struct
    {
        enum EFlowResult Result;
    } Parms{};
    Parms.Result = (enum EFlowResult)Result;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::MarkLevelLoadByName(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "MarkLevelLoadByName");
    struct
    {
        struct FString Name;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::MarkLevelLoad()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "MarkLevelLoad");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGPMManager::MarkLevelFin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPMManager", "MarkLevelFin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGameGPMManager* UDFMGameGPMManager::GetDFMGameGPMManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPMManager", "GetDFMGameGPMManager");
    struct
    {
        struct UDFMGameGPMManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
