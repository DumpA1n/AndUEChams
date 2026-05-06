#include "AudioMixer.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// USynthComponent
void USynthComponent::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USynthComponent::Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "SetVolumeMultiplier");
    struct
    {
        float VolumeMultiplier;
    } Parms{};
    Parms.VolumeMultiplier = (float)VolumeMultiplier;
    this->ProcessEvent(Func, &Parms);
}

void USynthComponent::SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "SetSubmixSend");
    struct
    {
        struct USoundSubmixBase* Submix;
        float SendLevel;
    } Parms{};
    Parms.Submix = (struct USoundSubmixBase*)Submix;
    Parms.SendLevel = (float)SendLevel;
    this->ProcessEvent(Func, &Parms);
}

void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "SetLowPassFilterFrequency");
    struct
    {
        float InLowPassFilterFrequency;
    } Parms{};
    Parms.InLowPassFilterFrequency = (float)InLowPassFilterFrequency;
    this->ProcessEvent(Func, &Parms);
}

void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "SetLowPassFilterEnabled");
    struct
    {
        bool InLowPassFilterEnabled;
    } Parms{};
    Parms.InLowPassFilterEnabled = (bool)InLowPassFilterEnabled;
    this->ProcessEvent(Func, &Parms);
}

bool USynthComponent::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "IsPlaying");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAudioMixerBlueprintLibrary
float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "TrimAudioCache");
    struct
    {
        float InMegabytesToFree;
        float ReturnValue;
    } Parms{};
    Parms.InMegabytesToFree = (float)InMegabytesToFree;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(struct UObject* WorldContextObject, EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StopRecordingOutput");
    struct
    {
        struct UObject* WorldContextObject;
        enum EAudioRecordingExportType ExportType;
        struct FString Name;
        struct FString Path;
        struct USoundSubmix* SubmixToRecord;
        struct USoundWave* ExistingSoundWaveToOverwrite;
        struct USoundWave* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ExportType = (enum EAudioRecordingExportType)ExportType;
    Parms.Name = (struct FString)Name;
    Parms.Path = (struct FString)Path;
    Parms.SubmixToRecord = (struct USoundSubmix*)SubmixToRecord;
    Parms.ExistingSoundWaveToOverwrite = (struct USoundWave*)ExistingSoundWaveToOverwrite;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::StopAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StopAudioBus");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAudioBus* AudioBus;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AudioBus = (struct UAudioBus*)AudioBus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StopAnalyzingOutput");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SubmixToStopAnalyzing;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SubmixToStopAnalyzing = (struct USoundSubmix*)SubmixToStopAnalyzing;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StartRecordingOutput");
    struct
    {
        struct UObject* WorldContextObject;
        float ExpectedDuration;
        struct USoundSubmix* SubmixToRecord;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ExpectedDuration = (float)ExpectedDuration;
    Parms.SubmixToRecord = (struct USoundSubmix*)SubmixToRecord;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::StartAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StartAudioBus");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAudioBus* AudioBus;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AudioBus = (struct UAudioBus*)AudioBus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StartAnalyzingOutput");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SubmixToAnalyze;
        enum EFFTSize FFTSize;
        enum EFFTPeakInterpolationMethod InterpolationMethod;
        enum EFFTWindowType WindowType;
        float HopSize;
        enum EAudioSpectrumType SpectrumType;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SubmixToAnalyze = (struct USoundSubmix*)SubmixToAnalyze;
    Parms.FFTSize = (enum EFFTSize)FFTSize;
    Parms.InterpolationMethod = (enum EFFTPeakInterpolationMethod)InterpolationMethod;
    Parms.WindowType = (enum EFFTWindowType)WindowType;
    Parms.HopSize = (float)HopSize;
    Parms.SpectrumType = (enum EAudioSpectrumType)SpectrumType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "SetSubmixEffectChainOverride");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SoundSubmix;
        struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain;
        float FadeTimeSec;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SoundSubmix = (struct USoundSubmix*)SoundSubmix;
    Parms.SubmixEffectPresetChain = (struct TArray<struct USoundEffectSubmixPreset*>)SubmixEffectPresetChain;
    Parms.FadeTimeSec = (float)FadeTimeSec;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "SetBypassSourceEffectChainEntry");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundEffectSourcePresetChain* PresetChain;
        int32_t EntryIndex;
        bool bBypassed;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PresetChain = (struct USoundEffectSourcePresetChain*)PresetChain;
    Parms.EntryIndex = (int32_t)EntryIndex;
    Parms.bBypassed = (bool)bBypassed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ResumeRecordingOutput");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SubmixToPause;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SubmixToPause = (struct USoundSubmix*)SubmixToPause;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSoundEffectSubmix");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* InSoundSubmix;
        int32_t SubmixChainIndex;
        struct USoundEffectSubmixPreset* SubmixEffectPreset;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InSoundSubmix = (struct USoundSubmix*)InSoundSubmix;
    Parms.SubmixChainIndex = (int32_t)SubmixChainIndex;
    Parms.SubmixEffectPreset = (struct USoundEffectSubmixPreset*)SubmixEffectPreset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPresetAtIndex");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SoundSubmix;
        int32_t SubmixChainIndex;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SoundSubmix = (struct USoundSubmix*)SoundSubmix;
    Parms.SubmixChainIndex = (int32_t)SubmixChainIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPreset");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SoundSubmix;
        struct USoundEffectSubmixPreset* SubmixEffectPreset;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SoundSubmix = (struct USoundSubmix*)SoundSubmix;
    Parms.SubmixEffectPreset = (struct USoundEffectSubmixPreset*)SubmixEffectPreset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveSourceEffectFromPresetChain");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundEffectSourcePresetChain* PresetChain;
        int32_t EntryIndex;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PresetChain = (struct USoundEffectSourcePresetChain*)PresetChain;
    Parms.EntryIndex = (int32_t)EntryIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveMasterSubmixEffect");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundEffectSubmixPreset* SubmixEffectPreset;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SubmixEffectPreset = (struct USoundEffectSubmixPreset*)SubmixEffectPreset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "PrimeSoundForPlayback");
    struct
    {
        struct USoundWave* SoundWave;
        struct FDelegate OnLoadCompletion;
    } Parms{};
    Parms.SoundWave = (struct USoundWave*)SoundWave;
    Parms.OnLoadCompletion = (struct FDelegate)OnLoadCompletion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(struct USoundCue* SoundCue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "PrimeSoundCueForPlayback");
    struct
    {
        struct USoundCue* SoundCue;
    } Parms{};
    Parms.SoundCue = (struct USoundCue*)SoundCue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "PauseRecordingOutput");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SubmixToPause;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SubmixToPause = (struct USoundSubmix*)SubmixToPause;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "MakePresetSpectralAnalysisBandSettings");
    struct
    {
        enum EAudioSpectrumBandPresetType InBandPresetType;
        int32_t InNumBands;
        int32_t InAttackTimeMsec;
        int32_t InReleaseTimeMsec;
        struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
    } Parms{};
    Parms.InBandPresetType = (enum EAudioSpectrumBandPresetType)InBandPresetType;
    Parms.InNumBands = (int32_t)InNumBands;
    Parms.InAttackTimeMsec = (int32_t)InAttackTimeMsec;
    Parms.InReleaseTimeMsec = (int32_t)InReleaseTimeMsec;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "MakeMusicalSpectralAnalysisBandSettings");
    struct
    {
        int32_t InNumSemitones;
        enum EMusicalNoteName InStartingMusicalNote;
        int32_t InStartingOctave;
        int32_t InAttackTimeMsec;
        int32_t InReleaseTimeMsec;
        struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
    } Parms{};
    Parms.InNumSemitones = (int32_t)InNumSemitones;
    Parms.InStartingMusicalNote = (enum EMusicalNoteName)InStartingMusicalNote;
    Parms.InStartingOctave = (int32_t)InStartingOctave;
    Parms.InAttackTimeMsec = (int32_t)InAttackTimeMsec;
    Parms.InReleaseTimeMsec = (int32_t)InReleaseTimeMsec;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "MakeFullSpectrumSpectralAnalysisBandSettings");
    struct
    {
        int32_t InNumBands;
        float InMinimumFrequency;
        float InMaximumFrequency;
        int32_t InAttackTimeMsec;
        int32_t InReleaseTimeMsec;
        struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
    } Parms{};
    Parms.InNumBands = (int32_t)InNumBands;
    Parms.InMinimumFrequency = (float)InMinimumFrequency;
    Parms.InMaximumFrequency = (float)InMaximumFrequency;
    Parms.InAttackTimeMsec = (int32_t)InAttackTimeMsec;
    Parms.InReleaseTimeMsec = (int32_t)InReleaseTimeMsec;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAudioMixerBlueprintLibrary::IsAudioBusActive(struct UObject* WorldContextObject, struct UAudioBus* AudioBus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "IsAudioBusActive");
    struct
    {
        struct UObject* WorldContextObject;
        struct UAudioBus* AudioBus;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AudioBus = (struct UAudioBus*)AudioBus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(struct UObject* WorldContextObject, const struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "GetPhaseForFrequencies");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<float> Frequencies;
        struct TArray<float> Phases;
        struct USoundSubmix* SubmixToAnalyze;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Frequencies = (struct TArray<float>)Frequencies;
    Parms.SubmixToAnalyze = (struct USoundSubmix*)SubmixToAnalyze;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Phases = Parms.Phases;
}

