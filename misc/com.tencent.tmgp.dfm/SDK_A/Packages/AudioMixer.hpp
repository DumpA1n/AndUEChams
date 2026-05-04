#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AudioMixer
// Enums: 6
// Structs: 5
// Classes: 8

enum class EAudioRecordingExportType : uint8_t;
struct FSoundSourceBusSendInfo;
struct FSoundSubmixSendInfo;
struct FSourceEffectChainEntry;
struct UAudioComponent;
struct UReverbEffect;
struct USoundAttenuation;
struct USoundClass;
struct USoundConcurrency;
struct USoundCue;
struct USoundEffectSourcePresetChain;
struct USoundEffectSubmixPreset;
struct USoundSubmix;
struct USoundWave;
struct FSubmixEffectDynamicsProcessorSettings;
struct FSubmixEffectSubmixEQSettings;
struct FSubmixEffectEQBand;
struct FSubmixEffectReverbSettings;
struct FSubmixEffectReverbFastSettings;
struct USynthComponent;
struct UAudioGenerator;
struct UAudioMixerBlueprintLibrary;
struct USubmixEffectDynamicsProcessorPreset;
struct USubmixEffectSubmixEQPreset;
struct USubmixEffectReverbPreset;
struct USubmixEffectReverbFastPreset;
struct USynthSound;

// Object: Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	EAudioSpectrumType_MAX = 2
};

// Object: Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4
};

// Object: Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	EFFTPeakInterpolationMethod_MAX = 3
};

// Object: Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8_t
{
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};

// Object: ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x28 (Inherited: 0x0)
struct FSubmixEffectDynamicsProcessorSettings
{
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	float LookAheadMsec; // 0x4(0x4)
	float AttackTimeMsec; // 0x8(0x4)
	float ReleaseTimeMsec; // 0xC(0x4)
	float ThresholdDb; // 0x10(0x4)
	float ratio; // 0x14(0x4)
	float KneeBandwidthDb; // 0x18(0x4)
	float InputGainDb; // 0x1C(0x4)
	float OutputGainDb; // 0x20(0x4)
	uint8_t bChannelLinked : 1; // 0x24(0x1), Mask(0x1)
	uint8_t bAnalogMode : 1; // 0x24(0x1), Mask(0x2)
	uint8_t BitPad_0x24_2 : 6; // 0x24(0x1)
	uint8_t Pad_0x25[0x3]; // 0x25(0x3)
};

// Object: ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size: 0x10 (Inherited: 0x0)
struct FSubmixEffectSubmixEQSettings
{
	struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x0(0x10)
};

