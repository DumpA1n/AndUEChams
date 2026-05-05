#include "BP_GLS_CDNMeta.hpp"
#include "DFMGameSDK.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_GLS_CDNMeta_C
void UBP_GLS_CDNMeta_C::BP_OnGetMetaData(const struct FMetaInfo& MetaInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_CDNMeta_C", "BP_OnGetMetaData");
    struct
    {
        struct FMetaInfo MetaInfo;
    } Parms{};
    Parms.MetaInfo = (struct FMetaInfo)MetaInfo;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_CDNMeta_C::BP_OnGetMetaDataFailed(EMetaError MetaError, int32_t InErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_CDNMeta_C", "BP_OnGetMetaDataFailed");
    struct
    {
        enum EMetaError MetaError;
        int32_t InErrorCode;
    } Parms{};
    Parms.MetaError = (enum EMetaError)MetaError;
    Parms.InErrorCode = (int32_t)InErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UBP_GLS_CDNMeta_C::ExecuteUbergraph_BP_GLS_CDNMeta(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_GLS_CDNMeta_C", "ExecuteUbergraph_BP_GLS_CDNMeta");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
