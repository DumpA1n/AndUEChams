#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: LogTrack
// Enums: 0
// Structs: 0
// Classes: 1

struct ULogTrackBlueprint;

// Object: Class LogTrack.LogTrackBlueprint
// Size: 0x28 (Inherited: 0x28)
struct ULogTrackBlueprint : UBlueprintFunctionLibrary
{

	// Object: Function LogTrack.LogTrackBlueprint.SetOutputDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786eca0
	// Params: [ Num(1) Size(0x10) ]
	static void SetOutputDir(struct FString Value);

	// Object: Function LogTrack.LogTrackBlueprint.SetEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786ebf8
	// Params: [ Num(1) Size(0x1) ]
	static void SetEnable(uint8_t bValue);

	// Object: Function LogTrack.LogTrackBlueprint.GetStatsString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786eb60
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetStatsString();

	// Object: Function LogTrack.LogTrackBlueprint.GetOutputDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786ea8c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetOutputDir();

	// Object: Function LogTrack.LogTrackBlueprint.GetEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786ea6c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetEnable();

	// Object: Function LogTrack.LogTrackBlueprint.GetBufferSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786ea4c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetBufferSize();

	// Object: Function LogTrack.LogTrackBlueprint.EnterFrame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786e980
	// Params: [ Num(2) Size(0x8) ]
	static void EnterFrame(int32_t FrameIndex, int32_t RndSeed);

	// Object: Function LogTrack.LogTrackBlueprint.EndTrack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786e96c
	// Params: [ Num(0) Size(0x0) ]
	static void EndTrack();

	// Object: Function LogTrack.LogTrackBlueprint.BeginTrack
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1786e8d8
	// Params: [ Num(1) Size(0x4) ]
	static void BeginTrack(int32_t BufferSize);
	DEFINE_UE_CLASS_HELPERS(ULogTrackBlueprint, "LogTrackBlueprint")

};

} // namespace SDK
