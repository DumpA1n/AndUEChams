#include "MFQCloud.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFQCloudWrapper
bool UMFQCloudWrapper::UploadFile(struct FString InFilePath, struct FString InCosPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQCloudWrapper", "UploadFile");
    struct
    {
        struct FString InFilePath;
        struct FString InCosPath;
        bool ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    Parms.InCosPath = (struct FString)InCosPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFQCloudWrapper::OnUploadProgress__DelegateSignature(float InProgress, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQCloudWrapper", "OnUploadProgress__DelegateSignature");
    struct
    {
        float InProgress;
        struct FString Path;
    } Parms{};
    Parms.InProgress = (float)InProgress;
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

void UMFQCloudWrapper::OnUploadCompleted__DelegateSignature(struct FString InRetVal, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQCloudWrapper", "OnUploadCompleted__DelegateSignature");
    struct
    {
        struct FString InRetVal;
        struct FString Path;
    } Parms{};
    Parms.InRetVal = (struct FString)InRetVal;
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

void UMFQCloudWrapper::OnCosUploadProgress(float InProgress, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQCloudWrapper", "OnCosUploadProgress");
    struct
    {
        float InProgress;
        struct FString Path;
    } Parms{};
    Parms.InProgress = (float)InProgress;
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

void UMFQCloudWrapper::OnCosUploadComplete(struct FString InRetVal, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFQCloudWrapper", "OnCosUploadComplete");
    struct
    {
        struct FString InRetVal;
        struct FString Path;
    } Parms{};
    Parms.InRetVal = (struct FString)InRetVal;
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

struct UMFQCloudWrapper* UMFQCloudWrapper::GetDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFQCloudWrapper", "GetDefault");
    struct
    {
        struct UMFQCloudWrapper* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
