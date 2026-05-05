#include "PropertyReplication.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPropertyReplicationComponent
void UPropertyReplicationComponent::OnRep_ContainerReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyReplicationComponent", "OnRep_ContainerReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPropertyReplicationComponent::OnRep_Container()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyReplicationComponent", "OnRep_Container");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPropertyReplicationComponent::MulticastUnreliable(struct UObject* Object, struct TArray<uint8_t> Data, int32_t NumBits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyReplicationComponent", "MulticastUnreliable");
    struct
    {
        struct UObject* Object;
        struct TArray<uint8_t> Data;
        int32_t NumBits;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.Data = (struct TArray<uint8_t>)Data;
    Parms.NumBits = (int32_t)NumBits;
    this->ProcessEvent(Func, &Parms);
}

void UPropertyReplicationComponent::MulticastReliable(struct UObject* Object, struct TArray<uint8_t> Data, int32_t NumBits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyReplicationComponent", "MulticastReliable");
    struct
    {
        struct UObject* Object;
        struct TArray<uint8_t> Data;
        int32_t NumBits;
    } Parms{};
    Parms.Object = (struct UObject*)Object;
    Parms.Data = (struct TArray<uint8_t>)Data;
    Parms.NumBits = (int32_t)NumBits;
    this->ProcessEvent(Func, &Parms);
}

// UPropertyReplicationTestObject
void UPropertyReplicationTestObject::MulticasUnreliable(int32_t I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyReplicationTestObject", "MulticasUnreliable");
    struct
    {
        int32_t I;
    } Parms{};
    Parms.I = (int32_t)I;
    this->ProcessEvent(Func, &Parms);
}

void UPropertyReplicationTestObject::MulticasReliable(int32_t I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyReplicationTestObject", "MulticasReliable");
    struct
    {
        int32_t I;
    } Parms{};
    Parms.I = (int32_t)I;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
