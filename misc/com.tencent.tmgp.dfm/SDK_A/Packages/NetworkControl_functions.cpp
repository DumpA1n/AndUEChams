#include "NetworkControl.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UNetworkControl::* ----
void UNetworkControl::UnInitNetworkControl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NetworkControl", "UnInitNetworkControl");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UNetworkControl::ShouldControlNetworkOrNot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NetworkControl", "ShouldControlNetworkOrNot");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNetworkControl::RequestNetworkControl(ENetworkControlType InNetworkControlType, float InSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NetworkControl", "RequestNetworkControl");
    struct
    {
        enum ENetworkControlType InNetworkControlType;
        float InSeconds;
    } Parms{};
    Parms.InNetworkControlType = (enum ENetworkControlType)InNetworkControlType;
    Parms.InSeconds = (float)InSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNetworkControl::ReleaseNetworkControl(ENetworkControlType InNetworkControlType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NetworkControl", "ReleaseNetworkControl");
    struct
    {
        enum ENetworkControlType InNetworkControlType;
    } Parms{};
    Parms.InNetworkControlType = (enum ENetworkControlType)InNetworkControlType;
    this->ProcessEvent(Func, &Parms);
}

void UNetworkControl::OnNetworkControlDelegate__DelegateSignature(const ENetworkControlType& NetworkControlType, uint8_t ControlNetworkOrNot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NetworkControl", "OnNetworkControlDelegate__DelegateSignature");
    struct
    {
        enum ENetworkControlType NetworkControlType;
        uint8_t ControlNetworkOrNot;
    } Parms{};
    Parms.NetworkControlType = (enum ENetworkControlType)NetworkControlType;
    Parms.ControlNetworkOrNot = (uint8_t)ControlNetworkOrNot;
    this->ProcessEvent(Func, &Parms);
}

void UNetworkControl::InitNetworkControl(struct UObject* Outer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NetworkControl", "InitNetworkControl");
    struct
    {
        struct UObject* Outer;
    } Parms{};
    Parms.Outer = (struct UObject*)Outer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

ENetworkControlType UNetworkControl::GetCurrentNetworkControlType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NetworkControl", "GetCurrentNetworkControlType");
    struct
    {
        enum ENetworkControlType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNetworkControl* UNetworkControl::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NetworkControl", "Get");
    struct
    {
        struct UNetworkControl* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNetworkControl::DealWithTimerHandle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NetworkControl", "DealWithTimerHandle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
