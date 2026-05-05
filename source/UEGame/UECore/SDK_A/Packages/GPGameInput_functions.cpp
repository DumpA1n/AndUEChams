#include "GPGameInput.hpp"
#include "Engine.hpp"
#include "InputCore.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDualSenseDeviceManager
void UDualSenseDeviceManager::SetLightBarColor(struct FColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "SetLightBarColor");
    struct
    {
        struct FColor Color;
    } Parms{};
    Parms.Color = (struct FColor)Color;
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::SetAdaptiveTriggerEffect_Weapon(EInputDeviceTriggerMask TriggerMask, uint8_t StartPosition, uint8_t EndPosition, uint8_t Strength, int32_t ControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "SetAdaptiveTriggerEffect_Weapon");
    struct
    {
        enum EInputDeviceTriggerMask TriggerMask;
        uint8_t StartPosition;
        uint8_t EndPosition;
        uint8_t Strength;
        int32_t ControllerId;
    } Parms{};
    Parms.TriggerMask = (enum EInputDeviceTriggerMask)TriggerMask;
    Parms.StartPosition = (uint8_t)StartPosition;
    Parms.EndPosition = (uint8_t)EndPosition;
    Parms.Strength = (uint8_t)Strength;
    Parms.ControllerId = (int32_t)ControllerId;
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::SetAdaptiveTriggerEffect_Vibration(EInputDeviceTriggerMask TriggerMask, uint8_t Position, uint8_t frequency, uint8_t Amplitude, int32_t ControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "SetAdaptiveTriggerEffect_Vibration");
    struct
    {
        enum EInputDeviceTriggerMask TriggerMask;
        uint8_t Position;
        uint8_t frequency;
        uint8_t Amplitude;
        int32_t ControllerId;
    } Parms{};
    Parms.TriggerMask = (enum EInputDeviceTriggerMask)TriggerMask;
    Parms.Position = (uint8_t)Position;
    Parms.frequency = (uint8_t)frequency;
    Parms.Amplitude = (uint8_t)Amplitude;
    Parms.ControllerId = (int32_t)ControllerId;
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::SetAdaptiveTriggerEffect_SlopeFeedback(EInputDeviceTriggerMask TriggerMask, uint8_t StartPosition, uint8_t StartStrength, uint8_t EndPosition, uint8_t EndStrength, int32_t ControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "SetAdaptiveTriggerEffect_SlopeFeedback");
    struct
    {
        enum EInputDeviceTriggerMask TriggerMask;
        uint8_t StartPosition;
        uint8_t StartStrength;
        uint8_t EndPosition;
        uint8_t EndStrength;
        int32_t ControllerId;
    } Parms{};
    Parms.TriggerMask = (enum EInputDeviceTriggerMask)TriggerMask;
    Parms.StartPosition = (uint8_t)StartPosition;
    Parms.StartStrength = (uint8_t)StartStrength;
    Parms.EndPosition = (uint8_t)EndPosition;
    Parms.EndStrength = (uint8_t)EndStrength;
    Parms.ControllerId = (int32_t)ControllerId;
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::SetAdaptiveTriggerEffect_Off(EInputDeviceTriggerMask TriggerMask, int32_t ControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "SetAdaptiveTriggerEffect_Off");
    struct
    {
        enum EInputDeviceTriggerMask TriggerMask;
        int32_t ControllerId;
    } Parms{};
    Parms.TriggerMask = (enum EInputDeviceTriggerMask)TriggerMask;
    Parms.ControllerId = (int32_t)ControllerId;
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::SetAdaptiveTriggerEffect_MultiPositionVibration(EInputDeviceTriggerMask TriggerMask, uint8_t frequency, struct TArray<uint8_t>& Amplitudes, int32_t ControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "SetAdaptiveTriggerEffect_MultiPositionVibration");
    struct
    {
        enum EInputDeviceTriggerMask TriggerMask;
        uint8_t frequency;
        struct TArray<uint8_t> Amplitudes;
        int32_t ControllerId;
    } Parms{};
    Parms.TriggerMask = (enum EInputDeviceTriggerMask)TriggerMask;
    Parms.frequency = (uint8_t)frequency;
    Parms.ControllerId = (int32_t)ControllerId;
    this->ProcessEvent(Func, &Parms);
    Amplitudes = Parms.Amplitudes;
}

