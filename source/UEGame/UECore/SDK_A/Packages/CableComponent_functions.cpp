#include "CableComponent.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UCableComponent
void UCableComponent::SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CableComponent", "SetAttachEndToComponent");
    struct
    {
        struct USceneComponent* Component;
        struct FName SocketName;
    } Parms{};
    Parms.Component = (struct USceneComponent*)Component;
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
}

void UCableComponent::SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CableComponent", "SetAttachEndTo");
    struct
    {
        struct AActor* Actor;
        struct FName ComponentProperty;
        struct FName SocketName;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.ComponentProperty = (struct FName)ComponentProperty;
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
}

void UCableComponent::GetCableParticleLocations(struct TArray<struct FVector>& Locations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CableComponent", "GetCableParticleLocations");
    struct
    {
        struct TArray<struct FVector> Locations;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Locations = Parms.Locations;
}

struct USceneComponent* UCableComponent::GetAttachedComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CableComponent", "GetAttachedComponent");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UCableComponent::GetAttachedActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CableComponent", "GetAttachedActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
