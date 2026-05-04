#include "MobilePatchingUtils.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UMobileInstalledContent::* ----
uint8_t UMobileInstalledContent::Mount(int32_t PakOrder, struct FString MountPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileInstalledContent", "Mount");
    struct
    {
        int32_t PakOrder;
        struct FString MountPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakOrder = (int32_t)PakOrder;
    Parms.MountPoint = (struct FString)MountPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobileInstalledContent::GetInstalledContentSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileInstalledContent", "GetInstalledContentSize");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobileInstalledContent::GetDiskFreeSpace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobileInstalledContent", "GetDiskFreeSpace");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMobilePendingContent::* ----
void UMobilePendingContent::StartInstall(struct FDelegate OnSucceeded, struct FDelegate OnFailed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePendingContent", "StartInstall");
    struct
    {
        struct FDelegate OnSucceeded;
        struct FDelegate OnFailed;
    } Parms{};
    Parms.OnSucceeded = (struct FDelegate)OnSucceeded;
    Parms.OnFailed = (struct FDelegate)OnFailed;
    this->ProcessEvent(Func, &Parms);
}

float UMobilePendingContent::GetTotalDownloadedSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePendingContent", "GetTotalDownloadedSize");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobilePendingContent::GetRequiredDiskSpace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePendingContent", "GetRequiredDiskSpace");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobilePendingContent::GetInstallProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePendingContent", "GetInstallProgress");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMobilePendingContent::GetDownloadStatusText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePendingContent", "GetDownloadStatusText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobilePendingContent::GetDownloadSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePendingContent", "GetDownloadSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMobilePendingContent::GetDownloadSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MobilePendingContent", "GetDownloadSize");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UMobilePatchingLibrary::* ----
void UMobilePatchingLibrary::RequestContent(struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MobilePatchingLibrary", "RequestContent");
    struct
    {
        struct FString RemoteManifestURL;
        struct FString CloudURL;
        struct FString InstallDirectory;
        struct FDelegate OnSucceeded;
        struct FDelegate OnFailed;
    } Parms{};
    Parms.RemoteManifestURL = (struct FString)RemoteManifestURL;
    Parms.CloudURL = (struct FString)CloudURL;
    Parms.InstallDirectory = (struct FString)InstallDirectory;
    Parms.OnSucceeded = (struct FDelegate)OnSucceeded;
    Parms.OnFailed = (struct FDelegate)OnFailed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMobilePatchingLibrary::HasActiveWiFiConnection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MobilePatchingLibrary", "HasActiveWiFiConnection");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UMobilePatchingLibrary::GetSupportedPlatformNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MobilePatchingLibrary", "GetSupportedPlatformNames");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(struct FString InstallDirectory)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MobilePatchingLibrary", "GetInstalledContent");
    struct
    {
        struct FString InstallDirectory;
        struct UMobileInstalledContent* ReturnValue;
    } Parms{};
    Parms.InstallDirectory = (struct FString)InstallDirectory;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMobilePatchingLibrary::GetActiveDeviceProfileName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MobilePatchingLibrary", "GetActiveDeviceProfileName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
