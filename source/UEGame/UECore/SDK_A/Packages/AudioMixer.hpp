#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AudioMixer
// Enums: 4
// Structs: 5
// Classes: 9

enum class EAudioRecordingExportType : uint8_t;
enum class EAudioSpectrumBandPresetType : uint8_t;
enum class EAudioSpectrumType : uint8_t;
enum class EFFTPeakInterpolationMethod : uint8_t;
enum class EFFTSize : uint8_t;
enum class EFFTWindowType : uint8_t;
enum class EQuartzCommandQuantization : uint8_t;
struct FQuartzClockSettings;
struct FQuartzQuantizationBoundary;
struct FSoundSourceBusSendInfo;
struct FSoundSubmixSendInfo;
struct FSoundSubmixSpectralAnalysisBandSettings;
struct FSourceEffectChainEntry;
struct UAudioBus;
struct UAudioComponent;
struct UReverbEffect;
struct USoundAttenuation;
struct USoundClass;
struct USoundConcurrency;
struct USoundCue;
struct USoundEffectSourcePresetChain;
struct USoundEffectSubmixPreset;
struct USoundSubmix;
struct USoundSubmixBase;
struct USoundWave;
struct FSubmixEffectDynamicProcessorFilterSettings;
struct FSubmixEffectDynamicsProcessorSettings;
struct FSubmixEffectSubmixEQSettings;
struct FSubmixEffectEQBand;
struct FSubmixEffectReverbSettings;
struct USynthComponent;
struct UAudioGenerator;
struct UAudioMixerBlueprintLibrary;
struct UQuartzClockHandle;
struct USubmixEffectDynamicsProcessorPreset;
struct USubmixEffectSubmixEQPreset;
struct USubmixEffectReverbPreset;
struct UQuartzSubsystem;
struct USynthSound;

// Object: Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
	C = 0,
	Db = 1,
	D = 2,
	Eb = 3,
	E = 4,
	F = 5,
	Gb = 6,
	G = 7,
	Ab = 8,
	A = 9,
	Bb = 10,
	B = 11,
	EMusicalNoteName_MAX = 12
};

// Object: Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
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

// Object: ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Size: 0xC (Inherited: 0x0)
struct FSubmixEffectDynamicProcessorFilterSettings
{
	uint8_t bEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Cutoff; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
};

// Object: ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x50 (Inherited: 0x0)
struct FSubmixEffectDynamicsProcessorSettings
{
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
	ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2(0x1)
	uint8_t Pad_0x3[0x1]; // 0x3(0x1)
	float InputGainDb; // 0x4(0x4)
	float ThresholdDb; // 0x8(0x4)
	float Ratio; // 0xC(0x4)
	float KneeBandwidthDb; // 0x10(0x4)
	float LookAheadMsec; // 0x14(0x4)
	float AttackTimeMsec; // 0x18(0x4)
	float ReleaseTimeMsec; // 0x1C(0x4)
	struct USoundSubmix* ExternalSubmix; // 0x20(0x8)
	uint8_t bChannelLinked : 1; // 0x28(0x1), Mask(0x1)
	uint8_t bAnalogMode : 1; // 0x28(0x1), Mask(0x2)
	uint8_t bKeyAudition : 1; // 0x28(0x1), Mask(0x4)
	uint8_t BitPad_0x28_3 : 5; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float KeyGainDb; // 0x2C(0x4)
	float OutputGainDb; // 0x30(0x4)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34(0xC)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40(0xC)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
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
	float Frequency; // 0x0(0x4)
	float Bandwidth; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
	uint8_t bEnabled : 1; // 0xC(0x1), Mask(0x1)
	uint8_t BitPad_0xC_1 : 7; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x40 (Inherited: 0x0)
struct FSubmixEffectReverbSettings
{
	bool bBypassEarlyReflections; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float ReflectionsDelay; // 0x4(0x4)
	float GainHF; // 0x8(0x4)
	float ReflectionsGain; // 0xC(0x4)
	bool bBypassLateReflections; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	float LateDelay; // 0x14(0x4)
	float DecayTime; // 0x18(0x4)
	float Density; // 0x1C(0x4)
	float Diffusion; // 0x20(0x4)
	float AirAbsorptionGainHF; // 0x24(0x4)
	float DecayHFRatio; // 0x28(0x4)
	float LateGain; // 0x2C(0x4)
	float Gain; // 0x30(0x4)
	float WetLevel; // 0x34(0x4)
	float DryLevel; // 0x38(0x4)
	bool bBypass; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: Class AudioMixer.SynthComponent
// Size: 0x6F0 (Inherited: 0x230)
struct USynthComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(USynthComponent, "SynthComponent")

