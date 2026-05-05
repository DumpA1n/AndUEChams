#include "MetaperfSupport.hpp"
#include "UploadToolsModule.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMetaperfUploader
void UMetaperfUploader::UploadMetaperfFile(const struct FUploadFileNtf& UploadNtf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaperfUploader", "UploadMetaperfFile");
    struct
    {
        struct FUploadFileNtf UploadNtf;
    } Parms{};
    Parms.UploadNtf = (struct FUploadFileNtf)UploadNtf;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaperfUploader::SetMetaperfDownloadNtf(struct FString app_id, struct FString secret_id, struct FString secret_key, struct FString bucket_name, struct FString host_name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaperfUploader", "SetMetaperfDownloadNtf");
    struct
    {
        struct FString app_id;
        struct FString secret_id;
        struct FString secret_key;
        struct FString bucket_name;
        struct FString host_name;
    } Parms{};
    Parms.app_id = (struct FString)app_id;
    Parms.secret_id = (struct FString)secret_id;
    Parms.secret_key = (struct FString)secret_key;
    Parms.bucket_name = (struct FString)bucket_name;
    Parms.host_name = (struct FString)host_name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaperfUploader::SetGameState(uint8_t bGameState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaperfUploader", "SetGameState");
    struct
    {
        uint8_t bGameState;
    } Parms{};
    Parms.bGameState = (uint8_t)bGameState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaperfUploader::SetFFXFIOpen(uint8_t bisOpne)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaperfUploader", "SetFFXFIOpen");
    struct
    {
        uint8_t bisOpne;
    } Parms{};
    Parms.bisOpne = (uint8_t)bisOpne;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMetaperfUploader::SetDLSSGOpen(uint8_t bisOpne)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaperfUploader", "SetDLSSGOpen");
    struct
    {
        uint8_t bisOpne;
    } Parms{};
    Parms.bisOpne = (uint8_t)bisOpne;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FMetaperfSystemInfo UMetaperfUploader::GetMetaperfSystemInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaperfUploader", "GetMetaperfSystemInfo");
    struct
    {
        struct FMetaperfSystemInfo ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMetaperfJankInfo UMetaperfUploader::GetMetaperfJankInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaperfUploader", "GetMetaperfJankInfo");
    struct
    {
        struct FMetaperfJankInfo ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMetaperfUploader::FlushMetaperfData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MetaperfUploader", "FlushMetaperfData");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
