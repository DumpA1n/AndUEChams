#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: CinematicCamera
// Enums: 1
// Structs: 7
// Classes: 4

struct AActor;
struct USceneComponent;
struct USplineComponent;
struct FCameraLookatTrackingSettings;
struct FCameraTrackingFocusSettings;
struct FCameraFocusSettings;
struct FCameraLensSettings;
struct FNamedLensPreset;
struct FCameraFilmbackSettings;
struct FNamedFilmbackPreset;
struct ACameraRig_Crane;
struct ACameraRig_Rail;
struct ACineCameraActor;
struct UCineCameraComponent;

// Object: Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4
};

// Object: ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x50 (Inherited: 0x0)
struct FCameraLookatTrackingSettings
{
	uint8_t bEnableLookAtTracking : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bDrawDebugLookAtTrackingPosition : 1; // 0x0(0x1), Mask(0x2)
	uint8_t BitPad_0x0_2 : 6; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float LookAtTrackingInterpSpeed; // 0x4(0x4)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x18(0x28)
	struct FVector RelativeOffset; // 0x40(0xC)
	uint8_t bAllowRoll : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x38 (Inherited: 0x0)
struct FCameraTrackingFocusSettings
{
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x0(0x28)
	struct FVector RelativeOffset; // 0x28(0xC)
	uint8_t bDrawDebugTrackingFocusPoint : 1; // 0x34(0x1), Mask(0x1)
	uint8_t BitPad_0x34_1 : 7; // 0x34(0x1)
	uint8_t Pad_0x35[0x3]; // 0x35(0x3)
};

// Object: ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x58 (Inherited: 0x0)
struct FCameraFocusSettings
{
	ECameraFocusMethod FocusMethod; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ManualFocusDistance; // 0x4(0x4)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8(0x38)
	uint8_t bDrawDebugFocusPlane : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FColor DebugFocusPlaneColor; // 0x44(0x4)
	uint8_t bSmoothFocusChanges : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float FocusSmoothingInterpSpeed; // 0x4C(0x4)
	float FocusOffset; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x18 (Inherited: 0x0)
struct FCameraLensSettings
{
	float MinFocalLength; // 0x0(0x4)
	float MaxFocalLength; // 0x4(0x4)
	float MinFStop; // 0x8(0x4)
	float MaxFStop; // 0xC(0x4)
	float MinimumFocusDistance; // 0x10(0x4)
	int32_t DiaphragmBladeCount; // 0x14(0x4)
};

// Object: ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x28 (Inherited: 0x0)
struct FNamedLensPreset
{
	struct FString Name; // 0x0(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x18)
};

// Object: ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0xC (Inherited: 0x0)
struct FCameraFilmbackSettings
{
	float SensorWidth; // 0x0(0x4)
	float SensorHeight; // 0x4(0x4)
	float SensorAspectRatio; // 0x8(0x4)
};

// Object: ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size: 0x20 (Inherited: 0x0)
struct FNamedFilmbackPreset
{
	struct FString Name; // 0x0(0x10)
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10(0xC)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: Class CinematicCamera.CameraRig_Crane
// Size: 0x330 (Inherited: 0x300)
struct ACameraRig_Crane : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACameraRig_Crane, "CameraRig_Crane")

	float CranePitch; // 0x300(0x4)
	float CraneYaw; // 0x304(0x4)
	float CraneArmLength; // 0x308(0x4)
	bool bLockMountPitch; // 0x30C(0x1)
	bool bLockMountYaw; // 0x30D(0x1)
	uint8_t Pad_0x30E[0x2]; // 0x30E(0x2)
	struct USceneComponent* TransformComponent; // 0x310(0x8)
	struct USceneComponent* CraneYawControl; // 0x318(0x8)
	struct USceneComponent* CranePitchControl; // 0x320(0x8)
	struct USceneComponent* CraneCameraMount; // 0x328(0x8)
};

// Object: Class CinematicCamera.CameraRig_Rail
// Size: 0x320 (Inherited: 0x300)
struct ACameraRig_Rail : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACameraRig_Rail, "CameraRig_Rail")

	float CurrentPositionOnRail; // 0x300(0x4)
	bool bLockOrientationToRail; // 0x304(0x1)
	uint8_t Pad_0x305[0x3]; // 0x305(0x3)
	struct USceneComponent* TransformComponent; // 0x308(0x8)
	struct USplineComponent* RailSplineComponent; // 0x310(0x8)
	struct USceneComponent* RailCameraMount; // 0x318(0x8)

	// Object: Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb09f898
	// Params: [ Num(1) Size(0x8) ]
	struct USplineComponent* GetRailSplineComponent();
};

// Object: Class CinematicCamera.CineCameraActor
// Size: 0x9B0 (Inherited: 0x950)
struct ACineCameraActor : ACameraActor
{
	DEFINE_UE_CLASS_HELPERS(ACineCameraActor, "CineCameraActor")

	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x950(0x50)
	uint8_t Pad_0x9A0[0x10]; // 0x9A0(0x10)

	// Object: Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb09f8f8
	// Params: [ Num(1) Size(0x8) ]
	struct UCineCameraComponent* GetCineCameraComponent();
};

// Object: Class CinematicCamera.CineCameraComponent
// Size: 0x9C0 (Inherited: 0x8C0)
struct UCineCameraComponent : UCameraComponent
{
	DEFINE_UE_CLASS_HELPERS(UCineCameraComponent, "CineCameraComponent")

	struct FCameraFilmbackSettings FilmbackSettings; // 0x8C0(0xC)
	struct FCameraFilmbackSettings Filmback; // 0x8CC(0xC)
	struct FCameraLensSettings LensSettings; // 0x8D8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x8F0(0x58)
	float CurrentFocalLength; // 0x948(0x4)
	float CurrentAperture; // 0x94C(0x4)
	float CurrentFocusDistance; // 0x950(0x4)
	uint8_t Pad_0x954[0xC]; // 0x954(0xC)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x960(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x970(0x10)
	struct FString DefaultFilmbackPresetName; // 0x980(0x10)
	struct FString DefaultFilmbackPreset; // 0x990(0x10)
	struct FString DefaultLensPresetName; // 0x9A0(0x10)
	float DefaultLensFocalLength; // 0x9B0(0x4)
	float DefaultLensFStop; // 0x9B4(0x4)
	uint8_t Pad_0x9B8[0x8]; // 0x9B8(0x8)

	// Object: Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09fba0
	// Params: [ Num(1) Size(0x10) ]
	void SetLensPresetByName(struct FString InPresetName);

	// Object: Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09fcf0
	// Params: [ Num(1) Size(0x10) ]
	void SetFilmbackPresetByName(struct FString InPresetName);

	// Object: Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb09ff78
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentFocalLength(float InFocalLength);

	// Object: Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb09ff10
	// Params: [ Num(1) Size(0x4) ]
	float GetVerticalFieldOfView();

	// Object: Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb09f9b0
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FNamedLensPreset> GetLensPresetsCopy();

	// Object: Function CinematicCamera.CineCameraComponent.GetLensPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb09fc54
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLensPresetName();

	// Object: Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb09ff44
	// Params: [ Num(1) Size(0x4) ]
	float GetHorizontalFieldOfView();

	// Object: Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb09faa8
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy();

	// Object: Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb09fe74
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFilmbackPresetName();

	// Object: Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb09fda4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultFilmbackPresetName();
};

} // namespace SDK