	uint8_t bAutoDestroy : 1; // 0x224(0x1), Mask(0x1)
	uint8_t bStopWhenOwnerDestroyed : 1; // 0x224(0x1), Mask(0x2)
	uint8_t bAllowSpatialization : 1; // 0x224(0x1), Mask(0x4)
	uint8_t bOverrideAttenuation : 1; // 0x224(0x1), Mask(0x8)
	uint8_t bOutputToBusOnly : 1; // 0x224(0x1), Mask(0x10)
	struct USoundAttenuation* AttenuationSettings; // 0x228(0x8)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x230(0x3A0)
	struct USoundConcurrency* ConcurrencySettings; // 0x5D0(0x8)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x5D8(0x50)
	struct USoundClass* SoundClass; // 0x628(0x8)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x630(0x8)
	struct USoundSubmixBase* SoundSubmix; // 0x638(0x8)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x640(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x650(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x660(0x10)
	uint8_t bIsUISound : 1; // 0x670(0x1), Mask(0x1)
	uint8_t bIsPreviewSound : 1; // 0x670(0x1), Mask(0x2)
	int32_t EnvelopeFollowerAttackTime; // 0x674(0x4)
	int32_t EnvelopeFollowerReleaseTime; // 0x678(0x4)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x680(0x10)
	uint8_t BitPad_0x690_7 : 1; // 0x690(0x1)
	uint8_t Pad_0x691[0x1F]; // 0x691(0x1F)
	struct USynthSound* Synth; // 0x6B0(0x8)
	struct UAudioComponent* AudioComponent; // 0x6B8(0x8)
	uint8_t Pad_0x6C0[0x30]; // 0x6C0(0x30)

	// Object: Function AudioMixer.SynthComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d838
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function AudioMixer.SynthComponent.Start
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d84c
	// Params: [ Num(0) Size(0x0) ]
	void Start();

	// Object: Function AudioMixer.SynthComponent.SetVolumeMultiplier
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d758
	// Params: [ Num(1) Size(0x4) ]
	void SetVolumeMultiplier(float VolumeMultiplier);

	// Object: Function AudioMixer.SynthComponent.SetSubmixSend
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d670
	// Params: [ Num(2) Size(0xC) ]
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel);

	// Object: Function AudioMixer.SynthComponent.SetLowPassFilterFrequency
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xb11d510
	// Params: [ Num(1) Size(0x4) ]
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);

	// Object: Function AudioMixer.SynthComponent.SetLowPassFilterEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d5c0
	// Params: [ Num(1) Size(0x1) ]
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);

	// Object: Function AudioMixer.SynthComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb11d800
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();
};

// Object: Class AudioMixer.AudioGenerator
// Size: 0xA8 (Inherited: 0x28)
struct UAudioGenerator : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAudioGenerator, "AudioGenerator")

	uint8_t Pad_0x28[0x80]; // 0x28(0x80)
};