// Object: ScriptStruct AudioMixer.SubmixEffectEQBand
// Size: 0x10 (Inherited: 0x0)
struct FSubmixEffectEQBand
{
	float frequency; // 0x0(0x4)
	float Bandwidth; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
	uint8_t bEnabled : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x34 (Inherited: 0x0)
struct FSubmixEffectReverbSettings
{
	float Density; // 0x0(0x4)
	float Diffusion; // 0x4(0x4)
	float Gain; // 0x8(0x4)
	float GainHF; // 0xC(0x4)
	float DecayTime; // 0x10(0x4)
	float DecayHFRatio; // 0x14(0x4)
	float ReflectionsGain; // 0x18(0x4)
	float ReflectionsDelay; // 0x1C(0x4)
	float LateGain; // 0x20(0x4)
	float LateDelay; // 0x24(0x4)
	float AirAbsorptionGainHF; // 0x28(0x4)
	float WetLevel; // 0x2C(0x4)
	float DryLevel; // 0x30(0x4)
};

// Object: ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// Size: 0x34 (Inherited: 0x0)
struct FSubmixEffectReverbFastSettings
{
	float Density; // 0x0(0x4)
	float Diffusion; // 0x4(0x4)
	float Gain; // 0x8(0x4)
	float GainHF; // 0xC(0x4)
	float DecayTime; // 0x10(0x4)
	float DecayHFRatio; // 0x14(0x4)
	float ReflectionsGain; // 0x18(0x4)
	float ReflectionsDelay; // 0x1C(0x4)
	float LateGain; // 0x20(0x4)
	float LateDelay; // 0x24(0x4)
	float AirAbsorptionGainHF; // 0x28(0x4)
	float WetLevel; // 0x2C(0x4)
	float DryLevel; // 0x30(0x4)
};

// Object: Class AudioMixer.SynthComponent
// Size: 0x6D0 (Inherited: 0x240)
struct USynthComponent : USceneComponent
{
	uint8_t bAutoDestroy : 1; // 0x240(0x1), Mask(0x1)
	uint8_t bStopWhenOwnerDestroyed : 1; // 0x240(0x1), Mask(0x2)
	uint8_t bAllowSpatialization : 1; // 0x240(0x1), Mask(0x4)
	uint8_t bOverrideAttenuation : 1; // 0x240(0x1), Mask(0x8)
	uint8_t bOutputToBusOnly : 1; // 0x240(0x1), Mask(0x10)
	uint8_t BitPad_0x240_5 : 3; // 0x240(0x1)
	uint8_t Pad_0x241[0x7]; // 0x241(0x7)
	struct USoundAttenuation* AttenuationSettings; // 0x248(0x8)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x250(0x350)
	struct USoundConcurrency* ConcurrencySettings; // 0x5A0(0x8)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x5A8(0x50)
	struct USoundClass* SoundClass; // 0x5F8(0x8)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x600(0x8)
	struct USoundSubmix* SoundSubmix; // 0x608(0x8)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x610(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x620(0x10)
	struct FSoundModulation Modulation; // 0x630(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x640(0x10)
	uint8_t bIsUISound : 1; // 0x650(0x1), Mask(0x1)
	uint8_t bIsPreviewSound : 1; // 0x650(0x1), Mask(0x2)
	uint8_t BitPad_0x650_2 : 6; // 0x650(0x1)
	uint8_t Pad_0x651[0x3]; // 0x651(0x3)
	int32_t EnvelopeFollowerAttackTime; // 0x654(0x4)
	int32_t EnvelopeFollowerReleaseTime; // 0x658(0x4)
	uint8_t Pad_0x65C[0x4]; // 0x65C(0x4)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x660(0x10)
	uint8_t Pad_0x670[0x20]; // 0x670(0x20)
	struct USynthSound* Synth; // 0x690(0x8)
	struct UAudioComponent* AudioComponent; // 0x698(0x8)
	uint8_t Pad_0x6A0[0x30]; // 0x6A0(0x30)


	// Object: Function AudioMixer.SynthComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166cb81c
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function AudioMixer.SynthComponent.Start
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166cb808
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function AudioMixer.SynthComponent.SetVolumeMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166cb764
	// Params: [ Num(1) Size(0x4) ]
	void SetVolumeMultiplier(float VolumeMultiplier);

	// Object: Function AudioMixer.SynthComponent.SetSubmixSend
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166cb684
	// Params: [ Num(2) Size(0xC) ]
	void SetSubmixSend(struct USoundSubmix* Submix, float SendLevel);

