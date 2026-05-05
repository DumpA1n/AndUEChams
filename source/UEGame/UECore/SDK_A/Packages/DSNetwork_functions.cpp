#include "DSNetwork.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDualChannelIpNetConnection
void UDualChannelIpNetConnection::OnHandleNetworkFailure(struct UWorld* World, struct UNetDriver* NetDriver, ENetworkFailure FailureType, struct FString ErrorString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DualChannelIpNetConnection", "OnHandleNetworkFailure");
    struct
    {
        struct UWorld* World;
        struct UNetDriver* NetDriver;
        enum ENetworkFailure FailureType;
        struct FString ErrorString;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.NetDriver = (struct UNetDriver*)NetDriver;
    Parms.FailureType = (enum ENetworkFailure)FailureType;
    Parms.ErrorString = (struct FString)ErrorString;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
