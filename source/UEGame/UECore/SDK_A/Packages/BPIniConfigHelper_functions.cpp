#include "BPIniConfigHelper.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBPIniConfigFunctions
void UBPIniConfigFunctions::SetStringConfigValue(struct FString ConfigKey, struct FString SectionName, struct FString ConfigValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPIniConfigFunctions", "SetStringConfigValue");
    struct
    {
        struct FString ConfigKey;
        struct FString SectionName;
        struct FString ConfigValue;
    } Parms{};
    Parms.ConfigKey = (struct FString)ConfigKey;
    Parms.SectionName = (struct FString)SectionName;
    Parms.ConfigValue = (struct FString)ConfigValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBPIniConfigFunctions::SetBoolConfigValue(struct FString ConfigKey, struct FString SectionName, uint8_t ConfigValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPIniConfigFunctions", "SetBoolConfigValue");
    struct
    {
        struct FString ConfigKey;
        struct FString SectionName;
        uint8_t ConfigValue;
    } Parms{};
    Parms.ConfigKey = (struct FString)ConfigKey;
    Parms.SectionName = (struct FString)SectionName;
    Parms.ConfigValue = (uint8_t)ConfigValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UBPIniConfigFunctions::GetStringConfigValue(struct FString ConfigKey, struct FString SectionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPIniConfigFunctions", "GetStringConfigValue");
    struct
    {
        struct FString ConfigKey;
        struct FString SectionName;
        struct FString ReturnValue;
    } Parms{};
    Parms.ConfigKey = (struct FString)ConfigKey;
    Parms.SectionName = (struct FString)SectionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBPIniConfigFunctions::GetBoolConfigValue(struct FString ConfigKey, struct FString SectionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BPIniConfigFunctions", "GetBoolConfigValue");
    struct
    {
        struct FString ConfigKey;
        struct FString SectionName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ConfigKey = (struct FString)ConfigKey;
    Parms.SectionName = (struct FString)SectionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
