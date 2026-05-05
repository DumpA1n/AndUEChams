#include "DFHeightFogManager.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFHeightFogSubsystem
struct UDFHeightFogSubsystem* UDFHeightFogSubsystem::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFHeightFogSubsystem", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFHeightFogSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFHeightFogSubsystem::DeactivateHeightFog(const struct FName& InFogName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFHeightFogSubsystem", "DeactivateHeightFog");
    struct
    {
        struct FName InFogName;
    } Parms{};
    Parms.InFogName = (struct FName)InFogName;
    this->ProcessEvent(Func, &Parms);
}

void UDFHeightFogSubsystem::ActivateHeightFog(const struct FName& InFogName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFHeightFogSubsystem", "ActivateHeightFog");
    struct
    {
        struct FName InFogName;
    } Parms{};
    Parms.InFogName = (struct FName)InFogName;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
