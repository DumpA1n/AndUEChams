#include "LAI.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include "slua_unreal.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ULAI
void ULAI::TickLuaState(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "TickLuaState");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULAI::ShutdownLuaByOuter(struct UGameInstance* InOuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "ShutdownLuaByOuter");
    struct
    {
        struct UGameInstance* InOuter;
    } Parms{};
    Parms.InOuter = (struct UGameInstance*)InOuter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULAI::SetConfigCacheIniString(struct FString Section, struct FString Key, struct FString Value, struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "SetConfigCacheIniString");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FString Value;
        struct FString Filename;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULAI::SetConfigCacheIniArray(struct FString Section, struct FString Key, struct TArray<struct FString> Content, struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "SetConfigCacheIniArray");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct TArray<struct FString> Content;
        struct FString Filename;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Content = (struct TArray<struct FString>)Content;
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULAI::PrintLuaStack(struct UGameInstance* GameIns, uint8_t bForceAnyThread)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "PrintLuaStack");
    struct
    {
        struct UGameInstance* GameIns;
        uint8_t bForceAnyThread;
    } Parms{};
    Parms.GameIns = (struct UGameInstance*)GameIns;
    Parms.bForceAnyThread = (uint8_t)bForceAnyThread;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULAI::PrintCStack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "PrintCStack");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULAI::LuaCtorFunction(struct UObject* WorldContextObject, struct FString Filename, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "LuaCtorFunction");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString Filename;
        struct TArray<struct FLuaBPVar> Args;
        struct FString StateName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Filename = (struct FString)Filename;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULAI::LuaCtorCallFunction(struct UObject* WorldContextObject, struct FString Filename, struct FString FuncName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "LuaCtorCallFunction");
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

