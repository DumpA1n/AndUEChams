#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: HeadMountedDisplay
// Enums: 6
// Structs: 1
// Classes: 7

struct AActor;
enum class EControllerHand : uint8_t;
struct UMaterialInterface;
struct UPrimitiveComponent;
struct UStaticMesh;
struct UTexture;
struct FXRDeviceId;
struct UHeadMountedDisplayFunctionLibrary;
struct UMotionControllerComponent;
struct UMotionTrackedDeviceFunctionLibrary;
struct UVRNotificationsComponent;
struct UXRAssetFunctionLibrary;
struct UAsyncTask_LoadXRDeviceVisComponent;
struct UXRLoadingScreenFunctionLibrary;

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
	EHMDTrackingOrigin_MAX = 3
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

// Object: ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0xC (Inherited: 0x0)
struct FXRDeviceId
{
	struct FName SystemName; // 0x0(0x8)
	int32_t DeviceID; // 0x8(0x4)
};

// Object: Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UHeadMountedDisplayFunctionLibrary, "HeadMountedDisplayFunctionLibrary")

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c57a68
	// Params: [ Num(1) Size(0x30) ]
	static void UpdateExternalTrackingHMDPosition(const struct FTransform& ExternalTrackingTransform);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c57998
	// Params: [ Num(2) Size(0xC) ]
	static void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c57904
	// Params: [ Num(1) Size(0x1) ]
	static void SetTrackingOrigin(EHMDTrackingOrigin Origin);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c57870
	// Params: [ Num(1) Size(0x8) ]
	static void SetSpectatorScreenTexture(struct UTexture* InTexture);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c57664
	// Params: [ Num(7) Size(0x23) ]
	static void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, uint8_t bDrawEyeFirst, uint8_t bClearBlack, uint8_t bUseAlpha);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c575d0
	// Params: [ Num(1) Size(0x1) ]
	static void SetSpectatorScreenMode(ESpectatorScreenMode Mode);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c57504
	// Params: [ Num(2) Size(0x8) ]
	static void SetClippingPlanes(float Near, float Far);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c57434
	// Params: [ Num(2) Size(0x5) ]
	static void ResetOrientationAndPosition(float Yaw, EOrientPositionSelector Options);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c573fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsSpectatorScreenModeControllable();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c573e4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsInLowPersistenceMode();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c573ac
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsHeadMountedDisplayEnabled();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c57374
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsHeadMountedDisplayConnected();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x15c572b8
	// Params: [ Num(2) Size(0xD) ]
	static uint8_t IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c57280
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t HasValidTrackingPosition();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c571dc
	// Params: [ Num(2) Size(0xC) ]
	static float GetWorldToMetersScale(struct UObject* WorldContext);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c570e4
	// Params: [ Num(2) Size(0x2) ]
	static void GetVRFocusState(uint8_t& bUseFocus, uint8_t& bHasFocus);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c57030
	// Params: [ Num(2) Size(0x40) ]
	static struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c56c74
	// Params: [ Num(11) Size(0x3C) ]
	static void GetTrackingSensorParameters(struct FVector& Origin, struct FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, uint8_t& IsActive, int32_t Index);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c56c40
	// Params: [ Num(1) Size(0x1) ]
	static EHMDTrackingOrigin GetTrackingOrigin();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c56c0c
	// Params: [ Num(1) Size(0x4) ]
	static float GetScreenPercentage();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c56990
	// Params: [ Num(7) Size(0x2C) ]
	static void GetPositionalTrackingCameraParameters(struct FVector& CameraOrigin, struct FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c5695c
	// Params: [ Num(1) Size(0x4) ]
	static float GetPixelDensity();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c5686c
	// Params: [ Num(2) Size(0x18) ]
	static void GetOrientationAndPosition(struct FRotator& DeviceRotation, struct FVector& DevicePosition);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c56838
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetNumOfTrackingSensors();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c56804
	// Params: [ Num(1) Size(0x1) ]
	static EHMDWornState GetHMDWornState();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c567d0
	// Params: [ Num(1) Size(0x8) ]
	static struct FName GetHMDDeviceName();

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c565b4
	// Params: [ Num(6) Size(0x34) ]
	static void GetDeviceWorldPose(struct UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, uint8_t& bIsTracked, struct FRotator& Orientation, uint8_t& bHasPositionalTracking, struct FVector& Position);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c563d4
	// Params: [ Num(5) Size(0x2C) ]
	static void GetDevicePose(const struct FXRDeviceId& XRDeviceId, uint8_t& bIsTracked, struct FRotator& Orientation, uint8_t& bHasPositionalTracking, struct FVector& Position);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c562c0
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, EXRTrackedDeviceType DeviceType);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c56234
	// Params: [ Num(1) Size(0x1) ]
	static void EnableLowPersistenceMode(uint8_t bEnable);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c56184
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t EnableHMD(uint8_t bEnable);

	// Object: Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c560b8
	// Params: [ Num(1) Size(0x30) ]
	static void CalibrateExternalTrackingToHMD(const struct FTransform& ExternalTrackingTransform);
};

