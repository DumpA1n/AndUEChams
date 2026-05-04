#include "LitePackage.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ULiteModuleInfo::* ----
void ULiteModuleInfo::WriteDefaultConfigValueToIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteModuleInfo", "WriteDefaultConfigValueToIni");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FModulePakInfo> ULiteModuleInfo::ReloadConfigValueInfo2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteModuleInfo", "ReloadConfigValueInfo2");
    struct
    {
        struct TArray<struct FModulePakInfo> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FModulePakInfo> ULiteModuleInfo::ReloadConfigValueInfo(struct FString PufferPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteModuleInfo", "ReloadConfigValueInfo");
    struct
    {
        struct FString PufferPath;
        struct TArray<struct FModulePakInfo> ReturnValue;
    } Parms{};
    Parms.PufferPath = (struct FString)PufferPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULiteModuleInfo::GetPakIsDownloadBeforeLogin(struct FString PakName, int32_t platform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteModuleInfo", "GetPakIsDownloadBeforeLogin");
    struct
    {
        struct FString PakName;
        int32_t platform;
        int32_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    Parms.platform = (int32_t)platform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FModulePakInfo> ULiteModuleInfo::GetConfigValueInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteModuleInfo", "GetConfigValueInfo");
    struct
    {
        struct TArray<struct FModulePakInfo> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULiteMultiModuleInfo::* ----
void ULiteMultiModuleInfo::WriteDefaultConfigValueToIni()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteMultiModuleInfo", "WriteDefaultConfigValueToIni");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FMultiModuleInfo> ULiteMultiModuleInfo::ReloadConfigValueInfo2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteMultiModuleInfo", "ReloadConfigValueInfo2");
    struct
    {
        struct TArray<struct FMultiModuleInfo> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMultiModuleInfo> ULiteMultiModuleInfo::ReloadConfigValueInfo(struct FString PufferPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteMultiModuleInfo", "ReloadConfigValueInfo");
    struct
    {
        struct FString PufferPath;
        struct TArray<struct FMultiModuleInfo> ReturnValue;
    } Parms{};
    Parms.PufferPath = (struct FString)PufferPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMultiModuleInfo> ULiteMultiModuleInfo::GetConfigValueInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LiteMultiModuleInfo", "GetConfigValueInfo");
    struct
    {
        struct TArray<struct FMultiModuleInfo> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
