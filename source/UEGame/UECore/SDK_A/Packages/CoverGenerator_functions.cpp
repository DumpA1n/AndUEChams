#include "CoverGenerator.hpp"
#include "Engine.hpp"
#include "NavigationSystem.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ACoverGenerator
void ACoverGenerator::ReleaseCover(struct UCoverPoint* CoverPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverGenerator", "ReleaseCover");
    struct
    {
        struct UCoverPoint* CoverPoint;
    } Parms{};
    Parms.CoverPoint = (struct UCoverPoint*)CoverPoint;
    this->ProcessEvent(Func, &Parms);
}

void ACoverGenerator::OnNavigationGenerationFinished(struct ANavigationData* NavData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverGenerator", "OnNavigationGenerationFinished");
    struct
    {
        struct ANavigationData* NavData;
    } Parms{};
    Parms.NavData = (struct ANavigationData*)NavData;
    this->ProcessEvent(Func, &Parms);
}

bool ACoverGenerator::OccupyCover(struct UCoverPoint* CoverPoint, struct AController* Controller)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverGenerator", "OccupyCover");
    struct
    {
        struct UCoverPoint* CoverPoint;
        struct AController* Controller;
        bool ReturnValue;
    } Parms{};
    Parms.CoverPoint = (struct UCoverPoint*)CoverPoint;
    Parms.Controller = (struct AController*)Controller;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool ACoverGenerator::IsFreeCoverPoint(struct UCoverPoint* CoverPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverGenerator", "IsFreeCoverPoint");
    struct
    {
        struct UCoverPoint* CoverPoint;
        bool ReturnValue;
    } Parms{};
    Parms.CoverPoint = (struct UCoverPoint*)CoverPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UCoverPoint*> ACoverGenerator::GetCoverWithinBox(const struct FBox& BoxIn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverGenerator", "GetCoverWithinBox");
    struct
    {
        struct FBox BoxIn;
        struct TArray<struct UCoverPoint*> ReturnValue;
    } Parms{};
    Parms.BoxIn = (struct FBox)BoxIn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACoverGenerator* ACoverGenerator::GetCoverGenerator(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CoverGenerator", "GetCoverGenerator");
    struct
    {
        struct UObject* WorldContextObject;
        struct ACoverGenerator* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool ACoverGenerator::CoverExistWithinBox(const struct FBox& BoxIn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CoverGenerator", "CoverExistWithinBox");
    struct
    {
        struct FBox BoxIn;
        bool ReturnValue;
    } Parms{};
    Parms.BoxIn = (struct FBox)BoxIn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
