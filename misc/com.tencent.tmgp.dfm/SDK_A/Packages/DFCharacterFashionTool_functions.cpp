#include "DFCharacterFashionTool.hpp"
#include "Engine.hpp"
#include "GPGlobalDefines.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMCharacterItemFashionManager::* ----
void UDFMCharacterItemFashionManager::UnloadFashionDatatable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterItemFashionManager", "UnloadFashionDatatable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMCharacterItemFashionManager::SetHeroItemMeshMaterialsAndFashion(struct USkeletalMeshComponent* InMeshComp, EHeroMeshType InMeshType, struct FName InHeroItemId, struct FName InHeroItemFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterItemFashionManager", "SetHeroItemMeshMaterialsAndFashion");
    struct
    {
        struct USkeletalMeshComponent* InMeshComp;
        enum EHeroMeshType InMeshType;
        struct FName InHeroItemId;
        struct FName InHeroItemFashionId;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMeshComp = (struct USkeletalMeshComponent*)InMeshComp;
    Parms.InMeshType = (enum EHeroMeshType)InMeshType;
    Parms.InHeroItemId = (struct FName)InHeroItemId;
    Parms.InHeroItemFashionId = (struct FName)InHeroItemFashionId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMCharacterItemFashionManager::SetHeroItemMeshFashion(struct USkeletalMeshComponent* InMeshComp, EHeroMeshType InMeshType, struct FName InHeroItemId, struct FName InHeroItemFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterItemFashionManager", "SetHeroItemMeshFashion");
    struct
    {
        struct USkeletalMeshComponent* InMeshComp;
        enum EHeroMeshType InMeshType;
        struct FName InHeroItemId;
        struct FName InHeroItemFashionId;
        int32_t ReturnValue;
    } Parms{};
    Parms.InMeshComp = (struct USkeletalMeshComponent*)InMeshComp;
    Parms.InMeshType = (enum EHeroMeshType)InMeshType;
    Parms.InHeroItemId = (struct FName)InHeroItemId;
    Parms.InHeroItemFashionId = (struct FName)InHeroItemFashionId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMCharacterItemFashionManager::ResetCachedFashionConfigs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterItemFashionManager", "ResetCachedFashionConfigs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMCharacterItemFashionManager* UDFMCharacterItemFashionManager::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCharacterItemFashionManager", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMCharacterItemFashionManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMCharacterItemFashionManager::CancelTask(int32_t InHandleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterItemFashionManager", "CancelTask");
    struct
    {
        int32_t InHandleId;
    } Parms{};
    Parms.InHandleId = (int32_t)InHandleId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCharacterItemFashionManager::AddCachedFashionConfig(struct FName InHeroItemId, struct FName InFashionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharacterItemFashionManager", "AddCachedFashionConfig");
    struct
    {
        struct FName InHeroItemId;
        struct FName InFashionId;
    } Parms{};
    Parms.InHeroItemId = (struct FName)InHeroItemId;
    Parms.InFashionId = (struct FName)InFashionId;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
