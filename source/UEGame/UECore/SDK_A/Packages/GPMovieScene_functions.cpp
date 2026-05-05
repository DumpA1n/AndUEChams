#include "GPMovieScene.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPMovieSceneDelegates
struct UGPMovieSceneDelegates* UGPMovieSceneDelegates::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPMovieSceneDelegates", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UGPMovieSceneDelegates* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
