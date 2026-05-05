#include "OpenWorldSceneAutommation.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AOpenWorldSceneAutommationFlow
void AOpenWorldSceneAutommationFlow::InitAutomationData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldSceneAutommationFlow", "InitAutomationData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UOpenWorldSceneAutommationMethod
void UOpenWorldSceneAutommationMethod::UpdatePlayerLocaiton(const struct FVector& InPlayerLocation, const struct FRotator& InPlayerRotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldSceneAutommationMethod", "UpdatePlayerLocaiton");
    struct
    {
        struct FVector InPlayerLocation;
        struct FRotator InPlayerRotator;
    } Parms{};
    Parms.InPlayerLocation = (struct FVector)InPlayerLocation;
    Parms.InPlayerRotator = (struct FRotator)InPlayerRotator;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UOpenWorldSceneAutommationMethod::OnAutomationMethodExcute(float ExcuteTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldSceneAutommationMethod", "OnAutomationMethodExcute");
    struct
    {
        float ExcuteTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ExcuteTime = (float)ExcuteTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UOpenWorldSceneAutommationMethod::OnAutomationMethodBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldSceneAutommationMethod", "OnAutomationMethodBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FRotator UOpenWorldSceneAutommationMethod::GetCurentPlayerRotation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldSceneAutommationMethod", "GetCurentPlayerRotation");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UOpenWorldSceneAutommationMethod::GetCurentPlayerLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldSceneAutommationMethod", "GetCurentPlayerLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