	// Object: Function AudioMixer.SynthComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x166cb64c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPlaying();
	DEFINE_UE_CLASS_HELPERS(USynthComponent, "SynthComponent")

};

// Object: Class AudioMixer.AudioGenerator
// Size: 0xA8 (Inherited: 0x28)
struct UAudioGenerator : UObject
{
	uint8_t Pad_0x28[0x80]; // 0x28(0x80)
	DEFINE_UE_CLASS_HELPERS(UAudioGenerator, "AudioGenerator")

};

// Object: Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary
{

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166caf04
	// Params: [ Num(2) Size(0x8) ]
	static float TrimAudioCache(float InMegabytesToFree);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166caccc
	// Params: [ Num(7) Size(0x48) ]
	static struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166cac00
	// Params: [ Num(2) Size(0x10) ]
	static void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166caaf4
	// Params: [ Num(3) Size(0x18) ]
	static void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca934
	// Params: [ Num(6) Size(0x18) ]
	static void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca7ec
	// Params: [ Num(4) Size(0x15) ]
	static void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, uint8_t bBypassed);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca720
	// Params: [ Num(2) Size(0x10) ]
	static void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca618
	// Params: [ Num(3) Size(0x14) ]
	static void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca54c
	// Params: [ Num(2) Size(0x10) ]
	static void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca468
	// Params: [ Num(2) Size(0x18) ]
	static void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca3d4
	// Params: [ Num(1) Size(0x8) ]
	static void PrimeSoundCueForPlayback(struct USoundCue* SoundCue);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca308
	// Params: [ Num(2) Size(0x10) ]
	static void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x166ca188
	// Params: [ Num(4) Size(0x30) ]
	static void GetPhaseForFrequencies(struct UObject* WorldContextObject, const struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166ca0ac
	// Params: [ Num(3) Size(0x14) ]
	static int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x166c9f2c
	// Params: [ Num(4) Size(0x30) ]
	static void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, const struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166c9e98
	// Params: [ Num(1) Size(0x8) ]
	static void ClearMasterSubmixEffects(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166c9d90
	// Params: [ Num(3) Size(0x20) ]
	static void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry ENTRY);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x166c9cc4
	// Params: [ Num(2) Size(0x10) ]
	static void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset);
	DEFINE_UE_CLASS_HELPERS(UAudioMixerBlueprintLibrary, "AudioMixerBlueprintLibrary")

};

// Object: Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0xB8 (Inherited: 0x40)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x4C]; // 0x40(0x4C)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0x8C(0x28)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)


	// Object: Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x166cb0a4
	// Params: [ Num(1) Size(0x28) ]
	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings);
	DEFINE_UE_CLASS_HELPERS(USubmixEffectDynamicsProcessorPreset, "SubmixEffectDynamicsProcessorPreset")

};

// Object: Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x38]; // 0x40(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x78(0x10)


	// Object: Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x166cb194
	// Params: [ Num(1) Size(0x10) ]
	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
	DEFINE_UE_CLASS_HELPERS(USubmixEffectSubmixEQPreset, "SubmixEffectSubmixEQPreset")

};

// Object: Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xD0 (Inherited: 0x40)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x58]; // 0x40(0x58)
	struct FSubmixEffectReverbSettings Settings; // 0x98(0x34)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)


	// Object: Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166cb32c
	// Params: [ Num(3) Size(0x10) ]
	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);

	// Object: Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x166cb258
	// Params: [ Num(1) Size(0x34) ]
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
	DEFINE_UE_CLASS_HELPERS(USubmixEffectReverbPreset, "SubmixEffectReverbPreset")

};

// Object: Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xD0 (Inherited: 0x40)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset
{
	uint8_t Pad_0x40[0x58]; // 0x40(0x58)
	struct FSubmixEffectReverbFastSettings Settings; // 0x98(0x34)
	uint8_t Pad_0xCC[0x4]; // 0xCC(0x4)


	// Object: Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x166cb520
	// Params: [ Num(3) Size(0x10) ]
	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);

	// Object: Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x166cb44c
	// Params: [ Num(1) Size(0x34) ]
	void SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings);
	DEFINE_UE_CLASS_HELPERS(USubmixEffectReverbFastPreset, "SubmixEffectReverbFastPreset")

};

// Object: Class AudioMixer.SynthSound
// Size: 0x3F0 (Inherited: 0x3D0)
struct USynthSound : USoundWaveProcedural
{
	struct USynthComponent* OwningSynthComponent; // 0x3D0(0x8)
	uint8_t Pad_0x3D8[0x18]; // 0x3D8(0x18)
	DEFINE_UE_CLASS_HELPERS(USynthSound, "SynthSound")

};

} // namespace SDK
