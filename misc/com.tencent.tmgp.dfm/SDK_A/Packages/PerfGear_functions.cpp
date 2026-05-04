#include "PerfGear.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AFXProxyActor::* ----
void AFXProxyActor::UpdatePlatformAssetSign()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "UpdatePlatformAssetSign");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::Test_SetDSActivatePSC_True()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "Test_SetDSActivatePSC_True");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::Test_SetDSActivatePSC_False()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "Test_SetDSActivatePSC_False");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::SetTemplateTransSortPriority(int32_t sortLayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "SetTemplateTransSortPriority");
    struct
    {
        int32_t sortLayer;
    } Parms{};
    Parms.sortLayer = (int32_t)sortLayer;
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::SetParticleSystemColorParam(struct FName ParamName, struct FLinearColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "SetParticleSystemColorParam");
    struct
    {
        struct FName ParamName;
        struct FLinearColor Color;
    } Parms{};
    Parms.ParamName = (struct FName)ParamName;
    Parms.Color = (struct FLinearColor)Color;
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::SetManagingSignificance(uint8_t bManaged)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "SetManagingSignificance");
    struct
    {
        uint8_t bManaged;
    } Parms{};
    Parms.bManaged = (uint8_t)bManaged;
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::SetFxProxyVisible(uint8_t bVisible, EFXVisibleState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "SetFxProxyVisible");
    struct
    {
        uint8_t bVisible;
        enum EFXVisibleState State;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    Parms.State = (enum EFXVisibleState)State;
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::SetDSActivatePSC(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "SetDSActivatePSC");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::OnRep_DSActivatePSC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "OnRep_DSActivatePSC");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::OnParticleSystemLoaded(const struct FSoftObjectPath& FXPathRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "OnParticleSystemLoaded");
    struct
    {
        struct FSoftObjectPath FXPathRef;
    } Parms{};
    Parms.FXPathRef = (struct FSoftObjectPath)FXPathRef;
    this->ProcessEvent(Func, &Parms);
}

void AFXProxyActor::OnParticleSystemFinished(struct UParticleSystemComponent* FinishedComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXProxyActor", "OnParticleSystemFinished");
    struct
    {
        struct UParticleSystemComponent* FinishedComponent;
    } Parms{};
    Parms.FinishedComponent = (struct UParticleSystemComponent*)FinishedComponent;
    this->ProcessEvent(Func, &Parms);
}

