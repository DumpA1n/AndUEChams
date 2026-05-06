#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: HeadMountedDisplay
// Enums: 11
// Structs: 4
// Classes: 7

struct AActor;
enum class EControllerHand : uint8_t;
struct UMaterialInterface;
struct UPrimitiveComponent;
struct UStaticMesh;
struct UTexture;
struct FXRMotionControllerData;
struct FXRHMDData;
struct FXRDeviceId;
struct FXRGestureConfig;
struct UHeadMountedDisplayFunctionLibrary;
struct UMotionControllerComponent;
struct UMotionTrackedDeviceFunctionLibrary;
struct UVRNotificationsComponent;
struct UXRAssetFunctionLibrary;
struct UAsyncTask_LoadXRDeviceVisComponent;
struct UXRLoadingScreenFunctionLibrary;

// Object: Enum HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8_t
{
	Controller = 0,
	Hand = 1,
	EXRVisualType_MAX = 2
};

// Object: Enum HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8_t
{
	Palm = 0,
	Wrist = 1,
	ThumbMetacarpal = 2,
	ThumbProximal = 3,
	ThumbDistal = 4,
	ThumbTip = 5,
	IndexMetacarpal = 6,
	IndexProximal = 7,
	IndexIntermediate = 8,
	IndexDistal = 9,
	IndexTip = 10,
	MiddleMetacarpal = 11,
	MiddleProximal = 12,
	MiddleIntermediate = 13,
	MiddleDistal = 14,
	MiddleTip = 15,
	RingMetacarpal = 16,
	RingProximal = 17,
	RingIntermediate = 18,
	RingDistal = 19,
	RingTip = 20,
	LittleMetacarpal = 21,
	LittleProximal = 22,
	LittleIntermediate = 23,
	LittleDistal = 24,
	LittleTip = 25,
	EHandKeypoint_MAX = 26
};

// Object: Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint16_t
{
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 254,
	Any = 255,
	EXRTrackedDeviceType_MAX = 256
};

// Object: Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8
};

// Object: Enum HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8_t
{
	NoFlags = 0,
	IsAR = 1,
	IsTablet = 2,
	IsHeadMounted = 4,
	SupportsHandTracking = 8,
	EXRSystemFlags_MAX = 9
};

// Object: Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8_t
{
	NoTrackingSystem = 0,
	FeatureNotSupported = 1,
	NoValidViewport = 2,
	MiscFailure = 3,
	Success = 4,
	EXRDeviceConnectionResult_MAX = 5
};

// Object: Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3
};

// Object: Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	Floor = 0,
	Eye = 1,
	Stage = 2,
	Unbounded = 3,
	EHMDTrackingOrigin_MAX = 4
};

// Object: Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3
};

// Object: Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3
};

// Object: Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8_t
{
	None = 0,
	Manipulation = 1,
	Navigation = 2,
	NavigationRails = 3,
	ESpatialInputGestureAxis_MAX = 4
};

// Object: ScriptStruct HeadMountedDisplay.XRMotionControllerData
// Size: 0xA0 (Inherited: 0x0)
struct FXRMotionControllerData
{
	bool bValid; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName DeviceName; // 0x4(0x8)
	struct FGuid ApplicationInstanceID; // 0xC(0x10)
	EXRVisualType DeviceVisualType; // 0x1C(0x1)
	EControllerHand HandIndex; // 0x1D(0x1)
	ETrackingStatus TrackingStatus; // 0x1E(0x1)
	uint8_t Pad_0x1F[0x1]; // 0x1F(0x1)
	struct FVector GripPosition; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat GripRotation; // 0x30(0x10)
	struct FVector AimPosition; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FQuat AimRotation; // 0x50(0x10)
	struct TArray<struct FVector> HandKeyPositions; // 0x60(0x10)
	struct TArray<struct FQuat> HandKeyRotations; // 0x70(0x10)
	struct TArray<float> HandKeyRadii; // 0x80(0x10)
	bool bIsGrasped; // 0x90(0x1)
	uint8_t Pad_0x91[0xF]; // 0x91(0xF)
};

