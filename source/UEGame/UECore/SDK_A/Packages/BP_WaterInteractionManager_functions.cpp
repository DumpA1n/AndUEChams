#include "BP_WaterInteractionManager.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ABP_WaterInteractionManager_C
void ABP_WaterInteractionManager_C::SetRT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "SetRT");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABP_WaterInteractionManager_C::UpdateSimParam(float TravelSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "UpdateSimParam");
    struct
    {
        float TravelSpeed;
    } Parms{};
    Parms.TravelSpeed = (float)TravelSpeed;
    this->ProcessEvent(Func, &Parms);
}

void ABP_WaterInteractionManager_C::ClearRT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "ClearRT");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABP_WaterInteractionManager_C::ReceiveBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "ReceiveBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABP_WaterInteractionManager_C::ReceiveTick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "ReceiveTick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void ABP_WaterInteractionManager_C::OnWaterInteractionStateChanged(EDFMWaterInteractionState NewState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "OnWaterInteractionStateChanged");
    struct
    {
        enum EDFMWaterInteractionState NewState;
    } Parms{};
    Parms.NewState = (enum EDFMWaterInteractionState)NewState;
    this->ProcessEvent(Func, &Parms);
}

void ABP_WaterInteractionManager_C::WaterInteractiveRenderTargetChangedEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "WaterInteractiveRenderTargetChangedEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABP_WaterInteractionManager_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "ReceiveEndPlay");
    struct
    {
        enum EEndPlayReason EndPlayReason;
    } Parms{};
    Parms.EndPlayReason = (enum EEndPlayReason)EndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

void ABP_WaterInteractionManager_C::ExecuteUbergraph_BP_WaterInteractionManager(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_WaterInteractionManager_C", "ExecuteUbergraph_BP_WaterInteractionManager");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
