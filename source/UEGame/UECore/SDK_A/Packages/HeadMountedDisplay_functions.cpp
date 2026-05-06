#include "HeadMountedDisplay.hpp"
#include "Engine.hpp"
#include "InputCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UHeadMountedDisplayFunctionLibrary
void UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "UpdateExternalTrackingHMDPosition");
    struct
    {
        struct FTransform ExternalTrackingTransform;
    } Parms{};
    Parms.ExternalTrackingTransform = (struct FTransform)ExternalTrackingTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(const struct FName& ActionName, const struct FDelegate& InDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRTimedInputActionDelegate");
    struct
    {
        struct FName ActionName;
        struct FDelegate InDelegate;
    } Parms{};
    Parms.ActionName = (struct FName)ActionName;
    Parms.InDelegate = (struct FDelegate)InDelegate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(const struct FDelegate& InDisconnectedDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetXRDisconnectDelegate");
    struct
    {
        struct FDelegate InDisconnectedDelegate;
    } Parms{};
    Parms.InDisconnectedDelegate = (struct FDelegate)InDisconnectedDelegate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(struct UObject* WorldContext, float NewScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetWorldToMetersScale");
    struct
    {
        struct UObject* WorldContext;
        float NewScale;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.NewScale = (float)NewScale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(uint8_t Origin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetTrackingOrigin");
    struct
    {
        uint8_t Origin;
    } Parms{};
    Parms.Origin = (uint8_t)Origin;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(struct UTexture* InTexture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenTexture");
    struct
    {
        struct UTexture* InTexture;
    } Parms{};
    Parms.InTexture = (struct UTexture*)InTexture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenModeTexturePlusEyeLayout");
    struct
    {
        struct FVector2D EyeRectMin;
        struct FVector2D EyeRectMax;
        struct FVector2D TextureRectMin;
        struct FVector2D TextureRectMax;
        bool bDrawEyeFirst;
        bool bClearBlack;
        bool bUseAlpha;
    } Parms{};
    Parms.EyeRectMin = (struct FVector2D)EyeRectMin;
    Parms.EyeRectMax = (struct FVector2D)EyeRectMax;
    Parms.TextureRectMin = (struct FVector2D)TextureRectMin;
    Parms.TextureRectMax = (struct FVector2D)TextureRectMax;
    Parms.bDrawEyeFirst = (bool)bDrawEyeFirst;
    Parms.bClearBlack = (bool)bClearBlack;
    Parms.bUseAlpha = (bool)bUseAlpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode Mode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenMode");
    struct
    {
        enum ESpectatorScreenMode Mode;
    } Parms{};
    Parms.Mode = (enum ESpectatorScreenMode)Mode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetClippingPlanes");
    struct
    {
        float Near;
        float Far;
    } Parms{};
    Parms.Near = (float)Near;
    Parms.Far = (float)Far;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, uint8_t Options)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ResetOrientationAndPosition");
    struct
    {
        float Yaw;
        uint8_t Options;
    } Parms{};
    Parms.Yaw = (float)Yaw;
    Parms.Options = (uint8_t)Options;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsSpectatorScreenModeControllable");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsInLowPersistenceMode");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayEnabled");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayConnected");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsDeviceTracking");
    struct
    {
        struct FXRDeviceId XRDeviceId;
        bool ReturnValue;
    } Parms{};
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "HasValidTrackingPosition");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetXRSystemFlags");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetWorldToMetersScale");
    struct
    {
        struct UObject* WorldContext;
        float ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(bool& bUseFocus, bool& bHasFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVRFocusState");
    struct
    {
        bool bUseFocus;
        bool bHasFocus;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bUseFocus = Parms.bUseFocus;
    bHasFocus = Parms.bHasFocus;
}

struct FString UHeadMountedDisplayFunctionLibrary::GetVersionString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVersionString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingToWorldTransform");
    struct
    {
        struct UObject* WorldContext;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingSensorParameters");
    struct
    {
        struct FVector Origin;
        struct FRotator Rotation;
        float LeftFOV;
        float RightFOV;
        float TopFOV;
        float BottomFOV;
        float Distance;
        float NearPlane;
        float FarPlane;
        bool IsActive;
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Origin = Parms.Origin;
    Rotation = Parms.Rotation;
    LeftFOV = Parms.LeftFOV;
    RightFOV = Parms.RightFOV;
    TopFOV = Parms.TopFOV;
    BottomFOV = Parms.BottomFOV;
    Distance = Parms.Distance;
    NearPlane = Parms.NearPlane;
    FarPlane = Parms.FarPlane;
    IsActive = Parms.IsActive;
}

uint8_t UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOrigin");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UHeadMountedDisplayFunctionLibrary::GetScreenPercentage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetScreenPercentage");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPositionalTrackingCameraParameters");
    struct
    {
        struct FVector CameraOrigin;
        struct FRotator CameraRotation;
        float HFOV;
        float VFOV;
        float CameraDistance;
        float NearPlane;
        float FarPlane;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    CameraOrigin = Parms.CameraOrigin;
    CameraRotation = Parms.CameraRotation;
    HFOV = Parms.HFOV;
    VFOV = Parms.VFOV;
    CameraDistance = Parms.CameraDistance;
    NearPlane = Parms.NearPlane;
    FarPlane = Parms.FarPlane;
}

float UHeadMountedDisplayFunctionLibrary::GetPixelDensity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetPixelDensity");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetOrientationAndPosition");
    struct
    {
        struct FRotator DeviceRotation;
        struct FVector DevicePosition;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    DeviceRotation = Parms.DeviceRotation;
    DevicePosition = Parms.DevicePosition;
}

int32_t UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetNumOfTrackingSensors");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(struct UObject* WorldContext, EControllerHand Hand, struct FXRMotionControllerData& MotionControllerData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetMotionControllerData");
    struct
    {
        struct UObject* WorldContext;
        enum EControllerHand Hand;
        struct FXRMotionControllerData MotionControllerData;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.Hand = (enum EControllerHand)Hand;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    MotionControllerData = Parms.MotionControllerData;
}

uint8_t UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDWornState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDDeviceName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDData");
    struct
    {
        struct UObject* WorldContext;
        struct FXRHMDData HMDData;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    HMDData = Parms.HMDData;
}

void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(struct UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDeviceWorldPose");
    struct
    {
        struct UObject* WorldContext;
        struct FXRDeviceId XRDeviceId;
        bool bIsTracked;
        struct FRotator Orientation;
        bool bHasPositionalTracking;
        struct FVector position;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bIsTracked = Parms.bIsTracked;
    Orientation = Parms.Orientation;
    bHasPositionalTracking = Parms.bHasPositionalTracking;
    position = Parms.position;
}

void UHeadMountedDisplayFunctionLibrary::GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDevicePose");
    struct
    {
        struct FXRDeviceId XRDeviceId;
        bool bIsTracked;
        struct FRotator Orientation;
        bool bHasPositionalTracking;
        struct FVector position;
    } Parms{};
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bIsTracked = Parms.bIsTracked;
    Orientation = Parms.Orientation;
    bHasPositionalTracking = Parms.bHasPositionalTracking;
    position = Parms.position;
}

bool UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetControllerTransformForTime");
    struct
    {
        struct UObject* WorldContext;
        int32_t ControllerIndex;
        struct FName MotionSource;
        struct FTimespan Time;
        bool bTimeWasUsed;
        struct FRotator Orientation;
        struct FVector position;
        bool bProvidedLinearVelocity;
        struct FVector LinearVelocity;
        bool bProvidedAngularVelocity;
        struct FVector AngularVelocityRadPerSec;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.ControllerIndex = (int32_t)ControllerIndex;
    Parms.MotionSource = (struct FName)MotionSource;
    Parms.Time = (struct FTimespan)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bTimeWasUsed = Parms.bTimeWasUsed;
    Orientation = Parms.Orientation;
    position = Parms.position;
    bProvidedLinearVelocity = Parms.bProvidedLinearVelocity;
    LinearVelocity = Parms.LinearVelocity;
    bProvidedAngularVelocity = Parms.bProvidedAngularVelocity;
    AngularVelocityRadPerSec = Parms.AngularVelocityRadPerSec;
    return Parms.ReturnValue;
}

struct TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(struct FName SystemId, EXRTrackedDeviceType DeviceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "EnumerateTrackedDevices");
    struct
    {
        struct FName SystemId;
        enum EXRTrackedDeviceType DeviceType;
        struct TArray<struct FXRDeviceId> ReturnValue;
    } Parms{};
    Parms.SystemId = (struct FName)SystemId;
    Parms.DeviceType = (enum EXRTrackedDeviceType)DeviceType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableLowPersistenceMode");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UHeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableHMD");
    struct
    {
        bool bEnable;
        bool ReturnValue;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "DisconnectRemoteXRDevice");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(struct FString IPAddress, int32_t bitrate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ConnectRemoteXRDevice");
    struct
    {
        struct FString IPAddress;
        int32_t bitrate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.IPAddress = (struct FString)IPAddress;
    Parms.bitrate = (int32_t)bitrate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UHeadMountedDisplayFunctionLibrary::ConfigureGestures(const struct FXRGestureConfig& GestureConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ConfigureGestures");
    struct
    {
        struct FXRGestureConfig GestureConfig;
        bool ReturnValue;
    } Parms{};
    Parms.GestureConfig = (struct FXRGestureConfig)GestureConfig;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(const struct FName& ActionPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ClearXRTimedInputActionDelegate");
    struct
    {
        struct FName ActionPath;
    } Parms{};
    Parms.ActionPath = (struct FName)ActionPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "CalibrateExternalTrackingToHMD");
    struct
    {
        struct FTransform ExternalTrackingTransform;
    } Parms{};
    Parms.ExternalTrackingTransform = (struct FTransform)ExternalTrackingTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMotionControllerComponent
void UMotionControllerComponent::SetTrackingSource(EControllerHand NewSource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "SetTrackingSource");
    struct
    {
        enum EControllerHand NewSource;
    } Parms{};
    Parms.NewSource = (enum EControllerHand)NewSource;
    this->ProcessEvent(Func, &Parms);
}

void UMotionControllerComponent::SetTrackingMotionSource(struct FName NewSource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "SetTrackingMotionSource");
    struct
    {
        struct FName NewSource;
    } Parms{};
    Parms.NewSource = (struct FName)NewSource;
    this->ProcessEvent(Func, &Parms);
}

void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "SetShowDeviceModel");
    struct
    {
        bool bShowControllerModel;
    } Parms{};
    Parms.bShowControllerModel = (bool)bShowControllerModel;
    this->ProcessEvent(Func, &Parms);
}