// Object: ScriptStruct HeadMountedDisplay.XRHMDData
// Size: 0x40 (Inherited: 0x0)
struct FXRHMDData
{
	bool bValid; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName DeviceName; // 0x4(0x8)
	struct FGuid ApplicationInstanceID; // 0xC(0x10)
	ETrackingStatus TrackingStatus; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	struct FVector position; // 0x20(0xC)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FQuat Rotation; // 0x30(0x10)
};

// Object: ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0xC (Inherited: 0x0)
struct FXRDeviceId
{
	struct FName SystemName; // 0x0(0x8)
	int32_t DeviceID; // 0x8(0x4)
};

// Object: ScriptStruct HeadMountedDisplay.XRGestureConfig
// Size: 0x6 (Inherited: 0x0)
struct FXRGestureConfig
{
	bool bTap; // 0x0(0x1)
	bool bHold; // 0x1(0x1)
	ESpatialInputGestureAxis AxisGesture; // 0x2(0x1)
	bool bNavigationAxisX; // 0x3(0x1)
	bool bNavigationAxisY; // 0x4(0x1)
	bool bNavigationAxisZ; // 0x5(0x1)
};

// Object: Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UHeadMountedDisplayFunctionLibrary, "HeadMountedDisplayFunctionLibrary")

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa861464
	// Params: [ Num(1) Size(0x30) ]
	static void UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa8603f8
	// Params: [ Num(2) Size(0x18) ]
	static void SetXRTimedInputActionDelegate(const struct FName& ActionName, const struct FDelegate& InDelegate);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa86050c
	// Params: [ Num(1) Size(0x10) ]
	static void SetXRDisconnectDelegate(const struct FDelegate& InDisconnectedDelegate);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa861828
	// Params: [ Num(2) Size(0xC) ]
	static void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8616e8
	// Params: [ Num(1) Size(0x1) ]
	static void SetTrackingOrigin(uint8_t Origin);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa861204
	// Params: [ Num(1) Size(0x8) ]
	static void SetSpectatorScreenTexture(struct UTexture* InTexture);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa860fdc
	// Params: [ Num(7) Size(0x23) ]
	static void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa86129c
	// Params: [ Num(1) Size(0x1) ]
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa861968
	// Params: [ Num(2) Size(0x8) ]
	static void SetClippingPlanes(float Near, float Far);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa861a3c
	// Params: [ Num(2) Size(0x5) ]
	static void ResetOrientationAndPosition(float Yaw, uint8_t Options);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa861334
	// Params: [ Num(1) Size(0x1) ]
	static bool IsSpectatorScreenModeControllable();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa861ba4
	// Params: [ Num(1) Size(0x1) ]
	static bool IsInLowPersistenceMode();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa862578
	// Params: [ Num(1) Size(0x1) ]
	static bool IsHeadMountedDisplayEnabled();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa862540
	// Params: [ Num(1) Size(0x1) ]
	static bool IsHeadMountedDisplayConnected();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa860a00
	// Params: [ Num(2) Size(0xD) ]
	static bool IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa86222c
	// Params: [ Num(1) Size(0x1) ]
	static bool HasValidTrackingPosition();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa862424
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetXRSystemFlags();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa861780
	// Params: [ Num(2) Size(0xC) ]
	static float GetWorldToMetersScale(struct UObject* WorldContext);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xa86136c
	// Params: [ Num(2) Size(0x2) ]
	static void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa862388
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetVersionString();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa8615fc
	// Params: [ Num(2) Size(0x40) ]
	static struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa861e38
	// Params: [ Num(11) Size(0x3C) ]
	static void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa8616b4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetTrackingOrigin();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa861934
	// Params: [ Num(1) Size(0x4) ]
	static float GetScreenPercentage();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa861bbc
	// Params: [ Num(7) Size(0x2C) ]
	static void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa861900
	// Params: [ Num(1) Size(0x4) ]
	static float GetPixelDensity();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xa862264
	// Params: [ Num(2) Size(0x18) ]
	static void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa8621f8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetNumOfTrackingSensors();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa86079c
	// Params: [ Num(3) Size(0xB0) ]
	static void GetMotionControllerData(struct UObject* WorldContext, EControllerHand Hand, struct FXRMotionControllerData& MotionControllerData);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa862354
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetHMDWornState();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa862458
	// Params: [ Num(1) Size(0x8) ]
	static struct FName GetHMDDeviceName();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa860910
	// Params: [ Num(2) Size(0x50) ]
	static void GetHMDData(struct UObject* WorldContext, struct FXRHMDData& HMDData);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa860abc
	// Params: [ Num(6) Size(0x34) ]
	static void GetDeviceWorldPose(struct UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa860cdc
	// Params: [ Num(5) Size(0x2C) ]
	static void GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool& bIsTracked, struct FRotator& Orientation, bool& bHasPositionalTracking, struct FVector& position);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa85ffcc
	// Params: [ Num(12) Size(0x5D) ]
	static bool GetControllerTransformForTime(struct UObject* WorldContext, int32_t ControllerIndex, struct FName MotionSource, struct FTimespan Time, bool& bTimeWasUsed, struct FRotator& Orientation, struct FVector& position, bool& bProvidedLinearVelocity, struct FVector& LinearVelocity, bool& bProvidedAngularVelocity, struct FVector& AngularVelocityRadPerSec);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa860ebc
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, EXRTrackedDeviceType DeviceType);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa861b14
	// Params: [ Num(1) Size(0x1) ]
	static void EnableLowPersistenceMode(bool bEnable);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa86248c
	// Params: [ Num(2) Size(0x2) ]
	static bool EnableHMD(bool bEnable);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8605cc
	// Params: [ Num(0) Size(0x0) ]
	static void DisconnectRemoteXRDevice();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8605e0
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t ConnectRemoteXRDevice(struct FString IPAddress, int32_t bitrate);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa8606d8
	// Params: [ Num(2) Size(0x7) ]
	static bool ConfigureGestures(const struct FXRGestureConfig& GestureConfig);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xa860354
	// Params: [ Num(1) Size(0x8) ]
	static void ClearXRTimedInputActionDelegate(const struct FName& ActionPath);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa861530
	// Params: [ Num(1) Size(0x30) ]
	static void CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
};

