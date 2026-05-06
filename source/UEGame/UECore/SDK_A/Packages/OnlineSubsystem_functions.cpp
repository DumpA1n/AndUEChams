#include "OnlineSubsystem.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ITurnBasedMatchInterface
void ITurnBasedMatchInterface::OnMatchReceivedTurn(struct FString Match, bool bDidBecomeActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TurnBasedMatchInterface", "OnMatchReceivedTurn");
    struct
    {
        struct FString Match;
        bool bDidBecomeActive;
    } Parms{};
    Parms.Match = (struct FString)Match;
    Parms.bDidBecomeActive = (bool)bDidBecomeActive;
    this->ProcessEvent(Func, &Parms);
}

void ITurnBasedMatchInterface::OnMatchEnded(struct FString Match)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TurnBasedMatchInterface", "OnMatchEnded");
    struct
    {
        struct FString Match;
    } Parms{};
    Parms.Match = (struct FString)Match;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
