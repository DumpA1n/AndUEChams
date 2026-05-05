#include "DFMWeaponSkinBussiness.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFMWeaponSkinBussinessUtil
void UDFMWeaponSkinBussinessUtil::SetMaterialParam(struct UMaterialInstanceDynamic* MaterialDynamic, const struct FWeaponSkinBussinessMaterialParams& Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMWeaponSkinBussinessUtil", "SetMaterialParam");
    struct
    {
        struct UMaterialInstanceDynamic* MaterialDynamic;
        struct FWeaponSkinBussinessMaterialParams Param;
    } Parms{};
    Parms.MaterialDynamic = (struct UMaterialInstanceDynamic*)MaterialDynamic;
    Parms.Param = (struct FWeaponSkinBussinessMaterialParams)Param;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct UMaterialInterface*> UDFMWeaponSkinBussinessUtil::ReplaceMaterials(struct USkeletalMeshComponent* InMeshComponent, struct FWeaponSkinBussinessReplaceMaterialParam ReplaceParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMWeaponSkinBussinessUtil", "ReplaceMaterials");
    struct
    {
        struct USkeletalMeshComponent* InMeshComponent;
        struct FWeaponSkinBussinessReplaceMaterialParam ReplaceParam;
        struct TArray<struct UMaterialInterface*> ReturnValue;
    } Parms{};
    Parms.InMeshComponent = (struct USkeletalMeshComponent*)InMeshComponent;
    Parms.ReplaceParam = (struct FWeaponSkinBussinessReplaceMaterialParam)ReplaceParam;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UWeaponPendantFireHeatAnimInstance
void UWeaponPendantFireHeatAnimInstance::SetPlayKilling(uint8_t PlayKilling)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponPendantFireHeatAnimInstance", "SetPlayKilling");
    struct
    {
        uint8_t PlayKilling;
    } Parms{};
    Parms.PlayKilling = (uint8_t)PlayKilling;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponPendantFireHeatAnimInstance::SetFireHeat(float InFireHeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponPendantFireHeatAnimInstance", "SetFireHeat");
    struct
    {
        float InFireHeat;
    } Parms{};
    Parms.InFireHeat = (float)InFireHeat;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponPendantFireHeatAnimInstance::OnFireHeatUpdated(float InFireHeat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponPendantFireHeatAnimInstance", "OnFireHeatUpdated");
    struct
    {
        float InFireHeat;
    } Parms{};
    Parms.InFireHeat = (float)InFireHeat;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponPendantFireHeatAnimInstance::GetPlayKilling()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponPendantFireHeatAnimInstance", "GetPlayKilling");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UWeaponPendantFireHeatAnimInstance::GetFireHeat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponPendantFireHeatAnimInstance", "GetFireHeat");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UWeaponPendantSkinApperanceModifer_FireHeatAttachMesh
void UWeaponPendantSkinApperanceModifer_FireHeatAttachMesh::OnUpdateFireHeat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponPendantSkinApperanceModifer_FireHeatAttachMesh", "OnUpdateFireHeat");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponSkinApperanceModifer_Mechrevo
void UWeaponSkinApperanceModifer_Mechrevo::UpdateRobertAnimInstanceState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "UpdateRobertAnimInstanceState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::UpdateHandguardChildMeshPositions(EWeaponSkinMechrevoMeshType MechrevoMeshType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "UpdateHandguardChildMeshPositions");
    struct
    {
        enum EWeaponSkinMechrevoMeshType MechrevoMeshType;
    } Parms{};
    Parms.MechrevoMeshType = (enum EWeaponSkinMechrevoMeshType)MechrevoMeshType;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::SyncMeshState(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "SyncMeshState");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::SwitchWeaponMaterials(EWeaponSkinMechrevoMeshType MechrevoMeshType, uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "SwitchWeaponMaterials");
    struct
    {
        enum EWeaponSkinMechrevoMeshType MechrevoMeshType;
        uint8_t bEnable;
    } Parms{};
    Parms.MechrevoMeshType = (enum EWeaponSkinMechrevoMeshType)MechrevoMeshType;
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::SwitchMeshState(EWeaponSkinMechrevoState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "SwitchMeshState");
    struct
    {
        enum EWeaponSkinMechrevoState State;
    } Parms{};
    Parms.State = (enum EWeaponSkinMechrevoState)State;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::StopMaterialSequence(EWeaponSkinMechrevoMeshType MeshType, struct UMaterialSequencer* MaterialSequencer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "StopMaterialSequence");
    struct
    {
        enum EWeaponSkinMechrevoMeshType MeshType;
        struct UMaterialSequencer* MaterialSequencer;
    } Parms{};
    Parms.MeshType = (enum EWeaponSkinMechrevoMeshType)MeshType;
    Parms.MaterialSequencer = (struct UMaterialSequencer*)MaterialSequencer;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::SetRobertAnimState(uint8_t bInIsFiring, int32_t bInIsReloading, uint8_t bInInspecting, uint8_t bInEmptyInspecting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "SetRobertAnimState");
    struct
    {
        uint8_t bInIsFiring;
        int32_t bInIsReloading;
        uint8_t bInInspecting;
        uint8_t bInEmptyInspecting;
    } Parms{};
    Parms.bInIsFiring = (uint8_t)bInIsFiring;
    Parms.bInIsReloading = (int32_t)bInIsReloading;
    Parms.bInInspecting = (uint8_t)bInInspecting;
    Parms.bInEmptyInspecting = (uint8_t)bInEmptyInspecting;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::SetMeshVisibility(EWeaponSkinMechrevoMeshType MeshType, uint8_t bVisibity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "SetMeshVisibility");
    struct
    {
        enum EWeaponSkinMechrevoMeshType MeshType;
        uint8_t bVisibity;
    } Parms{};
    Parms.MeshType = (enum EWeaponSkinMechrevoMeshType)MeshType;
    Parms.bVisibity = (uint8_t)bVisibity;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::PlayMaterialSequence(EWeaponSkinMechrevoMeshType MeshType, struct UMaterialSequencer* MaterialSequencer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "PlayMaterialSequence");
    struct
    {
        enum EWeaponSkinMechrevoMeshType MeshType;
        struct UMaterialSequencer* MaterialSequencer;
    } Parms{};
    Parms.MeshType = (enum EWeaponSkinMechrevoMeshType)MeshType;
    Parms.MaterialSequencer = (struct UMaterialSequencer*)MaterialSequencer;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::OnUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "OnUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::OnPlaySwitchAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "OnPlaySwitchAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::OnLoadRobertAnims(struct TArray<struct FSoftObjectPath> SoftObjectPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "OnLoadRobertAnims");
    struct
    {
        struct TArray<struct FSoftObjectPath> SoftObjectPaths;
    } Parms{};
    Parms.SoftObjectPaths = (struct TArray<struct FSoftObjectPath>)SoftObjectPaths;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::OnLoadPartMeshesCallback(struct TArray<struct FSoftObjectPath> SoftObjectPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "OnLoadPartMeshesCallback");
    struct
    {
        struct TArray<struct FSoftObjectPath> SoftObjectPaths;
    } Parms{};
    Parms.SoftObjectPaths = (struct TArray<struct FSoftObjectPath>)SoftObjectPaths;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::OnFinishSwitchAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "OnFinishSwitchAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::OnCreateMechrevoSkeletalMesh(struct USkeletalMeshComponent* Mesh, uint64_t ItemID, uint64_t Guid, struct UWeaponSkeletalMeshComponent* WeaponSkeletalMeshComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "OnCreateMechrevoSkeletalMesh");
    struct
    {
        struct USkeletalMeshComponent* Mesh;
        uint64_t ItemID;
        uint64_t Guid;
        struct UWeaponSkeletalMeshComponent* WeaponSkeletalMeshComponent;
    } Parms{};
    Parms.Mesh = (struct USkeletalMeshComponent*)Mesh;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.Guid = (uint64_t)Guid;
    Parms.WeaponSkeletalMeshComponent = (struct UWeaponSkeletalMeshComponent*)WeaponSkeletalMeshComponent;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::InitRobertAnims()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "InitRobertAnims");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FMechrevoMeshMaterialInfo> UWeaponSkinApperanceModifer_Mechrevo::GetWeaponMaterialPrxoy(EWeaponSkinMechrevoMeshType MechrevoMeshType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "GetWeaponMaterialPrxoy");
    struct
    {
        enum EWeaponSkinMechrevoMeshType MechrevoMeshType;
        struct TArray<struct FMechrevoMeshMaterialInfo> ReturnValue;
    } Parms{};
    Parms.MechrevoMeshType = (enum EWeaponSkinMechrevoMeshType)MechrevoMeshType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<EWeaponSkinMechrevoMeshType> UWeaponSkinApperanceModifer_Mechrevo::GetVibilityMeshTypes(EWeaponSkinMechrevoState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "GetVibilityMeshTypes");
    struct
    {
        enum EWeaponSkinMechrevoState State;
        struct TArray<EWeaponSkinMechrevoMeshType> ReturnValue;
    } Parms{};
    Parms.State = (enum EWeaponSkinMechrevoState)State;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWeaponSkinMechrevoState UWeaponSkinApperanceModifer_Mechrevo::GetNextState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "GetNextState");
    struct
    {
        enum EWeaponSkinMechrevoState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWeaponSkinMechrevoMeshType UWeaponSkinApperanceModifer_Mechrevo::GetMeshTypeByAdapaterType(EWeaponSkinMechrevoState State, EWeaponSkinMechrevoVariableAdapterType AdapterType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "GetMeshTypeByAdapaterType");
    struct
    {
        enum EWeaponSkinMechrevoState State;
        enum EWeaponSkinMechrevoVariableAdapterType AdapterType;
        enum EWeaponSkinMechrevoMeshType ReturnValue;
    } Parms{};
    Parms.State = (enum EWeaponSkinMechrevoState)State;
    Parms.AdapterType = (enum EWeaponSkinMechrevoVariableAdapterType)AdapterType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<EWeaponSkinMechrevoMeshType> UWeaponSkinApperanceModifer_Mechrevo::GetInVibilityMeshTypes(EWeaponSkinMechrevoState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "GetInVibilityMeshTypes");
    struct
    {
        enum EWeaponSkinMechrevoState State;
        struct TArray<EWeaponSkinMechrevoMeshType> ReturnValue;
    } Parms{};
    Parms.State = (enum EWeaponSkinMechrevoState)State;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EWeaponSkinMechrevoMeshType UWeaponSkinApperanceModifer_Mechrevo::GetHandguardMeshType(EWeaponSkinMechrevoState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "GetHandguardMeshType");
    struct
    {
        enum EWeaponSkinMechrevoState State;
        enum EWeaponSkinMechrevoMeshType ReturnValue;
    } Parms{};
    Parms.State = (enum EWeaponSkinMechrevoState)State;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWeaponSkinApperanceModifer_MechrevoConfigAsset* UWeaponSkinApperanceModifer_Mechrevo::GetConfigAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "GetConfigAsset");
    struct
    {
        struct UWeaponSkinApperanceModifer_MechrevoConfigAsset* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponSkinApperanceModifer_Mechrevo::CreateMechrevoMeshs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "CreateMechrevoMeshs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::ClearMechrevoMeshs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "ClearMechrevoMeshs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::BP_OnProcessAnimNotifyEvent(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "BP_OnProcessAnimNotifyEvent");
    struct
    {
        struct FName Name;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::BP_OnPlaySwitchAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "BP_OnPlaySwitchAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::BP_OnFinishSwitchAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "BP_OnFinishSwitchAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinApperanceModifer_Mechrevo::BindRobertSkeletalMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinApperanceModifer_Mechrevo", "BindRobertSkeletalMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponSkinComponent_Mechrevo
void UWeaponSkinComponent_Mechrevo::ServerSwitchWeaponMeshSkinState(int32_t InMeshState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinComponent_Mechrevo", "ServerSwitchWeaponMeshSkinState");
    struct
    {
        int32_t InMeshState;
    } Parms{};
    Parms.InMeshState = (int32_t)InMeshState;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinComponent_Mechrevo::OnCurrentMeshState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinComponent_Mechrevo", "OnCurrentMeshState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponSkinMechrevoRobertAnimInstance
void UWeaponSkinMechrevoRobertAnimInstance::SetMechrevoState(uint8_t bInIsFiring, int32_t bInIsReloading, uint8_t bInInspecting, uint8_t bInEmptyInspecting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinMechrevoRobertAnimInstance", "SetMechrevoState");
    struct
    {
        uint8_t bInIsFiring;
        int32_t bInIsReloading;
        uint8_t bInInspecting;
        uint8_t bInEmptyInspecting;
    } Parms{};
    Parms.bInIsFiring = (uint8_t)bInIsFiring;
    Parms.bInIsReloading = (int32_t)bInIsReloading;
    Parms.bInInspecting = (uint8_t)bInInspecting;
    Parms.bInEmptyInspecting = (uint8_t)bInEmptyInspecting;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponSkinMechrevoRobertAnimInstance::OnMechrevoStateUpdated(uint8_t bInIsFiring, uint8_t bInIsReloading, uint8_t bInInspecting, uint8_t bInEmptyInspecting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinMechrevoRobertAnimInstance", "OnMechrevoStateUpdated");
    struct
    {
        uint8_t bInIsFiring;
        uint8_t bInIsReloading;
        uint8_t bInInspecting;
        uint8_t bInEmptyInspecting;
    } Parms{};
    Parms.bInIsFiring = (uint8_t)bInIsFiring;
    Parms.bInIsReloading = (uint8_t)bInIsReloading;
    Parms.bInInspecting = (uint8_t)bInInspecting;
    Parms.bInEmptyInspecting = (uint8_t)bInEmptyInspecting;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponSkinMechrevoRobertAnimInstance::IsMechrevoReloading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinMechrevoRobertAnimInstance", "IsMechrevoReloading");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeaponSkinMechrevoRobertAnimInstance::IsMechrevoInspecting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinMechrevoRobertAnimInstance", "IsMechrevoInspecting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeaponSkinMechrevoRobertAnimInstance::IsMechrevoFiring()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinMechrevoRobertAnimInstance", "IsMechrevoFiring");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeaponSkinMechrevoRobertAnimInstance::IsMechrevoEmptyInspecting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinMechrevoRobertAnimInstance", "IsMechrevoEmptyInspecting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponSkinMechrevoRobertAnimInstance::AddAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinMechrevoRobertAnimInstance", "AddAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
