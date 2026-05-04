#include "BP_Sky_Sphere.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ABP_Sky_Sphere_C::* ----
void ABP_Sky_Sphere_C::RefreshMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_Sky_Sphere_C", "RefreshMaterial");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABP_Sky_Sphere_C::UpdateSunDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_Sky_Sphere_C", "UpdateSunDirection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABP_Sky_Sphere_C::UserConstructionScript()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_Sky_Sphere_C", "UserConstructionScript");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