// Object: Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x630 (Inherited: 0x580)
struct UMotionControllerComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UMotionControllerComponent, "MotionControllerComponent")

	int32_t PlayerIndex; // 0x578(0x4)
	EControllerHand Hand; // 0x57C(0x1)
	struct FName MotionSource; // 0x580(0x8)
	uint8_t bDisableLowLatencyUpdate : 1; // 0x588(0x1), Mask(0x1)
	ETrackingStatus CurrentTrackingStatus; // 0x589(0x1)
	uint8_t bDisplayDeviceModel : 1; // 0x58A(0x1), Mask(0x1)
	struct FName DisplayModelSource; // 0x58C(0x8)
	uint8_t BitPad_0x596_2 : 6; // 0x596(0x1)
	uint8_t Pad_0x597[0x1]; // 0x597(0x1)
	struct UStaticMesh* CustomDisplayMesh; // 0x598(0x8)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x5A0(0x10)
	uint8_t Pad_0x5B0[0x60]; // 0x5B0(0x60)
	struct UPrimitiveComponent* DisplayComponent; // 0x610(0x8)
	uint8_t Pad_0x618[0x18]; // 0x618(0x18)

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c58434
	// Params: [ Num(1) Size(0x1) ]
	void SetTrackingSource(EControllerHand NewSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c58390
	// Params: [ Num(1) Size(0x8) ]
	void SetTrackingMotionSource(struct FName NewSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c582e4
	// Params: [ Num(1) Size(0x1) ]
	void SetShowDeviceModel(uint8_t bShowControllerModel);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c58240
	// Params: [ Num(1) Size(0x8) ]
	void SetDisplayModelSource(struct FName NewDisplayModelSource);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c5819c
	// Params: [ Num(1) Size(0x8) ]
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x15c580f8
	// Params: [ Num(1) Size(0x4) ]
	void SetAssociatedPlayerIndex(int32_t NewPlayer);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnMotionControllerUpdated();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.IsTracked
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c580dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTracked();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x15c580a8
	// Params: [ Num(1) Size(0x1) ]
	EControllerHand GetTrackingSource();

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// Flags: [Final|Native|Protected|HasOutParms|BlueprintCallable]
	// Offset: 0x15c57fb0
	// Params: [ Num(3) Size(0x10) ]
	float GetParameterValue(struct FName InName, uint8_t& bValueFound);

	// Object: Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c57eb4
	// Params: [ Num(3) Size(0x14) ]
	struct FVector GetHandJointPosition(int32_t jointIndex, uint8_t& bValueFound);
};

// Object: Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMotionTrackedDeviceFunctionLibrary, "MotionTrackedDeviceFunctionLibrary")

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58ff8
	// Params: [ Num(1) Size(0x1) ]
	static void SetIsControllerMotionTrackingEnabledByDefault(uint8_t Enable);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c58f14
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c58e30
	// Params: [ Num(3) Size(0x6) ]
	static uint8_t IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c58d88
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c58d50
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMotionTrackedDeviceCountManagementNecessary();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58c6c
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c58c38
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMotionTrackingEnabledControllerCount();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x15c58c04
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMaximumMotionTrackedControllerCount();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58bd0
	// Params: [ Num(1) Size(0x8) ]
	static struct FName GetActiveTrackingSystemName();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58b38
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FName> EnumerateMotionSources();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58a54
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58970
	// Params: [ Num(3) Size(0x6) ]
	static uint8_t EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c588c8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c587f8
	// Params: [ Num(2) Size(0xC) ]
	static void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58728
	// Params: [ Num(2) Size(0x5) ]
	static void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58694
	// Params: [ Num(1) Size(0x4) ]
	static void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c58680
	// Params: [ Num(0) Size(0x0) ]
	static void DisableMotionTrackingOfAllControllers();

	// Object: Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c585ec
	// Params: [ Num(1) Size(0x8) ]
	static void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent);
};

// Object: Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x188 (Inherited: 0xF8)
struct UVRNotificationsComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UVRNotificationsComponent, "VRNotificationsComponent")

	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xF8(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0x108(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0x118(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0x128(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0x138(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x148(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x158(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x168(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x178(0x10)
};

// Object: Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UXRAssetFunctionLibrary, "XRAssetFunctionLibrary")

	// Object: Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c592c8
	// Params: [ Num(7) Size(0x68) ]
	static struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, uint8_t bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId);

	// Object: Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c59114
	// Params: [ Num(5) Size(0x58) ]
	static struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, const struct FXRDeviceId& XRDeviceId, uint8_t bManualAttachment, const struct FTransform& RelativeTransform);
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
	// Offset: 0x15c59710
	// Params: [ Num(8) Size(0x70) ]
	static struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, uint8_t bManualAttachment, const struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent*& NewComponent);

	// Object: Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x15c59510
	// Params: [ Num(6) Size(0x60) ]
	static struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, const struct FXRDeviceId& XRDeviceId, uint8_t bManualAttachment, const struct FTransform& RelativeTransform, struct UPrimitiveComponent*& NewComponent);
};

// Object: Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UXRLoadingScreenFunctionLibrary, "XRLoadingScreenFunctionLibrary")

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c59de0
	// Params: [ Num(0) Size(0x0) ]
	static void ShowLoadingScreen();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c59c48
	// Params: [ Num(5) Size(0x1E) ]
	static void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector offset, uint8_t bShowLoadingMovie, uint8_t bShowOnSet);

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c59c34
	// Params: [ Num(0) Size(0x0) ]
	static void HideLoadingScreen();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15c59c20
	// Params: [ Num(0) Size(0x0) ]
	static void ClearLoadingScreenSplashes();

	// Object: Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15c59a54
	// Params: [ Num(6) Size(0x35) ]
	static void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector translation, struct FRotator Rotation, struct FVector2D size, struct FRotator DeltaRotation, uint8_t bClearBeforeAdd);
};

} // namespace SDK