// Object: Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAudioMixerBlueprintLibrary, "AudioMixerBlueprintLibrary")

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb1191ac
	// Params: [ Num(2) Size(0x8) ]
	static float TrimAudioCache(float InMegabytesToFree);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11a54c
	// Params: [ Num(7) Size(0x48) ]
	static struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb119004
	// Params: [ Num(2) Size(0x10) ]
	static void StopAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11a0b8
	// Params: [ Num(2) Size(0x10) ]
	static void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11a7ac
	// Params: [ Num(3) Size(0x18) ]
	static void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb1190d8
	// Params: [ Num(2) Size(0x10) ]
	static void StartAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11a18c
	// Params: [ Num(7) Size(0x19) ]
	static void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11a9d8
	// Params: [ Num(4) Size(0x24) ]
	static void SetSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb1194b8
	// Params: [ Num(4) Size(0x15) ]
	static void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11a3a4
	// Params: [ Num(2) Size(0x10) ]
	static void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11ac6c
	// Params: [ Num(4) Size(0x20) ]
	static void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11adc4
	// Params: [ Num(3) Size(0x14) ]
	static void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11aed8
	// Params: [ Num(3) Size(0x18) ]
	static void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb119610
	// Params: [ Num(3) Size(0x14) ]
	static void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11b1a8
	// Params: [ Num(2) Size(0x10) ]
	static void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb1192ec
	// Params: [ Num(2) Size(0x18) ]
	static void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb119254
	// Params: [ Num(1) Size(0x8) ]
	static void PrimeSoundCueForPlayback(struct USoundCue* SoundCue);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11a478
	// Params: [ Num(2) Size(0x10) ]
	static void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb119b68
	// Params: [ Num(5) Size(0x20) ]
	static struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb119edc
	// Params: [ Num(6) Size(0x28) ]
	static struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xb119d04
	// Params: [ Num(6) Size(0x28) ]
	static struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb118f1c
	// Params: [ Num(3) Size(0x11) ]
	static bool IsAudioBusActive(struct UObject* WorldContextObject, struct UAudioBus* AudioBus);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb119838
	// Params: [ Num(4) Size(0x30) ]
	static void GetPhaseForFrequencies(struct UObject* WorldContextObject, const struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb1193d4
	// Params: [ Num(3) Size(0x14) ]
	static int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb1199d0
	// Params: [ Num(4) Size(0x30) ]
	static void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, const struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11ab98
	// Params: [ Num(2) Size(0x10) ]
	static void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11a8c4
	// Params: [ Num(3) Size(0x14) ]
	static void ClearSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, float FadeTimeSec);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11b110
	// Params: [ Num(1) Size(0x8) ]
	static void ClearMasterSubmixEffects(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11afec
	// Params: [ Num(4) Size(0x1C) ]
	static int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb119724
	// Params: [ Num(3) Size(0x20) ]
	static void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry entry);

	// Object: Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xb11b27c
	// Params: [ Num(2) Size(0x10) ]
	static void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset);
};

// Object: Class AudioMixer.QuartzClockHandle
// Size: 0x190 (Inherited: 0x28)
struct UQuartzClockHandle : UObject
{
	DEFINE_UE_CLASS_HELPERS(UQuartzClockHandle, "QuartzClockHandle")

	uint8_t Pad_0x28[0x168]; // 0x28(0x168)

	// Object: Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11c00c
	// Params: [ Num(2) Size(0x9) ]
	void UnsubscribeFromTimeDivision(struct UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary);