// ---- UFXProxyActorManager::* ----
void UFXProxyActorManager::SetEffectTOD(int32_t TODID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FXProxyActorManager", "SetEffectTOD");
    struct
    {
        int32_t TODID;
    } Parms{};
    Parms.TODID = (int32_t)TODID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UPerfGearPipeline::* ----
void UPerfGearPipeline::SetSwitchStatus(struct FString InParamName, struct FString InMode, const ESwitchStatus& InStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetSwitchStatus");
    struct
    {
        struct FString InParamName;
        struct FString InMode;
        enum ESwitchStatus InStatus;
    } Parms{};
    Parms.InParamName = (struct FString)InParamName;
    Parms.InMode = (struct FString)InMode;
    Parms.InStatus = (enum ESwitchStatus)InStatus;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::SetRecommendLevel(const EPerfGearQualityLevel& InQualityLevel, const EPerfGearQualityLevel& InFpsLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetRecommendLevel");
    struct
    {
        enum EPerfGearQualityLevel InQualityLevel;
        enum EPerfGearQualityLevel InFpsLevel;
    } Parms{};
    Parms.InQualityLevel = (enum EPerfGearQualityLevel)InQualityLevel;
    Parms.InFpsLevel = (enum EPerfGearQualityLevel)InFpsLevel;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::SetQualityLevel(const EPerfGearQualityLevel& InLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetQualityLevel");
    struct
    {
        enum EPerfGearQualityLevel InLevel;
    } Parms{};
    Parms.InLevel = (enum EPerfGearQualityLevel)InLevel;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::SetQualityAndFPSLevel(const EPerfGearQualityLevel& InQualityLevel, const EPerfGearQualityLevel& InFpsLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetQualityAndFPSLevel");
    struct
    {
        enum EPerfGearQualityLevel InQualityLevel;
        enum EPerfGearQualityLevel InFpsLevel;
    } Parms{};
    Parms.InQualityLevel = (enum EPerfGearQualityLevel)InQualityLevel;
    Parms.InFpsLevel = (enum EPerfGearQualityLevel)InFpsLevel;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::SetMPOverrideSetting(struct TArray<struct FPSClampSetting>& ClampSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetMPOverrideSetting");
    struct
    {
        struct TArray<struct FPSClampSetting> ClampSettings;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ClampSettings = Parms.ClampSettings;
}

void UPerfGearPipeline::SetFPSLevel(const EPerfGearQualityLevel& InLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetFPSLevel");
    struct
    {
        enum EPerfGearQualityLevel InLevel;
    } Parms{};
    Parms.InLevel = (enum EPerfGearQualityLevel)InLevel;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::SetDeviceLevelHD(int32_t InLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetDeviceLevelHD");
    struct
    {
        int32_t InLevel;
    } Parms{};
    Parms.InLevel = (int32_t)InLevel;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::SetDeviceLevel(int32_t APMDeviceLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetDeviceLevel");
    struct
    {
        int32_t APMDeviceLevel;
    } Parms{};
    Parms.APMDeviceLevel = (int32_t)APMDeviceLevel;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPerfGearPipeline::SetCurMode(struct FString InMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetCurMode");
    struct
    {
        struct FString InMode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InMode = (struct FString)InMode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPerfGearPipeline::SetCurMapName(const struct FName& InMapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "SetCurMapName");
    struct
    {
        struct FName InMapName;
    } Parms{};
    Parms.InMapName = (struct FName)InMapName;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UPerfGearPipeline::PerfQualityToString(const EPerfGearQualityLevel& InLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "PerfQualityToString");
    struct
    {
        enum EPerfGearQualityLevel InLevel;
        struct FString ReturnValue;
    } Parms{};
    Parms.InLevel = (enum EPerfGearQualityLevel)InLevel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPerfGearPipeline::IsSwitchEnable(struct FString InParamName, const EPerfGearQualityLevel& InLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "IsSwitchEnable");
    struct
    {
        struct FString InParamName;
        enum EPerfGearQualityLevel InLevel;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InParamName = (struct FString)InParamName;
    Parms.InLevel = (enum EPerfGearQualityLevel)InLevel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPerfGearPipeline::IsParamInBlackList(struct FString InParamName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "IsParamInBlackList");
    struct
    {
        struct FString InParamName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InParamName = (struct FString)InParamName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetVulkanVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetVulkanVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ESwitchStatus UPerfGearPipeline::GetSwitchStatus(struct FString InParamName, struct FString InMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetSwitchStatus");
    struct
    {
        struct FString InParamName;
        struct FString InMode;
        enum ESwitchStatus ReturnValue;
    } Parms{};
    Parms.InParamName = (struct FString)InParamName;
    Parms.InMode = (struct FString)InMode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetSwitchMinLevel(struct FString InParamName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetSwitchMinLevel");
    struct
    {
        struct FString InParamName;
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    Parms.InParamName = (struct FString)InParamName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetScreenEffectQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetScreenEffectQualityLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ERHIType UPerfGearPipeline::GetRHIType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfGearPipeline", "GetRHIType");
    struct
    {
        enum ERHIType ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetRHIInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetRHIInfo");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetQualityLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetPlatformName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetPlatformName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetParticleQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetParticleQualityLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetOSVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetOSVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearOSType UPerfGearPipeline::GetOSType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfGearPipeline", "GetOSType");
    struct
    {
        enum EPerfGearOSType ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetOSMajorVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetOSMajorVersion");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetOriQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetOriQualityLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetOriFpsLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetOriFpsLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetOpenHarmonyVersoin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetOpenHarmonyVersoin");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetMemoryType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetMemoryType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetMemoryTotal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetMemoryTotal");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetMaxSupportRefreshRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetMaxSupportRefreshRate");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetMaxQualityLevelByFPS(EPerfGearQualityLevel FPSLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetMaxQualityLevelByFPS");
    struct
    {
        enum EPerfGearQualityLevel FPSLevel;
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    Parms.FPSLevel = (enum EPerfGearQualityLevel)FPSLevel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetMaxFPSLevelByQulaity(EPerfGearQualityLevel QualityLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetMaxFPSLevelByQulaity");
    struct
    {
        enum EPerfGearQualityLevel QualityLevel;
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    Parms.QualityLevel = (enum EPerfGearQualityLevel)QualityLevel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetMaterialQualityByDeviceLevel(int32_t InDeviceLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetMaterialQualityByDeviceLevel");
    struct
    {
        int32_t InDeviceLevel;
        int32_t ReturnValue;
    } Parms{};
    Parms.InDeviceLevel = (int32_t)InDeviceLevel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetLobbyClampedLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetLobbyClampedLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPerfGearPipeline::GetIsDeviceCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetIsDeviceCheck");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetGPUBrand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetGPUBrand");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetGMCurQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetGMCurQualityLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetGLVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetGLVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetGLMaxVertexUniformComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetGLMaxVertexUniformComponents");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetGLMaxPixelUniformComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetGLMaxPixelUniformComponents");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetFPSLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetFPSLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetDriverVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDriverVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<EPerfGearQualityLevel> UPerfGearPipeline::GetDeviceUnSupportQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDeviceUnSupportQualityLevel");
    struct
    {
        struct TArray<EPerfGearQualityLevel> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UPerfGearPipeline::GetDeviceUnSupportMaterialQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDeviceUnSupportMaterialQualityLevel");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<EPerfGearQualityLevel> UPerfGearPipeline::GetDeviceUnSupportFPSLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDeviceUnSupportFPSLevel");
    struct
    {
        struct TArray<EPerfGearQualityLevel> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetDeviceRecommendQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDeviceRecommendQualityLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetDeviceRecommendFPSLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDeviceRecommendFPSLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetDeviceName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDeviceName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetDeviceLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDeviceLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetDebugApplyQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetDebugApplyQuality");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfGearPipeline::GetCurrentRefreshRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetCurrentRefreshRate");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetCurQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetCurQualityLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetCurMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetCurMode");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetCurGroupQualityLevel(struct FString GroupName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetCurGroupQualityLevel");
    struct
    {
        struct FString GroupName;
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    Parms.GroupName = (struct FString)GroupName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetCurFPSLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetCurFPSLevel");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPerfGearQualityLevel UPerfGearPipeline::GetCurApplyQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetCurApplyQuality");
    struct
    {
        enum EPerfGearQualityLevel ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPerfGearPipeline::GetAndroidVersoin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "GetAndroidVersoin");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPerfGearPipeline* UPerfGearPipeline::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfGearPipeline", "Get");
    struct
    {
        struct UPerfGearPipeline* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPerfGearPipeline::ClearCurMapName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "ClearCurMapName");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::ChangeFpsOp(ELowFpsType FpsType, ELowFpsOP FpsOP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "ChangeFpsOp");
    struct
    {
        enum ELowFpsType FpsType;
        enum ELowFpsOP FpsOP;
    } Parms{};
    Parms.FpsType = (enum ELowFpsType)FpsType;
    Parms.FpsOP = (enum ELowFpsOP)FpsOP;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::Apply(uint8_t bSlient, uint8_t bFPSOnly, uint8_t bForceQualityLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "Apply");
    struct
    {
        uint8_t bSlient;
        uint8_t bFPSOnly;
        uint8_t bForceQualityLevel;
    } Parms{};
    Parms.bSlient = (uint8_t)bSlient;
    Parms.bFPSOnly = (uint8_t)bFPSOnly;
    Parms.bForceQualityLevel = (uint8_t)bForceQualityLevel;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::AddForceUpdateConsoleName(struct FString& ConsoleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "AddForceUpdateConsoleName");
    struct
    {
        struct FString ConsoleName;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ConsoleName = Parms.ConsoleName;
}

void UPerfGearPipeline::AddBlackVarListSubLevel(struct FString InParamName, const struct TMap<EPerfGearQualityLevel, struct FString>& LevelValues, const EBlackVarPriority& Priority, const struct TArray<struct FString>& InModeArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "AddBlackVarListSubLevel");
    struct
    {
        struct FString InParamName;
        struct TMap<EPerfGearQualityLevel, struct FString> LevelValues;
        enum EBlackVarPriority Priority;
        struct TArray<struct FString> InModeArray;
    } Parms{};
    Parms.InParamName = (struct FString)InParamName;
    Parms.LevelValues = (struct TMap<EPerfGearQualityLevel, struct FString>)LevelValues;
    Parms.Priority = (enum EBlackVarPriority)Priority;
    Parms.InModeArray = (struct TArray<struct FString>)InModeArray;
    this->ProcessEvent(Func, &Parms);
}

void UPerfGearPipeline::AddBlackVarListAllLevel(struct FString InParamName, struct FString ConsoleValue, const EBlackVarPriority& Priority, const struct TArray<struct FString>& InModeArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PerfGearPipeline", "AddBlackVarListAllLevel");
    struct
    {
        struct FString InParamName;
        struct FString ConsoleValue;
        enum EBlackVarPriority Priority;
        struct TArray<struct FString> InModeArray;
    } Parms{};
    Parms.InParamName = (struct FString)InParamName;
    Parms.ConsoleValue = (struct FString)ConsoleValue;
    Parms.Priority = (enum EBlackVarPriority)Priority;
    Parms.InModeArray = (struct TArray<struct FString>)InModeArray;
    this->ProcessEvent(Func, &Parms);
}

// ---- UPerfGearFuncLib::* ----
struct FPSClampSetting UPerfGearFuncLib::MakeFPSClampSetting(EPerfGearQualityLevel InQualityLevel, EPerfGearQualityLevel InOriFpsLevel, EPerfGearQualityLevel InOverrideFpsLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfGearFuncLib", "MakeFPSClampSetting");
    struct
    {
        enum EPerfGearQualityLevel InQualityLevel;
        enum EPerfGearQualityLevel InOriFpsLevel;
        enum EPerfGearQualityLevel InOverrideFpsLevel;
        struct FPSClampSetting ReturnValue;
    } Parms{};
    Parms.InQualityLevel = (enum EPerfGearQualityLevel)InQualityLevel;
    Parms.InOriFpsLevel = (enum EPerfGearQualityLevel)InOriFpsLevel;
    Parms.InOverrideFpsLevel = (enum EPerfGearQualityLevel)InOverrideFpsLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPerfGearPipeline* UPerfGearFuncLib::GetPerfGearInst()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfGearFuncLib", "GetPerfGearInst");
    struct
    {
        struct UPerfGearPipeline* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULowMemoryQualityManager::* ----
void ULowMemoryQualityManager::SetLowMemoryMode(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LowMemoryQualityManager", "SetLowMemoryMode");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULowMemoryQualityManager::IsLowMemoryModeOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LowMemoryQualityManager", "IsLowMemoryModeOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULowMemoryQualityManager* ULowMemoryQualityManager::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LowMemoryQualityManager", "Get");
    struct
    {
        struct ULowMemoryQualityManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULowMemoryQualityManager::FindConsoleValueLowMemoryOverride(struct FString ConsoleName, struct FString& InOutConsoleValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LowMemoryQualityManager", "FindConsoleValueLowMemoryOverride");
    struct
    {
        struct FString ConsoleName;
        struct FString InOutConsoleValue;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ConsoleName = (struct FString)ConsoleName;
    this->ProcessEvent(Func, &Parms);
    InOutConsoleValue = Parms.InOutConsoleValue;
    return Parms.ReturnValue;
}

void ULowMemoryQualityManager::ExecuteConsoleCommandOverride(struct FString ConsoleName, struct FString ConsoleValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LowMemoryQualityManager", "ExecuteConsoleCommandOverride");
    struct
    {
        struct FString ConsoleName;
        struct FString ConsoleValue;
    } Parms{};
    Parms.ConsoleName = (struct FString)ConsoleName;
    Parms.ConsoleValue = (struct FString)ConsoleValue;
    this->ProcessEvent(Func, &Parms);
}

void ULowMemoryQualityManager::ExecuteAllLowMemoryConsoleCommand(uint8_t isLowMemory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LowMemoryQualityManager", "ExecuteAllLowMemoryConsoleCommand");
    struct
    {
        uint8_t isLowMemory;
    } Parms{};
    Parms.isLowMemory = (uint8_t)isLowMemory;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULowMemoryQualityManager::CanOpenLowMemoryMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LowMemoryQualityManager", "CanOpenLowMemoryMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
