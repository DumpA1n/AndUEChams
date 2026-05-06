#include "AndroidDevicePermission.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAndroidDevicePermissionHelper
void UAndroidDevicePermissionHelper::SetQQLogin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "SetQQLogin");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAndroidDevicePermissionHelper::SetID_V2(struct FString InID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "SetID_V2");
    struct
    {
        struct FString InID;
    } Parms{};
    Parms.InID = (struct FString)InID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAndroidDevicePermissionHelper::RefreshMediaStore(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "RefreshMediaStore");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAndroidDevicePermissionHelper::JumpPermissionPage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "JumpPermissionPage");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UAndroidDevicePermissionHelper::IsFoldableDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "IsFoldableDevice");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAndroidDevicePermissionHelper::GetID_V2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "GetID_V2");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAndroidDevicePermissionHelper::GetDeviceId_V2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "GetDeviceId_V2");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UAndroidDevicePermissionHelper::GetAndroidMemInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "GetAndroidMemInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAndroidDevicePermissionHelper::CheckNotificationPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "CheckNotificationPermission");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAndroidDevicePermissionHelper::AddGlobalModelForSystemJump(struct FString InModels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidDevicePermissionHelper", "AddGlobalModelForSystemJump");
    struct
    {
        struct FString InModels;
    } Parms{};
    Parms.InModels = (struct FString)InModels;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