void UMotionControllerComponent::SetDisplayModelSource(struct FName NewDisplayModelSource)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "SetDisplayModelSource");
    struct
    {
        struct FName NewDisplayModelSource;
    } Parms{};
    Parms.NewDisplayModelSource = (struct FName)NewDisplayModelSource;
    this->ProcessEvent(Func, &Parms);
}

void UMotionControllerComponent::SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "SetCustomDisplayMesh");
    struct
    {
        struct UStaticMesh* NewDisplayMesh;
    } Parms{};
    Parms.NewDisplayMesh = (struct UStaticMesh*)NewDisplayMesh;
    this->ProcessEvent(Func, &Parms);
}

void UMotionControllerComponent::SetAssociatedPlayerIndex(int32_t NewPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "SetAssociatedPlayerIndex");
    struct
    {
        int32_t NewPlayer;
    } Parms{};
    Parms.NewPlayer = (int32_t)NewPlayer;
    this->ProcessEvent(Func, &Parms);
}

void UMotionControllerComponent::OnMotionControllerUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "OnMotionControllerUpdated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMotionControllerComponent::IsTracked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "IsTracked");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EControllerHand UMotionControllerComponent::GetTrackingSource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "GetTrackingSource");
    struct
    {
        enum EControllerHand ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMotionControllerComponent::GetParameterValue(struct FName InName, bool& bValueFound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "GetParameterValue");
    struct
    {
        struct FName InName;
        bool bValueFound;
        float ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    this->ProcessEvent(Func, &Parms);
    bValueFound = Parms.bValueFound;
    return Parms.ReturnValue;
}

struct FVector UMotionControllerComponent::GetHandJointPosition(int32_t jointIndex, bool& bValueFound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "GetHandJointPosition");
    struct
    {
        int32_t jointIndex;
        bool bValueFound;
        struct FVector ReturnValue;
    } Parms{};
    Parms.jointIndex = (int32_t)jointIndex;
    this->ProcessEvent(Func, &Parms);
    bValueFound = Parms.bValueFound;
    return Parms.ReturnValue;
}

