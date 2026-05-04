#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: TimeManagement
// Enums: 1
// Structs: 0
// Classes: 3

struct UFixedFrameRateCustomTimeStep;
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

// Object: Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x30 (Inherited: 0x28)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep
{
	struct FFrameRate FixedFrameRate; // 0x28(0x8)
	DEFINE_UE_CLASS_HELPERS(UFixedFrameRateCustomTimeStep, "FixedFrameRateCustomTimeStep")

};

// Object: Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644b058
	// Params: [ Num(4) Size(0x20) ]
	static struct FFrameTime TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644af7c
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644aea0
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644ad3c
	// Params: [ Num(4) Size(0x20) ]
	static struct FFrameTime SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644ac44
	// Params: [ Num(3) Size(0x14) ]
	static struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644ab68
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644aa54
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a994
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsValid_Framerate(const struct FFrameRate& InFrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a960
	// Params: [ Num(1) Size(0x8) ]
	static struct FFrameRate GetTimecodeFrameRate();

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a8f4
	// Params: [ Num(1) Size(0x14) ]
	static struct FTimecode GetTimecode();

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a818
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a6e4
	// Params: [ Num(3) Size(0x28) ]
	static struct FString Conv_TimecodeToString(const struct FTimecode& InTimecode, uint8_t bForceSignDisplay);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a624
	// Params: [ Num(2) Size(0x14) ]
	static float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a568
	// Params: [ Num(2) Size(0xC) ]
	static float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a4b4
	// Params: [ Num(2) Size(0x8) ]
	static int32_t Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a3d8
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B);

	// Object: Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x1644a2fc
	// Params: [ Num(3) Size(0xC) ]
	static struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B);
	DEFINE_UE_CLASS_HELPERS(UTimeManagementBlueprintLibrary, "TimeManagementBlueprintLibrary")

};

// Object: Class TimeManagement.TimeSynchronizationSource
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynchronizationSource : UObject
{
	uint8_t bUseForSynchronization : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	int32_t FrameOffset; // 0x2C(0x4)
	DEFINE_UE_CLASS_HELPERS(UTimeSynchronizationSource, "TimeSynchronizationSource")

};

} // namespace SDK
