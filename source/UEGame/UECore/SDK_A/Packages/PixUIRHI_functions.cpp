#include "PixUIRHI.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPxRHIImage
struct UObject* UPxRHIImage::GetHandleObject()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PxRHIImage", "GetHandleObject");
    struct
    {
        struct UObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPxRHIMgr
uint8_t UPxRHIMgr::RHIImageUpdate(struct UPxRHIMgr* pPxRHIImage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxRHIMgr", "RHIImageUpdate");
    struct
    {
        struct UPxRHIMgr* pPxRHIImage;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pPxRHIImage = (struct UPxRHIMgr*)pPxRHIImage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPxRHIMgr* UPxRHIMgr::RHIImageFindByObject(struct UObject* pCoreObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxRHIMgr", "RHIImageFindByObject");
    struct
    {
        struct UObject* pCoreObject;
        struct UPxRHIMgr* ReturnValue;
    } Parms{};
    Parms.pCoreObject = (struct UObject*)pCoreObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPxRHIMgr::RHIImageDestroy(struct UPxRHIMgr* pPxRHIImage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxRHIMgr", "RHIImageDestroy");
    struct
    {
        struct UPxRHIMgr* pPxRHIImage;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pPxRHIImage = (struct UPxRHIMgr*)pPxRHIImage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPxRHIImage* UPxRHIMgr::RHIImageCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxRHIMgr", "RHIImageCreate");
    struct
    {
        struct UPxRHIImage* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPxRHIMgr* UPxRHIMgr::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PxRHIMgr", "Get");
    struct
    {
        struct UPxRHIMgr* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
