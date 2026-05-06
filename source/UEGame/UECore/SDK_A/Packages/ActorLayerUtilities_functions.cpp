#include "ActorLayerUtilities.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ULayersBlueprintLibrary
void ULayersBlueprintLibrary::RemoveActorFromLayer(struct AActor* InActor, const struct FActorLayer& Layer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LayersBlueprintLibrary", "RemoveActorFromLayer");
    struct
    {
        struct AActor* InActor;
        struct FActorLayer Layer;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.Layer = (struct FActorLayer)Layer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct AActor*> ULayersBlueprintLibrary::GetActors(struct UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LayersBlueprintLibrary", "GetActors");
    struct
    {
        struct UObject* WorldContextObject;
        struct FActorLayer ActorLayer;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorLayer = (struct FActorLayer)ActorLayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULayersBlueprintLibrary::AddActorToLayer(struct AActor* InActor, const struct FActorLayer& Layer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LayersBlueprintLibrary", "AddActorToLayer");
    struct
    {
        struct AActor* InActor;
        struct FActorLayer Layer;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.Layer = (struct FActorLayer)Layer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
