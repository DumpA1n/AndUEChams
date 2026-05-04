#include "DFMGamepadInput.hpp"
#include "GPGameFlow.hpp"
#include "GPGameInput.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPWeaponDefineForPlugin.hpp"
#include "HudFramework.hpp"
#include "InputCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMAdaptiveTriggerManager::* ----
void UDFMAdaptiveTriggerManager::SetDebugEnabled(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "SetDebugEnabled");
    struct
    {
        uint8_t Value;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAdaptiveTriggerManager::OnNotifyActiveWeaponChanged(struct AWeaponBase* PreWeapon, struct AWeaponBase* NewWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "OnNotifyActiveWeaponChanged");
    struct
    {
        struct AWeaponBase* PreWeapon;
        struct AWeaponBase* NewWeapon;
    } Parms{};
    Parms.PreWeapon = (struct AWeaponBase*)PreWeapon;
    Parms.NewWeapon = (struct AWeaponBase*)NewWeapon;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMAdaptiveTriggerManager::IsDebugEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "IsDebugEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAdaptiveTriggerManager::IsAdaptiveTriggerDeviceConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "IsAdaptiveTriggerDeviceConnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAdaptiveTriggerManager::HandleInputModeChanged(EGPInputModeType OldType, EGPInputModeType NewType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "HandleInputModeChanged");
    struct
    {
        enum EGPInputModeType OldType;
        enum EGPInputModeType NewType;
    } Parms{};
    Parms.OldType = (enum EGPInputModeType)OldType;
    Parms.NewType = (enum EGPInputModeType)NewType;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMAdaptiveTriggerManager* UDFMAdaptiveTriggerManager::Get(struct UObject* InGameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAdaptiveTriggerManager", "Get");
    struct
    {
        struct UObject* InGameInstanceContext;
        struct UDFMAdaptiveTriggerManager* ReturnValue;
    } Parms{};
    Parms.InGameInstanceContext = (struct UObject*)InGameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAdaptiveTriggerManager::Debug_SetMultiPositionVibrationValue(int32_t Index, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_SetMultiPositionVibrationValue");
    struct
    {
        int32_t Index;
        uint8_t Value;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAdaptiveTriggerManager::Debug_SetMultiPositionFeedbackValue(int32_t Index, uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_SetMultiPositionFeedbackValue");
    struct
    {
        int32_t Index;
        uint8_t Value;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Value = (uint8_t)Value;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMAdaptiveTriggerManager::Debug_SaveToWeaponAdaptiveTriggerConfig(uint64_t WeaponID, EGPWeaponFiringMode FireMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_SaveToWeaponAdaptiveTriggerConfig");
    struct
    {
        uint64_t WeaponID;
        enum EGPWeaponFiringMode FireMode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponID = (uint64_t)WeaponID;
    Parms.FireMode = (enum EGPWeaponFiringMode)FireMode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAdaptiveTriggerManager::Debug_SaveToAdaptiveTriggerConfig(EWeaponItemType WeaponType, EGPWeaponFiringMode FireMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_SaveToAdaptiveTriggerConfig");
    struct
    {
        enum EWeaponItemType WeaponType;
        enum EGPWeaponFiringMode FireMode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponType = (enum EWeaponItemType)WeaponType;
    Parms.FireMode = (enum EGPWeaponFiringMode)FireMode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAdaptiveTriggerManager::Debug_RefreshAdaptiveTriggerEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_RefreshAdaptiveTriggerEffect");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAdaptiveTriggerManager::Debug_LoadCurrentWeaponEffectToDebugEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_LoadCurrentWeaponEffectToDebugEffect");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FWeaponAdaptiveTriggerDetailInfo UDFMAdaptiveTriggerManager::Debug_GetWeaponDetailInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_GetWeaponDetailInfo");
    struct
    {
        struct FWeaponAdaptiveTriggerDetailInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EInputDeviceTriggerMask UDFMAdaptiveTriggerManager::Debug_GetCurrentFireKeyCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_GetCurrentFireKeyCache");
    struct
    {
        enum EInputDeviceTriggerMask ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAdaptiveTriggerManager::Debug_ClearWeaponStateHistory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_ClearWeaponStateHistory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAdaptiveTriggerManager::Debug_ClearWeaponEventHistory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAdaptiveTriggerManager", "Debug_ClearWeaponEventHistory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMGameplayInputManager::* ----
void UDFMGameplayInputManager::UpdateSOLOpenBagAutoMoveForward(uint8_t bGoingToOpenBag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "UpdateSOLOpenBagAutoMoveForward");
    struct
    {
        uint8_t bGoingToOpenBag;
    } Parms{};
    Parms.bGoingToOpenBag = (uint8_t)bGoingToOpenBag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::SetInputPreset(EDFMInputSceneType IMCId, EDFMGamepadPresetType PresetType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "SetInputPreset");
    struct
    {
        enum EDFMInputSceneType IMCId;
        enum EDFMGamepadPresetType PresetType;
    } Parms{};
    Parms.IMCId = (enum EDFMInputSceneType)IMCId;
    Parms.PresetType = (enum EDFMGamepadPresetType)PresetType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::SetGamepadReloadInteractMode(const EGamepadReloadInteractMode& Mode, uint8_t ChangeWithoutNotify)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "SetGamepadReloadInteractMode");
    struct
    {
        enum EGamepadReloadInteractMode Mode;
        uint8_t ChangeWithoutNotify;
    } Parms{};
    Parms.Mode = (enum EGamepadReloadInteractMode)Mode;
    Parms.ChangeWithoutNotify = (uint8_t)ChangeWithoutNotify;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::SetEnableForKeyRebindings(EDFMInputSceneType SceneType, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "SetEnableForKeyRebindings");
    struct
    {
        enum EDFMInputSceneType SceneType;
        uint8_t bEnable;
    } Parms{};
    Parms.SceneType = (enum EDFMInputSceneType)SceneType;
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::SetEnableForAllKeyRebindings(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "SetEnableForAllKeyRebindings");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::ResetKeyRebindingsByType(struct TArray<int32_t> InKeyFunctionTypes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "ResetKeyRebindingsByType");
    struct
    {
        struct TArray<int32_t> InKeyFunctionTypes;
    } Parms{};
    Parms.InKeyFunctionTypes = (struct TArray<int32_t>)InKeyFunctionTypes;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::ReapplyKeyRebindings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "ReapplyKeyRebindings");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnWeaponZoomStateChange(uint8_t bZoom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnWeaponZoomStateChange");
    struct
    {
        uint8_t bZoom;
    } Parms{};
    Parms.bZoom = (uint8_t)bZoom;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnSetGamePadTriggerSuperSprintType(int32_t InTriggerSuperSprintType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnSetGamePadTriggerSuperSprintType");
    struct
    {
        int32_t InTriggerSuperSprintType;
    } Parms{};
    Parms.InTriggerSuperSprintType = (int32_t)InTriggerSuperSprintType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnSetGamePadSlideDiveTriggerType(int32_t InSlideAndProneTriggerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnSetGamePadSlideDiveTriggerType");
    struct
    {
        int32_t InSlideAndProneTriggerType;
    } Parms{};
    Parms.InSlideAndProneTriggerType = (int32_t)InSlideAndProneTriggerType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnSetGamePadSideAimingControlMode(int32_t InSideAimingControlMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnSetGamePadSideAimingControlMode");
    struct
    {
        int32_t InSideAimingControlMode;
    } Parms{};
    Parms.InSideAimingControlMode = (int32_t)InSideAimingControlMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnSetGamePadKeyActionLogicByName(struct FName InSettingKeyName, int32_t InSettingValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnSetGamePadKeyActionLogicByName");
    struct
    {
        struct FName InSettingKeyName;
        int32_t InSettingValue;
    } Parms{};
    Parms.InSettingKeyName = (struct FName)InSettingKeyName;
    Parms.InSettingValue = (int32_t)InSettingValue;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnSetGamePadAutoSprintType(EAutoSprintSettingType InAutoSprintSettingType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnSetGamePadAutoSprintType");
    struct
    {
        enum EAutoSprintSettingType InAutoSprintSettingType;
    } Parms{};
    Parms.InAutoSprintSettingType = (enum EAutoSprintSettingType)InAutoSprintSettingType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnSafeHouseInteractTipsShow(uint8_t bIsShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnSafeHouseInteractTipsShow");
    struct
    {
        uint8_t bIsShow;
    } Parms{};
    Parms.bIsShow = (uint8_t)bIsShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnSafeHouseInteractSecondaryTipsShow(uint8_t bIsShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnSafeHouseInteractSecondaryTipsShow");
    struct
    {
        uint8_t bIsShow;
    } Parms{};
    Parms.bIsShow = (uint8_t)bIsShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnInputTypeChanged(EGPInputType InputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnInputTypeChanged");
    struct
    {
        enum EGPInputType InputType;
    } Parms{};
    Parms.InputType = (enum EGPInputType)InputType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnInputModeChanged(EGPInputModeType OldType, EGPInputModeType NewType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnInputModeChanged");
    struct
    {
        enum EGPInputModeType OldType;
        enum EGPInputModeType NewType;
    } Parms{};
    Parms.OldType = (enum EGPInputModeType)OldType;
    Parms.NewType = (enum EGPInputModeType)NewType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnGameHudStateChangedNew(struct UHudManager* InHudManager)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnGameHudStateChangedNew");
    struct
    {
        struct UHudManager* InHudManager;
    } Parms{};
    Parms.InHudManager = (struct UHudManager*)InHudManager;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnGameHudStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnGameHudStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnGameFlowLeave(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnGameFlowLeave");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::OnGameFlowEnter(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "OnGameFlowEnter");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameplayInputManager::IsRowAllowBindCombKeys(const struct FDFMInputMappingRow& InRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "IsRowAllowBindCombKeys");
    struct
    {
        struct FDFMInputMappingRow InRow;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InRow = (struct FDFMInputMappingRow)InRow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameplayInputManager::IsEnableSwapL1L2AndR1R2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "IsEnableSwapL1L2AndR1R2");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameplayInputManager::IsEnableForKeyRebindings(EDFMInputSceneType SceneType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "IsEnableForKeyRebindings");
    struct
    {
        enum EDFMInputSceneType SceneType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SceneType = (enum EDFMInputSceneType)SceneType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameplayInputManager::IsEnableForAnyKeyRebindings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "IsEnableForAnyKeyRebindings");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameplayInputManager::IsEnableAutoHoldBreath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "IsEnableAutoHoldBreath");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameplayInputManager::IsActionInjected(struct FName InActionOrAxisName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameplayInputManager", "IsActionInjected");
    struct
    {
        struct FName InActionOrAxisName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InActionOrAxisName = (struct FName)InActionOrAxisName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameplayInputManager::HasKeyRebindings(EDFMInputSceneType SceneType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "HasKeyRebindings");
    struct
    {
        enum EDFMInputSceneType SceneType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SceneType = (enum EDFMInputSceneType)SceneType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameplayInputManager::HasAnyKeyRebindings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "HasAnyKeyRebindings");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDFMInputSceneType UDFMGameplayInputManager::GetSceneTypeByIMCType(EDFMInputMappingTableType InIMCId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameplayInputManager", "GetSceneTypeByIMCType");
    struct
    {
        enum EDFMInputMappingTableType InIMCId;
        enum EDFMInputSceneType ReturnValue;
    } Parms{};
    Parms.InIMCId = (enum EDFMInputMappingTableType)InIMCId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UDFMInputTrigger*> UDFMGameplayInputManager::GetInputTriggersCombinedDedublicatedByFunctionType(int32_t KeyFunctionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetInputTriggersCombinedDedublicatedByFunctionType");
    struct
    {
        int32_t KeyFunctionType;
        struct TArray<struct UDFMInputTrigger*> ReturnValue;
    } Parms{};
    Parms.KeyFunctionType = (int32_t)KeyFunctionType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UDFMInputTrigger*> UDFMGameplayInputManager::GetInputTriggersBySceneType(EDFMInputSceneType SceneType, struct TArray<int32_t> KeyFunctionTypeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetInputTriggersBySceneType");
    struct
    {
        enum EDFMInputSceneType SceneType;
        struct TArray<int32_t> KeyFunctionTypeList;
        struct TArray<struct UDFMInputTrigger*> ReturnValue;
    } Parms{};
    Parms.SceneType = (enum EDFMInputSceneType)SceneType;
    Parms.KeyFunctionTypeList = (struct TArray<int32_t>)KeyFunctionTypeList;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UDFMInputTrigger*> UDFMGameplayInputManager::GetInputTriggersByFunctionType(int32_t KeyFunctionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetInputTriggersByFunctionType");
    struct
    {
        int32_t KeyFunctionType;
        struct TArray<struct UDFMInputTrigger*> ReturnValue;
    } Parms{};
    Parms.KeyFunctionType = (int32_t)KeyFunctionType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UDFMInputTrigger*> UDFMGameplayInputManager::GetInputTriggerCombinedTriggers(struct UDFMInputTrigger* InInputTrigger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetInputTriggerCombinedTriggers");
    struct
    {
        struct UDFMInputTrigger* InInputTrigger;
        struct TArray<struct UDFMInputTrigger*> ReturnValue;
    } Parms{};
    Parms.InInputTrigger = (struct UDFMInputTrigger*)InInputTrigger;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMInputTrigger* UDFMGameplayInputManager::GetInputTrigger(EDFMInputMappingTableType InIMCId, struct FName InActionOrAxisName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetInputTrigger");
    struct
    {
        enum EDFMInputMappingTableType InIMCId;
        struct FName InActionOrAxisName;
        struct UDFMInputTrigger* ReturnValue;
    } Parms{};
    Parms.InIMCId = (enum EDFMInputMappingTableType)InIMCId;
    Parms.InActionOrAxisName = (struct FName)InActionOrAxisName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UDFMGameplayInputManager::GetInputMappingRowDisplayName(const struct FDFMInputMappingRow& TriggerData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetInputMappingRowDisplayName");
    struct
    {
        struct FDFMInputMappingRow TriggerData;
        struct FText ReturnValue;
    } Parms{};
    Parms.TriggerData = (struct FDFMInputMappingRow)TriggerData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FDFMInputMappingRow> UDFMGameplayInputManager::GetInputMappingRowCombinedRows(const struct FDFMInputMappingRow& TriggerData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetInputMappingRowCombinedRows");
    struct
    {
        struct FDFMInputMappingRow TriggerData;
        struct TArray<struct FDFMInputMappingRow> ReturnValue;
    } Parms{};
    Parms.TriggerData = (struct FDFMInputMappingRow)TriggerData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FDFMInputMappingRow> UDFMGameplayInputManager::GetDefaultInputMappingRowsBySceneAndPresetType(EDFMInputSceneType SceneType, EDFMGamepadPresetType PresetType, struct TArray<int32_t> KeyFunctionTypeList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetDefaultInputMappingRowsBySceneAndPresetType");
    struct
    {
        enum EDFMInputSceneType SceneType;
        enum EDFMGamepadPresetType PresetType;
        struct TArray<int32_t> KeyFunctionTypeList;
        struct TArray<struct FDFMInputMappingRow> ReturnValue;
    } Parms{};
    Parms.SceneType = (enum EDFMInputSceneType)SceneType;
    Parms.PresetType = (enum EDFMGamepadPresetType)PresetType;
    Parms.KeyFunctionTypeList = (struct TArray<int32_t>)KeyFunctionTypeList;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDFMInputMappingRow UDFMGameplayInputManager::GetDefaultInputMappingRow(EDFMGamepadPresetType PresetType, EDFMInputMappingTableType InIMCId, struct FName InActionOrAxisName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetDefaultInputMappingRow");
    struct
    {
        enum EDFMGamepadPresetType PresetType;
        enum EDFMInputMappingTableType InIMCId;
        struct FName InActionOrAxisName;
        struct FDFMInputMappingRow ReturnValue;
    } Parms{};
    Parms.PresetType = (enum EDFMGamepadPresetType)PresetType;
    Parms.InIMCId = (enum EDFMInputMappingTableType)InIMCId;
    Parms.InActionOrAxisName = (struct FName)InActionOrAxisName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMInputTrigger* UDFMGameplayInputManager::GetBestInputTriggerByName(struct FName InActionOrAxisName, uint8_t bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetBestInputTriggerByName");
    struct
    {
        struct FName InActionOrAxisName;
        uint8_t bForce;
        struct UDFMInputTrigger* ReturnValue;
    } Parms{};
    Parms.InActionOrAxisName = (struct FName)InActionOrAxisName;
    Parms.bForce = (uint8_t)bForce;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<EDFMGamepadPresetType, struct FDFMInputPresetRow> UDFMGameplayInputManager::GetAllInputPresetRows()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "GetAllInputPresetRows");
    struct
    {
        struct TMap<EDFMGamepadPresetType, struct FDFMInputPresetRow> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameplayInputManager::GetActionPossibleRedirectName(struct FName InActionOrAxisName, struct FName& OutRedirectedName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameplayInputManager", "GetActionPossibleRedirectName");
    struct
    {
        struct FName InActionOrAxisName;
        struct FName OutRedirectedName;
    } Parms{};
    Parms.InActionOrAxisName = (struct FName)InActionOrAxisName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutRedirectedName = Parms.OutRedirectedName;
}

struct UDFMGameplayInputManager* UDFMGameplayInputManager::Get(struct UObject* InGameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameplayInputManager", "Get");
    struct
    {
        struct UObject* InGameInstanceContext;
        struct UDFMGameplayInputManager* ReturnValue;
    } Parms{};
    Parms.InGameInstanceContext = (struct UObject*)InGameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FName, uint8_t> UDFMGameplayInputManager::DiffCurKeyBindingsAgainstPreset(EDFMInputSceneType SceneType, EDFMGamepadPresetType PresetType, struct TArray<int32_t> KeyFunctionTypeList, struct TArray<struct FName> ActionOrAxisToIgnore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "DiffCurKeyBindingsAgainstPreset");
    struct
    {
        enum EDFMInputSceneType SceneType;
        enum EDFMGamepadPresetType PresetType;
        struct TArray<int32_t> KeyFunctionTypeList;
        struct TArray<struct FName> ActionOrAxisToIgnore;
        struct TMap<struct FName, uint8_t> ReturnValue;
    } Parms{};
    Parms.SceneType = (enum EDFMInputSceneType)SceneType;
    Parms.PresetType = (enum EDFMGamepadPresetType)PresetType;
    Parms.KeyFunctionTypeList = (struct TArray<int32_t>)KeyFunctionTypeList;
    Parms.ActionOrAxisToIgnore = (struct TArray<struct FName>)ActionOrAxisToIgnore;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameplayInputManager::ApplyInputSettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "ApplyInputSettings");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::ApplyGamePadSetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "ApplyGamePadSetting");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::ApplyGamepadActionLogic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "ApplyGamepadActionLogic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameplayInputManager::ApplyDeserializedKeySettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameplayInputManager", "ApplyDeserializedKeySettings");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMInputKeyRebindingSaveGame::* ----
struct FString UDFMInputKeyRebindingSaveGame::SerializeCustomKeySetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputKeyRebindingSaveGame", "SerializeCustomKeySetting");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMInputKeyRebindingSaveGame::ReceiveCustomKeySetting(struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputKeyRebindingSaveGame", "ReceiveCustomKeySetting");
    struct
    {
        struct FString Value;
    } Parms{};
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMInputModifierForSensitivity::* ----
void UDFMInputModifierForSensitivity::OnDataLoadComplete(const struct FSoftObjectPath& Asset, EGamepadSensitivityCurveType Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputModifierForSensitivity", "OnDataLoadComplete");
    struct
    {
        struct FSoftObjectPath Asset;
        enum EGamepadSensitivityCurveType Type;
    } Parms{};
    Parms.Asset = (struct FSoftObjectPath)Asset;
    Parms.Type = (enum EGamepadSensitivityCurveType)Type;
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMInputTrigger::* ----
uint8_t UDFMInputTrigger::HasKeyRebinding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputTrigger", "HasKeyRebinding");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMInputTrigger::GetSameKeyTriggersMaxWaitOtherCombKeyWaitTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputTrigger", "GetSameKeyTriggersMaxWaitOtherCombKeyWaitTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FKey UDFMInputTrigger::GetKey2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputTrigger", "GetKey2");
    struct
    {
        struct FKey ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FKey UDFMInputTrigger::GetKey1()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputTrigger", "GetKey1");
    struct
    {
        struct FKey ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FKey UDFMInputTrigger::GetDefaultKey2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputTrigger", "GetDefaultKey2");
    struct
    {
        struct FKey ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FKey UDFMInputTrigger::GetDefaultKey1()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputTrigger", "GetDefaultKey1");
    struct
    {
        struct FKey ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FDFMInputMappingRow UDFMInputTrigger::GetDefaultInputMappingData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMInputTrigger", "GetDefaultInputMappingData");
    struct
    {
        struct FDFMInputMappingRow ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFMobilePlayerInput::* ----
void UDFMobilePlayerInput::SetTimerForRefreshButtonOverlap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMobilePlayerInput", "SetTimerForRefreshButtonOverlap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMPlayerInput::* ----
struct TArray<float> UDFMPlayerInput::GetSticksState(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerInput", "GetSticksState");
    struct
    {
        int32_t Type;
        struct TArray<float> ReturnValue;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMPlayerInput::GetKeyAxisValueAfterRestrict(const struct FName& AxisName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerInput", "GetKeyAxisValueAfterRestrict");
    struct
    {
        struct FName AxisName;
        float ReturnValue;
    } Parms{};
    Parms.AxisName = (struct FName)AxisName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMPlayerInput::GetKeyAxisValueAfterCurve(const struct FName& AxisName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerInput", "GetKeyAxisValueAfterCurve");
    struct
    {
        struct FName AxisName;
        float ReturnValue;
    } Parms{};
    Parms.AxisName = (struct FName)AxisName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMPlayerInput::GetFinalKeyAxisValue(const struct FName& AxisName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMPlayerInput", "GetFinalKeyAxisValue");
    struct
    {
        struct FName AxisName;
        float ReturnValue;
    } Parms{};
    Parms.AxisName = (struct FName)AxisName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
