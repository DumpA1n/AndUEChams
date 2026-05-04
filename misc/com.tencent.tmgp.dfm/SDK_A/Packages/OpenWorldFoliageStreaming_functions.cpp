#include "OpenWorldFoliageStreaming.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UOpenWorldFoliageStatics::* ----
struct FName UOpenWorldFoliageStatics::QueryCoverType(struct FVector WorldPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldFoliageStatics", "QueryCoverType");
    struct
    {
        struct FVector WorldPosition;
        struct FName ReturnValue;
    } Parms{};
    Parms.WorldPosition = (struct FVector)WorldPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
