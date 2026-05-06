#include "PandoraUploadPlugin.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_PandoraUploadLibrary
struct UBP_PandoraUploadLibrary* UBP_PandoraUploadLibrary::GetInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_PandoraUploadLibrary", "GetInstance");
    struct
    {
        struct UBP_PandoraUploadLibrary* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBP_PandoraUploadLibrary::BP_TcUploadVideFile(struct FString strSignature, struct FString strVideoPath, struct FString strCoverPath, bool bEnableResume, bool bEnableHttps, struct FString strFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_PandoraUploadLibrary", "BP_TcUploadVideFile");
    struct
    {
        struct FString strSignature;
        struct FString strVideoPath;
        struct FString strCoverPath;
        bool bEnableResume;
        bool bEnableHttps;
        struct FString strFileName;
        int32_t ReturnValue;
    } Parms{};
    Parms.strSignature = (struct FString)strSignature;
    Parms.strVideoPath = (struct FString)strVideoPath;
    Parms.strCoverPath = (struct FString)strCoverPath;
    Parms.bEnableResume = (bool)bEnableResume;
    Parms.bEnableHttps = (bool)bEnableHttps;
    Parms.strFileName = (struct FString)strFileName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBP_PandoraUploadLibrary::BP_TcUploadUnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_PandoraUploadLibrary", "BP_TcUploadUnInit");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBP_PandoraUploadLibrary::BP_TcUploadInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_PandoraUploadLibrary", "BP_TcUploadInit");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBP_PandoraUploadLibrary::BP_TcUploadCancel(int32_t nSessionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_PandoraUploadLibrary", "BP_TcUploadCancel");
    struct
    {
        int32_t nSessionId;
        int32_t ReturnValue;
    } Parms{};
    Parms.nSessionId = (int32_t)nSessionId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBP_PandoraUploadLibrary::BP_GetSavePath(struct FString& strSavePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BP_PandoraUploadLibrary", "BP_GetSavePath");
    struct
    {
        struct FString strSavePath;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    strSavePath = Parms.strSavePath;
}

} // namespace SDK
