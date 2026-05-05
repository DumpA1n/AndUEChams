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
struct ACineCameraActor;
struct UCineCameraComponent;
struct ACameraRig_Crane;
struct ACameraRig_Rail;

// Object: Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	None = 0,
	Manual = 1,
	Tracking = 2,
	ECameraFocusMethod_MAX = 3
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
// Size: 0x1C (Inherited: 0x0)
struct FCameraLensSettings
{
	float MinFocalLength; // 0x0(0x4)
	float MaxFocalLength; // 0x4(0x4)
	float MinFStop; // 0x8(0x4)
	float MaxFStop; // 0xC(0x4)
	float MinimumFocusDistance; // 0x10(0x4)
	float SqueezeFactor; // 0x14(0x4)
	int32_t DiaphragmBladeCount; // 0x18(0x4)
};

// Object: ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x30 (Inherited: 0x0)
struct FNamedLensPreset
{
	struct FString Name; // 0x0(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x1C)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
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

// Object: Class CinematicCamera.CineCameraActor
// Size: 0xD30 (Inherited: 0xCD0)
struct ACineCameraActor : ACameraActor
{
	DEFINE_UE_CLASS_HELPERS(ACineCameraActor, "CineCameraActor")

	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0xCD0(0x50)
	uint8_t Pad_0xD20[0x10]; // 0xD20(0x10)

	// Object: Function CinematicCamera.CineCameraActor.GetCineCameraComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16686674
	// Params: [ Num(1) Size(0x8) ]
	struct UCineCameraComponent* GetCineCameraComponent();
};

// Object: Class CinematicCamera.CineCameraComponent
// Size: 0xCF0 (Inherited: 0xBF0)
struct UCineCameraComponent : UCameraComponent
{
	DEFINE_UE_CLASS_HELPERS(UCineCameraComponent, "CineCameraComponent")

	struct FCameraFilmbackSettings FilmbackSettings; // 0xBF0(0xC)
	struct FCameraFilmbackSettings Filmback; // 0xBFC(0xC)
	struct FCameraLensSettings LensSettings; // 0xC08(0x1C)
	uint8_t Pad_0xC24[0x4]; // 0xC24(0x4)
	struct FCameraFocusSettings FocusSettings; // 0xC28(0x58)
	float CurrentFocalLength; // 0xC80(0x4)
	float CurrentAperture; // 0xC84(0x4)
	float CurrentFocusDistance; // 0xC88(0x4)
	uint8_t Pad_0xC8C[0xC]; // 0xC8C(0xC)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xC98(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xCA8(0x10)
	struct FString DefaultFilmbackPresetName; // 0xCB8(0x10)
	struct FString DefaultFilmbackPreset; // 0xCC8(0x10)
	struct FString DefaultLensPresetName; // 0xCD8(0x10)
	float DefaultLensFocalLength; // 0xCE8(0x4)
	float DefaultLensFStop; // 0xCEC(0x4)

	// Object: Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16686b60
	// Params: [ Num(1) Size(0x10) ]
	void SetLensPresetByName(struct FString InPresetName);

	// Object: Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x16686ab4
	// Params: [ Num(1) Size(0x10) ]
	void SetFilmbackPresetByName(struct FString InPresetName);

	// Object: Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xeef0868
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrentFocalLength(const float& InFocalLength);

	// Object: Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16686a80
	// Params: [ Num(1) Size(0x4) ]
	float GetVerticalFieldOfView();

	// Object: Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x16686a10
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<struct FNamedLensPreset> GetLensPresetsCopy();

	// Object: Function CinematicCamera.CineCameraComponent.GetLensPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16686978
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLensPresetName();

	// Object: Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x16686944
	// Params: [ Num(1) Size(0x4) ]
	float GetHorizontalFieldOfView();

	// Object: Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166868ac
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetFilmbackPresetName();

	// Object: Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166867e0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultFilmbackPresetName();
};

// Object: Class CinematicCamera.CameraRig_Crane
// Size: 0x3A0 (Inherited: 0x370)
struct ACameraRig_Crane : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACameraRig_Crane, "CameraRig_Crane")

	float CranePitch; // 0x370(0x4)
	float CraneYaw; // 0x374(0x4)
	float CraneArmLength; // 0x378(0x4)
	uint8_t bLockMountPitch : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t BitPad_0x37C_1 : 7; // 0x37C(0x1)
	uint8_t bLockMountYaw : 1; // 0x37D(0x1), Mask(0x1)
	uint8_t BitPad_0x37D_1 : 7; // 0x37D(0x1)
	uint8_t Pad_0x37E[0x2]; // 0x37E(0x2)
	struct USceneComponent* TransformComponent; // 0x380(0x8)
	struct USceneComponent* CraneYawControl; // 0x388(0x8)
	struct USceneComponent* CranePitchControl; // 0x390(0x8)
	struct USceneComponent* CraneCameraMount; // 0x398(0x8)
};

// Object: Class CinematicCamera.CameraRig_Rail
// Size: 0x390 (Inherited: 0x370)
struct ACameraRig_Rail : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACameraRig_Rail, "CameraRig_Rail")

	float CurrentPositionOnRail; // 0x370(0x4)
	uint8_t bLockOrientationToRail : 1; // 0x374(0x1), Mask(0x1)
	uint8_t BitPad_0x374_1 : 7; // 0x374(0x1)
	uint8_t Pad_0x375[0x3]; // 0x375(0x3)
	struct USceneComponent* TransformComponent; // 0x378(0x8)
	struct USplineComponent* RailSplineComponent; // 0x380(0x8)
	struct USceneComponent* RailCameraMount; // 0x388(0x8)

	// Object: Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x16686614
	// Params: [ Num(1) Size(0x8) ]
	struct USplineComponent* GetRailSplineComponent();
};

} // namespace SDK