	// Object: Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11bf64
	// Params: [ Num(1) Size(0x8) ]
	void UnsubscribeFromAllTimeDivisions(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11c204
	// Params: [ Num(3) Size(0x1C) ]
	void SubscribeToQuantizationEvent(struct UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const struct FDelegate& OnQuantizationEvent);

	// Object: Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11c0f4
	// Params: [ Num(2) Size(0x18) ]
	void SubscribeToAllQuantizationEvents(struct UObject* WorldContextObject, const struct FDelegate& OnQuantizationEvent);

	// Object: Function AudioMixer.QuartzClockHandle.SetTicksPerSecond
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11bbfc
	// Params: [ Num(4) Size(0x28) ]
	void SetTicksPerSecond(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float TicksPerSecond);

	// Object: Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11b894
	// Params: [ Num(4) Size(0x28) ]
	void SetThirtySecondNotesPerMinute(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float ThirtySecondsNotesPerMinute);

	// Object: Function AudioMixer.QuartzClockHandle.SetSecondsPerTick
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11ba48
	// Params: [ Num(4) Size(0x28) ]
	void SetSecondsPerTick(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float SecondsPerTick);

	// Object: Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11bdb0
	// Params: [ Num(4) Size(0x28) ]
	void SetMillisecondsPerTick(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float MillisecondsPerTick);

	// Object: Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11b6e0
	// Params: [ Num(4) Size(0x28) ]
	void SetBeatsPerMinute(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float BeatsPerMinute);

	// Object: Function AudioMixer.QuartzClockHandle.ResumeClock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11c464
	// Params: [ Num(1) Size(0x8) ]
	void ResumeClock(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzClockHandle.ResetTransport
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11c354
	// Params: [ Num(2) Size(0x18) ]
	void ResetTransport(struct UObject* WorldContextObject, const struct FDelegate& InDelegate);

	// Object: Function AudioMixer.QuartzClockHandle.PauseClock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11c50c
	// Params: [ Num(1) Size(0x8) ]
	void PauseClock(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzClockHandle.GetTicksPerSecond
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb11b580
	// Params: [ Num(2) Size(0xC) ]
	float GetTicksPerSecond(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb11b420
	// Params: [ Num(2) Size(0xC) ]
	float GetThirtySecondNotesPerMinute(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzClockHandle.GetSecondsPerTick
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb11b4d0
	// Params: [ Num(2) Size(0xC) ]
	float GetSecondsPerTick(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb11b630
	// Params: [ Num(2) Size(0xC) ]
	float GetMillisecondsPerTick(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xb11b370
	// Params: [ Num(2) Size(0xC) ]
	float GetBeatsPerMinute(struct UObject* WorldContextObject);
};

// Object: Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x130 (Inherited: 0x68)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
{
	DEFINE_UE_CLASS_HELPERS(USubmixEffectDynamicsProcessorPreset, "SubmixEffectDynamicsProcessorPreset")

	uint8_t Pad_0x68[0x78]; // 0x68(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xE0(0x50)

	// Object: Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11c728
	// Params: [ Num(1) Size(0x50) ]
	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);

	// Object: Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11c838
	// Params: [ Num(1) Size(0x8) ]
	void SetExternalSubmix(struct USoundSubmix* Submix);
};

// Object: Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0xB0 (Inherited: 0x68)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset
{
	DEFINE_UE_CLASS_HELPERS(USubmixEffectSubmixEQPreset, "SubmixEffectSubmixEQPreset")

	uint8_t Pad_0x68[0x38]; // 0x68(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0xA0(0x10)

	// Object: Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11c968
	// Params: [ Num(1) Size(0x10) ]
	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};

// Object: Class AudioMixer.SubmixEffectReverbPreset
// Size: 0x110 (Inherited: 0x68)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset
{
	DEFINE_UE_CLASS_HELPERS(USubmixEffectReverbPreset, "SubmixEffectReverbPreset")

	uint8_t Pad_0x68[0x64]; // 0x68(0x64)
	struct FSubmixEffectReverbSettings Settings; // 0xCC(0x40)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)

	// Object: Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11ca54
	// Params: [ Num(3) Size(0x10) ]
	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);

	// Object: Function AudioMixer.SubmixEffectReverbPreset.SetSettings
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xb11cb78
	// Params: [ Num(1) Size(0x40) ]
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};

// Object: Class AudioMixer.QuartzSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UQuartzSubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UQuartzSubsystem, "QuartzSubsystem")

	uint8_t Pad_0x30[0x50]; // 0x30(0x50)

	// Object: Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11cd28
	// Params: [ Num(2) Size(0xC) ]
	float GetRoundTripMinLatency(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11cc78
	// Params: [ Num(2) Size(0xC) ]
	float GetRoundTripMaxLatency(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11cdd8
	// Params: [ Num(2) Size(0xC) ]
	float GetRoundTripAverageLatency(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzSubsystem.GetHandleForClock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d224
	// Params: [ Num(3) Size(0x18) ]
	struct UQuartzClockHandle* GetHandleForClock(struct UObject* WorldContextObject, struct FName ClockName);

	// Object: Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11cfd4
	// Params: [ Num(2) Size(0xC) ]
	float GetGameThreadToAudioRenderThreadMinLatency(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11cf24
	// Params: [ Num(2) Size(0xC) ]
	float GetGameThreadToAudioRenderThreadMaxLatency(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d084
	// Params: [ Num(2) Size(0xC) ]
	float GetGameThreadToAudioRenderThreadAverageLatency(struct UObject* WorldContextObject);

	// Object: Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11cebc
	// Params: [ Num(1) Size(0x4) ]
	float GetAudioRenderThreadToGameThreadMinLatency();

	// Object: Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11ce88
	// Params: [ Num(1) Size(0x4) ]
	float GetAudioRenderThreadToGameThreadMaxLatency();

	// Object: Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11cef0
	// Params: [ Num(1) Size(0x4) ]
	float GetAudioRenderThreadToGameThreadAverageLatency();

	// Object: Function AudioMixer.QuartzSubsystem.DoesClockExist
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d134
	// Params: [ Num(3) Size(0x11) ]
	bool DoesClockExist(struct UObject* WorldContextObject, struct FName ClockName);

	// Object: Function AudioMixer.QuartzSubsystem.CreateNewClock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xb11d310
	// Params: [ Num(5) Size(0x40) ]
	struct UQuartzClockHandle* CreateNewClock(struct UObject* WorldContextObject, struct FName ClockName, struct FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists);
};

// Object: Class AudioMixer.SynthSound
// Size: 0x3E0 (Inherited: 0x3C0)
struct USynthSound : USoundWaveProcedural
{
	DEFINE_UE_CLASS_HELPERS(USynthSound, "SynthSound")

	struct USynthComponent* OwningSynthComponent; // 0x3C0(0x8)
	uint8_t Pad_0x3C8[0x18]; // 0x3C8(0x18)
};

} // namespace SDK
