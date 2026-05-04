#include "Triangulator.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UTriangulatorBPLibrary::* ----
struct TArray<int32_t> UTriangulatorBPLibrary::TriangulatorSampleFunction(const struct TArray<struct FPolyline>& Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TriangulatorBPLibrary", "TriangulatorSampleFunction");
    struct
    {
        struct TArray<struct FPolyline> Param;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Param = (struct TArray<struct FPolyline>)Param;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
