#include "BP_GLS_PreCompilePSO_Mobile.hpp"
#include "DFMGameLaunch.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBP_GLS_PreCompilePSO_Mobile_C::* ----
void UBP_GLS_PreCompilePSO_Mobile_C::BP_OnStepBegin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_PreCompilePSO_Mobile_C", "BP_OnStepBegin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_PreCompilePSO_Mobile_C::BP_OnStepEnd(ELaunchStepResult Result, struct FString ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_PreCompilePSO_Mobile_C", "BP_OnStepEnd");
    struct
    {
        enum ELaunchStepResult Result;
        struct FString ErrorCode;
    } Parms{};
    Parms.Result = (enum ELaunchStepResult)Result;
    Parms.ErrorCode = (struct FString)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_PreCompilePSO_Mobile_C::ExecuteUbergraph_BP_GLS_PreCompilePSO_Mobile(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_PreCompilePSO_Mobile_C", "ExecuteUbergraph_BP_GLS_PreCompilePSO_Mobile");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
