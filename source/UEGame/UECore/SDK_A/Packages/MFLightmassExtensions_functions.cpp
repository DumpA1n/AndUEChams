#include "MFLightmassExtensions.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFILCDynamicScaleComponent
void UMFILCDynamicScaleComponent::SetSkyLightScaleFactor(float SkyLightScaleFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFILCDynamicScaleComponent", "SetSkyLightScaleFactor");
    struct
    {
        float SkyLightScaleFactor;
    } Parms{};
    Parms.SkyLightScaleFactor = (float)SkyLightScaleFactor;
    this->ProcessEvent(Func, &Parms);
}

void UMFILCDynamicScaleComponent::SetSkyLightLerpFactor(float SkyLightLerpFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFILCDynamicScaleComponent", "SetSkyLightLerpFactor");
    struct
    {
        float SkyLightLerpFactor;
    } Parms{};
    Parms.SkyLightLerpFactor = (float)SkyLightLerpFactor;
    this->ProcessEvent(Func, &Parms);
}

void UMFILCDynamicScaleComponent::SetILCScaleFactor(float ILCScaleFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFILCDynamicScaleComponent", "SetILCScaleFactor");
    struct
    {
        float ILCScaleFactor;
    } Parms{};
    Parms.ILCScaleFactor = (float)ILCScaleFactor;
    this->ProcessEvent(Func, &Parms);
}

// UMFILCSampleProxyComponent
void UMFILCSampleProxyComponent::DestroyILCProxyActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFILCSampleProxyComponent", "DestroyILCProxyActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFILCSampleProxyComponent::CreateILCProxyActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFILCSampleProxyComponent", "CreateILCProxyActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
