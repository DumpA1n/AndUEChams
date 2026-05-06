#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: TimeManagement
// Enums: 3
// Structs: 2
// Classes: 5

struct FTimedDataInputEvaluationData;
struct FTimedDataChannelSampleTime;
struct UFixedFrameRateCustomTimeStep;
struct UGenlockedCustomTimeStep;
struct UGenlockedTimecodeProvider;
struct UTimeManagementBlueprintLibrary;
struct UTimeSynchronizationSource;

// Object: Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5
};

// Object: Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
	Connected = 0,
	Unresponsive = 1,
	Disconnected = 2,
	ETimedDataInputState_MAX = 3
};

// Object: Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
	None = 0,
	Timecode = 1,
	PlatformTime = 2,
	ETimedDataInputEvaluationType_MAX = 3
};

// Object: ScriptStruct TimeManagement.TimedDataInputEvaluationData
// Size: 0x8 (Inherited: 0x0)
struct FTimedDataInputEvaluationData
{
	float DistanceToNewestSampleSeconds; // 0x0(0x4)
	float DistanceToOldestSampleSeconds; // 0x4(0x4)
};

// Object: ScriptStruct TimeManagement.TimedDataChannelSampleTime
// Size: 0x18 (Inherited: 0x0)
struct FTimedDataChannelSampleTime
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x30 (Inherited: 0x28)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep
{
	DEFINE_UE_CLASS_HELPERS(UFixedFrameRateCustomTimeStep, "FixedFrameRateCustomTimeStep")

	struct FFrameRate FixedFrameRate; // 0x28(0x8)
};

// Object: Class TimeManagement.GenlockedCustomTimeStep
// Size: 0x30 (Inherited: 0x30)
struct UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep
{
	DEFINE_UE_CLASS_HELPERS(UGenlockedCustomTimeStep, "GenlockedCustomTimeStep")
};

// Object: Class TimeManagement.GenlockedTimecodeProvider
// Size: 0x50 (Inherited: 0x30)
struct UGenlockedTimecodeProvider : UTimecodeProvider
{
	DEFINE_UE_CLASS_HELPERS(UGenlockedTimecodeProvider, "GenlockedTimecodeProvider")

	bool bUseGenlockToCount; // 0x2C(0x1)
	uint8_t Pad_0x31[0x1F]; // 0x31(0x1F)
};

// Object: Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UTimeManagementBlueprintLibrary, "TimeManagementBlueprintLibrary")

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7be68
	// Params: [ Num(4) Size(0x20) ]
	static struct FFrameTime TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7b96c
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7bb34
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7bd04
	// Params: [ Num(4) Size(0x20) ]
	static struct FFrameTime SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7c2dc
	// Params: [ Num(3) Size(0x14) ]
	static struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7b888
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7bfcc
	// Params: [ Num(3) Size(0x11) ]
	static bool IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7c0e0
	// Params: [ Num(2) Size(0x9) ]
	static bool IsValid_Framerate(const struct FFrameRate& InFrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7b650
	// Params: [ Num(1) Size(0x8) ]
	static struct FFrameRate GetTimecodeFrameRate();

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7b684
	// Params: [ Num(1) Size(0x14) ]
	static struct FTimecode GetTimecode();

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7b7a4
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7c1a0
	// Params: [ Num(3) Size(0x28) ]
	static struct FString Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7c3d8
	// Params: [ Num(2) Size(0x14) ]
	static float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7c498
	// Params: [ Num(2) Size(0xC) ]
	static float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7b6f0
	// Params: [ Num(2) Size(0x8) ]
	static int32_t Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7ba50
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xae7bc1c
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B);
};

// Object: Class TimeManagement.TimeSynchronizationSource
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynchronizationSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTimeSynchronizationSource, "TimeSynchronizationSource")

	bool bUseForSynchronization; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t FrameOffset; // 0x2C(0x4)
};

} // namespace SDK
