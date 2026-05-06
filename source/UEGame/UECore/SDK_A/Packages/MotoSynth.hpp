#pragma once

#include "../CoreUObject_classes.hpp"
#include "AudioMixer.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MotoSynth
// Enums: 0
// Structs: 2
// Classes: 3

struct FMotoSynthRuntimeSettings;
struct FGrainTableEntry;
struct UMotoSynthPreset;
struct UMotoSynthSource;
struct USynthComponentMoto;

// Object: ScriptStruct MotoSynth.MotoSynthRuntimeSettings
// Size: 0x68 (Inherited: 0x0)
struct FMotoSynthRuntimeSettings
{
	bool bSynthToneEnabled; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float SynthToneVolume; // 0x4(0x4)
	float SynthToneFilterFrequency; // 0x8(0x4)
	int32_t SynthOctaveShift; // 0xC(0x4)
	bool bGranularEngineEnabled; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float GranularEngineVolume; // 0x14(0x4)
	float GranularEnginePitchScale; // 0x18(0x4)
	int32_t NumSamplesToCrossfadeBetweenGrains; // 0x1C(0x4)
	int32_t NumGrainTableEntriesPerGrain; // 0x20(0x4)
	int32_t GrainTableRandomOffsetForConstantRPMs; // 0x24(0x4)
	int32_t GrainCrossfadeSamplesForConstantRPMs; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct UMotoSynthSource* AccelerationSource; // 0x30(0x8)
	struct UMotoSynthSource* DecelerationSource; // 0x38(0x8)
	bool bStereoWidenerEnabled; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float StereoDelayMsec; // 0x44(0x4)
	float StereoFeedback; // 0x48(0x4)
	float StereoWidenerWetlevel; // 0x4C(0x4)
	float StereoWidenerDryLevel; // 0x50(0x4)
	float StereoWidenerDelayRatio; // 0x54(0x4)
	bool bStereoWidenerFilterEnabled; // 0x58(0x1)
	uint8_t Pad_0x59[0x3]; // 0x59(0x3)
	float StereoWidenerFilterFrequency; // 0x5C(0x4)
	float StereoWidenerFilterQ; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct MotoSynth.GrainTableEntry
// Size: 0x8 (Inherited: 0x0)
struct FGrainTableEntry
{
	int32_t SampleIndex; // 0x0(0x4)
	float RPM; // 0x4(0x4)
};

// Object: Class MotoSynth.MotoSynthPreset
// Size: 0x90 (Inherited: 0x28)
struct UMotoSynthPreset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMotoSynthPreset, "MotoSynthPreset")

	struct FMotoSynthRuntimeSettings Settings; // 0x28(0x68)
};

// Object: Class MotoSynth.MotoSynthSource
// Size: 0xF8 (Inherited: 0x28)
struct UMotoSynthSource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMotoSynthSource, "MotoSynthSource")

	bool bConvertTo8Bit; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float DownSampleFactor; // 0x2C(0x4)
	struct FRuntimeFloatCurve RPMCurve; // 0x30(0x88)
	struct TArray<float> SourceData; // 0xB8(0x10)
	struct TArray<int16_t> SourceDataPCM; // 0xC8(0x10)
	int32_t SourceSampleRate; // 0xD8(0x4)
	uint8_t Pad_0xDC[0x4]; // 0xDC(0x4)
	struct TArray<struct FGrainTableEntry> GrainTable; // 0xE0(0x10)
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)
};

// Object: Class MotoSynth.SynthComponentMoto
// Size: 0x7B0 (Inherited: 0x6F0)
struct USynthComponentMoto : USynthComponent
{
	DEFINE_UE_CLASS_HELPERS(USynthComponentMoto, "SynthComponentMoto")

	struct UMotoSynthPreset* MotoSynthPreset; // 0x6F0(0x8)
	float RPM; // 0x6F8(0x4)
	uint8_t Pad_0x6FC[0xB4]; // 0x6FC(0xB4)

	// Object: Function MotoSynth.SynthComponentMoto.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x51d7820
	// Params: [ Num(1) Size(0x68) ]
	void SetSettings(const struct FMotoSynthRuntimeSettings& InSettings);

	// Object: Function MotoSynth.SynthComponentMoto.SetRPM
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x51d792c
	// Params: [ Num(2) Size(0x8) ]
	void SetRPM(float InRPM, float InTimeSec);

	// Object: Function MotoSynth.SynthComponentMoto.IsEnabled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x51d76e8
	// Params: [ Num(1) Size(0x1) ]
	bool IsEnabled();

	// Object: Function MotoSynth.SynthComponentMoto.GetRPMRange
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x51d7720
	// Params: [ Num(2) Size(0x8) ]
	void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);
};

} // namespace SDK