// Object: Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x730 (Inherited: 0x680)
struct UMotionControllerComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UMotionControllerComponent, "MotionControllerComponent")

	int32_t PlayerIndex; // 0x678(0x4)
	EControllerHand Hand; // 0x67C(0x1)
	struct FName MotionSource; // 0x680(0x8)
	uint8_t bDisableLowLatencyUpdate : 1; // 0x688(0x1), Mask(0x1)
	ETrackingStatus CurrentTrackingStatus; // 0x689(0x1)
	bool bDisplayDeviceModel; // 0x68A(0x1)
	struct FName DisplayModelSource; // 0x68C(0x8)
	uint8_t BitPad_0x697_1 : 7; // 0x697(0x1)
	struct UStaticMesh* CustomDisplayMesh; // 0x698(0x8)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x6A0(0x10)
	uint8_t Pad_0x6B0[0x60]; // 0x6B0(0x60)
	struct UPrimitiveComponent* DisplayComponent; // 0x710(0x8)
	uint8_t Pad_0x718[0x18]; // 0x718(0x18)

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa862e70
	// Params: [ Num(1) Size(0x1) ]
	void SetTrackingSource(EControllerHand NewSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa862d94
	// Params: [ Num(1) Size(0x8) ]
	void SetTrackingMotionSource(struct FName NewSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa863068
	// Params: [ Num(1) Size(0x1) ]
	void SetShowDeviceModel(bool bShowControllerModel);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa862fc0
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayModelSource(struct FName NewDisplayModelSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa862f18
	// Params: [ Num(1) Size(0x8) ]
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xa862cec
	// Params: [ Num(1) Size(0x4) ]
	void SetAssociatedPlayerIndex(int32_t NewPlayer);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnMotionControllerUpdated();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.IsTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa863118
	// Params: [ Num(1) Size(0x1) ]
	bool IsTracked();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xa862e3c
	// Params: [ Num(1) Size(0x1) ]
	EControllerHand GetTrackingSource();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0xa862bf0
	// Params: [ Num(3) Size(0x10) ]
	float GetParameterValue(struct FName InName, bool& bValueFound);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa862aec
	// Params: [ Num(3) Size(0x14) ]
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);
};

// Object: Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMotionTrackedDeviceFunctionLibrary, "MotionTrackedDeviceFunctionLibrary")

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa863bf0
	// Params: [ Num(1) Size(0x1) ]
	static void SetIsControllerMotionTrackingEnabledByDefault(bool Enable);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa8639b0
	// Params: [ Num(3) Size(0xD) ]
	static bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa863a9c
	// Params: [ Num(3) Size(0x6) ]
	static bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa863904
	// Params: [ Num(2) Size(0x9) ]
	static bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa863c90
	// Params: [ Num(1) Size(0x1) ]
	static bool IsMotionTrackedDeviceCountManagementNecessary();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8631d0
	// Params: [ Num(3) Size(0xD) ]
	static bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa863b88
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMotionTrackingEnabledControllerCount();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xa863bbc
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMaximumMotionTrackedControllerCount();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8632bc
	// Params: [ Num(1) Size(0x8) ]
	static struct FName GetActiveTrackingSystemName();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8632f0
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FName> EnumerateMotionSources();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa86372c
	// Params: [ Num(3) Size(0xD) ]
	static bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa863818
	// Params: [ Num(3) Size(0x6) ]
	static bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa863680
	// Params: [ Num(2) Size(0x9) ]
	static bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8634d0
	// Params: [ Num(2) Size(0xC) ]
	static void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8635a8
	// Params: [ Num(2) Size(0x5) ]
	static void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa86338c
	// Params: [ Num(1) Size(0x4) ]
	static void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa863424
	// Params: [ Num(0) Size(0x0) ]
	static void DisableMotionTrackingOfAllControllers();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa863438
	// Params: [ Num(1) Size(0x8) ]
	static void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent);
};

