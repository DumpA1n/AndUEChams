#include "DFMFighting.hpp"
#include "GPGameplay.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFMFSM_DragRescueCheckAction
void UDFMFSM_DragRescueCheckAction::TryRescue(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_DragRescueCheckAction", "TryRescue");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_DragRescueCheckAction::TryCancel(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_DragRescueCheckAction", "TryCancel");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

// UDFMFSM_DragRescueGlobalAction
void UDFMFSM_DragRescueGlobalAction::OnTargetBeAssassinate(uint8_t bAssassinate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_DragRescueGlobalAction", "OnTargetBeAssassinate");
    struct
    {
        uint8_t bAssassinate;
    } Parms{};
    Parms.bAssassinate = (uint8_t)bAssassinate;
    this->ProcessEvent(Func, &Parms);
}

void UDFMFSM_DragRescueGlobalAction::InterruptRescue(EFSMCharacterState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMFSM_DragRescueGlobalAction", "InterruptRescue");
    struct
    {
        enum EFSMCharacterState State;
    } Parms{};
    Parms.State = (enum EFSMCharacterState)State;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
