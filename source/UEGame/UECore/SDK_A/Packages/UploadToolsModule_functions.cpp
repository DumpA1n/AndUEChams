#include "UploadToolsModule.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UUploadToolsModuleBPTools
void UUploadToolsModuleBPTools::UploadZippedFile(const struct FUploadFileNtf& UploadNtf, const EUploadFileType& Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UploadToolsModuleBPTools", "UploadZippedFile");
    struct
    {
        struct FUploadFileNtf UploadNtf;
        enum EUploadFileType Type;
    } Parms{};
    Parms.UploadNtf = (struct FUploadFileNtf)UploadNtf;
    Parms.Type = (enum EUploadFileType)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUploadToolsModuleBPTools::UploadLog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UploadToolsModuleBPTools", "UploadLog");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUploadToolsModuleBPTools::UploadFile(struct FUploadFileRequestInfo InFileInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UploadToolsModuleBPTools", "UploadFile");
    struct
    {
        struct FUploadFileRequestInfo InFileInfo;
    } Parms{};
    Parms.InFileInfo = (struct FUploadFileRequestInfo)InFileInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUploadToolsModuleBPTools::SetMemoryStatsFlag(uint8_t Flag, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UploadToolsModuleBPTools", "SetMemoryStatsFlag");
    struct
    {
        uint8_t Flag;
        int32_t Num;
    } Parms{};
    Parms.Flag = (uint8_t)Flag;
    Parms.Num = (int32_t)Num;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UUploadToolsModuleDelegates
struct UUploadToolsModuleDelegates* UUploadToolsModuleDelegates::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UploadToolsModuleDelegates", "Get");
    struct
    {
        struct UUploadToolsModuleDelegates* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
