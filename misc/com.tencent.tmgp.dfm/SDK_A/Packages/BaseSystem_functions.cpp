#include "BaseSystem.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBaseSystemBlueprintLibrary::* ----
void UBaseSystemBlueprintLibrary::RegisterAutoSpawnComponentForActor(struct AActor* ActorClass, struct UActorComponent* DataComponentClass, uint8_t bPersistent, uint8_t Flags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BaseSystemBlueprintLibrary", "RegisterAutoSpawnComponentForActor");
    struct
    {
        struct AActor* ActorClass;
        struct UActorComponent* DataComponentClass;
        uint8_t bPersistent;
        uint8_t Flags;
    } Parms{};
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.DataComponentClass = (struct UActorComponent*)DataComponentClass;
    Parms.bPersistent = (uint8_t)bPersistent;
    Parms.Flags = (uint8_t)Flags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
