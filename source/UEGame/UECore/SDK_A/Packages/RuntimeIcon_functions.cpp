#include "RuntimeIcon.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// URuntimeIconManager
void URuntimeIconManager::SetIsInGame(uint8_t bInIsInGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconManager", "SetIsInGame");
    struct
    {
        uint8_t bInIsInGame;
    } Parms{};
    Parms.bInIsInGame = (uint8_t)bInIsInGame;
    this->ProcessEvent(Func, &Parms);
}

uint8_t URuntimeIconManager::IsInGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconManager", "IsInGame");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t URuntimeIconManager::IsFrontend()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconManager", "IsFrontend");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float URuntimeIconManager::GetIconScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconManager", "GetIconScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void URuntimeIconManager::ClearAllAtlas()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconManager", "ClearAllAtlas");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
