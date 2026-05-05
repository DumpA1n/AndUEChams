#include "DFCommonButtonV3.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFCommonButtonV3_C
void UDFCommonButtonV3_C::SetCheckExceedBounds(uint8_t bInCheckExceedBounds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFCommonButtonV3_C", "SetCheckExceedBounds");
    struct
    {
        uint8_t bInCheckExceedBounds;
    } Parms{};
    Parms.bInCheckExceedBounds = (uint8_t)bInCheckExceedBounds;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
