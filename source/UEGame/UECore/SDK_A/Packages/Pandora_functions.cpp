#include "Pandora.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBulletScreen
void UBulletScreen::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BulletScreen", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBulletScreen::Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BulletScreen", "Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBulletScreen::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BulletScreen", "Resume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBulletScreen::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BulletScreen", "Pause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBulletScreen::AddBullets(const struct TArray<struct FString>& Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BulletScreen", "AddBullets");
    struct
    {
        struct TArray<struct FString> Content;
    } Parms{};
    Parms.Content = (struct TArray<struct FString>)Content;
    this->ProcessEvent(Func, &Parms);
}

void UBulletScreen::AddBullet(struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BulletScreen", "AddBullet");
    struct
    {
        struct FString Content;
    } Parms{};
    Parms.Content = (struct FString)Content;
    this->ProcessEvent(Func, &Parms);
}

// UPLatentDelegate
void UPLatentDelegate::OnLatentCallback(int32_t threadRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLatentDelegate", "OnLatentCallback");
    struct
    {
        int32_t threadRef;
    } Parms{};
    Parms.threadRef = (int32_t)threadRef;
    this->ProcessEvent(Func, &Parms);
}

// APLuaActor
struct FPLuaBPVar APLuaActor::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaActor", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// APLuaPawn
struct FPLuaBPVar APLuaPawn::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaPawn", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// APLuaCharacter
struct FPLuaBPVar APLuaCharacter::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaCharacter", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// APLuaController
struct FPLuaBPVar APLuaController::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaController", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// APLuaPlayerController
struct FPLuaBPVar APLuaPlayerController::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaPlayerController", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPLuaActorComponent
struct FPLuaBPVar UPLuaActorComponent::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaActorComponent", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// APLuaGameModeBase
struct FPLuaBPVar APLuaGameModeBase::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaGameModeBase", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// APLuaHUD
struct FPLuaBPVar APLuaHUD::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaHUD", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPLuaBlueprintLibrary
struct FString UPLuaBlueprintLibrary::GetStringFromVar(struct FPLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "GetStringFromVar");
    struct
    {
        struct FPLuaBPVar Value;
        int32_t Index;
        struct FString ReturnValue;
    } Parms{};
    Parms.Value = (struct FPLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UPLuaBlueprintLibrary::GetObjectFromVar(struct FPLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "GetObjectFromVar");
    struct
    {
        struct FPLuaBPVar Value;
        int32_t Index;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Value = (struct FPLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPLuaBlueprintLibrary::GetNumberFromVar(struct FPLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "GetNumberFromVar");
    struct
    {
        struct FPLuaBPVar Value;
        int32_t Index;
        float ReturnValue;
    } Parms{};
    Parms.Value = (struct FPLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPLuaBlueprintLibrary::GetIntFromVar(struct FPLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "GetIntFromVar");
    struct
    {
        struct FPLuaBPVar Value;
        int32_t Index;
        int32_t ReturnValue;
    } Parms{};
    Parms.Value = (struct FPLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UPLuaBlueprintLibrary::GetBoolFromVar(struct FPLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "GetBoolFromVar");
    struct
    {
        struct FPLuaBPVar Value;
        int32_t Index;
        bool ReturnValue;
    } Parms{};
    Parms.Value = (struct FPLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromString(struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "CreateVarFromString");
    struct
    {
        struct FString Value;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "CreateVarFromObject");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* Value;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Value = (struct UObject*)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromNumber(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "CreateVarFromNumber");
    struct
    {
        float Value;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromInt(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "CreateVarFromInt");
    struct
    {
        int32_t Value;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPLuaBPVar UPLuaBlueprintLibrary::CreateVarFromBool(bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "CreateVarFromBool");
    struct
    {
        bool Value;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (bool)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPLuaBPVar UPLuaBlueprintLibrary::CallToLuaWithArgs(struct UObject* WorldContextObject, struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "CallToLuaWithArgs");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FString StateName;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPLuaBPVar UPLuaBlueprintLibrary::CallToLua(struct UObject* WorldContextObject, struct FString FunctionName, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PLuaBlueprintLibrary", "CallToLua");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString FunctionName;
        struct FString StateName;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPLuaDelegate
void UPLuaDelegate::EventTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaDelegate", "EventTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPLuaUserWidget
struct FPLuaBPVar UPLuaUserWidget::CallLuaMember(struct FString FunctionName, const struct TArray<struct FPLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PLuaUserWidget", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FPLuaBPVar> Args;
        struct FPLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FPLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UWaterfallScrollView
void UWaterfallScrollView::ScrollToStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "ScrollToStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::RefreshLayout(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "RefreshLayout");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::Fill()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "Fill");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWaterfallScrollView::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WaterfallScrollView", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
