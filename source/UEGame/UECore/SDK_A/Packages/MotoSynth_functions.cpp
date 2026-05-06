#include "MotoSynth.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// USynthComponentMoto
void USynthComponentMoto::SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponentMoto", "SetSettings");
    struct
    {
        struct FMotoSynthRuntimeSettings InSettings;
    } Parms{};
    Parms.InSettings = (struct FMotoSynthRuntimeSettings)InSettings;
    this->ProcessEvent(Func, &Parms);
}

void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponentMoto", "SetRPM");
    struct
    {
        float InRPM;
        float InTimeSec;
    } Parms{};
    Parms.InRPM = (float)InRPM;
    Parms.InTimeSec = (float)InTimeSec;
    this->ProcessEvent(Func, &Parms);
}

bool USynthComponentMoto::IsEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponentMoto", "IsEnabled");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USynthComponentMoto::GetRPMRange(float& OutMinRPM, float& OutMaxRPM)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SynthComponentMoto", "GetRPMRange");
    struct
    {
        float OutMinRPM;
        float OutMaxRPM;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutMinRPM = Parms.OutMinRPM;
    OutMaxRPM = Parms.OutMaxRPM;
}

} // namespace SDK
