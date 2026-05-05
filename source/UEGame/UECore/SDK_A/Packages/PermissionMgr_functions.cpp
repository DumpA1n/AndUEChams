#include "PermissionMgr.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UIDFPermissionMgr
uint8_t UIDFPermissionMgr::ShouldShowRequestPermissionRationale(EDFPermissionType Permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IDFPermissionMgr", "ShouldShowRequestPermissionRationale");
    struct
    {
        enum EDFPermissionType Permission;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Permission = (enum EDFPermissionType)Permission;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UIDFPermissionMgr::RequestPermissions(EDFPermissionType Permission, int32_t RequestCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IDFPermissionMgr", "RequestPermissions");
    struct
    {
        enum EDFPermissionType Permission;
        int32_t RequestCode;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Permission = (enum EDFPermissionType)Permission;
    Parms.RequestCode = (int32_t)RequestCode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIDFPermissionMgr::OnPermissionRequestResultDelegate__DelegateSignature(const int32_t& RequestCode, uint8_t IsGranted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IDFPermissionMgr", "OnPermissionRequestResultDelegate__DelegateSignature");
    struct
    {
        int32_t RequestCode;
        uint8_t IsGranted;
    } Parms{};
    Parms.RequestCode = (int32_t)RequestCode;
    Parms.IsGranted = (uint8_t)IsGranted;
    this->ProcessEvent(Func, &Parms);
}

void UIDFPermissionMgr::JumpToSysSetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IDFPermissionMgr", "JumpToSysSetting");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UIDFPermissionMgr::IsFirstTimeRequest(EDFPermissionType Permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IDFPermissionMgr", "IsFirstTimeRequest");
    struct
    {
        enum EDFPermissionType Permission;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Permission = (enum EDFPermissionType)Permission;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UIDFPermissionMgr::IfRequestPermissionSupport(EDFPermissionType Permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IDFPermissionMgr", "IfRequestPermissionSupport");
    struct
    {
        enum EDFPermissionType Permission;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Permission = (enum EDFPermissionType)Permission;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UIDFPermissionMgr::IfPermissionGranted(EDFPermissionType Permission)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IDFPermissionMgr", "IfPermissionGranted");
    struct
    {
        enum EDFPermissionType Permission;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Permission = (enum EDFPermissionType)Permission;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UIDFPermissionMgr* UIDFPermissionMgr::GetPermissionMgr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IDFPermissionMgr", "GetPermissionMgr");
    struct
    {
        struct UIDFPermissionMgr* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UIDFPermissionMgr::GetDFPermissionTypeName(EDFPermissionType Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IDFPermissionMgr", "GetDFPermissionTypeName");
    struct
    {
        enum EDFPermissionType Type;
        struct FName ReturnValue;
    } Parms{};
    Parms.Type = (enum EDFPermissionType)Type;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
