#include "PhysXVehicles.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UWheeledVehicleMovementComponent::* ----
void UWheeledVehicleMovementComponent::SetUseAutoGears(uint8_t bUseAuto)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetUseAutoGears");
    struct
    {
        uint8_t bUseAuto;
    } Parms{};
    Parms.bUseAuto = (uint8_t)bUseAuto;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetThrottleInput");
    struct
    {
        float Throttle;
    } Parms{};
    Parms.Throttle = (float)Throttle;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetTargetGear(int32_t GearNum, uint8_t bImmediate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetTargetGear");
    struct
    {
        int32_t GearNum;
        uint8_t bImmediate;
    } Parms{};
    Parms.GearNum = (int32_t)GearNum;
    Parms.bImmediate = (uint8_t)bImmediate;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetSteeringInput");
    struct
    {
        float Steering;
    } Parms{};
    Parms.Steering = (float)Steering;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetHandbrakeInput(uint8_t bNewHandbrake)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetHandbrakeInput");
    struct
    {
        uint8_t bNewHandbrake;
    } Parms{};
    Parms.bNewHandbrake = (uint8_t)bNewHandbrake;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToIgnoreMask");
    struct
    {
        struct FNavAvoidanceMask GroupMask;
    } Parms{};
    Parms.GroupMask = (struct FNavAvoidanceMask)GroupMask;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int32_t GroupFlags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToIgnore");
    struct
    {
        int32_t GroupFlags;
    } Parms{};
    Parms.GroupFlags = (int32_t)GroupFlags;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToAvoidMask");
    struct
    {
        struct FNavAvoidanceMask GroupMask;
    } Parms{};
    Parms.GroupMask = (struct FNavAvoidanceMask)GroupMask;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int32_t GroupFlags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetGroupsToAvoid");
    struct
    {
        int32_t GroupFlags;
    } Parms{};
    Parms.GroupFlags = (int32_t)GroupFlags;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetGearUp(uint8_t bNewGearUp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetGearUp");
    struct
    {
        uint8_t bNewGearUp;
    } Parms{};
    Parms.bNewGearUp = (uint8_t)bNewGearUp;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetGearDown(uint8_t bNewGearDown)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetGearDown");
    struct
    {
        uint8_t bNewGearDown;
    } Parms{};
    Parms.bNewGearDown = (uint8_t)bNewGearDown;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetBrakeInput");
    struct
    {
        float Brake;
    } Parms{};
    Parms.Brake = (float)Brake;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceGroupMask");
    struct
    {
        struct FNavAvoidanceMask GroupMask;
    } Parms{};
    Parms.GroupMask = (struct FNavAvoidanceMask)GroupMask;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int32_t GroupFlags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceGroup");
    struct
    {
        int32_t GroupFlags;
    } Parms{};
    Parms.GroupFlags = (int32_t)GroupFlags;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "SetAvoidanceEnabled");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear, struct FRigidBodyState ClientRBState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "ServerUpdateState");
    struct
    {
        float InSteeringInput;
        float InThrottleInput;
        float InBrakeInput;
        float InHandbrakeInput;
        int32_t CurrentGear;
        struct FRigidBodyState ClientRBState;
    } Parms{};
    Parms.InSteeringInput = (float)InSteeringInput;
    Parms.InThrottleInput = (float)InThrottleInput;
    Parms.InBrakeInput = (float)InBrakeInput;
    Parms.InHandbrakeInput = (float)InHandbrakeInput;
    Parms.CurrentGear = (int32_t)CurrentGear;
    Parms.ClientRBState = (struct FRigidBodyState)ClientRBState;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWheeledVehicleMovementComponent::GetUseAutoGears()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "GetUseAutoGears");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWheeledVehicleMovementComponent::GetTargetGear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "GetTargetGear");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "GetForwardSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "GetEngineRotationSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "GetEngineMaxRotationSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UWheeledVehicleMovementComponent::GetCurrentGear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WheeledVehicleMovementComponent", "GetCurrentGear");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USimpleWheeledVehicleMovementComponent::* ----
void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int32_t WheelIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleWheeledVehicleMovementComponent", "SetSteerAngle");
    struct
    {
        float SteerAngle;
        int32_t WheelIndex;
    } Parms{};
    Parms.SteerAngle = (float)SteerAngle;
    Parms.WheelIndex = (int32_t)WheelIndex;
    this->ProcessEvent(Func, &Parms);
}

void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int32_t WheelIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleWheeledVehicleMovementComponent", "SetDriveTorque");
    struct
    {
        float DriveTorque;
        int32_t WheelIndex;
    } Parms{};
    Parms.DriveTorque = (float)DriveTorque;
    Parms.WheelIndex = (int32_t)WheelIndex;
    this->ProcessEvent(Func, &Parms);
}

void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int32_t WheelIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SimpleWheeledVehicleMovementComponent", "SetBrakeTorque");
    struct
    {
        float BrakeTorque;
        int32_t WheelIndex;
    } Parms{};
    Parms.BrakeTorque = (float)BrakeTorque;
    Parms.WheelIndex = (int32_t)WheelIndex;
    this->ProcessEvent(Func, &Parms);
}

// ---- UVehicleAnimInstance::* ----
struct AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleAnimInstance", "GetVehicle");
    struct
    {
        struct AWheeledVehicle* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UVehicleWheel::* ----
uint8_t UVehicleWheel::IsInAir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleWheel", "IsInAir");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UVehicleWheel::GetSuspensionSpringForce()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleWheel", "GetSuspensionSpringForce");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UVehicleWheel::GetSuspensionOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleWheel", "GetSuspensionOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UVehicleWheel::GetSteerAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleWheel", "GetSteerAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UVehicleWheel::GetRotationAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VehicleWheel", "GetRotationAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
