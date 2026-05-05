#include "GooglePAD.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGooglePADFunctionLibrary
EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ShowCellularDataConfirmation");
    struct
    {
        enum EGooglePADErrorCode ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestRemoval");
    struct
    {
        struct FString Name;
        enum EGooglePADErrorCode ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(struct TArray<struct FString> AssetPacks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestInfo");
    struct
    {
        struct TArray<struct FString> AssetPacks;
        enum EGooglePADErrorCode ReturnValue;
    } Parms{};
    Parms.AssetPacks = (struct TArray<struct FString>)AssetPacks;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(struct TArray<struct FString> AssetPacks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "RequestDownload");
    struct
    {
        struct TArray<struct FString> AssetPacks;
        enum EGooglePADErrorCode ReturnValue;
    } Parms{};
    Parms.AssetPacks = (struct TArray<struct FString>)AssetPacks;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGooglePADFunctionLibrary::ReleaseDownloadState(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ReleaseDownloadState");
    struct
    {
        int32_t State;
    } Parms{};
    Parms.State = (int32_t)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int32_t Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "ReleaseAssetPackLocation");
    struct
    {
        int32_t Location;
    } Parms{};
    Parms.Location = (int32_t)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UGooglePADFunctionLibrary::GetTotalBytesToDownload(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetTotalBytesToDownload");
    struct
    {
        int32_t State;
        int32_t ReturnValue;
    } Parms{};
    Parms.State = (int32_t)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int32_t Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetStorageMethod");
    struct
    {
        int32_t Location;
        enum EGooglePADStorageMethod ReturnValue;
    } Parms{};
    Parms.Location = (int32_t)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetShowCellularDataConfirmationStatus");
    struct
    {
        enum EGooglePADCellularDataConfirmStatus Status;
        enum EGooglePADErrorCode ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Status = Parms.Status;
    return Parms.ReturnValue;
}

EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetDownloadStatus");
    struct
    {
        int32_t State;
        enum EGooglePADDownloadStatus ReturnValue;
    } Parms{};
    Parms.State = (int32_t)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(struct FString Name, int32_t& State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetDownloadState");
    struct
    {
        struct FString Name;
        int32_t State;
        enum EGooglePADErrorCode ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    State = Parms.State;
    return Parms.ReturnValue;
}

int32_t UGooglePADFunctionLibrary::GetBytesDownloaded(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetBytesDownloaded");
    struct
    {
        int32_t State;
        int32_t ReturnValue;
    } Parms{};
    Parms.State = (int32_t)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGooglePADFunctionLibrary::GetAssetsPath(int32_t Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetAssetsPath");
    struct
    {
        int32_t Location;
        struct FString ReturnValue;
    } Parms{};
    Parms.Location = (int32_t)Location;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(struct FString Name, int32_t& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "GetAssetPackLocation");
    struct
    {
        struct FString Name;
        int32_t Location;
        enum EGooglePADErrorCode ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Location = Parms.Location;
    return Parms.ReturnValue;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(struct TArray<struct FString> AssetPacks)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GooglePADFunctionLibrary", "CancelDownload");
    struct
    {
        struct TArray<struct FString> AssetPacks;
        enum EGooglePADErrorCode ReturnValue;
    } Parms{};
    Parms.AssetPacks = (struct TArray<struct FString>)AssetPacks;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
