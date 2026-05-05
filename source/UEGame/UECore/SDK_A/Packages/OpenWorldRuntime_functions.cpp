#include "OpenWorldRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UOpenWorldBPFunctionLibrary
void UOpenWorldBPFunctionLibrary::SetUnderWaterFogHeightMapUV(struct UExponentialHeightFogComponent* HeightFogComp, struct FVector UV)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldBPFunctionLibrary", "SetUnderWaterFogHeightMapUV");
    struct
    {
        struct UExponentialHeightFogComponent* HeightFogComp;
        struct FVector UV;
    } Parms{};
    Parms.HeightFogComp = (struct UExponentialHeightFogComponent*)HeightFogComp;
    Parms.UV = (struct FVector)UV;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FIntPoint UOpenWorldBPFunctionLibrary::GetClipmapActorOriginTextureSize(struct AClipmapActor* ClipmapActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldBPFunctionLibrary", "GetClipmapActorOriginTextureSize");
    struct
    {
        struct AClipmapActor* ClipmapActor;
        struct FIntPoint ReturnValue;
    } Parms{};
    Parms.ClipmapActor = (struct AClipmapActor*)ClipmapActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UClipmap* UOpenWorldBPFunctionLibrary::GetClipmapActorOriginClipmap(struct AClipmapActor* ClipmapActor, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldBPFunctionLibrary", "GetClipmapActorOriginClipmap");
    struct
    {
        struct AClipmapActor* ClipmapActor;
        int32_t Index;
        struct UClipmap* ReturnValue;
    } Parms{};
    Parms.ClipmapActor = (struct AClipmapActor*)ClipmapActor;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UOpenWorldBPFunctionLibrary::GetClipmapActorLeftTopPosXYAndTextureSize(struct AClipmapActor* ClipmapActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldBPFunctionLibrary", "GetClipmapActorLeftTopPosXYAndTextureSize");
    struct
    {
        struct AClipmapActor* ClipmapActor;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ClipmapActor = (struct AClipmapActor*)ClipmapActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