int32_t UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "GetNumberOfEntriesInSourceEffectChain");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundEffectSourcePresetChain* PresetChain;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PresetChain = (struct USoundEffectSourcePresetChain*)PresetChain;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(struct UObject* WorldContextObject, const struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "GetMagnitudeForFrequencies");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<float> Frequencies;
        struct TArray<float> Magnitudes;
        struct USoundSubmix* SubmixToAnalyze;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Frequencies = (struct TArray<float>)Frequencies;
    Parms.SubmixToAnalyze = (struct USoundSubmix*)SubmixToAnalyze;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Magnitudes = Parms.Magnitudes;
}

void UAudioMixerBlueprintLibrary::ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffects");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SoundSubmix;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SoundSubmix = (struct USoundSubmix*)SoundSubmix;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, float FadeTimeSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffectChainOverride");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SoundSubmix;
        float FadeTimeSec;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SoundSubmix = (struct USoundSubmix*)SoundSubmix;
    Parms.FadeTimeSec = (float)FadeTimeSec;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ClearMasterSubmixEffects");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UAudioMixerBlueprintLibrary::AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "AddSubmixEffect");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundSubmix* SoundSubmix;
        struct USoundEffectSubmixPreset* SubmixEffectPreset;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SoundSubmix = (struct USoundSubmix*)SoundSubmix;
    Parms.SubmixEffectPreset = (struct USoundEffectSubmixPreset*)SubmixEffectPreset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry entry)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "AddSourceEffectToPresetChain");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundEffectSourcePresetChain* PresetChain;
        struct FSourceEffectChainEntry entry;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PresetChain = (struct USoundEffectSourcePresetChain*)PresetChain;
    Parms.entry = (struct FSourceEffectChainEntry)entry;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "AddMasterSubmixEffect");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundEffectSubmixPreset* SubmixEffectPreset;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SubmixEffectPreset = (struct USoundEffectSubmixPreset*)SubmixEffectPreset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UQuartzClockHandle
