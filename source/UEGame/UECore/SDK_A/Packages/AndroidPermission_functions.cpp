#include "AndroidPermission.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAndroidPermissionFunctionLibrary
uint8_t UAndroidPermissionFunctionLibrary::CheckPermission(struct FString Permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidPermissionFunctionLibrary", "CheckPermission");
    struct
    {
        struct FString Permission;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Permission = (struct FString)Permission;
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
