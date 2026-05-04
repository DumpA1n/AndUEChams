#include "VFXExtensions.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AFXColorPaletteActor::* ----
void AFXColorPaletteActor::UpdateFxUnlitGlobalColor(int32_t curTODID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXColorPaletteActor", "UpdateFxUnlitGlobalColor");
    struct
    {
        int32_t curTODID;
    } Parms{};
    Parms.curTODID = (int32_t)curTODID;
    this->ProcessEvent(Func, &Parms);
}

// ---- AFXPortalActor::* ----
void AFXPortalActor::OnPortalBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXPortalActor", "OnPortalBeginOverlap");
    struct
    {
        struct AActor* OverlappedActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.OverlappedActor = (struct AActor*)OverlappedActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// ---- AFXSequencePlayerActor::* ----
void AFXSequencePlayerActor::PlaySequence()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FXSequencePlayerActor", "PlaySequence");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