void UQuartzClockHandle::UnsubscribeFromTimeDivision(struct UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "UnsubscribeFromTimeDivision");
    struct
    {
        struct UObject* WorldContextObject;
        enum EQuartzCommandQuantization InQuantizationBoundary;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InQuantizationBoundary = (enum EQuartzCommandQuantization)InQuantizationBoundary;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "UnsubscribeFromAllTimeDivisions");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::SubscribeToQuantizationEvent(struct UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const struct FDelegate& OnQuantizationEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "SubscribeToQuantizationEvent");
    struct
    {
        struct UObject* WorldContextObject;
        enum EQuartzCommandQuantization InQuantizationBoundary;
        struct FDelegate OnQuantizationEvent;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InQuantizationBoundary = (enum EQuartzCommandQuantization)InQuantizationBoundary;
    Parms.OnQuantizationEvent = (struct FDelegate)OnQuantizationEvent;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(struct UObject* WorldContextObject, const struct FDelegate& OnQuantizationEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "SubscribeToAllQuantizationEvents");
    struct
    {
        struct UObject* WorldContextObject;
        struct FDelegate OnQuantizationEvent;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.OnQuantizationEvent = (struct FDelegate)OnQuantizationEvent;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::SetTicksPerSecond(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float TicksPerSecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "SetTicksPerSecond");
    struct
    {
        struct UObject* WorldContextObject;
        struct FQuartzQuantizationBoundary QuantizationBoundary;
        struct FDelegate Delegate;
        float TicksPerSecond;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuantizationBoundary = (struct FQuartzQuantizationBoundary)QuantizationBoundary;
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.TicksPerSecond = (float)TicksPerSecond;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::SetThirtySecondNotesPerMinute(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float ThirtySecondsNotesPerMinute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "SetThirtySecondNotesPerMinute");
    struct
    {
        struct UObject* WorldContextObject;
        struct FQuartzQuantizationBoundary QuantizationBoundary;
        struct FDelegate Delegate;
        float ThirtySecondsNotesPerMinute;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuantizationBoundary = (struct FQuartzQuantizationBoundary)QuantizationBoundary;
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.ThirtySecondsNotesPerMinute = (float)ThirtySecondsNotesPerMinute;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::SetSecondsPerTick(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float SecondsPerTick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "SetSecondsPerTick");
    struct
    {
        struct UObject* WorldContextObject;
        struct FQuartzQuantizationBoundary QuantizationBoundary;
        struct FDelegate Delegate;
        float SecondsPerTick;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuantizationBoundary = (struct FQuartzQuantizationBoundary)QuantizationBoundary;
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.SecondsPerTick = (float)SecondsPerTick;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::SetMillisecondsPerTick(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float MillisecondsPerTick)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "SetMillisecondsPerTick");
    struct
    {
        struct UObject* WorldContextObject;
        struct FQuartzQuantizationBoundary QuantizationBoundary;
        struct FDelegate Delegate;
        float MillisecondsPerTick;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuantizationBoundary = (struct FQuartzQuantizationBoundary)QuantizationBoundary;
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.MillisecondsPerTick = (float)MillisecondsPerTick;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::SetBeatsPerMinute(struct UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const struct FDelegate& Delegate, float BeatsPerMinute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "SetBeatsPerMinute");
    struct
    {
        struct UObject* WorldContextObject;
        struct FQuartzQuantizationBoundary QuantizationBoundary;
        struct FDelegate Delegate;
        float BeatsPerMinute;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.QuantizationBoundary = (struct FQuartzQuantizationBoundary)QuantizationBoundary;
    Parms.Delegate = (struct FDelegate)Delegate;
    Parms.BeatsPerMinute = (float)BeatsPerMinute;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::ResumeClock(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "ResumeClock");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::ResetTransport(struct UObject* WorldContextObject, const struct FDelegate& InDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "ResetTransport");
    struct
    {
        struct UObject* WorldContextObject;
        struct FDelegate InDelegate;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InDelegate = (struct FDelegate)InDelegate;
    this->ProcessEvent(Func, &Parms);
}

void UQuartzClockHandle::PauseClock(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "PauseClock");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
}

float UQuartzClockHandle::GetTicksPerSecond(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "GetTicksPerSecond");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "GetThirtySecondNotesPerMinute");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzClockHandle::GetSecondsPerTick(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "GetSecondsPerTick");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzClockHandle::GetMillisecondsPerTick(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "GetMillisecondsPerTick");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzClockHandle::GetBeatsPerMinute(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzClockHandle", "GetBeatsPerMinute");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// USubmixEffectDynamicsProcessorPreset
void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetSettings");
    struct
    {
        struct FSubmixEffectDynamicsProcessorSettings Settings;
    } Parms{};
    Parms.Settings = (struct FSubmixEffectDynamicsProcessorSettings)Settings;
    this->ProcessEvent(Func, &Parms);
}

void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(struct USoundSubmix* Submix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetExternalSubmix");
    struct
    {
        struct USoundSubmix* Submix;
    } Parms{};
    Parms.Submix = (struct USoundSubmix*)Submix;
    this->ProcessEvent(Func, &Parms);
}

// USubmixEffectSubmixEQPreset
void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubmixEffectSubmixEQPreset", "SetSettings");
    struct
    {
        struct FSubmixEffectSubmixEQSettings InSettings;
    } Parms{};
    Parms.InSettings = (struct FSubmixEffectSubmixEQSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

// USubmixEffectReverbPreset
void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubmixEffectReverbPreset", "SetSettingsWithReverbEffect");
    struct
    {
        struct UReverbEffect* InReverbEffect;
        float WetLevel;
        float DryLevel;
    } Parms{};
    Parms.InReverbEffect = (struct UReverbEffect*)InReverbEffect;
    Parms.WetLevel = (float)WetLevel;
    Parms.DryLevel = (float)DryLevel;
    this->ProcessEvent(Func, &Parms);
}

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubmixEffectReverbPreset", "SetSettings");
    struct
    {
        struct FSubmixEffectReverbSettings InSettings;
    } Parms{};
    Parms.InSettings = (struct FSubmixEffectReverbSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

// UQuartzSubsystem
float UQuartzSubsystem::GetRoundTripMinLatency(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetRoundTripMinLatency");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzSubsystem::GetRoundTripMaxLatency(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetRoundTripMaxLatency");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzSubsystem::GetRoundTripAverageLatency(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetRoundTripAverageLatency");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(struct UObject* WorldContextObject, struct FName ClockName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetHandleForClock");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName ClockName;
        struct UQuartzClockHandle* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ClockName = (struct FName)ClockName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMinLatency");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMaxLatency");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadAverageLatency");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadMinLatency");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadMaxLatency");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadAverageLatency");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UQuartzSubsystem::DoesClockExist(struct UObject* WorldContextObject, struct FName ClockName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "DoesClockExist");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName ClockName;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ClockName = (struct FName)ClockName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(struct UObject* WorldContextObject, struct FName ClockName, struct FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QuartzSubsystem", "CreateNewClock");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName ClockName;
        struct FQuartzClockSettings InSettings;
        bool bOverrideSettingsIfClockExists;
        struct UQuartzClockHandle* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ClockName = (struct FName)ClockName;
    Parms.InSettings = (struct FQuartzClockSettings)InSettings;
    Parms.bOverrideSettingsIfClockExists = (bool)bOverrideSettingsIfClockExists;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
