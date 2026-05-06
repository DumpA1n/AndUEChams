#include "HDiff.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UHDiffPatch
int32_t UHDiffPatch::MergePatch(struct FString& oldFileName, struct FString& diffFileName, struct FString& outNewFileName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HDiffPatch", "MergePatch");
    struct
    {
        struct FString oldFileName;
        struct FString diffFileName;
        struct FString outNewFileName;
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    oldFileName = Parms.oldFileName;
    diffFileName = Parms.diffFileName;
    outNewFileName = Parms.outNewFileName;
    return Parms.ReturnValue;
}

struct FString UHDiffPatch::HashFile(struct FString& InFilename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HDiffPatch", "HashFile");
    struct
    {
        struct FString InFilename;
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InFilename = Parms.InFilename;
    return Parms.ReturnValue;
}

void UHDiffPatch::ForceMergeFail(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HDiffPatch", "ForceMergeFail");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UHDiffPatch::AsyncMergePatchList(struct FString& InTaskName, int32_t InFileID, int32_t InErrorCode, const struct TArray<struct FString>& InPakList, const struct TArray<struct FString>& InPakHashList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HDiffPatch", "AsyncMergePatchList");
    struct
    {
        struct FString InTaskName;
        int32_t InFileID;
        int32_t InErrorCode;
        struct TArray<struct FString> InPakList;
        struct TArray<struct FString> InPakHashList;
    } Parms{};
    Parms.InFileID = (int32_t)InFileID;
    Parms.InErrorCode = (int32_t)InErrorCode;
    Parms.InPakList = (struct TArray<struct FString>)InPakList;
    Parms.InPakHashList = (struct TArray<struct FString>)InPakHashList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InTaskName = Parms.InTaskName;
}

void UHDiffPatch::AsyncCheckHash(struct FString& InTaskName, const struct TArray<struct FString>& InPakList, const struct TArray<struct FString>& InToCheckPakList, const struct TArray<struct FString>& InToCheckPakHashList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HDiffPatch", "AsyncCheckHash");
    struct
    {
        struct FString InTaskName;
        struct TArray<struct FString> InPakList;
        struct TArray<struct FString> InToCheckPakList;
        struct TArray<struct FString> InToCheckPakHashList;
    } Parms{};
    Parms.InPakList = (struct TArray<struct FString>)InPakList;
    Parms.InToCheckPakList = (struct TArray<struct FString>)InToCheckPakList;
    Parms.InToCheckPakHashList = (struct TArray<struct FString>)InToCheckPakHashList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InTaskName = Parms.InTaskName;
}

} // namespace SDK
