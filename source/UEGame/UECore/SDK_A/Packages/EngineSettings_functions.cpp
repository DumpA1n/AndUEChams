#include "EngineSettings.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGameMapsSettings
void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameMapsSettings", "SetSkipAssigningGamepadToPlayer1");
    struct
    {
        bool bSkipFirstPlayer;
    } Parms{};
    Parms.bSkipFirstPlayer = (bool)bSkipFirstPlayer;
    this->ProcessEvent(Func, &Parms);
}

bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameMapsSettings", "GetSkipAssigningGamepadToPlayer1");
    struct
    {
        bool ReturnValue;
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
