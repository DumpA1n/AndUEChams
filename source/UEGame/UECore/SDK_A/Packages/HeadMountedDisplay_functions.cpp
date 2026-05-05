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

void UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin Origin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetTrackingOrigin");
    struct
    {
        enum EHMDTrackingOrigin Origin;
    } Parms{};
    Parms.Origin = (enum EHMDTrackingOrigin)Origin;
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

void UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, uint8_t bDrawEyeFirst, uint8_t bClearBlack, uint8_t bUseAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "SetSpectatorScreenModeTexturePlusEyeLayout");
    struct
    {
        struct FVector2D EyeRectMin;
        struct FVector2D EyeRectMax;
        struct FVector2D TextureRectMin;
        struct FVector2D TextureRectMax;
        uint8_t bDrawEyeFirst;
        uint8_t bClearBlack;
        uint8_t bUseAlpha;
    } Parms{};
    Parms.EyeRectMin = (struct FVector2D)EyeRectMin;
    Parms.EyeRectMax = (struct FVector2D)EyeRectMax;
    Parms.TextureRectMin = (struct FVector2D)TextureRectMin;
    Parms.TextureRectMax = (struct FVector2D)TextureRectMax;
    Parms.bDrawEyeFirst = (uint8_t)bDrawEyeFirst;
    Parms.bClearBlack = (uint8_t)bClearBlack;
    Parms.bUseAlpha = (uint8_t)bUseAlpha;
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

void UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, EOrientPositionSelector Options)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "ResetOrientationAndPosition");
    struct
    {
        float Yaw;
        enum EOrientPositionSelector Options;
    } Parms{};
    Parms.Yaw = (float)Yaw;
    Parms.Options = (enum EOrientPositionSelector)Options;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsSpectatorScreenModeControllable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsInLowPersistenceMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsHeadMountedDisplayConnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(const struct FXRDeviceId& XRDeviceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "IsDeviceTracking");
    struct
    {
        struct FXRDeviceId XRDeviceId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "HasValidTrackingPosition");
    struct
    {
        uint8_t ReturnValue;
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

void UHeadMountedDisplayFunctionLibrary::GetVRFocusState(uint8_t& bUseFocus, uint8_t& bHasFocus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetVRFocusState");
    struct
    {
        uint8_t bUseFocus;
        uint8_t bHasFocus;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bUseFocus = Parms.bUseFocus;
    bHasFocus = Parms.bHasFocus;
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

void UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, uint8_t& IsActive, int32_t Index)
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
        uint8_t IsActive;
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

EHMDTrackingOrigin UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetTrackingOrigin");
    struct
    {
        enum EHMDTrackingOrigin ReturnValue;
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

EHMDWornState UHeadMountedDisplayFunctionLibrary::GetHMDWornState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetHMDWornState");
    struct
    {
        enum EHMDWornState ReturnValue;
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

void UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(struct UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, uint8_t& bIsTracked, struct FRotator& Orientation, uint8_t& bHasPositionalTracking, struct FVector& Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDeviceWorldPose");
    struct
    {
        struct UObject* WorldContext;
        struct FXRDeviceId XRDeviceId;
        uint8_t bIsTracked;
        struct FRotator Orientation;
        uint8_t bHasPositionalTracking;
        struct FVector Position;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bIsTracked = Parms.bIsTracked;
    Orientation = Parms.Orientation;
    bHasPositionalTracking = Parms.bHasPositionalTracking;
    Position = Parms.Position;
}

void UHeadMountedDisplayFunctionLibrary::GetDevicePose(const struct FXRDeviceId& XRDeviceId, uint8_t& bIsTracked, struct FRotator& Orientation, uint8_t& bHasPositionalTracking, struct FVector& Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "GetDevicePose");
    struct
    {
        struct FXRDeviceId XRDeviceId;
        uint8_t bIsTracked;
        struct FRotator Orientation;
        uint8_t bHasPositionalTracking;
        struct FVector Position;
    } Parms{};
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    bIsTracked = Parms.bIsTracked;
    Orientation = Parms.Orientation;
    bHasPositionalTracking = Parms.bHasPositionalTracking;
    Position = Parms.Position;
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

void UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableLowPersistenceMode");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UHeadMountedDisplayFunctionLibrary::EnableHMD(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HeadMountedDisplayFunctionLibrary", "EnableHMD");
    struct
    {
        uint8_t bEnable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

void UMotionControllerComponent::SetShowDeviceModel(uint8_t bShowControllerModel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "SetShowDeviceModel");
    struct
    {
        uint8_t bShowControllerModel;
    } Parms{};
    Parms.bShowControllerModel = (uint8_t)bShowControllerModel;
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

uint8_t UMotionControllerComponent::IsTracked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "IsTracked");
    struct
    {
        uint8_t ReturnValue;
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

float UMotionControllerComponent::GetParameterValue(struct FName InName, uint8_t& bValueFound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "GetParameterValue");
    struct
    {
        struct FName InName;
        uint8_t bValueFound;
        float ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    this->ProcessEvent(Func, &Parms);
    bValueFound = Parms.bValueFound;
    return Parms.ReturnValue;
}

struct FVector UMotionControllerComponent::GetHandJointPosition(int32_t jointIndex, uint8_t& bValueFound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MotionControllerComponent", "GetHandJointPosition");
    struct
    {
        int32_t jointIndex;
        uint8_t bValueFound;
        struct FVector ReturnValue;
    } Parms{};
    Parms.jointIndex = (int32_t)jointIndex;
    this->ProcessEvent(Func, &Parms);
    bValueFound = Parms.bValueFound;
    return Parms.ReturnValue;
}

// UMotionTrackedDeviceFunctionLibrary
void UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "SetIsControllerMotionTrackingEnabledByDefault");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForSource");
    struct
    {
        int32_t PlayerIndex;
        struct FName SourceName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.SourceName = (struct FName)SourceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForDevice");
    struct
    {
        int32_t PlayerIndex;
        enum EControllerHand Hand;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.Hand = (enum EControllerHand)Hand;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackingEnabledForComponent");
    struct
    {
        struct UMotionControllerComponent* MotionControllerComponent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MotionControllerComponent = (struct UMotionControllerComponent*)MotionControllerComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionTrackedDeviceCountManagementNecessary");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "IsMotionSourceTracking");
    struct
    {
        int32_t PlayerIndex;
        struct FName SourceName;
        uint8_t ReturnValue;
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

uint8_t UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfSource");
    struct
    {
        int32_t PlayerIndex;
        struct FName SourceName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.SourceName = (struct FName)SourceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingOfDevice");
    struct
    {
        int32_t PlayerIndex;
        enum EControllerHand Hand;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PlayerIndex = (int32_t)PlayerIndex;
    Parms.Hand = (enum EControllerHand)Hand;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MotionTrackedDeviceFunctionLibrary", "EnableMotionTrackingForComponent");
    struct
    {
        struct UMotionControllerComponent* MotionControllerComponent;
        uint8_t ReturnValue;
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
struct UPrimitiveComponent* UXRAssetFunctionLibrary::AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, uint8_t bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRAssetFunctionLibrary", "AddNamedDeviceVisualizationComponentBlocking");
    struct
    {
        struct AActor* Target;
        struct FName SystemName;
        struct FName DeviceName;
        uint8_t bManualAttachment;
        struct FTransform RelativeTransform;
        struct FXRDeviceId XRDeviceId;
        struct UPrimitiveComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.SystemName = (struct FName)SystemName;
    Parms.DeviceName = (struct FName)DeviceName;
    Parms.bManualAttachment = (uint8_t)bManualAttachment;
    Parms.RelativeTransform = (struct FTransform)RelativeTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    XRDeviceId = Parms.XRDeviceId;
    return Parms.ReturnValue;
}

struct UPrimitiveComponent* UXRAssetFunctionLibrary::AddDeviceVisualizationComponentBlocking(struct AActor* Target, const struct FXRDeviceId& XRDeviceId, uint8_t bManualAttachment, const struct FTransform& RelativeTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRAssetFunctionLibrary", "AddDeviceVisualizationComponentBlocking");
    struct
    {
        struct AActor* Target;
        struct FXRDeviceId XRDeviceId;
        uint8_t bManualAttachment;
        struct FTransform RelativeTransform;
        struct UPrimitiveComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    Parms.bManualAttachment = (uint8_t)bManualAttachment;
    Parms.RelativeTransform = (struct FTransform)RelativeTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAsyncTask_LoadXRDeviceVisComponent
struct UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, uint8_t bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddNamedDeviceVisualizationComponentAsync");
    struct
    {
        struct AActor* Target;
        struct FName SystemName;
        struct FName DeviceName;
        uint8_t bManualAttachment;
        struct FTransform RelativeTransform;
        struct FXRDeviceId XRDeviceId;
        struct UPrimitiveComponent* NewComponent;
        struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.SystemName = (struct FName)SystemName;
    Parms.DeviceName = (struct FName)DeviceName;
    Parms.bManualAttachment = (uint8_t)bManualAttachment;
    Parms.RelativeTransform = (struct FTransform)RelativeTransform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    XRDeviceId = Parms.XRDeviceId;
    NewComponent = Parms.NewComponent;
    return Parms.ReturnValue;
}

struct UAsyncTask_LoadXRDeviceVisComponent* UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(struct AActor* Target, const struct FXRDeviceId& XRDeviceId, uint8_t bManualAttachment, const struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AsyncTask_LoadXRDeviceVisComponent", "AddDeviceVisualizationComponentAsync");
    struct
    {
        struct AActor* Target;
        struct FXRDeviceId XRDeviceId;
        uint8_t bManualAttachment;
        struct FTransform RelativeTransform;
        struct UPrimitiveComponent* NewComponent;
        struct UAsyncTask_LoadXRDeviceVisComponent* ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.XRDeviceId = (struct FXRDeviceId)XRDeviceId;
    Parms.bManualAttachment = (uint8_t)bManualAttachment;
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

void UXRLoadingScreenFunctionLibrary::SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector offset, uint8_t bShowLoadingMovie, uint8_t bShowOnSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "SetLoadingScreen");
    struct
    {
        struct UTexture* Texture;
        struct FVector2D Scale;
        struct FVector offset;
        uint8_t bShowLoadingMovie;
        uint8_t bShowOnSet;
    } Parms{};
    Parms.Texture = (struct UTexture*)Texture;
    Parms.Scale = (struct FVector2D)Scale;
    Parms.offset = (struct FVector)offset;
    Parms.bShowLoadingMovie = (uint8_t)bShowLoadingMovie;
    Parms.bShowOnSet = (uint8_t)bShowOnSet;
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

void UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash(struct UTexture* Texture, struct FVector translation, struct FRotator Rotation, struct FVector2D size, struct FRotator DeltaRotation, uint8_t bClearBeforeAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XRLoadingScreenFunctionLibrary", "AddLoadingScreenSplash");
    struct
    {
        struct UTexture* Texture;
        struct FVector translation;
        struct FRotator Rotation;
        struct FVector2D size;
        struct FRotator DeltaRotation;
        uint8_t bClearBeforeAdd;
    } Parms{};
    Parms.Texture = (struct UTexture*)Texture;
    Parms.translation = (struct FVector)translation;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.size = (struct FVector2D)size;
    Parms.DeltaRotation = (struct FRotator)DeltaRotation;
    Parms.bClearBeforeAdd = (uint8_t)bClearBeforeAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
