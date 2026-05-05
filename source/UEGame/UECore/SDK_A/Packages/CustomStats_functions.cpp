#include "CustomStats.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGameStatsOnFetchBaseSystem
void UGameStatsOnFetchBaseSystem::StatsEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameStatsOnFetchBaseSystem", "StatsEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
