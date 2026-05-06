#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: EyeTracker
// Enums: 1
// Structs: 2
// Classes: 1

struct APlayerController;
struct FEyeTrackerStereoGazeData;
struct FEyeTrackerGazeData;
struct UEyeTrackerFunctionLibrary;

// Object: Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	NotConnected = 0,
	NotTracking = 1,
	Tracking = 2,
	EEyeTrackerStatus_MAX = 3
};

// Object: ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// Size: 0x40 (Inherited: 0x0)
struct FEyeTrackerStereoGazeData
{
	struct FVector LeftEyeOrigin; // 0x0(0xC)
	struct FVector LeftEyeDirection; // 0xC(0xC)
	struct FVector RightEyeOrigin; // 0x18(0xC)
	struct FVector RightEyeDirection; // 0x24(0xC)
	struct FVector FixationPoint; // 0x30(0xC)
	float ConfidenceValue; // 0x3C(0x4)
};

// Object: ScriptStruct EyeTracker.EyeTrackerGazeData
// Size: 0x28 (Inherited: 0x0)
struct FEyeTrackerGazeData
{
	struct FVector GazeOrigin; // 0x0(0xC)
	struct FVector GazeDirection; // 0xC(0xC)
	struct FVector FixationPoint; // 0x18(0xC)
	float ConfidenceValue; // 0x24(0x4)
};

// Object: Class EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UEyeTrackerFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UEyeTrackerFunctionLibrary, "EyeTrackerFunctionLibrary")

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb22e528
	// Params: [ Num(1) Size(0x8) ]
	static void SetEyeTrackedPlayer(struct APlayerController* PlayerController);

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb22e740
	// Params: [ Num(1) Size(0x1) ]
	static bool IsStereoGazeDataAvailable();

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb22e778
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEyeTrackerConnected();

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb22e5c0
	// Params: [ Num(2) Size(0x41) ]
	static bool GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData);

	// Object: Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb22e680
	// Params: [ Num(2) Size(0x29) ]
	static bool GetGazeData(struct FEyeTrackerGazeData& OutGazeData);
};

} // namespace SDK
