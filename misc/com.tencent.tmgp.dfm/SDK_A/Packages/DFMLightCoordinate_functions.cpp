#include "DFMLightCoordinate.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMLightCoordinateSubsystem::* ----
struct UDFMLightCoordinateSubsystem* UDFMLightCoordinateSubsystem::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMLightCoordinateSubsystem", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMLightCoordinateSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMLightCoordinateSubsystem::DeactivateLightGroup(const struct FName& LightGroupName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLightCoordinateSubsystem", "DeactivateLightGroup");
    struct
    {
        struct FName LightGroupName;
    } Parms{};
    Parms.LightGroupName = (struct FName)LightGroupName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMLightCoordinateSubsystem::ActivateLightGroupOnly(const struct FName& LightGroupName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLightCoordinateSubsystem", "ActivateLightGroupOnly");
    struct
    {
        struct FName LightGroupName;
    } Parms{};
    Parms.LightGroupName = (struct FName)LightGroupName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMLightCoordinateSubsystem::ActivateLightGroup(const struct FName& LightGroupName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLightCoordinateSubsystem", "ActivateLightGroup");
    struct
    {
        struct FName LightGroupName;
    } Parms{};
    Parms.LightGroupName = (struct FName)LightGroupName;
    this->ProcessEvent(Func, &Parms);
}

// ---- ADFMLightGroup::* ----
void ADFMLightGroup::DeactivateLightGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLightGroup", "DeactivateLightGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMLightGroup::ActivateLightGroup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLightGroup", "ActivateLightGroup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
