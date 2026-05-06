#include "RigVM.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// URigVM
void URigVM::SetParameterValueVector2D(const struct FName& InParameterName, const struct FVector2D& InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueVector2D");
    struct
    {
        struct FName InParameterName;
        struct FVector2D InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (struct FVector2D)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

void URigVM::SetParameterValueVector(const struct FName& InParameterName, const struct FVector& InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueVector");
    struct
    {
        struct FName InParameterName;
        struct FVector InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (struct FVector)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

void URigVM::SetParameterValueTransform(const struct FName& InParameterName, const struct FTransform& InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueTransform");
    struct
    {
        struct FName InParameterName;
        struct FTransform InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (struct FTransform)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

void URigVM::SetParameterValueString(const struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueString");
    struct
    {
        struct FName InParameterName;
        struct FString InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (struct FString)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

void URigVM::SetParameterValueQuat(const struct FName& InParameterName, const struct FQuat& InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueQuat");
    struct
    {
        struct FName InParameterName;
        struct FQuat InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (struct FQuat)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

void URigVM::SetParameterValueName(const struct FName& InParameterName, const struct FName& InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueName");
    struct
    {
        struct FName InParameterName;
        struct FName InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (struct FName)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

void URigVM::SetParameterValueInt(const struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueInt");
    struct
    {
        struct FName InParameterName;
        int32_t InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (int32_t)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

void URigVM::SetParameterValueFloat(const struct FName& InParameterName, float InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueFloat");
    struct
    {
        struct FName InParameterName;
        float InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (float)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

void URigVM::SetParameterValueBool(const struct FName& InParameterName, bool InValue, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "SetParameterValueBool");
    struct
    {
        struct FName InParameterName;
        bool InValue;
        int32_t InArrayIndex;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InValue = (bool)InValue;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
}

struct FString URigVM::GetRigVMFunctionName(int32_t InFunctionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetRigVMFunctionName");
    struct
    {
        int32_t InFunctionIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.InFunctionIndex = (int32_t)InFunctionIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D URigVM::GetParameterValueVector2D(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueVector2D");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector URigVM::GetParameterValueVector(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueVector");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform URigVM::GetParameterValueTransform(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueTransform");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString URigVM::GetParameterValueString(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueString");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuat URigVM::GetParameterValueQuat(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueQuat");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName URigVM::GetParameterValueName(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueName");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        struct FName ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t URigVM::GetParameterValueInt(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueInt");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        int32_t ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float URigVM::GetParameterValueFloat(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueFloat");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        float ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool URigVM::GetParameterValueBool(const struct FName& InParameterName, int32_t InArrayIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterValueBool");
    struct
    {
        struct FName InParameterName;
        int32_t InArrayIndex;
        bool ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    Parms.InArrayIndex = (int32_t)InArrayIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t URigVM::GetParameterArraySize(const struct FName& InParameterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "GetParameterArraySize");
    struct
    {
        struct FName InParameterName;
        int32_t ReturnValue;
    } Parms{};
    Parms.InParameterName = (struct FName)InParameterName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool URigVM::Execute(const struct FName& InEntryName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "Execute");
    struct
    {
        struct FName InEntryName;
        bool ReturnValue;
    } Parms{};
    Parms.InEntryName = (struct FName)InEntryName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t URigVM::AddRigVMFunction(struct UScriptStruct* InRigVMStruct, const struct FName& InMethodName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RigVM", "AddRigVMFunction");
    struct
    {
        struct UScriptStruct* InRigVMStruct;
        struct FName InMethodName;
        int32_t ReturnValue;
    } Parms{};
    Parms.InRigVMStruct = (struct UScriptStruct*)InRigVMStruct;
    Parms.InMethodName = (struct FName)InMethodName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
