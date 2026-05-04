#include "slua_unreal.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ULatentDelegate::* ----
void ULatentDelegate::OnLatentCallback(int32_t threadRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LatentDelegate", "OnLatentCallback");
    struct
    {
        int32_t threadRef;
    } Parms{};
    Parms.threadRef = (int32_t)threadRef;
    this->ProcessEvent(Func, &Parms);
}

// ---- ALuaActor::* ----
struct FLuaBPVar ALuaActor::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaActor", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ALuaPawn::* ----
struct FLuaBPVar ALuaPawn::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaPawn", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ALuaCharacter::* ----
struct FLuaBPVar ALuaCharacter::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaCharacter", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ALuaController::* ----
struct FLuaBPVar ALuaController::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaController", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ALuaPlayerController::* ----
struct FLuaBPVar ALuaPlayerController::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaPlayerController", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULuaActorComponent::* ----
struct FLuaBPVar ULuaActorComponent::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaActorComponent", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ALuaGameModeBase::* ----
struct FLuaBPVar ALuaGameModeBase::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaGameModeBase", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ALuaHUD::* ----
struct FLuaBPVar ALuaHUD::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaHUD", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULuaBlueprintLibrary::* ----
struct FString ULuaBlueprintLibrary::GetStringFromVar(struct FLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "GetStringFromVar");
    struct
    {
        struct FLuaBPVar Value;
        int32_t Index;
        struct FString ReturnValue;
    } Parms{};
    Parms.Value = (struct FLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* ULuaBlueprintLibrary::GetObjectFromVar(struct FLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "GetObjectFromVar");
    struct
    {
        struct FLuaBPVar Value;
        int32_t Index;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Value = (struct FLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULuaBlueprintLibrary::GetNumberFromVar(struct FLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "GetNumberFromVar");
    struct
    {
        struct FLuaBPVar Value;
        int32_t Index;
        float ReturnValue;
    } Parms{};
    Parms.Value = (struct FLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULuaBlueprintLibrary::GetIntFromVar(struct FLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "GetIntFromVar");
    struct
    {
        struct FLuaBPVar Value;
        int32_t Index;
        int32_t ReturnValue;
    } Parms{};
    Parms.Value = (struct FLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULuaBlueprintLibrary::GetBoolFromVar(struct FLuaBPVar Value, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "GetBoolFromVar");
    struct
    {
        struct FLuaBPVar Value;
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Value = (struct FLuaBPVar)Value;
    Parms.Index = (int32_t)Index;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromString(struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "CreateVarFromString");
    struct
    {
        struct FString Value;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromObject(struct UObject* WorldContextObject, struct UObject* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "CreateVarFromObject");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* Value;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Value = (struct UObject*)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromNumber(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "CreateVarFromNumber");
    struct
    {
        float Value;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromInt64(int64_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "CreateVarFromInt64");
    struct
    {
        int64_t Value;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (int64_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromInt(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "CreateVarFromInt");
    struct
    {
        int32_t Value;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromBool(uint8_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "CreateVarFromBool");
    struct
    {
        uint8_t Value;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.Value = (uint8_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULuaBlueprintLibrary::CallToLuaWithArgs(struct UObject* WorldContextObject, struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "CallToLuaWithArgs");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FString StateName;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLuaBPVar ULuaBlueprintLibrary::CallToLua(struct UObject* WorldContextObject, struct FString FunctionName, struct FString StateName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaBlueprintLibrary", "CallToLua");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString FunctionName;
        struct FString StateName;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.StateName = (struct FString)StateName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ULuaDelegate::* ----
void ULuaDelegate::EventTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaDelegate", "EventTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ULuaDynamicGCProcessorConfig::* ----
void ULuaDynamicGCProcessorConfig::SetUseDynamicGC(int32_t InUseDynamicGC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDynamicGCProcessorConfig", "SetUseDynamicGC");
    struct
    {
        int32_t InUseDynamicGC;
    } Parms{};
    Parms.InUseDynamicGC = (int32_t)InUseDynamicGC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaDynamicGCProcessorConfig::SetStepTickTimeLimit(float InStepTickTimeLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDynamicGCProcessorConfig", "SetStepTickTimeLimit");
    struct
    {
        float InStepTickTimeLimit;
    } Parms{};
    Parms.InStepTickTimeLimit = (float)InStepTickTimeLimit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaDynamicGCProcessorConfig::SetStepGCTimeLimit(float InStepGCTimeLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDynamicGCProcessorConfig", "SetStepGCTimeLimit");
    struct
    {
        float InStepGCTimeLimit;
    } Parms{};
    Parms.InStepGCTimeLimit = (float)InStepGCTimeLimit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaDynamicGCProcessorConfig::SetStepGCCountLimit(int32_t InStepGCCountLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDynamicGCProcessorConfig", "SetStepGCCountLimit");
    struct
    {
        int32_t InStepGCCountLimit;
    } Parms{};
    Parms.InStepGCCountLimit = (int32_t)InStepGCCountLimit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaDynamicGCProcessorConfig::SetSpeedupGCSpropagateRatio(int32_t InSpeedupGCSpropagateRatio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDynamicGCProcessorConfig", "SetSpeedupGCSpropagateRatio");
    struct
    {
        int32_t InSpeedupGCSpropagateRatio;
    } Parms{};
    Parms.InSpeedupGCSpropagateRatio = (int32_t)InSpeedupGCSpropagateRatio;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULuaDynamicGCProcessorConfig::SetIsWorkOnPauseState(uint8_t InIsWorkOnPauseState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LuaDynamicGCProcessorConfig", "SetIsWorkOnPauseState");
    struct
    {
        uint8_t InIsWorkOnPauseState;
    } Parms{};
    Parms.InIsWorkOnPauseState = (uint8_t)InIsWorkOnPauseState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- ULuaUserWidget::* ----
struct FLuaBPVar ULuaUserWidget::CallLuaMember(struct FString FunctionName, const struct TArray<struct FLuaBPVar>& Args)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LuaUserWidget", "CallLuaMember");
    struct
    {
        struct FString FunctionName;
        struct TArray<struct FLuaBPVar> Args;
        struct FLuaBPVar ReturnValue;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.Args = (struct TArray<struct FLuaBPVar>)Args;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- USluaEnvBridge::* ----
uint8_t USluaEnvBridge::SnapshotLuaV2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SluaEnvBridge", "SnapshotLuaV2");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USluaEnvBridge::GetIsLuaSnapshotOnEnterGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SluaEnvBridge", "GetIsLuaSnapshotOnEnterGame");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USluaEnvBridge::GetIsIsEnableLuaDynamicUD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SluaEnvBridge", "GetIsIsEnableLuaDynamicUD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USluaEnvBridge::GetIsEnableLuaProtoPageOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SluaEnvBridge", "GetIsEnableLuaProtoPageOut");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
