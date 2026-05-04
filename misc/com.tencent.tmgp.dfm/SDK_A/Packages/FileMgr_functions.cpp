#include "FileMgr.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UIFileMgr::* ----
uint8_t UIFileMgr::SaveToAlbum(struct FString AbsolutePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IFileMgr", "SaveToAlbum");
    struct
    {
        struct FString AbsolutePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.AbsolutePath = (struct FString)AbsolutePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIFileMgr::OnSaveToAlbum__DelegateSignature(struct FString AbsolutePath, uint8_t Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IFileMgr", "OnSaveToAlbum__DelegateSignature");
    struct
    {
        struct FString AbsolutePath;
        uint8_t Result;
    } Parms{};
    Parms.AbsolutePath = (struct FString)AbsolutePath;
    Parms.Result = (uint8_t)Result;
    this->ProcessEvent(Func, &Parms);
}

struct UIFileMgr* UIFileMgr::GetFileMgr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IFileMgr", "GetFileMgr");
    struct
    {
        struct UIFileMgr* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
