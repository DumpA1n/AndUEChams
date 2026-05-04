#include "EngineSettings.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGameMapsSettings::* ----
void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(uint8_t bSkipFirstPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameMapsSettings", "SetSkipAssigningGamepadToPlayer1");
    struct
    {
        uint8_t bSkipFirstPlayer;
    } Parms{};
    Parms.bSkipFirstPlayer = (uint8_t)bSkipFirstPlayer;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameMapsSettings", "GetSkipAssigningGamepadToPlayer1");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameMapsSettings", "GetGameMapsSettings");
    struct
    {
        struct UGameMapsSettings* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
