#include "OpenHarmonyPermission.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UOpenHarmonyPermissionFunctionLibrary
bool UOpenHarmonyPermissionFunctionLibrary::CheckPermission(struct FString permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenHarmonyPermissionFunctionLibrary", "CheckPermission");
    struct
    {
        struct FString permission;
        bool ReturnValue;
    } Parms{};
    Parms.permission = (struct FString)permission;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<bool> UOpenHarmonyPermissionFunctionLibrary::AcquirePermissions(const struct TArray<struct FString>& Permissions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenHarmonyPermissionFunctionLibrary", "AcquirePermissions");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<bool> ReturnValue;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