// UMotionTrackedDeviceFunctionLibrary
void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "SetIsControllerMotionTrackingEnabledByDefault");
    struct
    {
        bool Enable;
    } Parms{};
    Parms.Enable = (bool)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForSource");
    struct
    {
        int32_t PlayerIndex;
        struct FName SourceName;
        bool ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.SourceName = (struct FName)SourceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForDevice");
    struct
    {
        int32_t PlayerIndex;
        enum EControllerHand Hand;
        bool ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.Hand = (enum EControllerHand)Hand;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForComponent");
    struct
    {
        struct UMotionControllerComponent* MotionControllerComponent;
        bool ReturnValue;
    } Parms{};
    Parms.MotionControllerComponent = (struct UMotionControllerComponent*)MotionControllerComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackedDeviceCountManagementNecessary");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionSourceTracking");
    struct
    {
        int32_t PlayerIndex;
        struct FName SourceName;
        bool ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.SourceName = (struct FName)SourceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMotionTrackingEnabledControllerCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetMaximumMotionTrackedControllerCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "GetActiveTrackingSystemName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnumerateMotionSources");
    struct
    {
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfSource");
    struct
    {
        int32_t PlayerIndex;
        struct FName SourceName;
        bool ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.SourceName = (struct FName)SourceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfDevice");
    struct
    {
        int32_t PlayerIndex;
        enum EControllerHand Hand;
        bool ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.Hand = (enum EControllerHand)Hand;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingForComponent");
    struct
    {
        struct UMotionControllerComponent* MotionControllerComponent;
        bool ReturnValue;
    } Parms{};
    Parms.MotionControllerComponent = (struct UMotionControllerComponent*)MotionControllerComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfSource");
    struct
    {
        int32_t PlayerIndex;
        struct FName SourceName;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.SourceName = (struct FName)SourceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfDevice");
    struct
    {
        int32_t PlayerIndex;
        enum EControllerHand Hand;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.Hand = (enum EControllerHand)Hand;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfControllersForPlayer");
    struct
    {
        int32_t PlayerIndex;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingOfAllControllers");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "DisableMotionTrackingForComponent");
    struct
    {
        struct UMotionControllerComponent* MotionControllerComponent;
    } Parms{};
    Parms.MotionControllerComponent = (struct UMotionControllerComponent*)MotionControllerComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UXRAssetFunctionLibrary
struct UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRAssetFunctionLibrary", "AddNamedDeviceVisualizationComponentBlocking");
    struct
    {
        struct AActor* Target;
        struct FName SystemName;
        struct FName DeviceName;
        bool bManualAttachment;
        struct FTransform RelativeTransform;
        struct FXRDeviceId XRDeviceId;
        struct UPrimitiveComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.SystemName = (struct FName)SystemName;
    Parms.DeviceName = (struct FName)DeviceName;
    Parms.bManualAttachment = (bool)bManualAttachment;
    Parms.RelativeTransform = (struct FTransform)RelativeTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    XRDeviceId = Parms.XRDeviceId;
    return Parms.ReturnValue;
}

struct UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(struct AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRAssetFunctionLibrary", "AddDeviceVisualizationComponentBlocking");
    struct
    {
        struct AActor* Target;
        struct FXRDeviceId XRDeviceId;
        bool bManualAttachment;
        struct FTransform RelativeTransform;
        struct UPrimitiveComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    Parms.bManualAttachment = (bool)bManualAttachment;
    Parms.RelativeTransform = (struct FTransform)RelativeTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAsyncTask_LoadXRDeviceVisComponent
struct UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddNamedDeviceVisualizationComponentAsync");
    struct
    {
        struct AActor* Target;
        struct FName SystemName;
        struct FName DeviceName;
        bool bManualAttachment;
        struct FTransform RelativeTransform;
        struct FXRDeviceId XRDeviceId;
        struct UPrimitiveComponent* NewComponent;
        struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.SystemName = (struct FName)SystemName;
    Parms.DeviceName = (struct FName)DeviceName;
    Parms.bManualAttachment = (bool)bManualAttachment;
    Parms.RelativeTransform = (struct FTransform)RelativeTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    XRDeviceId = Parms.XRDeviceId;
    NewComponent = Parms.NewComponent;
    return Parms.ReturnValue;
}

struct UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(struct AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddDeviceVisualizationComponentAsync");
    struct
    {
        struct AActor* Target;
        struct FXRDeviceId XRDeviceId;
        bool bManualAttachment;
        struct FTransform RelativeTransform;
        struct UPrimitiveComponent* NewComponent;
        struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    Parms.bManualAttachment = (bool)bManualAttachment;
    Parms.RelativeTransform = (struct FTransform)RelativeTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    NewComponent = Parms.NewComponent;
    return Parms.ReturnValue;
}

// UXRLoadingScreenFunctionLibrary
void UXRLoadingScreenFunctionLibrary::ShowLoadingScreen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "ShowLoadingScreen");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "SetLoadingScreen");
    struct
    {
        struct UTexture* Texture;
        struct FVector2D Scale;
        struct FVector Offset;
        bool bShowLoadingMovie;
        bool bShowOnSet;
    } Parms{};
    Parms.Texture = (struct UTexture*)Texture;
    Parms.Scale = (struct FVector2D)Scale;
    Parms.Offset = (struct FVector)Offset;
    Parms.bShowLoadingMovie = (bool)bShowLoadingMovie;
    Parms.bShowOnSet = (bool)bShowOnSet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UXRLoadingScreenFunctionLibrary::HideLoadingScreen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "HideLoadingScreen");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "ClearLoadingScreenSplashes");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "AddLoadingScreenSplash");
    struct
    {
        struct UTexture* Texture;
        struct FVector Translation;
        struct FRotator Rotation;
        struct FVector2D Size;
        struct FRotator DeltaRotation;
        bool bClearBeforeAdd;
    } Parms{};
    Parms.Texture = (struct UTexture*)Texture;
    Parms.Translation = (struct FVector)Translation;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Size = (struct FVector2D)Size;
    Parms.DeltaRotation = (struct FRotator)DeltaRotation;
    Parms.bClearBeforeAdd = (bool)bClearBeforeAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
