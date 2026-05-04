#include "UIClipMap.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UUIClipMapTexture::* ----
void UUIClipMapTexture::SetUseEventLayer(uint8_t bUseEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIClipMapTexture", "SetUseEventLayer");
    struct
    {
        uint8_t bUseEvent;
    } Parms{};
    Parms.bUseEvent = (uint8_t)bUseEvent;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UUIClipMapTexture::IsUsingEventLayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIClipMapTexture", "IsUsingEventLayer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UUIClipMapTexture::DoesPatchHaveEventVariant(const struct FIntVector& PatchId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UIClipMapTexture", "DoesPatchHaveEventVariant");
    struct
    {
        struct FIntVector PatchId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PatchId = (struct FIntVector)PatchId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
