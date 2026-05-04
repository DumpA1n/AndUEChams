#include "NZLuaRuntime.hpp"
#include "slua_unreal.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ULuaBlueprintBridge::* ----
void ULuaBlueprintBridge::LuaCtorCallFunction(struct UObject* WorldContextObject, struct FString Filename, struct FString FuncName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintBridge", "LuaCtorCallFunction");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString Filename;
        struct FString FuncName;
        struct TArray<struct FLuaBPVar> Args;
        struct FString StateName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Filename = (struct FString)Filename;
    Parms.FuncName = (struct FString)FuncName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaBlueprintBridge::LuaCallFunction(struct UObject* WorldContextObject, struct FString FuncName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintBridge", "LuaCallFunction");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString FuncName;
        struct TArray<struct FLuaBPVar> Args;
        struct FString StateName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FuncName = (struct FString)FuncName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FLuaBPVar ULuaBlueprintBridge::CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* InTheObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintBridge", "CreateVarFromObject");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* InTheObject;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InTheObject = (struct UObject*)InTheObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