void UDualSenseDeviceManager::SetAdaptiveTriggerEffect_MultiPositionFeedback(EInputDeviceTriggerMask TriggerMask, struct TArray<uint8_t>& Strengths, int32_t ControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "SetAdaptiveTriggerEffect_MultiPositionFeedback");
    struct
    {
        enum EInputDeviceTriggerMask TriggerMask;
        struct TArray<uint8_t> Strengths;
        int32_t ControllerId;
    } Parms{};
    Parms.TriggerMask = (enum EInputDeviceTriggerMask)TriggerMask;
    Parms.ControllerId = (int32_t)ControllerId;
    this->ProcessEvent(Func, &Parms);
    Strengths = Parms.Strengths;
}

void UDualSenseDeviceManager::SetAdaptiveTriggerEffect_Feedback(EInputDeviceTriggerMask TriggerMask, uint8_t Position, uint8_t Strength, int32_t ControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "SetAdaptiveTriggerEffect_Feedback");
    struct
    {
        enum EInputDeviceTriggerMask TriggerMask;
        uint8_t Position;
        uint8_t Strength;
        int32_t ControllerId;
    } Parms{};
    Parms.TriggerMask = (enum EInputDeviceTriggerMask)TriggerMask;
    Parms.Position = (uint8_t)Position;
    Parms.Strength = (uint8_t)Strength;
    Parms.ControllerId = (int32_t)ControllerId;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDualSenseDeviceManager::IsTouchEventEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "IsTouchEventEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDualSenseDeviceManager::IsMotionEventEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "IsMotionEventEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDualSenseDeviceManager::IsLocalDualSenseGamepadAttached()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "IsLocalDualSenseGamepadAttached");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDualSenseDeviceManager::IsLightBarEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "IsLightBarEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDualSenseDeviceManager::IsAnyDualSenseGamepadAttached()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "IsAnyDualSenseGamepadAttached");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDualSenseDeviceManager::GetLocalDualSenseDeviceId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "GetLocalDualSenseDeviceId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FColor UDualSenseDeviceManager::GetLightBarColor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "GetLightBarColor");
    struct
    {
        struct FColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDualSenseDeviceManager::GetHandleIdByUserIndex(int32_t UserIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "GetHandleIdByUserIndex");
    struct
    {
        int32_t UserIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.UserIndex = (int32_t)UserIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDualSenseDeviceManager::GetControllerTypeByUserIndex(int32_t UserIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "GetControllerTypeByUserIndex");
    struct
    {
        int32_t UserIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.UserIndex = (int32_t)UserIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDualSenseDeviceManager::GetControllerTypeByHandleId(int32_t Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "GetControllerTypeByHandleId");
    struct
    {
        int32_t Handle;
        int32_t ReturnValue;
    } Parms{};
    Parms.Handle = (int32_t)Handle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDualSenseDeviceManager::GetControllerNameByUserIndex(int32_t UserIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "GetControllerNameByUserIndex");
    struct
    {
        int32_t UserIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.UserIndex = (int32_t)UserIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDualSenseDeviceManager::GetControllerNameByHandleId(int32_t Handle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "GetControllerNameByHandleId");
    struct
    {
        int32_t Handle;
        struct FString ReturnValue;
    } Parms{};
    Parms.Handle = (int32_t)Handle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDualSenseDeviceManager* UDualSenseDeviceManager::Get(struct UObject* InGameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DualSenseDeviceManager", "Get");
    struct
    {
        struct UObject* InGameInstanceContext;
        struct UDualSenseDeviceManager* ReturnValue;
    } Parms{};
    Parms.InGameInstanceContext = (struct UObject*)InGameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDualSenseDeviceManager::EnableTouchEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "EnableTouchEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::EnableMotionEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "EnableMotionEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::EnableLightBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "EnableLightBar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDualSenseDeviceManager::EnableAdvanceVibration(int32_t DeviceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "EnableAdvanceVibration");
    struct
    {
        int32_t DeviceID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeviceID = (int32_t)DeviceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDualSenseDeviceManager::DisableTouchEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "DisableTouchEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::DisableMotionEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "DisableMotionEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDualSenseDeviceManager::DisableLightBar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "DisableLightBar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDualSenseDeviceManager::DisableAdvanceVibration(int32_t DeviceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualSenseDeviceManager", "DisableAdvanceVibration");
    struct
    {
        int32_t DeviceID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeviceID = (int32_t)DeviceID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGamepadInputSimulationManager
void UGamepadInputSimulationManager::StopGamepadAxisSimulation(int32_t InControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GamepadInputSimulationManager", "StopGamepadAxisSimulation");
    struct
    {
        int32_t InControllerId;
    } Parms{};
    Parms.InControllerId = (int32_t)InControllerId;
    this->ProcessEvent(Func, &Parms);
}

void UGamepadInputSimulationManager::StartGamepadAxisSimulation(int32_t InControllerId, float InLeftStickAxisX, float InLeftStickAxisY, float InRightStickAxisX, float InRightStickAxisY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GamepadInputSimulationManager", "StartGamepadAxisSimulation");
    struct
    {
        int32_t InControllerId;
        float InLeftStickAxisX;
        float InLeftStickAxisY;
        float InRightStickAxisX;
        float InRightStickAxisY;
    } Parms{};
    Parms.InControllerId = (int32_t)InControllerId;
    Parms.InLeftStickAxisX = (float)InLeftStickAxisX;
    Parms.InLeftStickAxisY = (float)InLeftStickAxisY;
    Parms.InRightStickAxisX = (float)InRightStickAxisX;
    Parms.InRightStickAxisY = (float)InRightStickAxisY;
    this->ProcessEvent(Func, &Parms);
}

void UGamepadInputSimulationManager::SetStickSimDPad(EStickSimDPadType Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GamepadInputSimulationManager", "SetStickSimDPad");
    struct
    {
        enum EStickSimDPadType Type;
    } Parms{};
    Parms.Type = (enum EStickSimDPadType)Type;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGamepadInputSimulationManager::IsGamepadAxisSimulationActive(int32_t InControllerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GamepadInputSimulationManager", "IsGamepadAxisSimulationActive");
    struct
    {
        int32_t InControllerId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InControllerId = (int32_t)InControllerId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EStickSimDPadType UGamepadInputSimulationManager::GetStickSimDPadType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GamepadInputSimulationManager", "GetStickSimDPadType");
    struct
    {
        enum EStickSimDPadType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGamepadInputSimulationManager* UGamepadInputSimulationManager::Get(struct UObject* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamepadInputSimulationManager", "Get");
    struct
    {
        struct UObject* GameInstanceContext;
        struct UGamepadInputSimulationManager* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UObject*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPInputDelegates
struct UGPInputDelegates* UGPInputDelegates::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputDelegates", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UGPInputDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPInputHelper
void UGPInputHelper::WantInputMode_UIOnly(struct UObject* WorldContext, struct FName ID, uint8_t bEnable, uint8_t bPersistent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "WantInputMode_UIOnly");
    struct
    {
        struct UObject* WorldContext;
        struct FName ID;
        uint8_t bEnable;
        uint8_t bPersistent;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.ID = (struct FName)ID;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bPersistent = (uint8_t)bPersistent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::WantInputMode_GameOnly(struct UObject* WorldContext, struct FName ID, uint8_t bEnable, uint8_t bPersistent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "WantInputMode_GameOnly");
    struct
    {
        struct UObject* WorldContext;
        struct FName ID;
        uint8_t bEnable;
        uint8_t bPersistent;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.ID = (struct FName)ID;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bPersistent = (uint8_t)bPersistent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::WantInputMode_GameAndUI(struct UObject* WorldContext, struct FName ID, uint8_t bEnable, uint8_t bPersistent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "WantInputMode_GameAndUI");
    struct
    {
        struct UObject* WorldContext;
        struct FName ID;
        uint8_t bEnable;
        uint8_t bPersistent;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.ID = (struct FName)ID;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bPersistent = (uint8_t)bPersistent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::WantInputMode_ForceUIOnly(struct UObject* WorldContext, struct FName ID, uint8_t bEnable, uint8_t bPersistent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "WantInputMode_ForceUIOnly");
    struct
    {
        struct UObject* WorldContext;
        struct FName ID;
        uint8_t bEnable;
        uint8_t bPersistent;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.ID = (struct FName)ID;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bPersistent = (uint8_t)bPersistent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::WantInputMode_Enum(struct UObject* WorldContext, EGPInputModeType EnumType, struct FName ID, uint8_t bEnable, uint8_t bPersistent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "WantInputMode_Enum");
    struct
    {
        struct UObject* WorldContext;
        enum EGPInputModeType EnumType;
        struct FName ID;
        uint8_t bEnable;
        uint8_t bPersistent;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EnumType = (enum EGPInputModeType)EnumType;
    Parms.ID = (struct FName)ID;
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bPersistent = (uint8_t)bPersistent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::ToggleGamepadMouseSimulation(struct UObject* WorldContext, uint8_t bInGamepadToMouseSimulation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "ToggleGamepadMouseSimulation");
    struct
    {
        struct UObject* WorldContext;
        uint8_t bInGamepadToMouseSimulation;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bInGamepadToMouseSimulation = (uint8_t)bInGamepadToMouseSimulation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::SetTempInputMode_UIOnly(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "SetTempInputMode_UIOnly");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::SetTempInputMode_GameOnly(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "SetTempInputMode_GameOnly");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::SetTempInputMode_GameAndUI(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "SetTempInputMode_GameAndUI");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::SetInputGateEnabled(struct UObject* WorldContext, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "SetInputGateEnabled");
    struct
    {
        struct UObject* WorldContext;
        uint8_t bEnable;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::SetGamepadInputGamePlayModeEnable(uint8_t InbEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPInputHelper", "SetGamepadInputGamePlayModeEnable");
    struct
    {
        uint8_t InbEnable;
    } Parms{};
    Parms.InbEnable = (uint8_t)InbEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::SetGamepadInputEnable(uint8_t InbEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPInputHelper", "SetGamepadInputEnable");
    struct
    {
        uint8_t InbEnable;
    } Parms{};
    Parms.InbEnable = (uint8_t)InbEnable;
    this->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::ReApplyInputMode(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "ReApplyInputMode");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::OnStartGameInstance(struct UGameInstance* InGameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPInputHelper", "OnStartGameInstance");
    struct
    {
        struct UGameInstance* InGameInstance;
    } Parms{};
    Parms.InGameInstance = (struct UGameInstance*)InGameInstance;
    this->ProcessEvent(Func, &Parms);
}

struct FKey UGPInputHelper::MakeKeyByName(struct FName KeyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "MakeKeyByName");
    struct
    {
        struct FName KeyName;
        struct FKey ReturnValue;
    } Parms{};
    Parms.KeyName = (struct FName)KeyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPInputHelper::IsTouchOrLMBEvent(const struct FPointerEvent& InPointerEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "IsTouchOrLMBEvent");
    struct
    {
        struct FPointerEvent InPointerEvent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPointerEvent = (struct FPointerEvent)InPointerEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPInputHelper::IsKeyPressed(struct UObject* WorldContext, const struct FKey& InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "IsKeyPressed");
    struct
    {
        struct UObject* WorldContext;
        struct FKey InKey;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.InKey = (struct FKey)InKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPInputHelper::IsGamepadInputGamePlayModeEnable(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "IsGamepadInputGamePlayModeEnable");
    struct
    {
        struct UObject* WorldContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPInputHelper::IsGamepadInputEnable(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "IsGamepadInputEnable");
    struct
    {
        struct UObject* WorldContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPInputHelper::IsFakingTouch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "IsFakingTouch");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPInputHelper::IsConsoleKeyboardInput(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "IsConsoleKeyboardInput");
    struct
    {
        struct UObject* WorldContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGPInputHelper::IsConsoleGamepadInput(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "IsConsoleGamepadInput");
    struct
    {
        struct UObject* WorldContext;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPInputType UGPInputHelper::GetCurrentInputTypeOrDefault(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "GetCurrentInputTypeOrDefault");
    struct
    {
        struct UObject* WorldContext;
        enum EGPInputType ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPInputType UGPInputHelper::GetCurrentInputType(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "GetCurrentInputType");
    struct
    {
        struct UObject* WorldContext;
        enum EGPInputType ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPInputModeType UGPInputHelper::GetCurrentInputMode(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "GetCurrentInputMode");
    struct
    {
        struct UObject* WorldContext;
        enum EGPInputModeType ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPGamepadInputType UGPInputHelper::GetCurrentGamepadInputTypeOrDefault(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "GetCurrentGamepadInputTypeOrDefault");
    struct
    {
        struct UObject* WorldContext;
        enum EGPGamepadInputType ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGPGamepadInputType UGPInputHelper::GetCurrentGamepadInputType(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "GetCurrentGamepadInputType");
    struct
    {
        struct UObject* WorldContext;
        enum EGPGamepadInputType ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPInputHelper* UGPInputHelper::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UGPInputHelper* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPInputHelper::GameplayInputMappingRegistered__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPInputHelper", "GameplayInputMappingRegistered__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::GameplayInputHoldingDelegate__DelegateSignature(struct FName ActionOrAxisName, float InPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPInputHelper", "GameplayInputHoldingDelegate__DelegateSignature");
    struct
    {
        struct FName ActionOrAxisName;
        float InPercent;
    } Parms{};
    Parms.ActionOrAxisName = (struct FName)ActionOrAxisName;
    Parms.InPercent = (float)InPercent;
    this->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::GameplayInputFinishedDelegate__DelegateSignature(struct FName ActionOrAxisName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPInputHelper", "GameplayInputFinishedDelegate__DelegateSignature");
    struct
    {
        struct FName ActionOrAxisName;
    } Parms{};
    Parms.ActionOrAxisName = (struct FName)ActionOrAxisName;
    this->ProcessEvent(Func, &Parms);
}

void UGPInputHelper::ClearInputMode(struct UObject* WorldContext, uint8_t bIncludePersistent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPInputHelper", "ClearInputMode");
    struct
    {
        struct UObject* WorldContext;
        uint8_t bIncludePersistent;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.bIncludePersistent = (uint8_t)bIncludePersistent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UHapticFeedbackSubsystem
int32_t UHapticFeedbackSubsystem::GetLocalControllerId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HapticFeedbackSubsystem", "GetLocalControllerId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UHapticFeedbackSubsystem::GetHapticFeedbackOutputId(uint32_t deviceIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HapticFeedbackSubsystem", "GetHapticFeedbackOutputId");
    struct
    {
        uint32_t deviceIndex;
        uint64_t ReturnValue;
    } Parms{};
    Parms.deviceIndex = (uint32_t)deviceIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHapticFeedbackSubsystem* UHapticFeedbackSubsystem::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HapticFeedbackSubsystem", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UHapticFeedbackSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHapticFeedbackSubsystem::EnableHapticFeedbackForDevice(uint32_t deviceIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HapticFeedbackSubsystem", "EnableHapticFeedbackForDevice");
    struct
    {
        uint32_t deviceIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.deviceIndex = (uint32_t)deviceIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHapticFeedbackSubsystem::EnableHapticFeedback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HapticFeedbackSubsystem", "EnableHapticFeedback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UHapticFeedbackSubsystem::DisableHapticFeedbackForDevice(uint32_t deviceIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HapticFeedbackSubsystem", "DisableHapticFeedbackForDevice");
    struct
    {
        uint32_t deviceIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.deviceIndex = (uint32_t)deviceIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHapticFeedbackSubsystem::DisableHapticFeedback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HapticFeedbackSubsystem", "DisableHapticFeedback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHapticFeedbackSubsystem::DebugPlayAudioWithName(struct FString AudioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HapticFeedbackSubsystem", "DebugPlayAudioWithName");
    struct
    {
        struct FString AudioName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AudioName = (struct FString)AudioName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMobilePlayerInput
void UMobilePlayerInput::UnRegisterInterestedTouchIndex(ETouchIndex FingerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePlayerInput", "UnRegisterInterestedTouchIndex");
    struct
    {
        enum ETouchIndex FingerIndex;
    } Parms{};
    Parms.FingerIndex = (enum ETouchIndex)FingerIndex;
    this->ProcessEvent(Func, &Parms);
}

void UMobilePlayerInput::RequestWholeScreenRotationArea(uint8_t bRequest, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePlayerInput", "RequestWholeScreenRotationArea");
    struct
    {
        uint8_t bRequest;
        struct FString Reason;
    } Parms{};
    Parms.bRequest = (uint8_t)bRequest;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UMobilePlayerInput::RequestHalfMoveHalfRotate(uint8_t bRequest, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePlayerInput", "RequestHalfMoveHalfRotate");
    struct
    {
        uint8_t bRequest;
        struct FString Reason;
    } Parms{};
    Parms.bRequest = (uint8_t)bRequest;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UMobilePlayerInput::RequestForbidTouchMoveRotate(uint8_t bRequest, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePlayerInput", "RequestForbidTouchMoveRotate");
    struct
    {
        uint8_t bRequest;
        struct FString Reason;
    } Parms{};
    Parms.bRequest = (uint8_t)bRequest;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UMobilePlayerInput::RegisterInterestedTouchIndex(ETouchIndex FingerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePlayerInput", "RegisterInterestedTouchIndex");
    struct
    {
        enum ETouchIndex FingerIndex;
    } Parms{};
    Parms.FingerIndex = (enum ETouchIndex)FingerIndex;
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UMobilePlayerInput::GetSmoothedTouchPosition(ETouchIndex FingerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePlayerInput", "GetSmoothedTouchPosition");
    struct
    {
        enum ETouchIndex FingerIndex;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.FingerIndex = (enum ETouchIndex)FingerIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMobilePlayerInput::CheckWholeScreenRotationAreaReasonExist(struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePlayerInput", "CheckWholeScreenRotationAreaReasonExist");
    struct
    {
        struct FString Reason;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHDPlayerInput
void UHDPlayerInput::OnZoomRateChanged(float NewRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HDPlayerInput", "OnZoomRateChanged");
    struct
    {
        float NewRate;
    } Parms{};
    Parms.NewRate = (float)NewRate;
    this->ProcessEvent(Func, &Parms);
}

void UHDPlayerInput::OnMouseAxisInput(EMouseInputType MouseInputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HDPlayerInput", "OnMouseAxisInput");
    struct
    {
        enum EMouseInputType MouseInputType;
    } Parms{};
    Parms.MouseInputType = (enum EMouseInputType)MouseInputType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UHDPlayerInput::IsEntirelyZoomedIn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HDPlayerInput", "IsEntirelyZoomedIn");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHDPlayerInput::GetZoomingPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HDPlayerInput", "GetZoomingPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHDPlayerInput::GetVehicleCurADSSensitivity(float TarZoomRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HDPlayerInput", "GetVehicleCurADSSensitivity");
    struct
    {
        float TarZoomRate;
        float ReturnValue;
    } Parms{};
    Parms.TarZoomRate = (float)TarZoomRate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHDPlayerInput::GetIsInZoomInProcess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HDPlayerInput", "GetIsInZoomInProcess");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHDPlayerInput::GetIsInZoomingProcess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HDPlayerInput", "GetIsInZoomingProcess");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UHDPlayerInput* UHDPlayerInput::GetHDPlayerInput(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HDPlayerInput", "GetHDPlayerInput");
    struct
    {
        struct UObject* WorldContext;
        struct UHDPlayerInput* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHDPlayerInput::GetCurADSSensitivity(float TarZoomRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HDPlayerInput", "GetCurADSSensitivity");
    struct
    {
        float TarZoomRate;
        float ReturnValue;
    } Parms{};
    Parms.TarZoomRate = (float)TarZoomRate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMobileGameHandle
void UMobileGameHandle::UpdateSprintTriggerSensitivity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "UpdateSprintTriggerSensitivity");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMobileGameHandle::UpdateMoveFireModeSetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "UpdateMoveFireModeSetting");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMobileGameHandle::UpdateControlButtonStatus(EMobileControlButtonType ControlButtonType, uint8_t bIsPressed, int32_t FingerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "UpdateControlButtonStatus");
    struct
    {
        enum EMobileControlButtonType ControlButtonType;
        uint8_t bIsPressed;
        int32_t FingerIndex;
    } Parms{};
    Parms.ControlButtonType = (enum EMobileControlButtonType)ControlButtonType;
    Parms.bIsPressed = (uint8_t)bIsPressed;
    Parms.FingerIndex = (int32_t)FingerIndex;
    this->ProcessEvent(Func, &Parms);
}

void UMobileGameHandle::UpdateControlButtonRotateLimit(EMobileControlButtonType ControlButtonType, uint8_t bInRotateLimitArea)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "UpdateControlButtonRotateLimit");
    struct
    {
        enum EMobileControlButtonType ControlButtonType;
        uint8_t bInRotateLimitArea;
    } Parms{};
    Parms.ControlButtonType = (enum EMobileControlButtonType)ControlButtonType;
    Parms.bInRotateLimitArea = (uint8_t)bInRotateLimitArea;
    this->ProcessEvent(Func, &Parms);
}

void UMobileGameHandle::UpdateControlButtonRotateInfo(EMobileControlButtonType ControlButtonType, uint8_t bAllowRotate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "UpdateControlButtonRotateInfo");
    struct
    {
        enum EMobileControlButtonType ControlButtonType;
        uint8_t bAllowRotate;
    } Parms{};
    Parms.ControlButtonType = (enum EMobileControlButtonType)ControlButtonType;
    Parms.bAllowRotate = (uint8_t)bAllowRotate;
    this->ProcessEvent(Func, &Parms);
}

void UMobileGameHandle::RequestWholeScreenRotationArea(uint8_t bRequest, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "RequestWholeScreenRotationArea");
    struct
    {
        uint8_t bRequest;
        struct FString Reason;
    } Parms{};
    Parms.bRequest = (uint8_t)bRequest;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UMobileGameHandle::RequestHalfMoveHalfRotate(uint8_t bRequest, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "RequestHalfMoveHalfRotate");
    struct
    {
        uint8_t bRequest;
        struct FString Reason;
    } Parms{};
    Parms.bRequest = (uint8_t)bRequest;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void UMobileGameHandle::RequestForbidTouchMoveRotate(uint8_t bRequest, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "RequestForbidTouchMoveRotate");
    struct
    {
        uint8_t bRequest;
        struct FString Reason;
    } Parms{};
    Parms.bRequest = (uint8_t)bRequest;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

float UMobileGameHandle::HDistToVDist(float HDist)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "HDistToVDist");
    struct
    {
        float HDist;
        float ReturnValue;
    } Parms{};
    Parms.HDist = (float)HDist;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobileGameHandle::GetSensitivityFactor(uint8_t bGyroScope)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "GetSensitivityFactor");
    struct
    {
        uint8_t bGyroScope;
        float ReturnValue;
    } Parms{};
    Parms.bGyroScope = (uint8_t)bGyroScope;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMobileGameHandle::GetControlButtonAllowRotate(EMobileControlButtonType ControlButtonType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "GetControlButtonAllowRotate");
    struct
    {
        enum EMobileControlButtonType ControlButtonType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ControlButtonType = (enum EMobileControlButtonType)ControlButtonType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMobileGameHandle::EnableRotateTouchArea(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "EnableRotateTouchArea");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UMobileGameHandle::EnableMovementTouchArea(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "EnableMovementTouchArea");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UMobileGameHandle::CurrentRequestHalfMoveHalfRotate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "CurrentRequestHalfMoveHalfRotate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMobileGameHandle::CurrentRequestForbidTouchMoveRotate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "CurrentRequestForbidTouchMoveRotate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMobileGameHandle::CurrentIsWholeScreenRotationArea()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "CurrentIsWholeScreenRotationArea");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMobileGameHandle::CheckWholeScreenRotationAreaReasonExist(struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "CheckWholeScreenRotationAreaReasonExist");
    struct
    {
        struct FString Reason;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobileGameHandle::CalcMDRadiansWithZoomRate(float BaseVFOV, float InMDV, float ZoomRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "CalcMDRadiansWithZoomRate");
    struct
    {
        float BaseVFOV;
        float InMDV;
        float ZoomRate;
        float ReturnValue;
    } Parms{};
    Parms.BaseVFOV = (float)BaseVFOV;
    Parms.InMDV = (float)InMDV;
    Parms.ZoomRate = (float)ZoomRate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobileGameHandle::CalcDist(float FOV)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileGameHandle", "CalcDist");
    struct
    {
        float FOV;
        float ReturnValue;
    } Parms{};
    Parms.FOV = (float)FOV;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
