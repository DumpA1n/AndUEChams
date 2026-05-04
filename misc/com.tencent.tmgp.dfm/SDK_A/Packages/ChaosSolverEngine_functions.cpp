#include "ChaosSolverEngine.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UChaosSolverEngineBlueprintLibrary::* ----
struct FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ChaosSolverEngineBlueprintLibrary", "ConvertPhysicsCollisionToHitResult");
    struct
    {
        struct FChaosPhysicsCollisionInfo PhysicsCollision;
        struct FHitResult ReturnValue;
    } Parms{};
    Parms.PhysicsCollision = (struct FChaosPhysicsCollisionInfo)PhysicsCollision;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AChaosSolverActor::* ----
void AChaosSolverActor::SetSolverActive(uint8_t bActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosSolverActor", "SetSolverActive");
    struct
    {
        uint8_t bActive;
    } Parms{};
    Parms.bActive = (uint8_t)bActive;
    this->ProcessEvent(Func, &Parms);
}

void AChaosSolverActor::SetAsCurrentWorldSolver()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChaosSolverActor", "SetAsCurrentWorldSolver");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
