#include "FalconCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UFalconTXTUtil
struct FString UFalconTXTUtil::LoadTXT(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconTXTUtil", "LoadTXT");
    struct
    {
        struct FString InPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UFalconTXTUtil::AppendTXT(struct FString InPath, struct FString InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("FalconTXTUtil", "AppendTXT");
    struct
    {
        struct FString InPath;
        struct FString InText;
        bool ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    Parms.InText = (struct FString)InText;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
