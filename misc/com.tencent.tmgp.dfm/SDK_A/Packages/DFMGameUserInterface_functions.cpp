#include "DFMGameUserInterface.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFCommonTabNavigator::* ----
void UDFCommonTabNavigator::InitKeyIcons()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonTabNavigator", "InitKeyIcons");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
