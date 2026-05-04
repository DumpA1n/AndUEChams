#include "AudioMixer.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- USynthComponent::* ----
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

void USynthComponent::SetSubmixSend(struct USoundSubmix* Submix, float SendLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "SetSubmixSend");
    struct
    {
        struct USoundSubmix* Submix;
        float SendLevel;
    } Parms{};
    Parms.Submix = (struct USoundSubmix*)Submix;
    Parms.SendLevel = (float)SendLevel;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USynthComponent::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponent", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAudioMixerBlueprintLibrary::* ----
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

void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize)
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
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SubmixToAnalyze = (struct USoundSubmix*)SubmixToAnalyze;
    Parms.FFTSize = (enum EFFTSize)FFTSize;
    Parms.InterpolationMethod = (enum EFFTPeakInterpolationMethod)InterpolationMethod;
    Parms.WindowType = (enum EFFTWindowType)WindowType;
    Parms.HopSize = (float)HopSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, uint8_t bBypassed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "SetBypassSourceEffectChainEntry");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundEffectSourcePresetChain* PresetChain;
        int32_t EntryIndex;
        uint8_t bBypassed;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PresetChain = (struct USoundEffectSourcePresetChain*)PresetChain;
    Parms.EntryIndex = (int32_t)EntryIndex;
    Parms.bBypassed = (uint8_t)bBypassed;
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

void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry ENTRY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "AddSourceEffectToPresetChain");
    struct
    {
        struct UObject* WorldContextObject;
        struct USoundEffectSourcePresetChain* PresetChain;
        struct FSourceEffectChainEntry ENTRY;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PresetChain = (struct USoundEffectSourcePresetChain*)PresetChain;
    Parms.ENTRY = (struct FSourceEffectChainEntry)ENTRY;
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

// ---- USubmixEffectDynamicsProcessorPreset::* ----
void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetSettings");
    struct
    {
        struct FSubmixEffectDynamicsProcessorSettings InSettings;
    } Parms{};
    Parms.InSettings = (struct FSubmixEffectDynamicsProcessorSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

// ---- USubmixEffectSubmixEQPreset::* ----
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

// ---- USubmixEffectReverbPreset::* ----
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

// ---- USubmixEffectReverbFastPreset::* ----
void USubmixEffectReverbFastPreset::SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubmixEffectReverbFastPreset", "SetSettingsWithReverbEffect");
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

void USubmixEffectReverbFastPreset::SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SubmixEffectReverbFastPreset", "SetSettings");
    struct
    {
        struct FSubmixEffectReverbFastSettings InSettings;
    } Parms{};
    Parms.InSettings = (struct FSubmixEffectReverbFastSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