struct FLuaBPVar ULAI::LuaCallFunction(struct UObject* WorldContextObject, struct FString FuncName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "LuaCallFunction");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString FuncName;
        struct TArray<struct FLuaBPVar> Args;
        struct FString StateName;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FuncName = (struct FString)FuncName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULAI::IsSubClassOf(struct UObject* Child, struct UObject* Parent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "IsSubClassOf");
    struct
    {
        struct UObject* Child;
        struct UObject* Parent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Child = (struct UObject*)Child;
    Parms.Parent = (struct UObject*)Parent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULAI::IsEnableLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "IsEnableLua");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULAI::InitLuaState(uint8_t IsEnable, struct UGameInstance* InOuter, uint8_t bIsDS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "InitLuaState");
    struct
    {
        uint8_t IsEnable;
        struct UGameInstance* InOuter;
        uint8_t bIsDS;
    } Parms{};
    Parms.IsEnable = (uint8_t)IsEnable;
    Parms.InOuter = (struct UGameInstance*)InOuter;
    Parms.bIsDS = (uint8_t)bIsDS;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint64_t ULAI::GetObjectUniqueID(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "GetObjectUniqueID");
    struct
    {
        struct UObject* obj;
        uint64_t ReturnValue;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULAI::GetObjectClassName(struct UObject* InOuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "GetObjectClassName");
    struct
    {
        struct UObject* InOuter;
        struct FString ReturnValue;
    } Parms{};
    Parms.InOuter = (struct UObject*)InOuter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* ULAI::GetObjectClass(struct UObject* InOuter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "GetObjectClass");
    struct
    {
        struct UObject* InOuter;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.InOuter = (struct UObject*)InOuter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULAI::GetLuaStartRound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "GetLuaStartRound");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULAI::GetLuaStack(struct UGameInstance* GameIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "GetLuaStack");
    struct
    {
        struct UGameInstance* GameIns;
        struct FString ReturnValue;
    } Parms{};
    Parms.GameIns = (struct UGameInstance*)GameIns;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULAI::GetConfigCacheIniString(struct FString Section, struct FString Key, struct FString Filename, struct FString& OutStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "GetConfigCacheIniString");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FString Filename;
        struct FString OutStr;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutStr = Parms.OutStr;
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULAI::GetConfigCacheIniArray(struct FString Section, struct FString Key, struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "GetConfigCacheIniArray");
    struct
    {
        struct FString Section;
        struct FString Key;
        struct FString Filename;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.Section = (struct FString)Section;
    Parms.Key = (struct FString)Key;
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULAI::DynamicUnbind(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "DynamicUnbind");
    struct
    {
        struct UObject* obj;
        uint8_t ReturnValue;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULAI::DynamicBind(struct FString LuaFilePath, struct UObject* obj, uint8_t bRefSelfTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "DynamicBind");
    struct
    {
        struct FString LuaFilePath;
        struct UObject* obj;
        uint8_t bRefSelfTable;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LuaFilePath = (struct FString)LuaFilePath;
    Parms.obj = (struct UObject*)obj;
    Parms.bRefSelfTable = (uint8_t)bRefSelfTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULAI::DoString(struct UObject* obj, struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "DoString");
    struct
    {
        struct UObject* obj;
        struct FString str;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    Parms.str = (struct FString)str;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULAI::DoFile(struct UObject* obj, struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "DoFile");
    struct
    {
        struct UObject* obj;
        struct FString str;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    Parms.str = (struct FString)str;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FLuaBPVar ULAI::CreateVarFromPointerEvent(struct UObject* WorldContextObject, struct FPointerEvent PointerEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "CreateVarFromPointerEvent");
    struct
    {
        struct UObject* WorldContextObject;
        struct FPointerEvent PointerEvent;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.PointerEvent = (struct FPointerEvent)PointerEvent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULAI::CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* InTheObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "CreateVarFromObject");
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

uint8_t ULAI::CheckGlobalFuncExist(struct UObject* WorldContextObject, struct FString FuncName, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LAI", "CheckGlobalFuncExist");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString FuncName;
        struct FString StateName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FuncName = (struct FString)FuncName;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULuaLogWrapper
uint8_t ULuaLogWrapper::IsInBlackList(struct FString Code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaLogWrapper", "IsInBlackList");
    struct
    {
        struct FString Code;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Code = (struct FString)Code;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULuaPerfTest
void ULuaPerfTest::TestSetVisibility_UserWidget(struct UUserWidget* View, ESlateVisibility Visibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestSetVisibility_UserWidget");
    struct
    {
        struct UUserWidget* View;
        enum ESlateVisibility Visibility;
    } Parms{};
    Parms.View = (struct UUserWidget*)View;
    Parms.Visibility = (enum ESlateVisibility)Visibility;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestEmptyCall_UserWidget(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestEmptyCall_UserWidget");
    struct
    {
        struct UUserWidget* UserWidget;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestEmptyCall_String(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestEmptyCall_String");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestEmptyCall_Object(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestEmptyCall_Object");
    struct
    {
        struct UObject* obj;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestEmptyCall_MultiParams(struct UUserWidget* UserWidget, struct FVector2D Vector2D, struct FString str, float I, int32_t J)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestEmptyCall_MultiParams");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FVector2D Vector2D;
        struct FString str;
        float I;
        int32_t J;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.Vector2D = (struct FVector2D)Vector2D;
    Parms.str = (struct FString)str;
    Parms.I = (float)I;
    Parms.J = (int32_t)J;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestEmptyCall_Int(int32_t I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestEmptyCall_Int");
    struct
    {
        int32_t I;
    } Parms{};
    Parms.I = (int32_t)I;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestEmptyCall_FVector2D(struct FVector2D Vector2D)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestEmptyCall_FVector2D");
    struct
    {
        struct FVector2D Vector2D;
    } Parms{};
    Parms.Vector2D = (struct FVector2D)Vector2D;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestEmptyCall_Float(float I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestEmptyCall_Float");
    struct
    {
        float I;
    } Parms{};
    Parms.I = (float)I;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestEmptyCall()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestEmptyCall");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaPerfTest::TestCallInCpp(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaPerfTest", "TestCallInCpp");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ULuautils
void ULuautils::TestLongJmpLimitation(struct UObject* ContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "TestLongJmpLimitation");
    struct
    {
        struct UObject* ContextObj;
    } Parms{};
    Parms.ContextObj = (struct UObject*)ContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuautils::TestEnsureFailed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "TestEnsureFailed");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct UWidget*> ULuautils::PyGetAllWidgets(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "PyGetAllWidgets");
    struct
    {
        struct UUserWidget* UserWidget;
        struct TArray<struct UWidget*> ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuautils::PrintLuaMacro()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "PrintLuaMacro");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString ULuautils::MountProtoKeyName2StructName(struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "MountProtoKeyName2StructName");
    struct
    {
        struct FString Value;
        struct FString ReturnValue;
    } Parms{};
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuautils::LuaThrow_UFunction_Lambda()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "LuaThrow_UFunction_Lambda");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuautils::LuaThrow_UFunction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "LuaThrow_UFunction");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t ULuautils::IsSubClass(struct UObject* Lhs, struct UObject* Rhs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "IsSubClass");
    struct
    {
        struct UObject* Lhs;
        struct UObject* Rhs;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Lhs = (struct UObject*)Lhs;
    Parms.Rhs = (struct UObject*)Rhs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuautils::IsObjValid(struct UObject* InObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "IsObjValid");
    struct
    {
        struct UObject* InObj;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InObj = (struct UObject*)InObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuautils::IsLuaSLootingLogActive(int32_t InLogLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "IsLuaSLootingLogActive");
    struct
    {
        int32_t InLogLevel;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLogLevel = (int32_t)InLogLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuautils::IsLuaMCollectionRoomLogActive(int32_t InLogLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "IsLuaMCollectionRoomLogActive");
    struct
    {
        int32_t InLogLevel;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLogLevel = (int32_t)InLogLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t ULuautils::GetUInt64StrToInt64(struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetUInt64StrToInt64");
    struct
    {
        struct FString Value;
        int64_t ReturnValue;
    } Parms{};
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuautils::GetUInt64String(uint64_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetUInt64String");
    struct
    {
        uint64_t Value;
        struct FString ReturnValue;
    } Parms{};
    Parms.Value = (uint64_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuautils::GetStringFromBytes(struct TArray<uint8_t>& InBytes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetStringFromBytes");
    struct
    {
        struct TArray<uint8_t> InBytes;
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InBytes = Parms.InBytes;
    return Parms.ReturnValue;
}

struct UObject* ULuautils::GetPrivateClass(struct UObject* P)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetPrivateClass");
    struct
    {
        struct UObject* P;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.P = (struct UObject*)P;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuautils::GetOverInt64String(int64_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetOverInt64String");
    struct
    {
        int64_t Value;
        struct FString ReturnValue;
    } Parms{};
    Parms.Value = (int64_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuautils::GetName(struct UObject* P)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetName");
    struct
    {
        struct UObject* P;
        struct FString ReturnValue;
    } Parms{};
    Parms.P = (struct UObject*)P;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuautils::GetLogCurVerbosity(int32_t LogCategoryEnum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetLogCurVerbosity");
    struct
    {
        int32_t LogCategoryEnum;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LogCategoryEnum = (int32_t)LogCategoryEnum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULuautils::GetCurrentLevelName(struct UObject* ContextObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetCurrentLevelName");
    struct
    {
        struct UObject* ContextObj;
        struct FString ReturnValue;
    } Parms{};
    Parms.ContextObj = (struct UObject*)ContextObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuautils::GetAllWidgets(struct UUserWidget* UserWidget, struct TArray<struct FName>& names, struct TArray<struct UWidget*>& Widgets, struct TArray<struct FName>& TypesOfWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetAllWidgets");
    struct
    {
        struct UUserWidget* UserWidget;
        struct TArray<struct FName> names;
        struct TArray<struct UWidget*> Widgets;
        struct TArray<struct FName> TypesOfWidget;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    names = Parms.names;
    Widgets = Parms.Widgets;
    TypesOfWidget = Parms.TypesOfWidget;
}

struct UWorld* ULuautils::GetActorWorld(struct AActor* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "GetActorWorld");
    struct
    {
        struct AActor* obj;
        struct UWorld* ReturnValue;
    } Parms{};
    Parms.obj = (struct AActor*)obj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULuautils::ClipboardPaste(struct FString& str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "ClipboardPaste");
    struct
    {
        struct FString str;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    str = Parms.str;
}

void ULuautils::ClipboardCopy(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("Luautils", "ClipboardCopy");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// USluaTestCase
void USluaTestCase::TwoArgs(struct FString A, int32_t B, float C, struct FString D, struct UObject* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TwoArgs");
    struct
    {
        struct FString A;
        int32_t B;
        float C;
        struct FString D;
        struct UObject* Widget;
    } Parms{};
    Parms.A = (struct FString)A;
    Parms.B = (int32_t)B;
    Parms.C = (float)C;
    Parms.D = (struct FString)D;
    Parms.Widget = (struct UObject*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void USluaTestCase::TestUnicastDelegate(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestUnicastDelegate");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
}

struct FVector USluaTestCase::TestStruct(struct FVector V, ESlateVisibility E, struct FVector& v2, int32_t I, int32_t& i2, struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestStruct");
    struct
    {
        struct FVector V;
        enum ESlateVisibility E;
        struct FVector v2;
        int32_t I;
        int32_t i2;
        struct FString str;
        struct FVector ReturnValue;
    } Parms{};
    Parms.V = (struct FVector)V;
    Parms.E = (enum ESlateVisibility)E;
    Parms.I = (int32_t)I;
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
    v2 = Parms.v2;
    i2 = Parms.i2;
    return Parms.ReturnValue;
}

void USluaTestCase::TestOIntOStrOEnum(int32_t I, int32_t& oi, struct FString S, struct FString& os, ESlateVisibility E, ESlateVisibility& oe)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestOIntOStrOEnum");
    struct
    {
        int32_t I;
        int32_t oi;
        struct FString S;
        struct FString os;
        enum ESlateVisibility E;
        enum ESlateVisibility oe;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.S = (struct FString)S;
    Parms.E = (enum ESlateVisibility)E;
    this->ProcessEvent(Func, &Parms);
    oi = Parms.oi;
    os = Parms.os;
    oe = Parms.oe;
}

void USluaTestCase::TestLuaCallback(struct FLuaBPVar callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestLuaCallback");
    struct
    {
        struct FLuaBPVar callback;
    } Parms{};
    Parms.callback = (struct FLuaBPVar)callback;
    this->ProcessEvent(Func, &Parms);
}

ESlateVisibility USluaTestCase::TestIntStrEnum_Enum(int32_t I, struct FString S, ESlateVisibility E)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestIntStrEnum_Enum");
    struct
    {
        int32_t I;
        struct FString S;
        enum ESlateVisibility E;
        enum ESlateVisibility ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.S = (struct FString)S;
    Parms.E = (enum ESlateVisibility)E;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> USluaTestCase::TestIntStrEnum_Arr(int32_t I, struct FString S, ESlateVisibility E)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestIntStrEnum_Arr");
    struct
    {
        int32_t I;
        struct FString S;
        enum ESlateVisibility E;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.S = (struct FString)S;
    Parms.E = (enum ESlateVisibility)E;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString USluaTestCase::TestIntStr_Str(int32_t I, struct FString S)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestIntStr_Str");
    struct
    {
        int32_t I;
        struct FString S;
        struct FString ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    Parms.S = (struct FString)S;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t USluaTestCase::TestInt_int(int32_t I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestInt_int");
    struct
    {
        int32_t I;
        int32_t ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USluaTestCase::TestAAA(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "TestAAA");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
}

void USluaTestCase::StaticFunc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SluaTestCase", "StaticFunc");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USluaTestCase::setupfoo(struct UObject* obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "setupfoo");
    struct
    {
        struct UObject* obj;
    } Parms{};
    Parms.obj = (struct UObject*)obj;
    this->ProcessEvent(Func, &Parms);
}

void USluaTestCase::SetButton(struct UUserWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "SetButton");
    struct
    {
        struct UUserWidget* Widget;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    this->ProcessEvent(Func, &Parms);
}

void USluaTestCase::SetArrayStr(const struct TArray<struct FString>& array)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "SetArrayStr");
    struct
    {
        struct TArray<struct FString> array;
    } Parms{};
    Parms.array = (struct TArray<struct FString>)array;
    this->ProcessEvent(Func, &Parms);
}

int32_t USluaTestCase::ReturnIntWithInt(int32_t I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "ReturnIntWithInt");
    struct
    {
        int32_t I;
        int32_t ReturnValue;
    } Parms{};
    Parms.I = (int32_t)I;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t USluaTestCase::ReturnInt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "ReturnInt");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t USluaTestCase::OnTestGetCount__DelegateSignature(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "OnTestGetCount__DelegateSignature");
    struct
    {
        struct FString str;
        int32_t ReturnValue;
    } Parms{};
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USluaTestCase::OnTestAAA__DelegateSignature(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "OnTestAAA__DelegateSignature");
    struct
    {
        struct FString str;
    } Parms{};
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
}

void USluaTestCase::OnAssetClassLoaded__DelegateSignature(int32_t P)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "OnAssetClassLoaded__DelegateSignature");
    struct
    {
        int32_t P;
    } Parms{};
    Parms.P = (int32_t)P;
    this->ProcessEvent(Func, &Parms);
}

void USluaTestCase::LoadAssetClass(struct FDelegate OnLoaded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SluaTestCase", "LoadAssetClass");
    struct
    {
        struct FDelegate OnLoaded;
    } Parms{};
    Parms.OnLoaded = (struct FDelegate)OnLoaded;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FUserInfo USluaTestCase::GetUserInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "GetUserInfo");
    struct
    {
        struct FUserInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<int32_t, struct FString> USluaTestCase::GetMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "GetMap");
    struct
    {
        struct TMap<int32_t, struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSlateBrush USluaTestCase::GetBrush()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "GetBrush");
    struct
    {
        struct FSlateBrush ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> USluaTestCase::GetArrayStr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "GetArrayStr");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> USluaTestCase::GetArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "GetArray");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t USluaTestCase::FuncWithStr(struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "FuncWithStr");
    struct
    {
        struct FString str;
        int32_t ReturnValue;
    } Parms{};
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USluaTestCase::EmptyFunc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "EmptyFunc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USluaTestCase::delfoo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SluaTestCase", "delfoo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UTestBindUserWidget
struct UTestBindUserWidget* UTestBindUserWidget::TestReturnSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestBindUserWidget", "TestReturnSelf");
    struct
    {
        struct UTestBindUserWidget* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UTestBindUserWidget::TestReturnInt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestBindUserWidget", "TestReturnInt");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UWidgetAnimationUtil
void UWidgetAnimationUtil::StopAllWidgetAnimations(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "StopAllWidgetAnimations");
    struct
    {
        struct UUserWidget* UserWidget;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UWidgetAnimation* UWidgetAnimationUtil::PlayWidgetAnimationsWithSuffix(struct UUserWidget* UserWidget, const struct FName& nameSuffix, float StartAtTime, int32_t NumberOfLoops, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, uint8_t bRestoreState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "PlayWidgetAnimationsWithSuffix");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FName nameSuffix;
        float StartAtTime;
        int32_t NumberOfLoops;
        enum EUMGSequencePlayMode PlayMode;
        float PlaybackSpeed;
        uint8_t bRestoreState;
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.nameSuffix = (struct FName)nameSuffix;
    Parms.StartAtTime = (float)StartAtTime;
    Parms.NumberOfLoops = (int32_t)NumberOfLoops;
    Parms.PlayMode = (enum EUMGSequencePlayMode)PlayMode;
    Parms.PlaybackSpeed = (float)PlaybackSpeed;
    Parms.bRestoreState = (uint8_t)bRestoreState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetAnimation* UWidgetAnimationUtil::PlayWidgetAnimationsListIn(struct UUserWidget* UserWidget, const struct FName& nameSuffix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "PlayWidgetAnimationsListIn");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FName nameSuffix;
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.nameSuffix = (struct FName)nameSuffix;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetAnimationUtil::MofidyAnimationBindingObject(struct UUserWidget* Widget, struct UWidgetAnimation* Animation, struct UObject* OldBindObj, struct UObject* NewBindObj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "MofidyAnimationBindingObject");
    struct
    {
        struct UUserWidget* Widget;
        struct UWidgetAnimation* Animation;
        struct UObject* OldBindObj;
        struct UObject* NewBindObj;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.OldBindObj = (struct UObject*)OldBindObj;
    Parms.NewBindObj = (struct UObject*)NewBindObj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetAnimationUtil::MofidyAnimation(struct UWidgetAnimation* Animation, struct UObject* BindObj, const struct FName& TrackName, int32_t SectionIndex, struct FName& PropertyName, int32_t FrameIndex, struct TArray<float> Vars)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "MofidyAnimation");
    struct
    {
        struct UWidgetAnimation* Animation;
        struct UObject* BindObj;
        struct FName TrackName;
        int32_t SectionIndex;
        struct FName PropertyName;
        int32_t FrameIndex;
        struct TArray<float> Vars;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.BindObj = (struct UObject*)BindObj;
    Parms.TrackName = (struct FName)TrackName;
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.FrameIndex = (int32_t)FrameIndex;
    Parms.Vars = (struct TArray<float>)Vars;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PropertyName = Parms.PropertyName;
    return Parms.ReturnValue;
}

uint8_t UWidgetAnimationUtil::ModifyAnimationByTag(struct UWidgetAnimation* Animation, struct FName& Tag, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "ModifyAnimationByTag");
    struct
    {
        struct UWidgetAnimation* Animation;
        struct FName Tag;
        float Value;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Animation = (struct UWidgetAnimation*)Animation;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Tag = Parms.Tag;
    return Parms.ReturnValue;
}

struct TArray<struct UWidgetAnimation*> UWidgetAnimationUtil::GetWidgetAnimations(struct UUserWidget* UserWidget, const struct FName& nameSuffix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "GetWidgetAnimations");
    struct
    {
        struct UUserWidget* UserWidget;
        struct FName nameSuffix;
        struct TArray<struct UWidgetAnimation*> ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    Parms.nameSuffix = (struct FName)nameSuffix;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UWidgetAnimation*> UWidgetAnimationUtil::GetAllWidgetAnimations(struct UUserWidget* UserWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "GetAllWidgetAnimations");
    struct
    {
        struct UUserWidget* UserWidget;
        struct TArray<struct UWidgetAnimation*> ReturnValue;
    } Parms{};
    Parms.UserWidget = (struct UUserWidget*)UserWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWidgetAnimation* UWidgetAnimationUtil::CopyWidgetAnimation(struct UWidgetAnimation* CloneFrom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetAnimationUtil", "CopyWidgetAnimation");
    struct
    {
        struct UWidgetAnimation* CloneFrom;
        struct UWidgetAnimation* ReturnValue;
    } Parms{};
    Parms.CloneFrom = (struct UWidgetAnimation*)CloneFrom;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UWidgetUtil
struct FString UWidgetUtil::TryAddChild(struct UWidget* TargetWidget, struct UWidget* ChildWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "TryAddChild");
    struct
    {
        struct UWidget* TargetWidget;
        struct UWidget* ChildWidget;
        struct FString ReturnValue;
    } Parms{};
    Parms.TargetWidget = (struct UWidget*)TargetWidget;
    Parms.ChildWidget = (struct UWidget*)ChildWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWidgetUtil::Translate(struct UWidget* Widget, const struct FVector2D& NewTranslation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "Translate");
    struct
    {
        struct UWidget* Widget;
        struct FVector2D NewTranslation;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.NewTranslation = (struct FVector2D)NewTranslation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetUtil::ToggleTabNavigation(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "ToggleTabNavigation");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetUtil::ToggleKeyNavigation(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "ToggleKeyNavigation");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetUtil::ToggleAnalogNavigation(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "ToggleAnalogNavigation");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetUtil::SetVisibleAndHittable(struct UWidget* Widget, uint8_t bVisible, uint8_t bHittable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "SetVisibleAndHittable");
    struct
    {
        struct UWidget* Widget;
        uint8_t bVisible;
        uint8_t bHittable;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.bVisible = (uint8_t)bVisible;
    Parms.bHittable = (uint8_t)bHittable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetUtil::SetVisible(struct UWidget* Widget, uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "SetVisible");
    struct
    {
        struct UWidget* Widget;
        uint8_t bVisible;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.bVisible = (uint8_t)bVisible;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWidgetUtil::Scale(struct UWidget* Widget, const struct FVector2D& NewScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "Scale");
    struct
    {
        struct UWidget* Widget;
        struct FVector2D NewScale;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    Parms.NewScale = (struct FVector2D)NewScale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UWidgetUtil::IsVisible(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsVisible");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidatedForVolatility(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidatedForVolatility");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidatedForVisibility(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidatedForVisibility");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidatedForRenderTransform(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidatedForRenderTransform");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidatedForPaintAndVolatility(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidatedForPaintAndVolatility");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidatedForPaint(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidatedForPaint");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidatedForLayoutAndVolatility(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidatedForLayoutAndVolatility");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidatedForLayout(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidatedForLayout");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidatedForChildOrder(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidatedForChildOrder");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsInvalidated(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsInvalidated");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::IsAddable(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "IsAddable");
    struct
    {
        struct UWidget* Widget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPanelWidget* UWidgetUtil::GetTopAddableWidget(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "GetTopAddableWidget");
    struct
    {
        struct UWidget* Widget;
        struct UPanelWidget* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPanelWidget* UWidgetUtil::FindTopAddableChild(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "FindTopAddableChild");
    struct
    {
        struct UWidget* Widget;
        struct UPanelWidget* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPanelWidget* UWidgetUtil::FindBottomAddableParent(struct UWidget* Widget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "FindBottomAddableParent");
    struct
    {
        struct UWidget* Widget;
        struct UPanelWidget* ReturnValue;
    } Parms{};
    Parms.Widget = (struct UWidget*)Widget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWidgetUtil::AddToTopContainer(struct UWidget* TargetWidget, struct UWidget* ChildWidget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WidgetUtil", "AddToTopContainer");
    struct
    {
        struct UWidget* TargetWidget;
        struct UWidget* ChildWidget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetWidget = (struct UWidget*)TargetWidget;
    Parms.ChildWidget = (struct UWidget*)ChildWidget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
