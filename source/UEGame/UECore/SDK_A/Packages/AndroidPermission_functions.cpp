#include "AndroidPermission.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAndroidPermissionFunctionLibrary
bool UAndroidPermissionFunctionLibrary::CheckPermission(struct FString permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidPermissionFunctionLibrary", "CheckPermission");
    struct
    {
        struct FString permission;
        bool ReturnValue;
    } Parms{};
    Parms.permission = (struct FString)permission;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(const struct TArray<struct FString>& Permissions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidPermissionFunctionLibrary", "AcquirePermissions");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct UAndroidPermissionCallbackProxy* ReturnValue;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
