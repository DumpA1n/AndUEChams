#include "StructUtilsEngine.hpp"
#include "StructUtils.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UStructUtilsFunctionLibrary
void UStructUtilsFunctionLibrary::SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, const int32_t& Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "SetInstancedStructValue");
    struct
    {
        struct FInstancedStruct InstancedStruct;
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InstancedStruct = Parms.InstancedStruct;
}

void UStructUtilsFunctionLibrary::Reset(struct FInstancedStruct& InstancedStruct, struct UScriptStruct* StructType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "Reset");
    struct
    {
        struct FInstancedStruct InstancedStruct;
        struct UScriptStruct* StructType;
    } Parms{};
    Parms.StructType = (struct UScriptStruct*)StructType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InstancedStruct = Parms.InstancedStruct;
}

bool UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "NotEqual_InstancedStruct");
    struct
    {
        struct FInstancedStruct A;
        struct FInstancedStruct B;
        bool ReturnValue;
    } Parms{};
    Parms.A = (struct FInstancedStruct)A;
    Parms.B = (struct FInstancedStruct)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FInstancedStruct UStructUtilsFunctionLibrary::MakeInstancedStruct(const int32_t& Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "MakeInstancedStruct");
    struct
    {
        int32_t Value;
        struct FInstancedStruct ReturnValue;
    } Parms{};
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UStructUtilsFunctionLibrary::IsValid_InstancedStruct(const struct FInstancedStruct& InstancedStruct)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "IsValid_InstancedStruct");
    struct
    {
        struct FInstancedStruct InstancedStruct;
        bool ReturnValue;
    } Parms{};
    Parms.InstancedStruct = (struct FInstancedStruct)InstancedStruct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EStructUtilsResult UStructUtilsFunctionLibrary::IsInstancedStructValid(const struct FInstancedStruct& InstancedStruct)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "IsInstancedStructValid");
    struct
    {
        struct FInstancedStruct InstancedStruct;
        enum EStructUtilsResult ReturnValue;
    } Parms{};
    Parms.InstancedStruct = (struct FInstancedStruct)InstancedStruct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UStructUtilsFunctionLibrary::GetInstancedStructValue(EStructUtilsResult& ExecResult, const struct FInstancedStruct& InstancedStruct, int32_t& Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "GetInstancedStructValue");
    struct
    {
        enum EStructUtilsResult ExecResult;
        struct FInstancedStruct InstancedStruct;
        int32_t Value;
    } Parms{};
    Parms.InstancedStruct = (struct FInstancedStruct)InstancedStruct;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ExecResult = Parms.ExecResult;
    Value = Parms.Value;
}

bool UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("StructUtilsFunctionLibrary", "EqualEqual_InstancedStruct");
    struct
    {
        struct FInstancedStruct A;
        struct FInstancedStruct B;
        bool ReturnValue;
    } Parms{};
    Parms.A = (struct FInstancedStruct)A;
    Parms.B = (struct FInstancedStruct)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
