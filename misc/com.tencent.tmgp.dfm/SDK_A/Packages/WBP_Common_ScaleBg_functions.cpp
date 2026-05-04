#include "WBP_Common_ScaleBg.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UWBP_Common_ScaleBg_C::* ----
void UWBP_Common_ScaleBg_C::PreConstruct(uint8_t IsDesignTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_Common_ScaleBg_C", "PreConstruct");
    struct
    {
        uint8_t IsDesignTime;
    } Parms{};
    Parms.IsDesignTime = (uint8_t)IsDesignTime;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_Common_ScaleBg_C::ExecuteUbergraph_WBP_Common_ScaleBg(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_Common_ScaleBg_C", "ExecuteUbergraph_WBP_Common_ScaleBg");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
