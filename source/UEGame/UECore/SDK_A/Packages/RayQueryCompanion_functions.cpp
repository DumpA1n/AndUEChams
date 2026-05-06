#include "RayQueryCompanion.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ARayQueryCompanion
void ARayQueryCompanion::ToggleUI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RayQueryCompanion", "ToggleUI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ARayQueryCompanion::ShowUI(bool bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RayQueryCompanion", "ShowUI");
    struct
    {
        bool bShow;
    } Parms{};
    Parms.bShow = (bool)bShow;
    this->ProcessEvent(Func, &Parms);
}

void ARayQueryCompanion::ApplyProfileForCurrentMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RayQueryCompanion", "ApplyProfileForCurrentMap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
