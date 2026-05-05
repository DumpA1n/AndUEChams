#include "GPGlobalDefines.hpp"
#include "Engine.hpp"
#include "GPGameInput.hpp"
#include "GPSettings.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AGPTriggerBase
void AGPTriggerBase::TryTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "TryTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPTriggerBase::TestTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "TestTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPTriggerBase::TestReset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "TestReset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPTriggerBase::RPC_OnServerTriggered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "RPC_OnServerTriggered");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPTriggerBase::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPTriggerBase::OnTriggerEndOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "OnTriggerEndOverlapInternal");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPTriggerBase::OnTriggerBeginOverlapInternal(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "OnTriggerBeginOverlapInternal");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void AGPTriggerBase::OnRep_ReplicatedTriggerNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "OnRep_ReplicatedTriggerNum");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGPTriggerBase::OnLevelEnvEvent(struct UObject* EventSourceObject, struct FName EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "OnLevelEnvEvent");
    struct
    {
        struct UObject* EventSourceObject;
        struct FName EventName;
    } Parms{};
    Parms.EventSourceObject = (struct UObject*)EventSourceObject;
    Parms.EventName = (struct FName)EventName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPTriggerBase::CheckTriggerMode(struct AActor* OverlapActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "CheckTriggerMode");
    struct
    {
        struct AActor* OverlapActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OverlapActor = (struct AActor*)OverlapActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AGPTriggerBase::BP_DoTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPTriggerBase", "BP_DoTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UBlueprintFunctionHelper
void UBlueprintFunctionHelper::SnapToGround(struct USplineComponent* SplineComp, uint8_t bInAlign)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintFunctionHelper", "SnapToGround");
    struct
    {
        struct USplineComponent* SplineComp;
        uint8_t bInAlign;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.bInAlign = (uint8_t)bInAlign;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBlueprintFunctionHelper::SnapToFixedAngleXY(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintFunctionHelper", "SnapToFixedAngleXY");
    struct
    {
        struct USplineComponent* SplineComp;
        struct TArray<float> AllowedAngles;
        uint8_t bSnapToGround;
        struct TArray<struct FVector> ResultPoints;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.AllowedAngles = (struct TArray<float>)AllowedAngles;
    Parms.bSnapToGround = (uint8_t)bSnapToGround;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ResultPoints = Parms.ResultPoints;
}

void UBlueprintFunctionHelper::SnapToFixedAngle(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintFunctionHelper", "SnapToFixedAngle");
    struct
    {
        struct USplineComponent* SplineComp;
        struct TArray<float> AllowedAngles;
        uint8_t bSnapToGround;
        struct TArray<struct FVector> ResultPoints;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.AllowedAngles = (struct TArray<float>)AllowedAngles;
    Parms.bSnapToGround = (uint8_t)bSnapToGround;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ResultPoints = Parms.ResultPoints;
}

void UBlueprintFunctionHelper::RerunConstructionScripts(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintFunctionHelper", "RerunConstructionScripts");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UClientSettingHelperHD
void UClientSettingHelperHD::SaveToSaved()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSettingHelperHD", "SaveToSaved");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientSettingHelperHD::SaveToDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSettingHelperHD", "SaveToDefault");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientSettingHelperHD::ResetToDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSettingHelperHD", "ResetToDefault");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientSettingHelperHD::RemoveOutOfGameApplySetting(struct FName ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSettingHelperHD", "RemoveOutOfGameApplySetting");
    struct
    {
        struct FName ID;
    } Parms{};
    Parms.ID = (struct FName)ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UClientSettingHelperHD::MergeJson(struct TMap<struct FString, struct FString> JsonMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSettingHelperHD", "MergeJson");
    struct
    {
        struct TMap<struct FString, struct FString> JsonMap;
        struct FString ReturnValue;
    } Parms{};
    Parms.JsonMap = (struct TMap<struct FString, struct FString>)JsonMap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UClientSettingHelperHD::IsEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSettingHelperHD", "IsEditor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UClientSettingHelperHD::GetOutOfGameApplySettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSettingHelperHD", "GetOutOfGameApplySettings");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UClientSettingHelperHD::GetDisplayNameByID(struct FName ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSettingHelperHD", "GetDisplayNameByID");
    struct
    {
        struct FName ID;
        struct FText ReturnValue;
    } Parms{};
    Parms.ID = (struct FName)ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientSettingHelperHD::ClearOutOfGameApplySettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSettingHelperHD", "ClearOutOfGameApplySettings");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UClientSettingHelperHD::AddOutOfGameApplySetting(struct FName ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSettingHelperHD", "AddOutOfGameApplySetting");
    struct
    {
        struct FName ID;
    } Parms{};
    Parms.ID = (struct FName)ID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UClientBHDSetting
void UClientBHDSetting::SetZoomratedMDVByIndex(int32_t Index, float Value, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBHDSetting", "SetZoomratedMDVByIndex");
    struct
    {
        int32_t Index;
        float Value;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Value = (float)Value;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

void UClientBHDSetting::SetADSSensitivityByIndex(int32_t Index, int32_t SubIndex, float Value, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBHDSetting", "SetADSSensitivityByIndex");
    struct
    {
        int32_t Index;
        int32_t SubIndex;
        float Value;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.SubIndex = (int32_t)SubIndex;
    Parms.Value = (float)Value;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

float UClientBHDSetting::GetZoomratedMDVByIndex(int32_t Index, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBHDSetting", "GetZoomratedMDVByIndex");
    struct
    {
        int32_t Index;
        uint8_t bIsGamepad;
        float ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UClientBHDSetting::GetCustomADSSensitivityByIndex(int32_t Index, int32_t SubIndex, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBHDSetting", "GetCustomADSSensitivityByIndex");
    struct
    {
        int32_t Index;
        int32_t SubIndex;
        uint8_t bIsGamepad;
        float ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.SubIndex = (int32_t)SubIndex;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UClientBHDSetting::GetCachedSettingJson()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBHDSetting", "GetCachedSettingJson");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UClientBHDSetting::GetBHDPresetValueByType(const struct TMap<EGamepadSensitivityPresetType, float>& Map, EGamepadSensitivityPresetType Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBHDSetting", "GetBHDPresetValueByType");
    struct
    {
        struct TMap<EGamepadSensitivityPresetType, float> Map;
        enum EGamepadSensitivityPresetType Type;
        float ReturnValue;
    } Parms{};
    Parms.Map = (struct TMap<EGamepadSensitivityPresetType, float>)Map;
    Parms.Type = (enum EGamepadSensitivityPresetType)Type;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClientBHDSetting* UClientBHDSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientBHDSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientBHDSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientBHDSetting::CacheSettingJson(struct FString InJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBHDSetting", "CacheSettingJson");
    struct
    {
        struct FString InJson;
    } Parms{};
    Parms.InJson = (struct FString)InJson;
    this->ProcessEvent(Func, &Parms);
}

// UClientDebugSetting
void UClientDebugSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientDebugSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UClientGameSetting
void UClientGameSetting::SetUseDof(uint8_t InUseDof)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSetting", "SetUseDof");
    struct
    {
        uint8_t InUseDof;
    } Parms{};
    Parms.InUseDof = (uint8_t)InUseDof;
    this->ProcessEvent(Func, &Parms);
}

void UClientGameSetting::SetSeparateSideAiming(uint8_t InSeparateSideAiming)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSetting", "SetSeparateSideAiming");
    struct
    {
        uint8_t InSeparateSideAiming;
    } Parms{};
    Parms.InSeparateSideAiming = (uint8_t)InSeparateSideAiming;
    this->ProcessEvent(Func, &Parms);
}

void UClientGameSetting::SetScopeUseRT(uint8_t InUseRT)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSetting", "SetScopeUseRT");
    struct
    {
        uint8_t InUseRT;
    } Parms{};
    Parms.InUseRT = (uint8_t)InUseRT;
    this->ProcessEvent(Func, &Parms);
}

void UClientGameSetting::SetReloadOpMode(uint8_t bSlideMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSetting", "SetReloadOpMode");
    struct
    {
        uint8_t bSlideMode;
    } Parms{};
    Parms.bSlideMode = (uint8_t)bSlideMode;
    this->ProcessEvent(Func, &Parms);
}

void UClientGameSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UClientGameSetting::GetUseDof()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSetting", "GetUseDof");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UClientGameSetting::GetScopeUseRT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSetting", "GetScopeUseRT");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UClientGameSetting::GetReloadOpMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSetting", "GetReloadOpMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClientGameSetting* UClientGameSetting::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientGameSetting", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UClientGameSetting* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientSettingDelagate
struct UClientSettingDelagate* UClientSettingDelagate::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSettingDelagate", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientSettingDelagate* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientDisplaySetting
void UClientDisplaySetting::SetSafeZoneValue(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientDisplaySetting", "SetSafeZoneValue");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UClientDisplaySetting::SaveFlushConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientDisplaySetting", "SaveFlushConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientDisplaySetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientDisplaySetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientDisplaySetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientDisplaySetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

int32_t UClientDisplaySetting::GetSafeZoneValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientDisplaySetting", "GetSafeZoneValue");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UClientDisplaySetting::GetSafeZoneIsSet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientDisplaySetting", "GetSafeZoneIsSet");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClientDisplaySetting* UClientDisplaySetting::Get(struct UObject* GameContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientDisplaySetting", "Get");
    struct
    {
        struct UObject* GameContextObject;
        struct UClientDisplaySetting* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientBaseSetting
void UClientBaseSetting::SetScopeUseRT(uint8_t InUseRT)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSetting", "SetScopeUseRT");
    struct
    {
        uint8_t InUseRT;
    } Parms{};
    Parms.InUseRT = (uint8_t)InUseRT;
    this->ProcessEvent(Func, &Parms);
}

void UClientBaseSetting::SetOpenFlutterVal(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSetting", "SetOpenFlutterVal");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UClientBaseSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientBaseSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

void UClientBaseSetting::ResetChangeMarkItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSetting", "ResetChangeMarkItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientBaseSetting::NotifyCloseSystemSetting(struct UObject* WorldContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientBaseSetting", "NotifyCloseSystemSetting");
    struct
    {
        struct UObject* WorldContextObj;
    } Parms{};
    Parms.WorldContextObj = (struct UObject*)WorldContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UClientBaseSetting::Lua_CameraModeChangeBroadcast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSetting", "Lua_CameraModeChangeBroadcast");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UClientBaseSetting* UClientBaseSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientBaseSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientBaseSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientBaseSetting::DFHDSettingOverrideDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSetting", "DFHDSettingOverrideDefault");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientBaseSetting::ChangeMarkItem(int32_t Index, EMarkingLocationType Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSetting", "ChangeMarkItem");
    struct
    {
        int32_t Index;
        enum EMarkingLocationType Value;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Value = (enum EMarkingLocationType)Value;
    this->ProcessEvent(Func, &Parms);
}

// UClientOtherSetting
void UClientOtherSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientOtherSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientOtherSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientOtherSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

struct UClientOtherSetting* UClientOtherSetting::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientOtherSetting", "Get");
    struct
    {
        struct UClientOtherSetting* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientControlSetting
uint8_t UClientControlSetting::SetBtnRotated(struct FString BtnName, uint8_t bRotated)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientControlSetting", "SetBtnRotated");
    struct
    {
        struct FString BtnName;
        uint8_t bRotated;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BtnName = (struct FString)BtnName;
    Parms.bRotated = (uint8_t)bRotated;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientControlSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientControlSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientControlSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientControlSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UClientControlSetting::GetBtnRotated(struct FString BtnName, uint8_t& bRotated)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientControlSetting", "GetBtnRotated");
    struct
    {
        struct FString BtnName;
        uint8_t bRotated;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BtnName = (struct FString)BtnName;
    this->ProcessEvent(Func, &Parms);
    bRotated = Parms.bRotated;
    return Parms.ReturnValue;
}

struct UClientControlSetting* UClientControlSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientControlSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientControlSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientControlSetting::DFHDSettingOverrideDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientControlSetting", "DFHDSettingOverrideDefault");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UClientVehicleSetting
void UClientVehicleSetting::SetSensitivityFactor(uint8_t IsFire, EVehicleSensitivityMode VehicleSensitivityMode, uint8_t IsGyro, float SensitivityFactor, float VerticalSensitivityFactor, float HorizontalSensitivityFactor, struct TArray<float> RotationSensitivityArray_Custom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSetting", "SetSensitivityFactor");
    struct
    {
        uint8_t IsFire;
        enum EVehicleSensitivityMode VehicleSensitivityMode;
        uint8_t IsGyro;
        float SensitivityFactor;
        float VerticalSensitivityFactor;
        float HorizontalSensitivityFactor;
        struct TArray<float> RotationSensitivityArray_Custom;
    } Parms{};
    Parms.IsFire = (uint8_t)IsFire;
    Parms.VehicleSensitivityMode = (enum EVehicleSensitivityMode)VehicleSensitivityMode;
    Parms.IsGyro = (uint8_t)IsGyro;
    Parms.SensitivityFactor = (float)SensitivityFactor;
    Parms.VerticalSensitivityFactor = (float)VerticalSensitivityFactor;
    Parms.HorizontalSensitivityFactor = (float)HorizontalSensitivityFactor;
    Parms.RotationSensitivityArray_Custom = (struct TArray<float>)RotationSensitivityArray_Custom;
    this->ProcessEvent(Func, &Parms);
}

void UClientVehicleSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientVehicleSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

struct FVehicleSensitivityOuterSetting UClientVehicleSetting::GetVehicleSensitivityOuterSettingRef(uint8_t IsFire, EVehicleSensitivityMode VehicleSensitivityMode, uint8_t IsGyro)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSetting", "GetVehicleSensitivityOuterSettingRef");
    struct
    {
        uint8_t IsFire;
        enum EVehicleSensitivityMode VehicleSensitivityMode;
        uint8_t IsGyro;
        struct FVehicleSensitivityOuterSetting ReturnValue;
    } Parms{};
    Parms.IsFire = (uint8_t)IsFire;
    Parms.VehicleSensitivityMode = (enum EVehicleSensitivityMode)VehicleSensitivityMode;
    Parms.IsGyro = (uint8_t)IsGyro;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVehicleSensitivityOuterSetting UClientVehicleSetting::GetVehicleSensitivityOuterSetting(uint8_t IsFire, EVehicleSensitivityMode VehicleSensitivityMode, uint8_t IsGyro)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSetting", "GetVehicleSensitivityOuterSetting");
    struct
    {
        uint8_t IsFire;
        enum EVehicleSensitivityMode VehicleSensitivityMode;
        uint8_t IsGyro;
        struct FVehicleSensitivityOuterSetting ReturnValue;
    } Parms{};
    Parms.IsFire = (uint8_t)IsFire;
    Parms.VehicleSensitivityMode = (enum EVehicleSensitivityMode)VehicleSensitivityMode;
    Parms.IsGyro = (uint8_t)IsGyro;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientVehicleSetting::GetSensitivityFactor(uint8_t IsFire, EVehicleSensitivityMode VehicleSensitivityMode, float InZoomRate, uint8_t bGyroScope, float& SensitivityFactor, float& VerticalSensitivityFactor, float& HorizontalSensitivityFactor, float& MDVFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSetting", "GetSensitivityFactor");
    struct
    {
        uint8_t IsFire;
        enum EVehicleSensitivityMode VehicleSensitivityMode;
        float InZoomRate;
        uint8_t bGyroScope;
        float SensitivityFactor;
        float VerticalSensitivityFactor;
        float HorizontalSensitivityFactor;
        float MDVFactor;
    } Parms{};
    Parms.IsFire = (uint8_t)IsFire;
    Parms.VehicleSensitivityMode = (enum EVehicleSensitivityMode)VehicleSensitivityMode;
    Parms.InZoomRate = (float)InZoomRate;
    Parms.bGyroScope = (uint8_t)bGyroScope;
    this->ProcessEvent(Func, &Parms);
    SensitivityFactor = Parms.SensitivityFactor;
    VerticalSensitivityFactor = Parms.VerticalSensitivityFactor;
    HorizontalSensitivityFactor = Parms.HorizontalSensitivityFactor;
    MDVFactor = Parms.MDVFactor;
}

struct UClientVehicleSetting* UClientVehicleSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVehicleSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientVehicleSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientVolumeSetting
void UClientVolumeSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVolumeSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientVolumeSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVolumeSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

struct UClientVolumeSetting* UClientVolumeSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVolumeSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientVolumeSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientSensitivitySetting
void UClientSensitivitySetting::UpdateCustomSensitivityValues(int32_t LevelNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "UpdateCustomSensitivityValues");
    struct
    {
        int32_t LevelNum;
    } Parms{};
    Parms.LevelNum = (int32_t)LevelNum;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::UpdateCustomGyroSensitivityValues(int32_t LevelNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "UpdateCustomGyroSensitivityValues");
    struct
    {
        int32_t LevelNum;
    } Parms{};
    Parms.LevelNum = (int32_t)LevelNum;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::SetSensitivityFactor(uint8_t bIsFiring, uint8_t bGyroScope, float SensitivityFactor, float VerticalSensitivityFactor, float HorizontalSensitivityFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "SetSensitivityFactor");
    struct
    {
        uint8_t bIsFiring;
        uint8_t bGyroScope;
        float SensitivityFactor;
        float VerticalSensitivityFactor;
        float HorizontalSensitivityFactor;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    Parms.bGyroScope = (uint8_t)bGyroScope;
    Parms.SensitivityFactor = (float)SensitivityFactor;
    Parms.VerticalSensitivityFactor = (float)VerticalSensitivityFactor;
    Parms.HorizontalSensitivityFactor = (float)HorizontalSensitivityFactor;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::SetMDVFactor(uint8_t bIsFiring, uint8_t bGyroScope, float MDVFactor, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "SetMDVFactor");
    struct
    {
        uint8_t bIsFiring;
        uint8_t bGyroScope;
        float MDVFactor;
        int32_t Index;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    Parms.bGyroScope = (uint8_t)bGyroScope;
    Parms.MDVFactor = (float)MDVFactor;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::SetGyroSensitivityValue(uint8_t bIsFire, uint8_t bIsAim, int32_t Index, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "SetGyroSensitivityValue");
    struct
    {
        uint8_t bIsFire;
        uint8_t bIsAim;
        int32_t Index;
        float Value;
    } Parms{};
    Parms.bIsFire = (uint8_t)bIsFire;
    Parms.bIsAim = (uint8_t)bIsAim;
    Parms.Index = (int32_t)Index;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::SetCustomCurrentSensitivityArray(uint8_t bIsFiring, float NewValue, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "SetCustomCurrentSensitivityArray");
    struct
    {
        uint8_t bIsFiring;
        float NewValue;
        int32_t Index;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    Parms.NewValue = (float)NewValue;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::SetCustomCurrentDefaultSensitivity(uint8_t bIsFiring, float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "SetCustomCurrentDefaultSensitivity");
    struct
    {
        uint8_t bIsFiring;
        float NewValue;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::SetCustomCurrentDefaultAccValue(uint8_t bIsFiring, float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "SetCustomCurrentDefaultAccValue");
    struct
    {
        uint8_t bIsFiring;
        float NewValue;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySetting::GetSensitivityFactor(uint8_t bIsFiring, float InZoomRate, uint8_t bGyroScope, float& SensitivityFactor, float& VerticalSensitivityFactor, float& HorizontalSensitivityFactor, float& MDVFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "GetSensitivityFactor");
    struct
    {
        uint8_t bIsFiring;
        float InZoomRate;
        uint8_t bGyroScope;
        float SensitivityFactor;
        float VerticalSensitivityFactor;
        float HorizontalSensitivityFactor;
        float MDVFactor;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    Parms.InZoomRate = (float)InZoomRate;
    Parms.bGyroScope = (uint8_t)bGyroScope;
    this->ProcessEvent(Func, &Parms);
    SensitivityFactor = Parms.SensitivityFactor;
    VerticalSensitivityFactor = Parms.VerticalSensitivityFactor;
    HorizontalSensitivityFactor = Parms.HorizontalSensitivityFactor;
    MDVFactor = Parms.MDVFactor;
}

float UClientSensitivitySetting::GetCustomSpeedAccExtraAngle(uint8_t bIsFiring)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "GetCustomSpeedAccExtraAngle");
    struct
    {
        uint8_t bIsFiring;
        float ReturnValue;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<float> UClientSensitivitySetting::GetCurrentGyroCustomSensitivityArray(uint8_t bIsFiring)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "GetCurrentGyroCustomSensitivityArray");
    struct
    {
        uint8_t bIsFiring;
        struct TArray<float> ReturnValue;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UClientSensitivitySetting::GetCurrentGyroCustomDefaultSensitivity(uint8_t bIsFiring)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "GetCurrentGyroCustomDefaultSensitivity");
    struct
    {
        uint8_t bIsFiring;
        float ReturnValue;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<float> UClientSensitivitySetting::GetCurrentCustomSensitivityArray(uint8_t bIsFiring)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "GetCurrentCustomSensitivityArray");
    struct
    {
        uint8_t bIsFiring;
        struct TArray<float> ReturnValue;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UClientSensitivitySetting::GetCurrentCustomDefaultSensitivity(uint8_t bIsFiring)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySetting", "GetCurrentCustomDefaultSensitivity");
    struct
    {
        uint8_t bIsFiring;
        float ReturnValue;
    } Parms{};
    Parms.bIsFiring = (uint8_t)bIsFiring;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClientSensitivitySetting* UClientSensitivitySetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSensitivitySetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientSensitivitySetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientDownloadSetting
void UClientDownloadSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientDownloadSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UClientDownloadSetting* UClientDownloadSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientDownloadSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientDownloadSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientPrivacySetting
void UClientPrivacySetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientPrivacySetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UClientPrivacySetting* UClientPrivacySetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientPrivacySetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientPrivacySetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientChatSetting
void UClientChatSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientChatSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UClientChatSetting* UClientChatSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientChatSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientChatSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientComminicateSetting
void UClientComminicateSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientComminicateSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientComminicateSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientComminicateSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

struct UClientComminicateSetting* UClientComminicateSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientComminicateSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientComminicateSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientSolSetting
void UClientSolSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSolSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientSolSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSolSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

struct UClientSolSetting* UClientSolSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSolSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientSolSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// URankingListSetting
void URankingListSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RankingListSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct URankingListSetting* URankingListSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RankingListSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct URankingListSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientHeroPreferenceSetting
void UClientHeroPreferenceSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientHeroPreferenceSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientHeroPreferenceSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientHeroPreferenceSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

struct UClientHeroPreferenceSetting* UClientHeroPreferenceSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientHeroPreferenceSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientHeroPreferenceSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientCustomCrossHairSetting
void UClientCustomCrossHairSetting::SaveDataConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientCustomCrossHairSetting", "SaveDataConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientCustomCrossHairSetting::ResetToDefault(const struct TArray<struct FString>& ResetPanelList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientCustomCrossHairSetting", "ResetToDefault");
    struct
    {
        struct TArray<struct FString> ResetPanelList;
    } Parms{};
    Parms.ResetPanelList = (struct TArray<struct FString>)ResetPanelList;
    this->ProcessEvent(Func, &Parms);
}

struct UClientCustomCrossHairSetting* UClientCustomCrossHairSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientCustomCrossHairSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientCustomCrossHairSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAdvancedVideoSetting
void UAdvancedVideoSetting::SetRayTracingEnable(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdvancedVideoSetting", "SetRayTracingEnable");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UAdvancedVideoSetting::SetParamGroupQuality(struct FString GroupName, int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdvancedVideoSetting", "SetParamGroupQuality");
    struct
    {
        struct FString GroupName;
        int32_t Level;
    } Parms{};
    Parms.GroupName = (struct FString)GroupName;
    Parms.Level = (int32_t)Level;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAdvancedVideoSetting::IsRayTracingSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdvancedVideoSetting", "IsRayTracingSupported");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAdvancedVideoSetting::IsRayTracingRealEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdvancedVideoSetting", "IsRayTracingRealEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAdvancedVideoSetting::IsRayTracingEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdvancedVideoSetting", "IsRayTracingEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAdvancedVideoSetting::GetParamQualityValue(struct FName RowName, int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AdvancedVideoSetting", "GetParamQualityValue");
    struct
    {
        struct FName RowName;
        int32_t Level;
        struct FString ReturnValue;
    } Parms{};
    Parms.RowName = (struct FName)RowName;
    Parms.Level = (int32_t)Level;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAdvancedVideoSetting* UAdvancedVideoSetting::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AdvancedVideoSetting", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAdvancedVideoSetting* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientBaseSettingHD
void UClientBaseSettingHD::SettingHD(const struct TArray<struct FString>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientBaseSettingHD", "SettingHD");
    struct
    {
        struct TArray<struct FString> Args;
    } Parms{};
    Parms.Args = (struct TArray<struct FString>)Args;
    this->ProcessEvent(Func, &Parms);
}

struct UClientBaseSettingHD* UClientBaseSettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientBaseSettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientBaseSettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientSensitivitySettingHD
void UClientSensitivitySettingHD::SetZoomratedMDVByIndex(int32_t Index, float Value, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "SetZoomratedMDVByIndex");
    struct
    {
        int32_t Index;
        float Value;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Value = (float)Value;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySettingHD::SetSideAimingControlModeByInputType(ESideAimingControlMode InMode, EGPInputType InputType, uint8_t bCallUpdateCallBack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "SetSideAimingControlModeByInputType");
    struct
    {
        enum ESideAimingControlMode InMode;
        enum EGPInputType InputType;
        uint8_t bCallUpdateCallBack;
    } Parms{};
    Parms.InMode = (enum ESideAimingControlMode)InMode;
    Parms.InputType = (enum EGPInputType)InputType;
    Parms.bCallUpdateCallBack = (uint8_t)bCallUpdateCallBack;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySettingHD::SetSideAimingControlMode(ESideAimingControlMode InMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "SetSideAimingControlMode");
    struct
    {
        enum ESideAimingControlMode InMode;
    } Parms{};
    Parms.InMode = (enum ESideAimingControlMode)InMode;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySettingHD::SetCurrentInputType(EGPInputType InputType, uint8_t bCallUpdateCallBack)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "SetCurrentInputType");
    struct
    {
        enum EGPInputType InputType;
        uint8_t bCallUpdateCallBack;
    } Parms{};
    Parms.InputType = (enum EGPInputType)InputType;
    Parms.bCallUpdateCallBack = (uint8_t)bCallUpdateCallBack;
    this->ProcessEvent(Func, &Parms);
}

void UClientSensitivitySettingHD::SetADSSensitivityByIndex(int32_t Index, int32_t SubIndex, float Value, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "SetADSSensitivityByIndex");
    struct
    {
        int32_t Index;
        int32_t SubIndex;
        float Value;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.SubIndex = (int32_t)SubIndex;
    Parms.Value = (float)Value;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

float UClientSensitivitySettingHD::GetZoomratedMDVByIndex(int32_t Index, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "GetZoomratedMDVByIndex");
    struct
    {
        int32_t Index;
        uint8_t bIsGamepad;
        float ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UClientSensitivitySettingHD::GetPresetValueByType(const struct TMap<EGamepadSensitivityPresetType, float>& Map, EGamepadSensitivityPresetType Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "GetPresetValueByType");
    struct
    {
        struct TMap<EGamepadSensitivityPresetType, float> Map;
        enum EGamepadSensitivityPresetType Type;
        float ReturnValue;
    } Parms{};
    Parms.Map = (struct TMap<EGamepadSensitivityPresetType, float>)Map;
    Parms.Type = (enum EGamepadSensitivityPresetType)Type;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UClientSensitivitySettingHD::GetCustomADSSensitivityByIndex(int32_t Index, int32_t SubIndex, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "GetCustomADSSensitivityByIndex");
    struct
    {
        int32_t Index;
        int32_t SubIndex;
        uint8_t bIsGamepad;
        float ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.SubIndex = (int32_t)SubIndex;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ESideAimingControlMode UClientSensitivitySettingHD::GetCurrentSideAimingControlMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientSensitivitySettingHD", "GetCurrentSideAimingControlMode");
    struct
    {
        enum ESideAimingControlMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClientSensitivitySettingHD* UClientSensitivitySettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientSensitivitySettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientSensitivitySettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientCameraSettingHD
struct UClientCameraSettingHD* UClientCameraSettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientCameraSettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientCameraSettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientVideoSettingHD
void UClientVideoSettingHD::ToggleWindowTitleBar(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVideoSettingHD", "ToggleWindowTitleBar");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::Test()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "Test");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::SetRHIType(EDesktopRHIType Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVideoSettingHD", "SetRHIType");
    struct
    {
        enum EDesktopRHIType Value;
    } Parms{};
    Parms.Value = (enum EDesktopRHIType)Value;
    this->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::SetRefreshRate(struct FString MonitorID, int32_t InRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "SetRefreshRate");
    struct
    {
        struct FString MonitorID;
        int32_t InRate;
    } Parms{};
    Parms.MonitorID = (struct FString)MonitorID;
    Parms.InRate = (int32_t)InRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::SetMonitorResolution(struct FString MonitorID, int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "SetMonitorResolution");
    struct
    {
        struct FString MonitorID;
        int32_t Width;
        int32_t Height;
    } Parms{};
    Parms.MonitorID = (struct FString)MonitorID;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::SetGPUCrashDebuggingEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVideoSettingHD", "SetGPUCrashDebuggingEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::SetGamma(struct UObject* WorldContext, float InGamma)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "SetGamma");
    struct
    {
        struct UObject* WorldContext;
        float InGamma;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InGamma = (float)InGamma;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UClientVideoSettingHD::ParsePresetCommandLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "ParsePresetCommandLine");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UClientVideoSettingHD::IsVideoSettingClampEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "IsVideoSettingClampEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UClientVideoSettingHD::IsGPUCrashDebuggingRealEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVideoSettingHD", "IsGPUCrashDebuggingRealEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UClientVideoSettingHD::IsGPUCrashDebuggingEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVideoSettingHD", "IsGPUCrashDebuggingEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UClientVideoSettingHD::GetSupportedRefreshRateList(const struct TArray<struct FDisplayModeHD>& DisplayModes, int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetSupportedRefreshRateList");
    struct
    {
        struct TArray<struct FDisplayModeHD> DisplayModes;
        int32_t Width;
        int32_t Height;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.DisplayModes = (struct TArray<struct FDisplayModeHD>)DisplayModes;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FIntPoint> UClientVideoSettingHD::GetPureResolutionList(const struct TArray<struct FDisplayModeHD>& DisplayModes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetPureResolutionList");
    struct
    {
        struct TArray<struct FDisplayModeHD> DisplayModes;
        struct TArray<struct FIntPoint> ReturnValue;
    } Parms{};
    Parms.DisplayModes = (struct TArray<struct FDisplayModeHD>)DisplayModes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMonitorInfoHD> UClientVideoSettingHD::GetMonitorInfos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetMonitorInfos");
    struct
    {
        struct TArray<struct FMonitorInfoHD> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UClientVideoSettingHD::GetMonitorInfoByID(struct FString MonitorID, struct FMonitorInfoHD& OutInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetMonitorInfoByID");
    struct
    {
        struct FString MonitorID;
        struct FMonitorInfoHD OutInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MonitorID = (struct FString)MonitorID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutInfo = Parms.OutInfo;
    return Parms.ReturnValue;
}

float UClientVideoSettingHD::GetMinVRamForCurrentResolution(const struct FIntPoint& CurrentRes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVideoSettingHD", "GetMinVRamForCurrentResolution");
    struct
    {
        struct FIntPoint CurrentRes;
        float ReturnValue;
    } Parms{};
    Parms.CurrentRes = (struct FIntPoint)CurrentRes;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FDisplayModeHD> UClientVideoSettingHD::GetDisplayModes(int32_t AdapterID, struct FString MonitorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetDisplayModes");
    struct
    {
        int32_t AdapterID;
        struct FString MonitorID;
        struct TArray<struct FDisplayModeHD> ReturnValue;
    } Parms{};
    Parms.AdapterID = (int32_t)AdapterID;
    Parms.MonitorID = (struct FString)MonitorID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDesktopRHIType UClientVideoSettingHD::GetCurrentRHIType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVideoSettingHD", "GetCurrentRHIType");
    struct
    {
        enum EDesktopRHIType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMonitorInfoHD UClientVideoSettingHD::GetCurrentMonitorInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetCurrentMonitorInfo");
    struct
    {
        struct FMonitorInfoHD ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UClientVideoSettingHD::GetCurrentAdapter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetCurrentAdapter");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FIntPoint UClientVideoSettingHD::GetAutoResolution(int32_t AdapterID, struct FString MonitorID, int32_t WindowMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetAutoResolution");
    struct
    {
        int32_t AdapterID;
        struct FString MonitorID;
        int32_t WindowMode;
        struct FIntPoint ReturnValue;
    } Parms{};
    Parms.AdapterID = (int32_t)AdapterID;
    Parms.MonitorID = (struct FString)MonitorID;
    Parms.WindowMode = (int32_t)WindowMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UClientVideoSettingHD::GetApmGlobalQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVideoSettingHD", "GetApmGlobalQuality");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FAdapterInfoHD> UClientVideoSettingHD::GetAdapterInfos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GetAdapterInfos");
    struct
    {
        struct TArray<struct FAdapterInfoHD> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClientVideoSettingHD* UClientVideoSettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientVideoSettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientVideoSettingHD::GCAfterSeveralFrames(struct UObject* WorldContext, int32_t InFrames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "GCAfterSeveralFrames");
    struct
    {
        struct UObject* WorldContext;
        int32_t InFrames;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InFrames = (int32_t)InFrames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::FetchDisplayModes(int32_t ChosenAdapter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "FetchDisplayModes");
    struct
    {
        int32_t ChosenAdapter;
    } Parms{};
    Parms.ChosenAdapter = (int32_t)ChosenAdapter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::ClearCachedDisplayModes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "ClearCachedDisplayModes");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UClientVideoSettingHD::ChangeMonitorByID(struct FString MonitorID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVideoSettingHD", "ChangeMonitorByID");
    struct
    {
        struct FString MonitorID;
    } Parms{};
    Parms.MonitorID = (struct FString)MonitorID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UClientVehicleSettingHD
void UClientVehicleSettingHD::SetZoomratedMDVByIndex(EMouseSensitivityMode MouseInputType, int32_t Index, float Value, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSettingHD", "SetZoomratedMDVByIndex");
    struct
    {
        enum EMouseSensitivityMode MouseInputType;
        int32_t Index;
        float Value;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.MouseInputType = (enum EMouseSensitivityMode)MouseInputType;
    Parms.Index = (int32_t)Index;
    Parms.Value = (float)Value;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

void UClientVehicleSettingHD::SetADSSensitivityByIndex(EMouseSensitivityMode MouseInputType, int32_t Index, int32_t SubIndex, float Value, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSettingHD", "SetADSSensitivityByIndex");
    struct
    {
        enum EMouseSensitivityMode MouseInputType;
        int32_t Index;
        int32_t SubIndex;
        float Value;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.MouseInputType = (enum EMouseSensitivityMode)MouseInputType;
    Parms.Index = (int32_t)Index;
    Parms.SubIndex = (int32_t)SubIndex;
    Parms.Value = (float)Value;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

float UClientVehicleSettingHD::GetZoomratedMDVByIndex(EMouseSensitivityMode MouseInputType, int32_t Index, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSettingHD", "GetZoomratedMDVByIndex");
    struct
    {
        enum EMouseSensitivityMode MouseInputType;
        int32_t Index;
        uint8_t bIsGamepad;
        float ReturnValue;
    } Parms{};
    Parms.MouseInputType = (enum EMouseSensitivityMode)MouseInputType;
    Parms.Index = (int32_t)Index;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UClientVehicleSettingHD::GetCustomADSSensitivityByIndex(EMouseSensitivityMode MouseInputType, int32_t Index, int32_t SubIndex, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSettingHD", "GetCustomADSSensitivityByIndex");
    struct
    {
        enum EMouseSensitivityMode MouseInputType;
        int32_t Index;
        int32_t SubIndex;
        uint8_t bIsGamepad;
        float ReturnValue;
    } Parms{};
    Parms.MouseInputType = (enum EMouseSensitivityMode)MouseInputType;
    Parms.Index = (int32_t)Index;
    Parms.SubIndex = (int32_t)SubIndex;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClientVehicleSettingHD* UClientVehicleSettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientVehicleSettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientVehicleSettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientVehicleSettingHD::ClearZoomratedMDV(EMouseSensitivityMode MouseInputType, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSettingHD", "ClearZoomratedMDV");
    struct
    {
        enum EMouseSensitivityMode MouseInputType;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.MouseInputType = (enum EMouseSensitivityMode)MouseInputType;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

void UClientVehicleSettingHD::ClearZoomDataHD(EMouseSensitivityMode MouseInputType, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSettingHD", "ClearZoomDataHD");
    struct
    {
        enum EMouseSensitivityMode MouseInputType;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.MouseInputType = (enum EMouseSensitivityMode)MouseInputType;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

void UClientVehicleSettingHD::AddZoomratedMDV(EMouseSensitivityMode MouseInputType, const struct FZoomratedDataHD& ZoomDataHD, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSettingHD", "AddZoomratedMDV");
    struct
    {
        enum EMouseSensitivityMode MouseInputType;
        struct FZoomratedDataHD ZoomDataHD;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.MouseInputType = (enum EMouseSensitivityMode)MouseInputType;
    Parms.ZoomDataHD = (struct FZoomratedDataHD)ZoomDataHD;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

void UClientVehicleSettingHD::AddZoomDataHD(EMouseSensitivityMode MouseInputType, const struct FWeaponZoomDataHD& ZoomDataHD, uint8_t bIsGamepad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientVehicleSettingHD", "AddZoomDataHD");
    struct
    {
        enum EMouseSensitivityMode MouseInputType;
        struct FWeaponZoomDataHD ZoomDataHD;
        uint8_t bIsGamepad;
    } Parms{};
    Parms.MouseInputType = (enum EMouseSensitivityMode)MouseInputType;
    Parms.ZoomDataHD = (struct FWeaponZoomDataHD)ZoomDataHD;
    Parms.bIsGamepad = (uint8_t)bIsGamepad;
    this->ProcessEvent(Func, &Parms);
}

// UClientGameSettingHD
void UClientGameSettingHD::ResetChangeMarkItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSettingHD", "ResetChangeMarkItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientGameSettingHD::NotifyCloseSystemSetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSettingHD", "NotifyCloseSystemSetting");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientGameSettingHD::NotifyChangeReloadOption()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSettingHD", "NotifyChangeReloadOption");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UClientGameSettingHD::NotifyChangeMixLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSettingHD", "NotifyChangeMixLoading");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UClientGameSettingHD* UClientGameSettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientGameSettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientGameSettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UClientGameSettingHD::ChangeMarkItem(int32_t Index, EMarkingLocationType Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ClientGameSettingHD", "ChangeMarkItem");
    struct
    {
        int32_t Index;
        enum EMarkingLocationType Value;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Value = (enum EMarkingLocationType)Value;
    this->ProcessEvent(Func, &Parms);
}

// UClientDisplaySettingHD
struct UClientDisplaySettingHD* UClientDisplaySettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientDisplaySettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientDisplaySettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientAudioSettingHD
struct UClientAudioSettingHD* UClientAudioSettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientAudioSettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientAudioSettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientPrivacySettingHD
struct UClientPrivacySettingHD* UClientPrivacySettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientPrivacySettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientPrivacySettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientHeroPreferenceSettingHD
struct UClientHeroPreferenceSettingHD* UClientHeroPreferenceSettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientHeroPreferenceSettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientHeroPreferenceSettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UClientCustomCrossHairSettingHD
struct UClientCustomCrossHairSettingHD* UClientCustomCrossHairSettingHD::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ClientCustomCrossHairSettingHD", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UClientCustomCrossHairSettingHD* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPCachePool
void UGPCachePool::RemoveWaitingDestroyObject(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCachePool", "RemoveWaitingDestroyObject");
    struct
    {
        struct UObject* obj;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    this->ProcessEvent(Func, &Parms);
}

void UGPCachePool::AddWaitingDestroyObject(struct UObject* obj, float WaitForDestroyTime, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPCachePool", "AddWaitingDestroyObject");
    struct
    {
        struct UObject* obj;
        float WaitForDestroyTime;
        int32_t Priority;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    Parms.WaitForDestroyTime = (float)WaitForDestroyTime;
    Parms.Priority = (int32_t)Priority;
    this->ProcessEvent(Func, &Parms);
}

// UGPCatenaryUtil
struct TArray<struct FVector> UGPCatenaryUtil::CreateCatenaryPoints(struct FVector Point1, struct FVector Point2, float Length, struct FVector Up, int32_t NumPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPCatenaryUtil", "CreateCatenaryPoints");
    struct
    {
        struct FVector Point1;
        struct FVector Point2;
        float Length;
        struct FVector Up;
        int32_t NumPoints;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.Point1 = (struct FVector)Point1;
    Parms.Point2 = (struct FVector)Point2;
    Parms.Length = (float)Length;
    Parms.Up = (struct FVector)Up;
    Parms.NumPoints = (int32_t)NumPoints;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AGPEffectTriggerBase
void AGPEffectTriggerBase::CallBPFunction(int32_t Code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPEffectTriggerBase", "CallBPFunction");
    struct
    {
        int32_t Code;
    } Parms{};
    Parms.Code = (int32_t)Code;
    this->ProcessEvent(Func, &Parms);
}

// UGPGlobalUtil
uint8_t UGPGlobalUtil::IsTSRSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "IsTSRSupported");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGlobalUtil::IsStandalone(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "IsStandalone");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGlobalUtil::IsServer(struct UObject* WorldContextObject, uint8_t bIncludeStandalone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "IsServer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t bIncludeStandalone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bIncludeStandalone = (uint8_t)bIncludeStandalone;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGlobalUtil::IsEditor(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "IsEditor");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGlobalUtil::IsClient(struct UObject* WorldContextObject, uint8_t bIncludeStandalone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "IsClient");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t bIncludeStandalone;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bIncludeStandalone = (uint8_t)bIncludeStandalone;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGlobalUtil::HasLocalPlayer(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "HasLocalPlayer");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPGlobalUtil::GetPlayerCharactersByClass(struct UObject* WorldContextObject, struct TArray<struct ACHARACTER*>& OutCharacters, struct ACHARACTER* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetPlayerCharactersByClass");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct ACHARACTER*> OutCharacters;
        struct ACHARACTER* Class;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Class = (struct ACHARACTER*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCharacters = Parms.OutCharacters;
    return Parms.ReturnValue;
}

int32_t UGPGlobalUtil::GetPlayerCharacters(struct UObject* WorldContextObject, struct TArray<struct ACHARACTER*>& OutCharacters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetPlayerCharacters");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct ACHARACTER*> OutCharacters;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCharacters = Parms.OutCharacters;
    return Parms.ReturnValue;
}

struct APlayerController* UGPGlobalUtil::GetLocalPlayerController(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetLocalPlayerController");
    struct
    {
        struct UObject* WorldContextObject;
        struct APlayerController* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPGlobalUtil::GetLocalHostAddr(uint8_t& bCanBindAll)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetLocalHostAddr");
    struct
    {
        uint8_t bCanBindAll;
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bCanBindAll = Parms.bCanBindAll;
    return Parms.ReturnValue;
}

uint8_t UGPGlobalUtil::GetIsHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetIsHD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPGlobalUtil::GetIsConsole()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetIsConsole");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGPGlobalUtil::GetHostName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetHostName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBox UGPGlobalUtil::GetActorLocalBounds(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetActorLocalBounds");
    struct
    {
        struct AActor* Actor;
        struct FBox ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPGlobalUtil::GetActorBoundsWithoutRotation(struct AActor* Actor, struct FVector& OutCenter, struct FVector& OutExtents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "GetActorBoundsWithoutRotation");
    struct
    {
        struct AActor* Actor;
        struct FVector OutCenter;
        struct FVector OutExtents;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCenter = Parms.OutCenter;
    OutExtents = Parms.OutExtents;
}

struct AActor* UGPGlobalUtil::FindFirstActor(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalUtil", "FindFirstActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FName Tag;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.Tag = (struct FName)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPWidgetUtil
void UGPWidgetUtil::TransformFromWorldToScreenMarker(EMarkerEdgeType MarkerEdgeType, struct FVector2D CustomMarkerCircleScale, EMarkerEdgeTrackType MarkerEdgeTrackType, struct FMatrix ViewProjectMatrix, struct FVector CameraDir, struct FVector CameraLoc, struct FVector2D ViewPortSize, float ViewportScale, struct FVector MarkerWorldLoc, struct FVector2D MarkerAnchor2CenterOffset, struct FVector2D& MarkerScreenPos, uint8_t& bOnCameraBack, uint8_t& bTrackOnEdge, struct FVector2D& OutEdgeDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWidgetUtil", "TransformFromWorldToScreenMarker");
    struct
    {
        enum EMarkerEdgeType MarkerEdgeType;
        struct FVector2D CustomMarkerCircleScale;
        enum EMarkerEdgeTrackType MarkerEdgeTrackType;
        struct FMatrix ViewProjectMatrix;
        struct FVector CameraDir;
        struct FVector CameraLoc;
        struct FVector2D ViewPortSize;
        float ViewportScale;
        struct FVector MarkerWorldLoc;
        struct FVector2D MarkerAnchor2CenterOffset;
        struct FVector2D MarkerScreenPos;
        uint8_t bOnCameraBack;
        uint8_t bTrackOnEdge;
        struct FVector2D OutEdgeDir;
    } Parms{};
    Parms.MarkerEdgeType = (enum EMarkerEdgeType)MarkerEdgeType;
    Parms.CustomMarkerCircleScale = (struct FVector2D)CustomMarkerCircleScale;
    Parms.MarkerEdgeTrackType = (enum EMarkerEdgeTrackType)MarkerEdgeTrackType;
    Parms.ViewProjectMatrix = (struct FMatrix)ViewProjectMatrix;
    Parms.CameraDir = (struct FVector)CameraDir;
    Parms.CameraLoc = (struct FVector)CameraLoc;
    Parms.ViewPortSize = (struct FVector2D)ViewPortSize;
    Parms.ViewportScale = (float)ViewportScale;
    Parms.MarkerWorldLoc = (struct FVector)MarkerWorldLoc;
    Parms.MarkerAnchor2CenterOffset = (struct FVector2D)MarkerAnchor2CenterOffset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    MarkerScreenPos = Parms.MarkerScreenPos;
    bOnCameraBack = Parms.bOnCameraBack;
    bTrackOnEdge = Parms.bTrackOnEdge;
    OutEdgeDir = Parms.OutEdgeDir;
}

float UGPWidgetUtil::GetNumberIncreaseByTime(ENumberIncreaseType IncreaseType, float FinalNumber, float TimePerc, float Param1, struct UCurveFloat* Curve)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWidgetUtil", "GetNumberIncreaseByTime");
    struct
    {
        enum ENumberIncreaseType IncreaseType;
        float FinalNumber;
        float TimePerc;
        float Param1;
        struct UCurveFloat* Curve;
        float ReturnValue;
    } Parms{};
    Parms.IncreaseType = (enum ENumberIncreaseType)IncreaseType;
    Parms.FinalNumber = (float)FinalNumber;
    Parms.TimePerc = (float)TimePerc;
    Parms.Param1 = (float)Param1;
    Parms.Curve = (struct UCurveFloat*)Curve;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPWidgetUtil::GetIntersecPointOfVectorAndStandEllipse(struct FVector2D Vector, struct FVector2D VectorStartToEllipseCenter, struct FVector2D EllipseSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWidgetUtil", "GetIntersecPointOfVectorAndStandEllipse");
    struct
    {
        struct FVector2D Vector;
        struct FVector2D VectorStartToEllipseCenter;
        struct FVector2D EllipseSize;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Vector = (struct FVector2D)Vector;
    Parms.VectorStartToEllipseCenter = (struct FVector2D)VectorStartToEllipseCenter;
    Parms.EllipseSize = (struct FVector2D)EllipseSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UGPWidgetUtil::GetIntersecPointOfVectorAndRectangle(struct FVector2D Vec, struct FVector2D RectangleSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWidgetUtil", "GetIntersecPointOfVectorAndRectangle");
    struct
    {
        struct FVector2D Vec;
        struct FVector2D RectangleSize;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.Vec = (struct FVector2D)Vec;
    Parms.RectangleSize = (struct FVector2D)RectangleSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPWidgetUtil::DrawOval(struct FPaintContext& Context, const struct FVector2D& Base, const struct FVector2D& Rotate, float LongRadius, float ShortRadius, const struct FLinearColor& Color, int32_t NumSides, uint8_t bAntiAlias, float Thickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWidgetUtil", "DrawOval");
    struct
    {
        struct FPaintContext Context;
        struct FVector2D Base;
        struct FVector2D Rotate;
        float LongRadius;
        float ShortRadius;
        struct FLinearColor Color;
        int32_t NumSides;
        uint8_t bAntiAlias;
        float Thickness;
    } Parms{};
    Parms.Base = (struct FVector2D)Base;
    Parms.Rotate = (struct FVector2D)Rotate;
    Parms.LongRadius = (float)LongRadius;
    Parms.ShortRadius = (float)ShortRadius;
    Parms.Color = (struct FLinearColor)Color;
    Parms.NumSides = (int32_t)NumSides;
    Parms.bAntiAlias = (uint8_t)bAntiAlias;
    Parms.Thickness = (float)Thickness;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UGPWidgetUtil::DrawCircle(struct FPaintContext& Context, const struct FVector2D& Base, const struct FVector2D& Rotate, const struct FLinearColor& Color, float radius, int32_t NumSides, uint8_t bAntiAlias, float Thickness)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPWidgetUtil", "DrawCircle");
    struct
    {
        struct FPaintContext Context;
        struct FVector2D Base;
        struct FVector2D Rotate;
        struct FLinearColor Color;
        float radius;
        int32_t NumSides;
        uint8_t bAntiAlias;
        float Thickness;
    } Parms{};
    Parms.Base = (struct FVector2D)Base;
    Parms.Rotate = (struct FVector2D)Rotate;
    Parms.Color = (struct FLinearColor)Color;
    Parms.radius = (float)radius;
    Parms.NumSides = (int32_t)NumSides;
    Parms.bAntiAlias = (uint8_t)bAntiAlias;
    Parms.Thickness = (float)Thickness;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

// UGPGlobalConfig
void UGPGlobalConfig::SetDebugDrawEnabled(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalConfig", "SetDebugDrawEnabled");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGPGlobalConfig::IsDebugDrawEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPGlobalConfig", "IsDebugDrawEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPLevelEnvEvents
void UGPLevelEnvEvents::FireEnvEvent(struct UObject* EventSourceObject, struct FName EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPLevelEnvEvents", "FireEnvEvent");
    struct
    {
        struct UObject* EventSourceObject;
        struct FName EventName;
    } Parms{};
    Parms.EventSourceObject = (struct UObject*)EventSourceObject;
    Parms.EventName = (struct FName)EventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UGPPlayerInfoUtils
struct FString UGPPlayerInfoUtils::ToString(const struct FGPPlayerBasicInfo& InInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPlayerInfoUtils", "ToString");
    struct
    {
        struct FGPPlayerBasicInfo InInfo;
        struct FString ReturnValue;
    } Parms{};
    Parms.InInfo = (struct FGPPlayerBasicInfo)InInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPPlayerInfoUtils::FromString(struct FString InStr, struct FGPPlayerBasicInfo& OutInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPPlayerInfoUtils", "FromString");
    struct
    {
        struct FString InStr;
        struct FGPPlayerBasicInfo OutInfo;
    } Parms{};
    Parms.InStr = (struct FString)InStr;
    this->ProcessEvent(Func, &Parms);
    OutInfo = Parms.OutInfo;
}

struct FString UGPPlayerInfoUtils::EncodePlayerBasicInfoList(const struct TArray<struct FGPPlayerBasicInfo>& List)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPlayerInfoUtils", "EncodePlayerBasicInfoList");
    struct
    {
        struct TArray<struct FGPPlayerBasicInfo> List;
        struct FString ReturnValue;
    } Parms{};
    Parms.List = (struct TArray<struct FGPPlayerBasicInfo>)List;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPPlayerInfoUtils::DecodePlayerBasicInfoList(struct FString Infos, struct TArray<struct FGPPlayerBasicInfo>& OutList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPPlayerInfoUtils", "DecodePlayerBasicInfoList");
    struct
    {
        struct FString Infos;
        struct TArray<struct FGPPlayerBasicInfo> OutList;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Infos = (struct FString)Infos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutList = Parms.OutList;
    return Parms.ReturnValue;
}

// AGPShowActorTags
uint8_t AGPShowActorTags::ShowTagsInEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPShowActorTags", "ShowTagsInEditor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AGPShowActorTags::ShouldTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPShowActorTags", "ShouldTick");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AGPShowActorTags::GetEditorCameraLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPShowActorTags", "GetEditorCameraLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AGPSpawnerBase
void AGPSpawnerBase::SpawnActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSpawnerBase", "SpawnActors");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AGPSpawnerBase::IsAllSpawnEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSpawnerBase", "IsAllSpawnEnd");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AGPSpawnerBase::GetSpawnedActorByTag(struct FName ActorTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSpawnerBase", "GetSpawnedActorByTag");
    struct
    {
        struct FName ActorTag;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.ActorTag = (struct FName)ActorTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AGPSpawnerBase::GetDefaultSpawnedActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSpawnerBase", "GetDefaultSpawnedActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPSplineUtil
void UGPSplineUtil::SnapToGround(struct USplineComponent* SplineComp, uint8_t bInAlign)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSplineUtil", "SnapToGround");
    struct
    {
        struct USplineComponent* SplineComp;
        uint8_t bInAlign;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.bInAlign = (uint8_t)bInAlign;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPSplineUtil::SnapToFixedAngleXY(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSplineUtil", "SnapToFixedAngleXY");
    struct
    {
        struct USplineComponent* SplineComp;
        struct TArray<float> AllowedAngles;
        uint8_t bSnapToGround;
        struct TArray<struct FVector> ResultPoints;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.AllowedAngles = (struct TArray<float>)AllowedAngles;
    Parms.bSnapToGround = (uint8_t)bSnapToGround;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ResultPoints = Parms.ResultPoints;
}

void UGPSplineUtil::SnapToFixedAngle(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPSplineUtil", "SnapToFixedAngle");
    struct
    {
        struct USplineComponent* SplineComp;
        struct TArray<float> AllowedAngles;
        uint8_t bSnapToGround;
        struct TArray<struct FVector> ResultPoints;
    } Parms{};
    Parms.SplineComp = (struct USplineComponent*)SplineComp;
    Parms.AllowedAngles = (struct TArray<float>)AllowedAngles;
    Parms.bSnapToGround = (uint8_t)bSnapToGround;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ResultPoints = Parms.ResultPoints;
}

// UItemIDUtil
uint64_t UItemIDUtil::ToUint64(struct FItemID ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "ToUint64");
    struct
    {
        struct FItemID ItemID;
        uint64_t ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UItemIDUtil::ToInt64(struct FItemID ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "ToInt64");
    struct
    {
        struct FItemID ItemID;
        int64_t ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UItemIDUtil::ToFName(struct FItemID ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "ToFName");
    struct
    {
        struct FItemID ItemID;
        struct FName ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemIDUtil::IsZero(struct FItemID ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "IsZero");
    struct
    {
        struct FItemID ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemIDUtil::IsPistolWeapon(EWeaponItemType WeaponItemType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "IsPistolWeapon");
    struct
    {
        enum EWeaponItemType WeaponItemType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemType = (enum EWeaponItemType)WeaponItemType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemIDUtil::IsMysticalWeaponSkin(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "IsMysticalWeaponSkin");
    struct
    {
        uint64_t ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemIDUtil::IsMeleeWeapon(EWeaponItemType WeaponItemType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "IsMeleeWeapon");
    struct
    {
        enum EWeaponItemType WeaponItemType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemType = (enum EWeaponItemType)WeaponItemType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemIDUtil::IsMandelBrick(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "IsMandelBrick");
    struct
    {
        uint64_t ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemIDUtil::IsMainWeapon(EWeaponItemType WeaponItemType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "IsMainWeapon");
    struct
    {
        enum EWeaponItemType WeaponItemType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemType = (enum EWeaponItemType)WeaponItemType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemIDUtil::IsEqual(struct FItemID Left, struct FItemID Right)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "IsEqual");
    struct
    {
        struct FItemID Left;
        struct FItemID Right;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Left = (struct FItemID)Left;
    Parms.Right = (struct FItemID)Right;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UItemIDUtil::Int64ToFName(int64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "Int64ToFName");
    struct
    {
        int64_t ItemID;
        struct FName ReturnValue;
    } Parms{};
    Parms.ItemID = (int64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FItemID UItemIDUtil::GetZero()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "GetZero");
    struct
    {
        struct FItemID ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UItemIDUtil::GetUnSearchedID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "GetUnSearchedID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UItemIDUtil::GetSubType(struct FItemID ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "GetSubType");
    struct
    {
        struct FItemID ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EItemMainType UItemIDUtil::GetMainType(struct FItemID ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ItemIDUtil", "GetMainType");
    struct
    {
        struct FItemID ItemID;
        enum EItemMainType ReturnValue;
    } Parms{};
    Parms.ItemID = (struct FItemID)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IItemInterface
struct FSoftObjectPath IItemInterface::GetItemMesh3PPath(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ItemInterface", "GetItemMesh3PPath");
    struct
    {
        uint64_t ItemID;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath IItemInterface::GetItemMesh1PPath(uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ItemInterface", "GetItemMesh1PPath");
    struct
    {
        uint64_t ItemID;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFReplayBase
uint8_t UDFReplayBase::PlayReplayWithOption(struct TArray<struct FString> Options, float StartTimeInSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFReplayBase", "PlayReplayWithOption");
    struct
    {
        struct TArray<struct FString> Options;
        float StartTimeInSeconds;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Options = (struct TArray<struct FString>)Options;
    Parms.StartTimeInSeconds = (float)StartTimeInSeconds;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFReplayBase::PlayReplay(float StartTimeInSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFReplayBase", "PlayReplay");
    struct
    {
        float StartTimeInSeconds;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StartTimeInSeconds = (float)StartTimeInSeconds;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
