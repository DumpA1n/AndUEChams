#include "BP_GFStage_ModeHallToLobby.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GFStage_ModeHallToLobby_C
void UBP_GFStage_ModeHallToLobby_C::OnBeginStage(struct UObject* Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHallToLobby_C", "OnBeginStage");
    struct
    {
        struct UObject* Args;
    } Parms{};
    Parms.Args = (struct UObject*)Args;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GFStage_ModeHallToLobby_C::ExecuteUbergraph_BP_GFStage_ModeHallToLobby(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GFStage_ModeHallToLobby_C", "ExecuteUbergraph_BP_GFStage_ModeHallToLobby");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