// Object: Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x170 (Inherited: 0xE0)
struct UVRNotificationsComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UVRNotificationsComponent, "VRNotificationsComponent")

	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xE0(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xF0(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0x100(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0x110(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x130(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x140(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x150(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x160(0x10)
};

// Object: Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UXRAssetFunctionLibrary, "XRAssetFunctionLibrary")

	// Object: Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa863d48
	// Params: [ Num(7) Size(0x68) ]
	static struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId);

	// Object: Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa863f80
	// Params: [ Num(5) Size(0x58) ]
	static struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform);
};

// Object: Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x60 (Inherited: 0x30)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase
{
	DEFINE_UE_CLASS_HELPERS(UAsyncTask_LoadXRDeviceVisComponent, "AsyncTask_LoadXRDeviceVisComponent")

	struct FMulticastInlineDelegate OnModelLoaded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
	struct UPrimitiveComponent* SpawnedComponent; // 0x58(0x8)

	// Object: Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa864364
	// Params: [ Num(8) Size(0x70) ]
	static struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent);

	// Object: Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xa86415c
	// Params: [ Num(6) Size(0x60) ]
	static struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, const struct FXRDeviceId& XRDeviceId, bool bManualAttachment, const struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent);
};

// Object: Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UXRLoadingScreenFunctionLibrary, "XRLoadingScreenFunctionLibrary")

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8646bc
	// Params: [ Num(0) Size(0x0) ]
	static void ShowLoadingScreen();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa8648c8
	// Params: [ Num(5) Size(0x1E) ]
	static void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8646a8
	// Params: [ Num(0) Size(0x0) ]
	static void HideLoadingScreen();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xa8648b4
	// Params: [ Num(0) Size(0x0) ]
	static void ClearLoadingScreenSplashes();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xa8646d0
	// Params: [ Num(6) Size(0x35) ]
	static void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd);
};

} // namespace SDK
