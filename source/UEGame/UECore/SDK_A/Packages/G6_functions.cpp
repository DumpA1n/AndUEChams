#include "G6.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UG6LuaScriptManager
void UG6LuaScriptManager::LogLancherProccess(struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6LuaScriptManager", "LogLancherProccess");
    struct
    {
        struct FString Tag;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UG6LuaScriptManager::ChangeGCINCMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6LuaScriptManager", "ChangeGCINCMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UG6LuaScriptManager::ChangeGCGENMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("G6LuaScriptManager", "ChangeGCGENMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
