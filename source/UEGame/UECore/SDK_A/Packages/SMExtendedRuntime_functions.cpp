#include "SMExtendedRuntime.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// USMExtendedGraphPropertyHelpers
void USMExtendedGraphPropertyHelpers::BreakTextGraphProperty(const struct FSMTextGraphProperty& GraphProperty, struct FText& Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SMExtendedGraphPropertyHelpers", "BreakTextGraphProperty");
    struct
    {
        struct FSMTextGraphProperty GraphProperty;
        struct FText Result;
    } Parms{};
    Parms.GraphProperty = (struct FSMTextGraphProperty)GraphProperty;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

} // namespace SDK
