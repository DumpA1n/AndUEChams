#include "DFMAbility.hpp"
#include "DFMGameHud.hpp"
#include "DFMGameplay.hpp"
#include "DFMGlobalDefines.hpp"
#include "DFMVehicle.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPDeformable.hpp"
#include "GPGameHud.hpp"
#include "GPGameInput.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "GPQuest.hpp"
#include "GPResource.hpp"
#include "GPWeaponDefineForPlugin.hpp"
#include "GPWeaponRuntime.hpp"
#include "GameplayTags.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AAbilityAttachBaseMesh
void AAbilityAttachBaseMesh::UpdatePostEffectVectorParameters(struct FName PostEffectName, struct FName ParameterName, struct FLinearColor Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "UpdatePostEffectVectorParameters");
    struct
    {
        struct FName PostEffectName;
        struct FName ParameterName;
        struct FLinearColor Value;
    } Parms{};
    Parms.PostEffectName = (struct FName)PostEffectName;
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (struct FLinearColor)Value;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::UpdatePostEffectScalarParameters(struct FName PostEffectName, struct FName ParameterName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "UpdatePostEffectScalarParameters");
    struct
    {
        struct FName PostEffectName;
        struct FName ParameterName;
        float Value;
    } Parms{};
    Parms.PostEffectName = (struct FName)PostEffectName;
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::SwitchToStaticMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "SwitchToStaticMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::SwitchToSkeletalMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "SwitchToSkeletalMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::SwitchToMasterPoseMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "SwitchToMasterPoseMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::SetPostEffectActive(struct FName PostEffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "SetPostEffectActive");
    struct
    {
        struct FName PostEffectName;
    } Parms{};
    Parms.PostEffectName = (struct FName)PostEffectName;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::SetCurStaticMeshComponentEnable(uint8_t Enable, uint8_t fromLod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "SetCurStaticMeshComponentEnable");
    struct
    {
        uint8_t Enable;
        uint8_t fromLod;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.fromLod = (uint8_t)fromLod;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::SetCurSkeletalMeshComponentMasterPoseEnable(uint8_t Enable, uint8_t fromLod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "SetCurSkeletalMeshComponentMasterPoseEnable");
    struct
    {
        uint8_t Enable;
        uint8_t fromLod;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.fromLod = (uint8_t)fromLod;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::SetCurSkeletalMeshComponentEnable(uint8_t Enable, uint8_t fromLod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "SetCurSkeletalMeshComponentEnable");
    struct
    {
        uint8_t Enable;
        uint8_t fromLod;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.fromLod = (uint8_t)fromLod;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::SetCurGameAKComponentEnable(uint8_t Enable, uint8_t fromLod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "SetCurGameAKComponentEnable");
    struct
    {
        uint8_t Enable;
        uint8_t fromLod;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.fromLod = (uint8_t)fromLod;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::RemovePostEffect(struct FName PostEffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "RemovePostEffect");
    struct
    {
        struct FName PostEffectName;
    } Parms{};
    Parms.PostEffectName = (struct FName)PostEffectName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AAbilityAttachBaseMesh::Is3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "Is3P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* AAbilityAttachBaseMesh::GetMasterSkeletalMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "GetMasterSkeletalMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAbilityAttachBaseMesh::EnableAllMeshTick(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "EnableAllMeshTick");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::CharacterAvatarChangeSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "CharacterAvatarChangeSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UGPSkeletalMeshComponent* AAbilityAttachBaseMesh::BP_SkeletalMeshMasterPose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "BP_SkeletalMeshMasterPose");
    struct
    {
        struct UGPSkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPSkeletalMeshComponent* AAbilityAttachBaseMesh::BP_SkeletalMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "BP_SkeletalMesh");
    struct
    {
        struct UGPSkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAbilityAttachBaseMesh::BP_SetMaterialScaleParams(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "BP_SetMaterialScaleParams");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::BP_SetMasterPose(uint8_t Set)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "BP_SetMasterPose");
    struct
    {
        uint8_t Set;
    } Parms{};
    Parms.Set = (uint8_t)Set;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::BP_SetBPAnimIndex(int32_t AnimIndex, float PlayRate, uint8_t bLoopAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "BP_SetBPAnimIndex");
    struct
    {
        int32_t AnimIndex;
        float PlayRate;
        uint8_t bLoopAnim;
    } Parms{};
    Parms.AnimIndex = (int32_t)AnimIndex;
    Parms.PlayRate = (float)PlayRate;
    Parms.bLoopAnim = (uint8_t)bLoopAnim;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityAttachBaseMesh::BP_PostBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachBaseMesh", "BP_PostBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAbilityAttachRopeComponent
void UAbilityAttachRopeComponent::RebuildRope()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityAttachRopeComponent", "RebuildRope");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAbilityVoxelizationComponent
void UAbilityVoxelizationComponent::Voxelization()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "Voxelization");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityVoxelizationComponent::RealDoDamageDiffuse(int32_t X, int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "RealDoDamageDiffuse");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Z;
        uint8_t ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityVoxelizationComponent::OnRep_ClientData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "OnRep_ClientData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityVoxelizationComponent::IsVoxelization()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "IsVoxelization");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::IsOBB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "IsOBB");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityVoxelizationComponent::InitLineTraceParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "InitLineTraceParams");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::InitData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "InitData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::InitCheckSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "InitCheckSize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector UAbilityVoxelizationComponent::GetVoxelLocation(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetVoxelLocation");
    struct
    {
        struct FVector Location;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FIntVector UAbilityVoxelizationComponent::GetVoxelIndexByVoxelLocation(const struct FVector& VoxelLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetVoxelIndexByVoxelLocation");
    struct
    {
        struct FVector VoxelLocation;
        struct FIntVector ReturnValue;
    } Parms{};
    Parms.VoxelLocation = (struct FVector)VoxelLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FIntVector UAbilityVoxelizationComponent::GetVoxelIndex(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetVoxelIndex");
    struct
    {
        struct FVector Location;
        struct FIntVector ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAbilityVoxelizationComponent::GetVoxelArrayIndex(int32_t X, int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetVoxelArrayIndex");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Z;
        int32_t ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FBox UAbilityVoxelizationComponent::GetQueryAABB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetQueryAABB");
    struct
    {
        struct FBox ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint8_t> UAbilityVoxelizationComponent::GetDecompressResults()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetDecompressResults");
    struct
    {
        struct TArray<uint8_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint8_t> UAbilityVoxelizationComponent::GetDamageDiffuseResults()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetDamageDiffuseResults");
    struct
    {
        struct TArray<uint8_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAbilityVoxelizationComponent::GetCurrVoxelSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetCurrVoxelSize");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FIntVector UAbilityVoxelizationComponent::GetCurrVoxelCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetCurrVoxelCount");
    struct
    {
        struct FIntVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAbilityVoxelizationComponent::GetCheckSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "GetCheckSize");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::DoVoxelization()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DoVoxelization");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::DoLineTraceCheck(const struct FVector& Start, const struct FVector& End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DoLineTraceCheck");
    struct
    {
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityVoxelizationComponent::DoDamageDiffuse_DFS(int32_t X, int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DoDamageDiffuse_DFS");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Z;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::DoDamageDiffuse_CylinderBFS(int32_t X, int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DoDamageDiffuse_CylinderBFS");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Z;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::DoDamageDiffuse_BFS(int32_t X, int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DoDamageDiffuse_BFS");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Z;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::DecompressOctreeNode(int32_t Level, int32_t NodeIndex, int32_t& ReadIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DecompressOctreeNode");
    struct
    {
        int32_t Level;
        int32_t NodeIndex;
        int32_t ReadIndex;
    } Parms{};
    Parms.Level = (int32_t)Level;
    Parms.NodeIndex = (int32_t)NodeIndex;
    this->ProcessEvent(Func, &Parms);
    ReadIndex = Parms.ReadIndex;
}

void UAbilityVoxelizationComponent::DecompressOctree()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DecompressOctree");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::DebugDrawVoxels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DebugDrawVoxels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::DamageDiffuse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "DamageDiffuse");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UAbilityVoxelizationComponent::CountVoxelPlaneRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "CountVoxelPlaneRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityVoxelizationComponent::CompressOctreeNode(int32_t Level, int32_t NodeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "CompressOctreeNode");
    struct
    {
        int32_t Level;
        int32_t NodeIndex;
    } Parms{};
    Parms.Level = (int32_t)Level;
    Parms.NodeIndex = (int32_t)NodeIndex;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::CompressOctree()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "CompressOctree");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::CompareDecompressResults()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "CompareDecompressResults");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::ClientDebugDrawVoxels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "ClientDebugDrawVoxels");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::ClientDebugDrawLine(struct FVector Start, struct FVector End, struct FColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "ClientDebugDrawLine");
    struct
    {
        struct FVector Start;
        struct FVector End;
        struct FColor Color;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.Color = (struct FColor)Color;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityVoxelizationComponent::ClientDebugDrawBox(struct FVector Origin, struct FVector Extent, struct FColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "ClientDebugDrawBox");
    struct
    {
        struct FVector Origin;
        struct FVector Extent;
        struct FColor Color;
    } Parms{};
    Parms.Origin = (struct FVector)Origin;
    Parms.Extent = (struct FVector)Extent;
    Parms.Color = (struct FColor)Color;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityVoxelizationComponent::CheckLocationWithOutVoxel(const struct TArray<uint8_t>& ResultsToCheck, uint8_t TargetResult, const struct FVector& Location, int32_t CheckAddOffset, struct FIntVector& OutVoxelIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "CheckLocationWithOutVoxel");
    struct
    {
        struct TArray<uint8_t> ResultsToCheck;
        uint8_t TargetResult;
        struct FVector Location;
        int32_t CheckAddOffset;
        struct FIntVector OutVoxelIdx;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ResultsToCheck = (struct TArray<uint8_t>)ResultsToCheck;
    Parms.TargetResult = (uint8_t)TargetResult;
    Parms.Location = (struct FVector)Location;
    Parms.CheckAddOffset = (int32_t)CheckAddOffset;
    this->ProcessEvent(Func, &Parms);
    OutVoxelIdx = Parms.OutVoxelIdx;
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::CheckLocation(const struct FVector& Location, uint8_t CheckAddOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "CheckLocation");
    struct
    {
        struct FVector Location;
        uint8_t CheckAddOffset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.CheckAddOffset = (uint8_t)CheckAddOffset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::CheckDamagePlaneLimit(int32_t X, int32_t Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "CheckDamagePlaneLimit");
    struct
    {
        int32_t X;
        int32_t Y;
        uint8_t ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::BuildOctreeCheckLevel0(int32_t X, int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "BuildOctreeCheckLevel0");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Z;
        uint8_t ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityVoxelizationComponent::BuildOctree()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "BuildOctree");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityVoxelizationComponent::BaseCheckLocation_Sphere(const struct FVector& VoxelLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "BaseCheckLocation_Sphere");
    struct
    {
        struct FVector VoxelLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VoxelLocation = (struct FVector)VoxelLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::BaseCheckLocation_Cylinder(const struct FVector& VoxelLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "BaseCheckLocation_Cylinder");
    struct
    {
        struct FVector VoxelLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VoxelLocation = (struct FVector)VoxelLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::BaseCheckLocation_Box(const struct FVector& VoxelLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "BaseCheckLocation_Box");
    struct
    {
        struct FVector VoxelLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VoxelLocation = (struct FVector)VoxelLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationComponent::BaseCheckLocation(const struct FVector& VoxelLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizationComponent", "BaseCheckLocation");
    struct
    {
        struct FVector VoxelLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VoxelLocation = (struct FVector)VoxelLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMAbilityInstance
void UDFMAbilityInstance::SetCullScreenSizeRatio(float ratio)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "SetCullScreenSizeRatio");
    struct
    {
        float ratio;
    } Parms{};
    Parms.ratio = (float)ratio;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMAbilityInstance::IsServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "IsServer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAbilityInstance::IsMPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "IsMPMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAbilityInstance::IsFPPMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "IsFPPMode");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAbilityInstance::IsEquipingWeapon(int32_t WeaponSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "IsEquipingWeapon");
    struct
    {
        int32_t WeaponSlot;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponSlot = (int32_t)WeaponSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAbilityInstance::Is1PorStandalone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "Is1PorStandalone");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAbilityInstance::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAbilityInstance::HasAuthority()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "HasAuthority");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENetMode UDFMAbilityInstance::GetNetMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "GetNetMode");
    struct
    {
        enum ENetMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAbilityInstance::GetHealthData(int32_t& cur, int32_t& Max, float& Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "GetHealthData");
    struct
    {
        int32_t cur;
        int32_t Max;
        float Percent;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    cur = Parms.cur;
    Max = Parms.Max;
    Percent = Parms.Percent;
}

ENetRole UDFMAbilityInstance::GetENetRole()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "GetENetRole");
    struct
    {
        enum ENetRole ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMAbilityInstance::GetCurrentGameTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "GetCurrentGameTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMAbilityInstance::GetCullScreenSizeRatio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "GetCullScreenSizeRatio");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAbilityEntityData UDFMAbilityInstance::GetAbilityData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "GetAbilityData");
    struct
    {
        struct FGPAbilityEntityData ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPCharacter* UDFMAbilityInstance::GetAbilityCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "GetAbilityCharacter");
    struct
    {
        struct AGPCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAbilityInstance::FireOneShot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "FireOneShot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstance::ClientSwitchMainWeapon(EWeaponSwitchType SwitchType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstance", "ClientSwitchMainWeapon");
    struct
    {
        enum EWeaponSwitchType SwitchType;
    } Parms{};
    Parms.SwitchType = (enum EWeaponSwitchType)SwitchType;
    this->ProcessEvent(Func, &Parms);
}

// UAbilityInstanceAIAlert
void UAbilityInstanceAIAlert::OnReceiveAIAlert(struct ADFMAICharacter* AI, struct ADFMCharacter* Enemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceAIAlert", "OnReceiveAIAlert");
    struct
    {
        struct ADFMAICharacter* AI;
        struct ADFMCharacter* Enemy;
    } Parms{};
    Parms.AI = (struct ADFMAICharacter*)AI;
    Parms.Enemy = (struct ADFMCharacter*)Enemy;
    this->ProcessEvent(Func, &Parms);
}

// UAbilityInstanceBionicSpySkill
int32_t UAbilityInstanceBionicSpySkill::TrySpawnSpyActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySkill", "TrySpawnSpyActor");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAbilityInstanceBionicSpySkill::SetProgressHUDShowState(uint8_t bIsShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySkill", "SetProgressHUDShowState");
    struct
    {
        uint8_t bIsShow;
    } Parms{};
    Parms.bIsShow = (uint8_t)bIsShow;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceBionicSpySkill::SetCD(uint8_t bIsSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySkill", "SetCD");
    struct
    {
        uint8_t bIsSuccess;
    } Parms{};
    Parms.bIsSuccess = (uint8_t)bIsSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceBionicSpySkill::SendTargetLoadPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySkill", "SendTargetLoadPanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceBionicSpySkill::DataFlowAddCastNum(uint8_t bIsSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySkill", "DataFlowAddCastNum");
    struct
    {
        uint8_t bIsSuccess;
    } Parms{};
    Parms.bIsSuccess = (uint8_t)bIsSuccess;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityInstanceBionicSpySkill::CheckFootprintSearchData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySkill", "CheckFootprintSearchData");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAbilityInstanceBionicSpySwitchSkill
void UAbilityInstanceBionicSpySwitchSkill::TrySwitchSpyMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "TrySwitchSpyMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceBionicSpySwitchSkill::TryCloseHUD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "TryCloseHUD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceBionicSpySwitchSkill::StopTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "StopTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceBionicSpySwitchSkill::StartTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "StartTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceBionicSpySwitchSkill::DoTimerTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "DoTimerTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityInstanceBionicSpySwitchSkill::DoCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "DoCheck");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityInstanceBionicSpySwitchSkill::CheckSpyData(uint8_t bShowTips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "CheckSpyData");
    struct
    {
        uint8_t bShowTips;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bShowTips = (uint8_t)bShowTips;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityInstanceBionicSpySwitchSkill::CheckMapData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "CheckMapData");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityInstanceBionicSpySwitchSkill::CheckDistance(float MaxDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceBionicSpySwitchSkill", "CheckDistance");
    struct
    {
        float MaxDistance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MaxDistance = (float)MaxDistance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAbilityInstanceCallDog
void UAbilityInstanceCallDog::StopCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceCallDog", "StopCD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceCallDog::SetDogCharacter(struct ADFMAICharacterCallDog* DogCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceCallDog", "SetDogCharacter");
    struct
    {
        struct ADFMAICharacterCallDog* DogCharacter;
    } Parms{};
    Parms.DogCharacter = (struct ADFMAICharacterCallDog*)DogCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityInstanceCallDog::ResumeCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceCallDog", "ResumeCD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityInstanceCallDog::DoSpawnAI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityInstanceCallDog", "DoSpawnAI");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAbilityLauncherFireMode
void UAbilityLauncherFireMode::TrySpawnFakeBullet(struct FWeaponFireRepInfo& RepInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityLauncherFireMode", "TrySpawnFakeBullet");
    struct
    {
        struct FWeaponFireRepInfo RepInfo;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    RepInfo = Parms.RepInfo;
}

void UAbilityLauncherFireMode::SpawnGrenade(const struct FVector& StartLocation, const struct FVector& FireRotation, const struct FVector& AffectInitVelocity, const uint64_t& BulletGuid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityLauncherFireMode", "SpawnGrenade");
    struct
    {
        struct FVector StartLocation;
        struct FVector FireRotation;
        struct FVector AffectInitVelocity;
        uint64_t BulletGuid;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.FireRotation = (struct FVector)FireRotation;
    Parms.AffectInitVelocity = (struct FVector)AffectInitVelocity;
    Parms.BulletGuid = (uint64_t)BulletGuid;
    this->ProcessEvent(Func, &Parms);
}

void UAbilityLauncherFireMode::ResetPreviewLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityLauncherFireMode", "ResetPreviewLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityLauncherFireMode::OnSwitchWeaponNextFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityLauncherFireMode", "OnSwitchWeaponNextFrame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityLauncherFireMode::OnEndfireSwitchWeaponInNextFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityLauncherFireMode", "OnEndfireSwitchWeaponInNextFrame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UAbilityLauncherFireMode::CheckIsClientOnlyThrowConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityLauncherFireMode", "CheckIsClientOnlyThrowConfig");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IAbilityNodeTriggerInterface
void IAbilityNodeTriggerInterface::SetTriggerType(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityNodeTriggerInterface", "SetTriggerType");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

int32_t IAbilityNodeTriggerInterface::GetTriggerType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityNodeTriggerInterface", "GetTriggerType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IAbilityNodeTriggerInterface::DebugCustomTrigger(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityNodeTriggerInterface", "DebugCustomTrigger");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void IAbilityNodeTriggerInterface::BroadcastTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityNodeTriggerInterface", "BroadcastTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UAbilityOverloadBuffHandler
void UAbilityOverloadBuffHandler::TrySendEvent(uint8_t bIsAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityOverloadBuffHandler", "TrySendEvent");
    struct
    {
        uint8_t bIsAdd;
    } Parms{};
    Parms.bIsAdd = (uint8_t)bIsAdd;
    this->ProcessEvent(Func, &Parms);
}

// IAbilityProjectileInterface
void IAbilityProjectileInterface::SetVelocityStartPos(struct FVector pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityProjectileInterface", "SetVelocityStartPos");
    struct
    {
        struct FVector pos;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    this->ProcessEvent(Func, &Parms);
}

void IAbilityProjectileInterface::SetVelocity(struct FVector Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityProjectileInterface", "SetVelocity");
    struct
    {
        struct FVector Velocity;
    } Parms{};
    Parms.Velocity = (struct FVector)Velocity;
    this->ProcessEvent(Func, &Parms);
}

void IAbilityProjectileInterface::SetRealStop(uint8_t Stop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityProjectileInterface", "SetRealStop");
    struct
    {
        uint8_t Stop;
    } Parms{};
    Parms.Stop = (uint8_t)Stop;
    this->ProcessEvent(Func, &Parms);
}

void IAbilityProjectileInterface::SetIgnoreOwner(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityProjectileInterface", "SetIgnoreOwner");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

// UAbilityVehicleAnimInstance
struct FVector UAbilityVehicleAnimInstance::GetSocketUpOffsetLoaction(struct FName Name, float offset, ERelativeTransformSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVehicleAnimInstance", "GetSocketUpOffsetLoaction");
    struct
    {
        struct FName Name;
        float offset;
        enum ERelativeTransformSpace Space;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.offset = (float)offset;
    Parms.Space = (enum ERelativeTransformSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAbilityVehicleAnimInstance::GetSocketRightOffsetLoaction(struct FName Name, float offset, ERelativeTransformSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVehicleAnimInstance", "GetSocketRightOffsetLoaction");
    struct
    {
        struct FName Name;
        float offset;
        enum ERelativeTransformSpace Space;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.offset = (float)offset;
    Parms.Space = (enum ERelativeTransformSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAbilityVehicleAnimInstance::GetSocketForwadOffsetLoaction(struct FName Name, float offset, ERelativeTransformSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVehicleAnimInstance", "GetSocketForwadOffsetLoaction");
    struct
    {
        struct FName Name;
        float offset;
        enum ERelativeTransformSpace Space;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.offset = (float)offset;
    Parms.Space = (enum ERelativeTransformSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UAbilityVehicleAnimInstance::getSocketAndSocketOffset(struct FName socket1, struct FName socket2, ERelativeTransformSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVehicleAnimInstance", "getSocketAndSocketOffset");
    struct
    {
        struct FName socket1;
        struct FName socket2;
        enum ERelativeTransformSpace Space;
        struct FVector ReturnValue;
    } Parms{};
    Parms.socket1 = (struct FName)socket1;
    Parms.socket2 = (struct FName)socket2;
    Parms.Space = (enum ERelativeTransformSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAbilityVoxelizationUtils
void UAbilityVoxelizationUtils::TransformToLocal_OBB(struct TArray<uint8_t>& OutVoxelData, const struct TArray<struct FVector>& VoxelArr, const float& SceneVoxelSize, const struct FVector& Center, const struct FVector& CheckSize, const struct FQuat& Rotation, const struct FVector& CheckVoxelSize, const struct FIntVector& VoxelCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "TransformToLocal_OBB");
    struct
    {
        struct TArray<uint8_t> OutVoxelData;
        struct TArray<struct FVector> VoxelArr;
        float SceneVoxelSize;
        struct FVector Center;
        struct FVector CheckSize;
        struct FQuat Rotation;
        struct FVector CheckVoxelSize;
        struct FIntVector VoxelCount;
    } Parms{};
    Parms.VoxelArr = (struct TArray<struct FVector>)VoxelArr;
    Parms.SceneVoxelSize = (float)SceneVoxelSize;
    Parms.Center = (struct FVector)Center;
    Parms.CheckSize = (struct FVector)CheckSize;
    Parms.Rotation = (struct FQuat)Rotation;
    Parms.CheckVoxelSize = (struct FVector)CheckVoxelSize;
    Parms.VoxelCount = (struct FIntVector)VoxelCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutVoxelData = Parms.OutVoxelData;
}

void UAbilityVoxelizationUtils::TransformToLocal(struct TArray<uint8_t>& OutVoxelData, const struct TArray<struct FVector>& VoxelArr, const float& SceneVoxelSize, const struct FBox& WorldBaseAABB, const struct FVector& CheckVoxelSize, const struct FIntVector& VoxelCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "TransformToLocal");
    struct
    {
        struct TArray<uint8_t> OutVoxelData;
        struct TArray<struct FVector> VoxelArr;
        float SceneVoxelSize;
        struct FBox WorldBaseAABB;
        struct FVector CheckVoxelSize;
        struct FIntVector VoxelCount;
    } Parms{};
    Parms.VoxelArr = (struct TArray<struct FVector>)VoxelArr;
    Parms.SceneVoxelSize = (float)SceneVoxelSize;
    Parms.WorldBaseAABB = (struct FBox)WorldBaseAABB;
    Parms.CheckVoxelSize = (struct FVector)CheckVoxelSize;
    Parms.VoxelCount = (struct FIntVector)VoxelCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutVoxelData = Parms.OutVoxelData;
}

struct FBox UAbilityVoxelizationUtils::RotationAABB(const struct FBox& Bound, const struct FQuat& Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "RotationAABB");
    struct
    {
        struct FBox Bound;
        struct FQuat Rotation;
        struct FBox ReturnValue;
    } Parms{};
    Parms.Bound = (struct FBox)Bound;
    Parms.Rotation = (struct FQuat)Rotation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationUtils::OBBVoxelization(struct UObject* WorldContextObject, struct TArray<uint8_t>& OutVoxelData, struct FIntVector& OutVoxelCount, const struct FBox& Bound, const struct FQuat& Rotation, const struct FVector& CheckVoxelSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "OBBVoxelization");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<uint8_t> OutVoxelData;
        struct FIntVector OutVoxelCount;
        struct FBox Bound;
        struct FQuat Rotation;
        struct FVector CheckVoxelSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Bound = (struct FBox)Bound;
    Parms.Rotation = (struct FQuat)Rotation;
    Parms.CheckVoxelSize = (struct FVector)CheckVoxelSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutVoxelData = Parms.OutVoxelData;
    OutVoxelCount = Parms.OutVoxelCount;
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationUtils::DoVoxelization(struct UObject* WorldContextObject, struct TArray<uint8_t>& OutVoxelData, struct FVector& OutOrigin, float& OutSceneVoxelSize, struct FIntVector& OutVoxelCount, struct FBox Bound, uint8_t bUseRotation, struct FQuat Rotation, struct FVector CheckVoxelSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "DoVoxelization");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<uint8_t> OutVoxelData;
        struct FVector OutOrigin;
        float OutSceneVoxelSize;
        struct FIntVector OutVoxelCount;
        struct FBox Bound;
        uint8_t bUseRotation;
        struct FQuat Rotation;
        struct FVector CheckVoxelSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Bound = (struct FBox)Bound;
    Parms.bUseRotation = (uint8_t)bUseRotation;
    Parms.Rotation = (struct FQuat)Rotation;
    Parms.CheckVoxelSize = (struct FVector)CheckVoxelSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutVoxelData = Parms.OutVoxelData;
    OutOrigin = Parms.OutOrigin;
    OutSceneVoxelSize = Parms.OutSceneVoxelSize;
    OutVoxelCount = Parms.OutVoxelCount;
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationUtils::BaseVoxelization(struct UObject* WorldContextObject, struct TArray<uint8_t>& OutVoxelData, struct FVector& OutOrigin, float& OutVoxelSize, struct FIntVector& OutVoxelCount, const struct FBox& Bound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "BaseVoxelization");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<uint8_t> OutVoxelData;
        struct FVector OutOrigin;
        float OutVoxelSize;
        struct FIntVector OutVoxelCount;
        struct FBox Bound;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Bound = (struct FBox)Bound;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutVoxelData = Parms.OutVoxelData;
    OutOrigin = Parms.OutOrigin;
    OutVoxelSize = Parms.OutVoxelSize;
    OutVoxelCount = Parms.OutVoxelCount;
    return Parms.ReturnValue;
}

void UAbilityVoxelizationUtils::BaseTransformToLocal(struct TArray<uint8_t>& OutVoxelData, const struct TArray<struct FVector>& VoxelArr, const float& SceneVoxelSize, const struct FBox& WorldBaseAABB, const struct FIntVector& VoxelCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "BaseTransformToLocal");
    struct
    {
        struct TArray<uint8_t> OutVoxelData;
        struct TArray<struct FVector> VoxelArr;
        float SceneVoxelSize;
        struct FBox WorldBaseAABB;
        struct FIntVector VoxelCount;
    } Parms{};
    Parms.VoxelArr = (struct TArray<struct FVector>)VoxelArr;
    Parms.SceneVoxelSize = (float)SceneVoxelSize;
    Parms.WorldBaseAABB = (struct FBox)WorldBaseAABB;
    Parms.VoxelCount = (struct FIntVector)VoxelCount;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutVoxelData = Parms.OutVoxelData;
}

struct FBox UAbilityVoxelizationUtils::AlignBoundToScene(const struct FBox& Bound, const float& SceneVoxelSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "AlignBoundToScene");
    struct
    {
        struct FBox Bound;
        float SceneVoxelSize;
        struct FBox ReturnValue;
    } Parms{};
    Parms.Bound = (struct FBox)Bound;
    Parms.SceneVoxelSize = (float)SceneVoxelSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAbilityVoxelizationUtils::AABBVoxelization(struct UObject* WorldContextObject, struct TArray<uint8_t>& OutVoxelData, struct FIntVector& OutVoxelCount, const struct FBox& Bound, const struct FVector& CheckVoxelSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AbilityVoxelizationUtils", "AABBVoxelization");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<uint8_t> OutVoxelData;
        struct FIntVector OutVoxelCount;
        struct FBox Bound;
        struct FVector CheckVoxelSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Bound = (struct FBox)Bound;
    Parms.CheckVoxelSize = (struct FVector)CheckVoxelSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutVoxelData = Parms.OutVoxelData;
    OutVoxelCount = Parms.OutVoxelCount;
    return Parms.ReturnValue;
}

// AAbilityVoxelizeFrozenAppearenceActor
uint8_t AAbilityVoxelizeFrozenAppearenceActor::UpdateFromVoxelData(const struct TArray<uint8_t>& InVoxelValues, const struct FIntVector& InDimensions, const struct FVector& InWorldOrigin, const struct FVector& InVoxelSize, const struct FQuat& InRotation, const struct FVector& InMinLocal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizeFrozenAppearenceActor", "UpdateFromVoxelData");
    struct
    {
        struct TArray<uint8_t> InVoxelValues;
        struct FIntVector InDimensions;
        struct FVector InWorldOrigin;
        struct FVector InVoxelSize;
        struct FQuat InRotation;
        struct FVector InMinLocal;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InVoxelValues = (struct TArray<uint8_t>)InVoxelValues;
    Parms.InDimensions = (struct FIntVector)InDimensions;
    Parms.InWorldOrigin = (struct FVector)InWorldOrigin;
    Parms.InVoxelSize = (struct FVector)InVoxelSize;
    Parms.InRotation = (struct FQuat)InRotation;
    Parms.InMinLocal = (struct FVector)InMinLocal;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAbilityVoxelizeFrozenAppearenceActor::RequestUpdateVoxelData(const struct TArray<uint8_t>& InVoxelValues)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizeFrozenAppearenceActor", "RequestUpdateVoxelData");
    struct
    {
        struct TArray<uint8_t> InVoxelValues;
    } Parms{};
    Parms.InVoxelValues = (struct TArray<uint8_t>)InVoxelValues;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityVoxelizeFrozenAppearenceActor::ReleaseRT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizeFrozenAppearenceActor", "ReleaseRT");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UTextureRenderTarget2D* AAbilityVoxelizeFrozenAppearenceActor::GetVoxelRT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizeFrozenAppearenceActor", "GetVoxelRT");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EFrozenAppearancePhase AAbilityVoxelizeFrozenAppearenceActor::GetCurrentPhase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityVoxelizeFrozenAppearenceActor", "GetCurrentPhase");
    struct
    {
        enum EFrozenAppearancePhase ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UAbilityWaterEffectComponent
void UAbilityWaterEffectComponent::OnWaterStateRep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWaterEffectComponent", "OnWaterStateRep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAbilityWaterEffectComponent::BroadcastWaterStateChanged(struct FWaterEffectBroadcastMsg Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWaterEffectComponent", "BroadcastWaterStateChanged");
    struct
    {
        struct FWaterEffectBroadcastMsg Msg;
    } Parms{};
    Parms.Msg = (struct FWaterEffectBroadcastMsg)Msg;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityWeaponThrowableBullet
void ADFMAbilityWeaponThrowableBullet::DestroyLevelActorSpawnBySelf(struct AActor* SelfActor, EAbilityLevelActorType ActorType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableBullet", "DestroyLevelActorSpawnBySelf");
    struct
    {
        struct AActor* SelfActor;
        enum EAbilityLevelActorType ActorType;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.ActorType = (enum EAbilityLevelActorType)ActorType;
    this->ProcessEvent(Func, &Parms);
}

// AAbilityWeaponBulletGrenade
void AAbilityWeaponBulletGrenade::InitBulletGrenade(struct AActor* GrenadeOwner, const struct FVector& FireStartLocation, const struct FVector& InitVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponBulletGrenade", "InitBulletGrenade");
    struct
    {
        struct AActor* GrenadeOwner;
        struct FVector FireStartLocation;
        struct FVector InitVelocity;
    } Parms{};
    Parms.GrenadeOwner = (struct AActor*)GrenadeOwner;
    Parms.FireStartLocation = (struct FVector)FireStartLocation;
    Parms.InitVelocity = (struct FVector)InitVelocity;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponBulletGrenade::BP_OnExplosion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponBulletGrenade", "BP_OnExplosion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AAbilityWeaponBulletGrenadeC4
void AAbilityWeaponBulletGrenadeC4::BP_StickyToTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponBulletGrenadeC4", "BP_StickyToTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponBulletGrenadeC4::BP_MoveIntoWater()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponBulletGrenadeC4", "BP_MoveIntoWater");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AAbilityWeaponBulletGrenadeMine
void AAbilityWeaponBulletGrenadeMine::OnRep_AbilitySuppressionMine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponBulletGrenadeMine", "OnRep_AbilitySuppressionMine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponBulletGrenadeMine::BPSetSpawnMineActor(struct ADFMAbilitySuppressionMine* MineActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponBulletGrenadeMine", "BPSetSpawnMineActor");
    struct
    {
        struct ADFMAbilitySuppressionMine* MineActor;
    } Parms{};
    Parms.MineActor = (struct ADFMAbilitySuppressionMine*)MineActor;
    this->ProcessEvent(Func, &Parms);
}

// AAbilityWeaponThrowableC204Interference
void AAbilityWeaponThrowableC204Interference::ShowDestroyEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableC204Interference", "ShowDestroyEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponThrowableC204Interference::ResetPlayHitVoice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableC204Interference", "ResetPlayHitVoice");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponThrowableC204Interference::PlayHitVoice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableC204Interference", "PlayHitVoice");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponThrowableC204Interference::OnAnimInstLoaded(struct TArray<struct FSoftObjectPath> InPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableC204Interference", "OnAnimInstLoaded");
    struct
    {
        struct TArray<struct FSoftObjectPath> InPaths;
    } Parms{};
    Parms.InPaths = (struct TArray<struct FSoftObjectPath>)InPaths;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponThrowableC204Interference::MulticastShowDestroyEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableC204Interference", "MulticastShowDestroyEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponThrowableC204Interference::DestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableC204Interference", "DestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponThrowableC204Interference::CountHitData(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableC204Interference", "CountHitData");
    struct
    {
        struct AActor* Target;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponThrowableC204Interference::BP_ProjectileExplode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableC204Interference", "BP_ProjectileExplode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityActor
void ADFMAbilityActor::RemoveElecDeviceMarker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "RemoveElecDeviceMarker");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityActor::RemoveC204PassiveMarker(struct AGPCharacter* SourceChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "RemoveC204PassiveMarker");
    struct
    {
        struct AGPCharacter* SourceChar;
    } Parms{};
    Parms.SourceChar = (struct AGPCharacter*)SourceChar;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityActor::OnSetSkinResult(uint8_t bReturnValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "OnSetSkinResult");
    struct
    {
        uint8_t bReturnValue;
    } Parms{};
    Parms.bReturnValue = (uint8_t)bReturnValue;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityActor::OnRep_OutLineItemID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "OnRep_OutLineItemID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityActor::IsUnderWater()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "IsUnderWater");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityActor::IsC204PassiveMarkerValid(struct AGPCharacter* SourceChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "IsC204PassiveMarkerValid");
    struct
    {
        struct AGPCharacter* SourceChar;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SourceChar = (struct AGPCharacter*)SourceChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityActor::InitSkinInternal(const struct FCharacterHeroResourceAttachMeshData& SkinData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "InitSkinInternal");
    struct
    {
        struct FCharacterHeroResourceAttachMeshData SkinData;
    } Parms{};
    Parms.SkinData = (struct FCharacterHeroResourceAttachMeshData)SkinData;
    this->ProcessEvent(Func, &Parms);
}

float ADFMAbilityActor::GetWaterSurfaceDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "GetWaterSurfaceDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityActor::ClientAddElecDeviceMarker(struct AGPCharacter* DetectOwner, int32_t MarkerType, float MarkerTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "ClientAddElecDeviceMarker");
    struct
    {
        struct AGPCharacter* DetectOwner;
        int32_t MarkerType;
        float MarkerTime;
    } Parms{};
    Parms.DetectOwner = (struct AGPCharacter*)DetectOwner;
    Parms.MarkerType = (int32_t)MarkerType;
    Parms.MarkerTime = (float)MarkerTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityActor::AddElecDeviceMarker(int32_t MarkerType, float MarkerTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityActor", "AddElecDeviceMarker");
    struct
    {
        int32_t MarkerType;
        float MarkerTime;
    } Parms{};
    Parms.MarkerType = (int32_t)MarkerType;
    Parms.MarkerTime = (float)MarkerTime;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityLevelActor
uint8_t ADFMAbilityLevelActor::TryStickyToThrowAttachable(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLevelActor", "TryStickyToThrowAttachable");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityLevelActor::StickyToTarget(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLevelActor", "StickyToTarget");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLevelActor::Rep_Destroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLevelActor", "Rep_Destroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AADS
void AADS::OnProjectileIntercepted(struct FVector ProjectilePos, struct AActor* BulletCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ADS", "OnProjectileIntercepted");
    struct
    {
        struct FVector ProjectilePos;
        struct AActor* BulletCreator;
    } Parms{};
    Parms.ProjectilePos = (struct FVector)ProjectilePos;
    Parms.BulletCreator = (struct AActor*)BulletCreator;
    this->ProcessEvent(Func, &Parms);
}

void AADS::OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ADS", "OnCharacterExpertIdChanged");
    struct
    {
        int32_t OldExpertId;
        int32_t CurExpertId;
    } Parms{};
    Parms.OldExpertId = (int32_t)OldExpertId;
    Parms.CurExpertId = (int32_t)CurExpertId;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AADS::HasBlockBetweenADSAndProjConsiderVehicle(struct AGPWeaponBulletBase* InBullet, struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ADS", "HasBlockBetweenADSAndProjConsiderVehicle");
    struct
    {
        struct AGPWeaponBulletBase* InBullet;
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InBullet = (struct AGPWeaponBulletBase*)InBullet;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AADS::HasBlockBetweenADSAndProj(struct AGPWeaponBulletBase* InBullet, struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ADS", "HasBlockBetweenADSAndProj");
    struct
    {
        struct AGPWeaponBulletBase* InBullet;
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InBullet = (struct AGPWeaponBulletBase*)InBullet;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AADS::DoDefenseAction(struct AGPWeaponBulletBase* InBullet, const struct FHitResult& InOverlapResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ADS", "DoDefenseAction");
    struct
    {
        struct AGPWeaponBulletBase* InBullet;
        struct FHitResult InOverlapResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InBullet = (struct AGPWeaponBulletBase*)InBullet;
    Parms.InOverlapResult = (struct FHitResult)InOverlapResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AADS::ClientResetProtectedCoolDownTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ADS", "ClientResetProtectedCoolDownTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AADS::ClientNotifyEMPEffect(float EMPTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ADS", "ClientNotifyEMPEffect");
    struct
    {
        float EMPTime;
    } Parms{};
    Parms.EMPTime = (float)EMPTime;
    this->ProcessEvent(Func, &Parms);
}

// AAIAlertRPC
struct AAIAlertRPC* AAIAlertRPC::SpawnAIAlertRPC(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIAlertRPC", "SpawnAIAlertRPC");
    struct
    {
        struct AActor* OwnerActor;
        struct AAIAlertRPC* ReturnValue;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIAlertRPC::OnRep_ConflictZoneInfoArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAlertRPC", "OnRep_ConflictZoneInfoArray");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAIAlertRPC::MulticastUpdateConflictZones(struct TArray<struct FConflictZoneInfo> InConflictZoneInfoArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAlertRPC", "MulticastUpdateConflictZones");
    struct
    {
        struct TArray<struct FConflictZoneInfo> InConflictZoneInfoArray;
    } Parms{};
    Parms.InConflictZoneInfoArray = (struct TArray<struct FConflictZoneInfo>)InConflictZoneInfoArray;
    this->ProcessEvent(Func, &Parms);
}

struct AAIAlertRPC* AAIAlertRPC::FindAIAlertRPC(struct AActor* OwnerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AIAlertRPC", "FindAIAlertRPC");
    struct
    {
        struct AActor* OwnerActor;
        struct AAIAlertRPC* ReturnValue;
    } Parms{};
    Parms.OwnerActor = (struct AActor*)OwnerActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAIAlertRPC::ClientShowTips(struct FString TipsBuffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAlertRPC", "ClientShowTips");
    struct
    {
        struct FString TipsBuffer;
    } Parms{};
    Parms.TipsBuffer = (struct FString)TipsBuffer;
    this->ProcessEvent(Func, &Parms);
}

void AAIAlertRPC::ClientPlayAlertSubtitle(struct FAIAlertSubtitleInfo SubtitleInfo, struct AActor* SpeakerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIAlertRPC", "ClientPlayAlertSubtitle");
    struct
    {
        struct FAIAlertSubtitleInfo SubtitleInfo;
        struct AActor* SpeakerActor;
    } Parms{};
    Parms.SubtitleInfo = (struct FAIAlertSubtitleInfo)SubtitleInfo;
    Parms.SpeakerActor = (struct AActor*)SpeakerActor;
    this->ProcessEvent(Func, &Parms);
}

// AArtilleryShell
void AArtilleryShell::UpdateUnderWater()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "UpdateUnderWater");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::UpdateDynamicCollisionElement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "UpdateDynamicCollisionElement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::StopShellTrailEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "StopShellTrailEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::SpawnExplosionActor(struct FVector Location, struct FRotator Rotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "SpawnExplosionActor");
    struct
    {
        struct FVector Location;
        struct FRotator Rotator;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::PlayShellTrailEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "PlayShellTrailEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::PlayScreenEffect(struct FVector Location, float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "PlayScreenEffect");
    struct
    {
        struct FVector Location;
        float Distance;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::PlayExplosionEffect(struct FVector Location, struct FRotator Rotator, int32_t HitFXIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "PlayExplosionEffect");
    struct
    {
        struct FVector Location;
        struct FRotator Rotator;
        int32_t HitFXIndex;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.HitFXIndex = (int32_t)HitFXIndex;
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::PlayCameraShake(struct FVector Location, float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "PlayCameraShake");
    struct
    {
        struct FVector Location;
        float Distance;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::OnShellHitBP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "OnShellHitBP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::OnShellHit(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "OnShellHit");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::OnRep_MovementParameter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "OnRep_MovementParameter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AArtilleryShell::NeedSpawnExplosionActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "NeedSpawnExplosionActor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AArtilleryShell::MulticastShellExploded(struct FVector Location, struct FRotator Rotator, int32_t HitFXIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "MulticastShellExploded");
    struct
    {
        struct FVector Location;
        struct FRotator Rotator;
        int32_t HitFXIndex;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.HitFXIndex = (int32_t)HitFXIndex;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AArtilleryShell::IsUnderWater(struct FVector pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "IsUnderWater");
    struct
    {
        struct FVector pos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AArtilleryShell::GetHitFXSurfaceAttributeIndexOnClient(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "GetHitFXSurfaceAttributeIndexOnClient");
    struct
    {
        struct FVector Location;
        int32_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AArtilleryShell::GetHitFXSurfaceAttributeIndex(EPhysicalSurface HitSurfaceType, uint8_t bIsHitLandscape)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "GetHitFXSurfaceAttributeIndex");
    struct
    {
        enum EPhysicalSurface HitSurfaceType;
        uint8_t bIsHitLandscape;
        int32_t ReturnValue;
    } Parms{};
    Parms.HitSurfaceType = (enum EPhysicalSurface)HitSurfaceType;
    Parms.bIsHitLandscape = (uint8_t)bIsHitLandscape;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AArtilleryShell::DestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "DestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell::ClearDynmicCollisionElement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "ClearDynmicCollisionElement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct USceneComponent* AArtilleryShell::BP_GetTrailEffectSocket()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "BP_GetTrailEffectSocket");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USceneComponent* AArtilleryShell::BP_GetShellObj()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "BP_GetShellObj");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBoxComponent* AArtilleryShell::BP_GetDynmicCollisionBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell", "BP_GetDynmicCollisionBox");
    struct
    {
        struct UBoxComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AArtilleryShell_GuidedMissle
void AArtilleryShell_GuidedMissle::StopFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "StopFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::StopAlertAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "StopAlertAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::PreloadResourceStep2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "PreloadResourceStep2");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::PreloadResourceStep1()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "PreloadResourceStep1");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::PreloadResource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "PreloadResource");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::PlayLightEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "PlayLightEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::PlayFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "PlayFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::PlayAlertAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "PlayAlertAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::DestoryLightEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "DestoryLightEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_GuidedMissle::CheckHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_GuidedMissle", "CheckHeight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AArtilleryShell_SectorArtilerrate
void AArtilleryShell_SectorArtilerrate::StopFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorArtilerrate", "StopFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_SectorArtilerrate::PreloadResource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorArtilerrate", "PreloadResource");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_SectorArtilerrate::PlayFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorArtilerrate", "PlayFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AArtilleryShell_SectorSmoke
void AArtilleryShell_SectorSmoke::UpdateFoliageBuffForCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorSmoke", "UpdateFoliageBuffForCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_SectorSmoke::StopFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorSmoke", "StopFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_SectorSmoke::PreloadResource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorSmoke", "PreloadResource");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_SectorSmoke::PlayFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorSmoke", "PlayFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_SectorSmoke::ClearAllCharacterBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorSmoke", "ClearAllCharacterBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShell_SectorSmoke::ClearActorInside()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShell_SectorSmoke", "ClearActorInside");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AArtilleryShellingTemplate
void AArtilleryShellingTemplate::SetCampId(int32_t NewCampId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShellingTemplate", "SetCampId");
    struct
    {
        int32_t NewCampId;
    } Parms{};
    Parms.NewCampId = (int32_t)NewCampId;
    this->ProcessEvent(Func, &Parms);
}

void AArtilleryShellingTemplate::ClientDebugTraceLine(struct FVector Start, struct FVector End, struct FColor Color, struct FHitResult HitResult, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShellingTemplate", "ClientDebugTraceLine");
    struct
    {
        struct FVector Start;
        struct FVector End;
        struct FColor Color;
        struct FHitResult HitResult;
        float radius;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.Color = (struct FColor)Color;
    Parms.HitResult = (struct FHitResult)HitResult;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AArtilleryShellingTemplate::ArtilleryShellingCommand(const struct FVector2D& pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShellingTemplate", "ArtilleryShellingCommand");
    struct
    {
        struct FVector2D pos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector2D)pos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UArtilleryShellProjectileMovementComponent
void UArtilleryShellProjectileMovementComponent::InitClientIgnoreActorWhenMoving()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShellProjectileMovementComponent", "InitClientIgnoreActorWhenMoving");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UArtilleryShellProjectileMovementComponent::Init(struct FVector InitVelocity, struct FArtilleryShellMovementParameter MovementParameter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ArtilleryShellProjectileMovementComponent", "Init");
    struct
    {
        struct FVector InitVelocity;
        struct FArtilleryShellMovementParameter MovementParameter;
    } Parms{};
    Parms.InitVelocity = (struct FVector)InitVelocity;
    Parms.MovementParameter = (struct FArtilleryShellMovementParameter)MovementParameter;
    this->ProcessEvent(Func, &Parms);
}

// ABionicBirdActor
void ABionicBirdActor::UpdateSprintDelay(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "UpdateSprintDelay");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::UpdateRotateInput(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "UpdateRotateInput");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::UpdateCameraInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "UpdateCameraInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::UpdateAnimation(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "UpdateAnimation");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TrySprint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TrySprint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TrySetPilotVerify(uint8_t bIsVerify)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TrySetPilotVerify");
    struct
    {
        uint8_t bIsVerify;
    } Parms{};
    Parms.bIsVerify = (uint8_t)bIsVerify;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryRemoveOnControlBuff(struct AGPCharacter* InOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryRemoveOnControlBuff");
    struct
    {
        struct AGPCharacter* InOwnerCharacter;
    } Parms{};
    Parms.InOwnerCharacter = (struct AGPCharacter*)InOwnerCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryRemoveInputTypeChangedEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryRemoveInputTypeChangedEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryMarking(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryMarking");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryLaunch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryLaunch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryHideSkillWeapon(struct AGPCharacter* GPCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryHideSkillWeapon");
    struct
    {
        struct AGPCharacter* GPCharacter;
    } Parms{};
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryHideAttachedChild(struct AActor* InChild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryHideAttachedChild");
    struct
    {
        struct AActor* InChild;
    } Parms{};
    Parms.InChild = (struct AActor*)InChild;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryHideAllAttachedChildren()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryHideAllAttachedChildren");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryCloseAttachedChildResponseToProjectileChannel(struct AActor* InChild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryCloseAttachedChildResponseToProjectileChannel");
    struct
    {
        struct AActor* InChild;
    } Parms{};
    Parms.InChild = (struct AActor*)InChild;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryCleanSprintCancelRequest(struct AGPCharacter* InOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryCleanSprintCancelRequest");
    struct
    {
        struct AGPCharacter* InOwnerCharacter;
    } Parms{};
    Parms.InOwnerCharacter = (struct AGPCharacter*)InOwnerCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryCastSpy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryCastSpy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryAddOnControlBuff(struct AGPCharacter* InOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryAddOnControlBuff");
    struct
    {
        struct AGPCharacter* InOwnerCharacter;
    } Parms{};
    Parms.InOwnerCharacter = (struct AGPCharacter*)InOwnerCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryAddKillScore(struct AActor* Killer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryAddKillScore");
    struct
    {
        struct AActor* Killer;
    } Parms{};
    Parms.Killer = (struct AActor*)Killer;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TryAddInputTypeChangedEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TryAddInputTypeChangedEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TickPilotVerify(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TickPilotVerify");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::TickCheckOwnerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "TickCheckOwnerCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::StopAllSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "StopAllSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::SpawnDestroyEffect(struct FVector Position, uint8_t bIsSprintEffect, uint8_t bIsDamageEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "SpawnDestroyEffect");
    struct
    {
        struct FVector Position;
        uint8_t bIsSprintEffect;
        uint8_t bIsDamageEffect;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.bIsSprintEffect = (uint8_t)bIsSprintEffect;
    Parms.bIsDamageEffect = (uint8_t)bIsDamageEffect;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::ShowNoEmpGrenadeTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "ShowNoEmpGrenadeTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::SetSkeletalMeshShowState(uint8_t bIsShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "SetSkeletalMeshShowState");
    struct
    {
        uint8_t bIsShow;
    } Parms{};
    Parms.bIsShow = (uint8_t)bIsShow;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::SetIsStartMarking(uint8_t bInIsStartMarking)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "SetIsStartMarking");
    struct
    {
        uint8_t bInIsStartMarking;
    } Parms{};
    Parms.bInIsStartMarking = (uint8_t)bInIsStartMarking;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::ServerTryLaunch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "ServerTryLaunch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::ServerSprintHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "ServerSprintHit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::ServerOnExitBtn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "ServerOnExitBtn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::SendProjectileThreatExplosion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "SendProjectileThreatExplosion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::SendProjectileThreatCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "SendProjectileThreatCreate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::RemoveCharacterTakeEMPEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "RemoveCharacterTakeEMPEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::RemoveCharacterTakeDamageEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "RemoveCharacterTakeDamageEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::ProcessMoveUnderWater()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "ProcessMoveUnderWater");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::PlayFlySound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "PlayFlySound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::OnStartLocalFocusCheckNightVision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "OnStartLocalFocusCheckNightVision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::OnSprintHitActor(struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "OnSprintHitActor");
    struct
    {
        struct AActor* OtherActor;
    } Parms{};
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::OnServerKnockBack(struct AGPCharacterBase* InGPCharacterBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "OnServerKnockBack");
    struct
    {
        struct AGPCharacterBase* InGPCharacterBase;
    } Parms{};
    Parms.InGPCharacterBase = (struct AGPCharacterBase*)InGPCharacterBase;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::OnRep_IsStartMarking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "OnRep_IsStartMarking");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::OnRep_HasLaunched()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "OnRep_HasLaunched");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::OnInputTypeChanged(EGPInputType InputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "OnInputTypeChanged");
    struct
    {
        enum EGPInputType InputType;
    } Parms{};
    Parms.InputType = (enum EGPInputType)InputType;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::OnArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "OnArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::MulticastSpawnDestroyEffect(struct FVector Position, uint8_t bIsSprintEffect, uint8_t bIsDamageEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "MulticastSpawnDestroyEffect");
    struct
    {
        struct FVector Position;
        uint8_t bIsSprintEffect;
        uint8_t bIsDamageEffect;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.bIsSprintEffect = (uint8_t)bIsSprintEffect;
    Parms.bIsDamageEffect = (uint8_t)bIsDamageEffect;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::MulticastPlaySprintSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "MulticastPlaySprintSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::MulticastPlayLauncherSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "MulticastPlayLauncherSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::MakeSprintDamage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "MakeSprintDamage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABionicBirdActor::IsGamepadControl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "IsGamepadControl");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABionicBirdActor::IsEnableBionicBirdDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "IsEnableBionicBirdDebug");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicBirdActor::InitMobilePlayerInput(struct AGPCharacter* InOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "InitMobilePlayerInput");
    struct
    {
        struct AGPCharacter* InOwnerCharacter;
    } Parms{};
    Parms.InOwnerCharacter = (struct AGPCharacter*)InOwnerCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::InitMobileArgs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "InitMobileArgs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::InitMarkComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "InitMarkComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::InitLockVehicleType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "InitLockVehicleType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UGPSkillComponent* ABionicBirdActor::GetSkillComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "GetSkillComponent");
    struct
    {
        struct UGPSkillComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator ABionicBirdActor::GetMoveRotator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "GetMoveRotator");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ABionicBirdActor::GetMaxVelocity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "GetMaxVelocity");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABionicBirdActor::GetIsShowSkeletalMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "GetIsShowSkeletalMesh");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABionicBirdActor::DoPilotVerify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DoPilotVerify");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABionicBirdActor::DoMoveTrainVerify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DoMoveTrainVerify");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicBirdActor::DoMarking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DoMarking");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::DoLaunch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DoLaunch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABionicBirdActor::DoHeightVerify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DoHeightVerify");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicBirdActor::DoCloseAttachedChildResponseToProjectileChannel(struct AActor* InChild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DoCloseAttachedChildResponseToProjectileChannel");
    struct
    {
        struct AActor* InChild;
    } Parms{};
    Parms.InChild = (struct AActor*)InChild;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::DataFlowAddUseCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DataFlowAddUseCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::DataFlowAddLaunchCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DataFlowAddLaunchCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::DataFlowAddDestroyedCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "DataFlowAddDestroyedCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::ClientPlayBeDestroyedVO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "ClientPlayBeDestroyedVO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::CheckSoundAlive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "CheckSoundAlive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABionicBirdActor::CheckMobileRota(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "CheckMobileRota");
    struct
    {
        float DeltaTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicBirdActor::CheckMaxEnergy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "CheckMaxEnergy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABionicBirdActor::CheckAttachedChild(struct USceneComponent* ChildComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "CheckAttachedChild");
    struct
    {
        struct USceneComponent* ChildComponent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ChildComponent = (struct USceneComponent*)ChildComponent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicBirdActor::AddCharacterTakeEMPEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "AddCharacterTakeEMPEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdActor::AddCharacterTakeDamageEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdActor", "AddCharacterTakeDamageEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UBionicBirdAnimInstance
void UBionicBirdAnimInstance::SetState(struct FVector Velocity, struct FVector MoveInput, float Pitch, float Roll)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdAnimInstance", "SetState");
    struct
    {
        struct FVector Velocity;
        struct FVector MoveInput;
        float Pitch;
        float Roll;
    } Parms{};
    Parms.Velocity = (struct FVector)Velocity;
    Parms.MoveInput = (struct FVector)MoveInput;
    Parms.Pitch = (float)Pitch;
    Parms.Roll = (float)Roll;
    this->ProcessEvent(Func, &Parms);
}

// ABionicBirdGrenade
void ABionicBirdGrenade::TrySpawnBionicBirdActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdGrenade", "TrySpawnBionicBirdActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdGrenade::TryControlBionicBirdActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdGrenade", "TryControlBionicBirdActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdGrenade::StartHover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdGrenade", "StartHover");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdGrenade::OnDeployStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdGrenade", "OnDeployStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdGrenade::OnDeployEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdGrenade", "OnDeployEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UBionicBirdGrenadeMovement
void UBionicBirdGrenadeMovement::StartHover(float StopTime, float MinHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdGrenadeMovement", "StartHover");
    struct
    {
        float StopTime;
        float MinHeight;
    } Parms{};
    Parms.StopTime = (float)StopTime;
    Parms.MinHeight = (float)MinHeight;
    this->ProcessEvent(Func, &Parms);
}

// ABionicBirdMarkingActor
void ABionicBirdMarkingActor::TryShowSceneMarking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "TryShowSceneMarking");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::TickMarkingCountDown(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "TickMarkingCountDown");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::TickMarking(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "TickMarking");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::TickFadeOut_Size()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "TickFadeOut_Size");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::TickFadeOut_Line()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "TickFadeOut_Line");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::TickFadeOut_Joint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "TickFadeOut_Joint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::TickFadeOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "TickFadeOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::SpawnJointEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "SpawnJointEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::ShowMarker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "ShowMarker");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::SetTargetLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "SetTargetLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::SetISMJointData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "SetISMJointData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::SetCurrMarkingTypeTimeByType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "SetCurrMarkingTypeTimeByType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::OnMarkingTimeEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "OnMarkingTimeEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::InitISM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "InitISM");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::HideMarker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "HideMarker");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::HideISM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "HideISM");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector ABionicBirdMarkingActor::GetMarkerLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "GetMarkerLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ABionicBirdMarkingActor::GetCameraLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "GetCameraLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicBirdMarkingActor::DrawDebug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "DrawDebug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::CopyJointInfos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "CopyJointInfos");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicBirdMarkingActor::CheckMarkingSoundCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingActor", "CheckMarkingSoundCD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UBionicBirdMarkingAnimInstance
void UBionicBirdMarkingAnimInstance::SnapshotTargetCharacterMeshPose(struct USkeletalMeshComponent* TargetCharacterMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMarkingAnimInstance", "SnapshotTargetCharacterMeshPose");
    struct
    {
        struct USkeletalMeshComponent* TargetCharacterMesh;
    } Parms{};
    Parms.TargetCharacterMesh = (struct USkeletalMeshComponent*)TargetCharacterMesh;
    this->ProcessEvent(Func, &Parms);
}

// UBionicBirdMovement
uint8_t UBionicBirdMovement::TryHitBreakablePawnActor(struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "TryHitBreakablePawnActor");
    struct
    {
        struct AActor* OtherActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBionicBirdMovement::SendAinInfoToServer(struct FVector InAnimVelocity, struct FVector InAnimInput)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "SendAinInfoToServer");
    struct
    {
        struct FVector InAnimVelocity;
        struct FVector InAnimInput;
    } Parms{};
    Parms.InAnimVelocity = (struct FVector)InAnimVelocity;
    Parms.InAnimInput = (struct FVector)InAnimInput;
    this->ProcessEvent(Func, &Parms);
}

void UBionicBirdMovement::MoveCheckPawn(struct FVector OldLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "MoveCheckPawn");
    struct
    {
        struct FVector OldLocation;
    } Parms{};
    Parms.OldLocation = (struct FVector)OldLocation;
    this->ProcessEvent(Func, &Parms);
}

void UBionicBirdMovement::IgnoreADS(struct USceneComponent* NewUpdatedComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "IgnoreADS");
    struct
    {
        struct USceneComponent* NewUpdatedComponent;
    } Parms{};
    Parms.NewUpdatedComponent = (struct USceneComponent*)NewUpdatedComponent;
    this->ProcessEvent(Func, &Parms);
}

struct FVector UBionicBirdMovement::GetInputBaseVector(int32_t InputIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "GetInputBaseVector");
    struct
    {
        int32_t InputIdx;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InputIdx = (int32_t)InputIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBionicBirdMovement::DoubleSidedCheck(struct FVector OldLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "DoubleSidedCheck");
    struct
    {
        struct FVector OldLocation;
    } Parms{};
    Parms.OldLocation = (struct FVector)OldLocation;
    this->ProcessEvent(Func, &Parms);
}

void UBionicBirdMovement::CheckMoveUnderWater(struct FVector OldLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "CheckMoveUnderWater");
    struct
    {
        struct FVector OldLocation;
    } Parms{};
    Parms.OldLocation = (struct FVector)OldLocation;
    this->ProcessEvent(Func, &Parms);
}

void UBionicBirdMovement::CalculateVelocity(float DeltaTime, const struct FVector& Input)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "CalculateVelocity");
    struct
    {
        float DeltaTime;
        struct FVector Input;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    Parms.Input = (struct FVector)Input;
    this->ProcessEvent(Func, &Parms);
}

void UBionicBirdMovement::CalculateActorMoveForward()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "CalculateActorMoveForward");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBionicBirdMovement::BlockingDecelerateVelocity(const struct FHitResult& Hit, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdMovement", "BlockingDecelerateVelocity");
    struct
    {
        struct FHitResult Hit;
        float DeltaTime;
    } Parms{};
    Parms.Hit = (struct FHitResult)Hit;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

// ABionicBirdWeapon
void ABionicBirdWeapon::CustomUpdateShadowConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicBirdWeapon", "CustomUpdateShadowConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ABionicSpyActor
void ABionicSpyActor::UpdateBuffDetectorData(uint8_t bIsAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "UpdateBuffDetectorData");
    struct
    {
        uint8_t bIsAdd;
    } Parms{};
    Parms.bIsAdd = (uint8_t)bIsAdd;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TryStopSwitchSkill(struct AGPCharacter* InOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TryStopSwitchSkill");
    struct
    {
        struct AGPCharacter* InOwnerCharacter;
    } Parms{};
    Parms.InOwnerCharacter = (struct AGPCharacter*)InOwnerCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TryStopSpyMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TryStopSpyMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TryShowItemMeshForTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TryShowItemMeshForTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TryRemoveOnControlBuff(struct AGPCharacter* InOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TryRemoveOnControlBuff");
    struct
    {
        struct AGPCharacter* InOwnerCharacter;
    } Parms{};
    Parms.InOwnerCharacter = (struct AGPCharacter*)InOwnerCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TryRemoveHiddenSpyTargetEquipment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TryRemoveHiddenSpyTargetEquipment");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TryAddOnControlBuff(struct AGPCharacter* InOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TryAddOnControlBuff");
    struct
    {
        struct AGPCharacter* InOwnerCharacter;
    } Parms{};
    Parms.InOwnerCharacter = (struct AGPCharacter*)InOwnerCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TryAddHiddenSpyTargetEquipment()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TryAddHiddenSpyTargetEquipment");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TickSwitchToSpyModeDelay(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickSwitchToSpyModeDelay");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TickStopSpyModeDelay(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickStopSpyModeDelay");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TickSpyTarget_View(float DeltaTime, struct FVector& Location, struct FRotator& Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickSpyTarget_View");
    struct
    {
        float DeltaTime;
        struct FVector Location;
        struct FRotator Rotation;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    Location = Parms.Location;
    Rotation = Parms.Rotation;
}

void ABionicSpyActor::TickSpyTarget_Item(struct FVector& Location, struct FRotator& Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickSpyTarget_Item");
    struct
    {
        struct FVector Location;
        struct FRotator Rotation;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Location = Parms.Location;
    Rotation = Parms.Rotation;
}

void ABionicSpyActor::TickSpyTarget_GrabbedView(float DeltaTime, struct FVector& Location, struct FRotator& Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickSpyTarget_GrabbedView");
    struct
    {
        float DeltaTime;
        struct FVector Location;
        struct FRotator Rotation;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    Location = Parms.Location;
    Rotation = Parms.Rotation;
}

void ABionicSpyActor::TickSpyTarget(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickSpyTarget");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TickMark(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickMark");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TickExpose(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickExpose");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::TickCheckTargetCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "TickCheckTargetCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::StopSpyTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "StopSpyTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::StopAllSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "StopAllSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::StartSpyTarget(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "StartSpyTarget");
    struct
    {
        struct AGPCharacter* Target;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SetSkillCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SetSkillCD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SetPawnShapeComponentCollision(uint8_t bIsCollision)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SetPawnShapeComponentCollision");
    struct
    {
        uint8_t bIsCollision;
    } Parms{};
    Parms.bIsCollision = (uint8_t)bIsCollision;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SetOwnerSelfSpyActor(struct ABionicSpyActor* SpyActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SetOwnerSelfSpyActor");
    struct
    {
        struct ABionicSpyActor* SpyActor;
    } Parms{};
    Parms.SpyActor = (struct ABionicSpyActor*)SpyActor;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SetIsShowItemMesh(uint8_t bIsShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SetIsShowItemMesh");
    struct
    {
        uint8_t bIsShow;
    } Parms{};
    Parms.bIsShow = (uint8_t)bIsShow;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SetCanStopControlTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SetCanStopControlTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::ServerTryStopControl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "ServerTryStopControl");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SendViewBlackFadeIn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SendViewBlackFadeIn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SendProjectileThreatExplosion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SendProjectileThreatExplosion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SendProjectileThreatCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SendProjectileThreatCreate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::SendClientSpyBreak()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "SendClientSpyBreak");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::RemoveCharacterTakeDamageEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "RemoveCharacterTakeDamageEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::PlayFlySound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "PlayFlySound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::PlayDestroySound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "PlayDestroySound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::OnTogglePortalDoor(struct AActor* PortalDoor, struct AGPCharacter* TogglePlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "OnTogglePortalDoor");
    struct
    {
        struct AActor* PortalDoor;
        struct AGPCharacter* TogglePlayer;
    } Parms{};
    Parms.PortalDoor = (struct AActor*)PortalDoor;
    Parms.TogglePlayer = (struct AGPCharacter*)TogglePlayer;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::OnTargetCharacterDead()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "OnTargetCharacterDead");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::OnStartCanExpose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "OnStartCanExpose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::OnServerKnockBack(struct AGPCharacterBase* InGPCharacterBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "OnServerKnockBack");
    struct
    {
        struct AGPCharacterBase* InGPCharacterBase;
    } Parms{};
    Parms.InGPCharacterBase = (struct AGPCharacterBase*)InGPCharacterBase;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::OnRep_TargetCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "OnRep_TargetCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::OnPassiveMoveAction(uint8_t IsActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "OnPassiveMoveAction");
    struct
    {
        uint8_t IsActive;
    } Parms{};
    Parms.IsActive = (uint8_t)IsActive;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::OnBeingAssassinate(uint8_t bCarried)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "OnBeingAssassinate");
    struct
    {
        uint8_t bCarried;
    } Parms{};
    Parms.bCarried = (uint8_t)bCarried;
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::OnArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "OnArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABionicSpyActor::IsViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "IsViewTarget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABionicSpyActor::IsTargetCharacterValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "IsTargetCharacterValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ABionicSpyActor::IsLocalPlayerSpyActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "IsLocalPlayerSpyActor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicSpyActor::InitPawnShapeComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "InitPawnShapeComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::InitMarkComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "InitMarkComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UBionicSpyHudView* ABionicSpyActor::GetView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "GetView");
    struct
    {
        struct UBionicSpyHudView* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicSpyActor::DoMark()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "DoMark");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::ClientTryStopControl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "ClientTryStopControl");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::CleanCameraData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "CleanCameraData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::CheckSoundAlive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "CheckSoundAlive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::CheckMaxEnergy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "CheckMaxEnergy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::CheckHudState(struct AGPCharacter* InOwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "CheckHudState");
    struct
    {
        struct AGPCharacter* InOwnerCharacter;
    } Parms{};
    Parms.InOwnerCharacter = (struct AGPCharacter*)InOwnerCharacter;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ABionicSpyActor::CheckCanStopControlTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "CheckCanStopControlTime");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABionicSpyActor::CheckAutoStopSpyMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "CheckAutoStopSpyMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::AutoSetPawnShapeCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "AutoSetPawnShapeCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABionicSpyActor::AddCharacterTakeDamageEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyActor", "AddCharacterTakeDamageEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UBionicSpyCueHandler
void UBionicSpyCueHandler::StopTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyCueHandler", "StopTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBionicSpyCueHandler::StopStartSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyCueHandler", "StopStartSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBionicSpyCueHandler::StartTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyCueHandler", "StartTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBionicSpyCueHandler::PlayStartSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyCueHandler", "PlayStartSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UBionicSpyCueHandler::IsFPP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyCueHandler", "IsFPP");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBionicSpyCueHandler::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyCueHandler", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBionicSpyCueHandler::DoTimerTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BionicSpyCueHandler", "DoTimerTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ABowArrowMesh
void ABowArrowMesh::SetArrowType(uint8_t IsProxSensorArrow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BowArrowMesh", "SetArrowType");
    struct
    {
        uint8_t IsProxSensorArrow;
    } Parms{};
    Parms.IsProxSensorArrow = (uint8_t)IsProxSensorArrow;
    this->ProcessEvent(Func, &Parms);
}

void ABowArrowMesh::SetArrowEffect(uint8_t bActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BowArrowMesh", "SetArrowEffect");
    struct
    {
        uint8_t bActive;
    } Parms{};
    Parms.bActive = (uint8_t)bActive;
    this->ProcessEvent(Func, &Parms);
}

void ABowArrowMesh::OnChargeStateChange(uint8_t ischarging)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BowArrowMesh", "OnChargeStateChange");
    struct
    {
        uint8_t ischarging;
    } Parms{};
    Parms.ischarging = (uint8_t)ischarging;
    this->ProcessEvent(Func, &Parms);
}

void ABowArrowMesh::BP_SetFXRenderMatrixMode(struct UFXResourceContainerComponent* FXResource, ERenderMatrixMode MatrixMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BowArrowMesh", "BP_SetFXRenderMatrixMode");
    struct
    {
        struct UFXResourceContainerComponent* FXResource;
        enum ERenderMatrixMode MatrixMode;
    } Parms{};
    Parms.FXResource = (struct UFXResourceContainerComponent*)FXResource;
    Parms.MatrixMode = (enum ERenderMatrixMode)MatrixMode;
    this->ProcessEvent(Func, &Parms);
}

void ABowArrowMesh::BP_OnChargeStateChange(uint8_t ischarging)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BowArrowMesh", "BP_OnChargeStateChange");
    struct
    {
        uint8_t ischarging;
    } Parms{};
    Parms.ischarging = (uint8_t)ischarging;
    this->ProcessEvent(Func, &Parms);
}

// UC203MarkComponent
uint8_t UC203MarkComponent::TryMarkTarget(struct AGPCharacter* Target, struct FVector CameraForward)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "TryMarkTarget");
    struct
    {
        struct AGPCharacter* Target;
        struct FVector CameraForward;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    Parms.CameraForward = (struct FVector)CameraForward;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::TryMarkLockCountDown(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "TryMarkLockCountDown");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UC203MarkComponent::TryBreakMarkLockCountDown(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "TryBreakMarkLockCountDown");
    struct
    {
        struct AGPCharacter* Target;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UC203MarkComponent::ServerDoMarkTarget_C203(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "ServerDoMarkTarget_C203");
    struct
    {
        struct AGPCharacter* Target;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UC203MarkComponent::SaveMarkTargetCD(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "SaveMarkTargetCD");
    struct
    {
        struct AGPCharacter* Target;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UC203MarkComponent::RealDoMarkTarget_C203(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "RealDoMarkTarget_C203");
    struct
    {
        struct AGPCharacter* Target;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UC203MarkComponent::IsIsBionicSpy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "IsIsBionicSpy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::IsBionicBird()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "IsBionicBird");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UC203MarkComponent::InitGameRoleData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "InitGameRoleData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UC203MarkComponent::InitBLockTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "InitBLockTest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UC203MarkComponent::Init(struct ADFMCharacter* InAbilityOwner, struct ADFMCharacter* InSpyTarget, int32_t InSkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "Init");
    struct
    {
        struct ADFMCharacter* InAbilityOwner;
        struct ADFMCharacter* InSpyTarget;
        int32_t InSkillId;
    } Parms{};
    Parms.InAbilityOwner = (struct ADFMCharacter*)InAbilityOwner;
    Parms.InSpyTarget = (struct ADFMCharacter*)InSpyTarget;
    Parms.InSkillId = (int32_t)InSkillId;
    this->ProcessEvent(Func, &Parms);
}

float UC203MarkComponent::GetCheckCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "GetCheckCD");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UC203MarkComponent::GetBaseLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "GetBaseLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UC203MarkComponent::DoMarkTarget_C203(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "DoMarkTarget_C203");
    struct
    {
        struct AGPCharacter* Target;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UC203MarkComponent::DoMarkTarget_Base(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "DoMarkTarget_Base");
    struct
    {
        struct AGPCharacter* Target;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UC203MarkComponent::DoBlockTest(struct AGPCharacter* Target, struct FVector StartPoint, struct FVector EndPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "DoBlockTest");
    struct
    {
        struct AGPCharacter* Target;
        struct FVector StartPoint;
        struct FVector EndPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::CheckTargetSilenceZone(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "CheckTargetSilenceZone");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::CheckTargetRenderTime(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "CheckTargetRenderTime");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::CheckSmoke(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "CheckSmoke");
    struct
    {
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::CheckMarkTargetCD(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "CheckMarkTargetCD");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::CheckMarkTarget(struct AGPCharacter* Target, struct FVector CameraForward)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "CheckMarkTarget");
    struct
    {
        struct AGPCharacter* Target;
        struct FVector CameraForward;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    Parms.CameraForward = (struct FVector)CameraForward;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::CheckMarkBLock(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "CheckMarkBLock");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::CheckIsSpyViewTarget(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "CheckIsSpyViewTarget");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC203MarkComponent::CheckExitState(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C203MarkComponent", "CheckExitState");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UC204InterferenceAnimInstance
void UC204InterferenceAnimInstance::SetInfo(uint8_t bPreFire, uint8_t bExplode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C204InterferenceAnimInstance", "SetInfo");
    struct
    {
        uint8_t bPreFire;
        uint8_t bExplode;
    } Parms{};
    Parms.bPreFire = (uint8_t)bPreFire;
    Parms.bExplode = (uint8_t)bExplode;
    this->ProcessEvent(Func, &Parms);
}

// UC501CallAIFightTargetComponent
void UC501CallAIFightTargetComponent::RemoveCandidate(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "RemoveCandidate");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UC501CallAIFightTargetComponent::RemoveBroadcastedFightTarget(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "RemoveBroadcastedFightTarget");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UC501CallAIFightTargetComponent::IsBroadcastedFightTarget(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "IsBroadcastedFightTarget");
    struct
    {
        struct ADFMCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UC501CallAIFightTargetComponent::HasValidFightTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "HasValidFightTarget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMCharacter* UC501CallAIFightTargetComponent::GetCurrentFightTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "GetCurrentFightTarget");
    struct
    {
        struct ADFMCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FC501FightTargetCandidate> UC501CallAIFightTargetComponent::GetCandidateList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "GetCandidateList");
    struct
    {
        struct TArray<struct FC501FightTargetCandidate> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UC501CallAIFightTargetComponent::GetCandidateCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "GetCandidateCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UC501CallAIFightTargetComponent::GetBroadcastedFightTargetCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "GetBroadcastedFightTargetCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UC501CallAIFightTargetComponent::ForceReevaluateTargets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "ForceReevaluateTargets");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UC501CallAIFightTargetComponent::ClearCandidates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "ClearCandidates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UC501CallAIFightTargetComponent::ClearBroadcastedFightTargets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "ClearBroadcastedFightTargets");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UC501CallAIFightTargetComponent::AddCandidate(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "AddCandidate");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UC501CallAIFightTargetComponent::AddBroadcastedFightTarget(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("C501CallAIFightTargetComponent", "AddBroadcastedFightTarget");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

// ACallAIAbility
void ACallAIAbility::ServerCommandAI(struct FVector TargetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "ServerCommandAI");
    struct
    {
        struct FVector TargetLocation;
    } Parms{};
    Parms.TargetLocation = (struct FVector)TargetLocation;
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnTakeDamage(const struct FDamageResultInfo& DamageResult, ECharacterPart& HitPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnTakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResult;
        enum ECharacterPart HitPart;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
    HitPart = Parms.HitPart;
}

void ACallAIAbility::OnSummonerAssistKill(const struct FKillInfo& KillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnSummonerAssistKill");
    struct
    {
        struct FKillInfo KillInfo;
    } Parms{};
    Parms.KillInfo = (struct FKillInfo)KillInfo;
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnSummonedAIMakeDamage(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnSummonedAIMakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnSummonedAIDied(struct AGPCharacterBase* DiedCharacter, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnSummonedAIDied");
    struct
    {
        struct AGPCharacterBase* DiedCharacter;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.DiedCharacter = (struct AGPCharacterBase*)DiedCharacter;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnRep_Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnRep_Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnRep_CurrentStatusInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnRep_CurrentStatusInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnRep_CallAICharacters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnRep_CallAICharacters");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnPlayerMakeDamage(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnPlayerMakeDamage");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnNetReconnectSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnNetReconnectSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnCallAIStatusUpdated__DelegateSignature(const struct FCallAIStatusInfo& StatusInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnCallAIStatusUpdated__DelegateSignature");
    struct
    {
        struct FCallAIStatusInfo StatusInfo;
    } Parms{};
    Parms.StatusInfo = (struct FCallAIStatusInfo)StatusInfo;
    this->ProcessEvent(Func, &Parms);
}

void ACallAIAbility::OnCallAIStatusChanged_Handler(const struct FCallAIStatusInfo& StatusInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "OnCallAIStatusChanged_Handler");
    struct
    {
        struct FCallAIStatusInfo StatusInfo;
    } Parms{};
    Parms.StatusInfo = (struct FCallAIStatusInfo)StatusInfo;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ACallAIAbility::IsCombatStylePrudent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "IsCombatStylePrudent");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ACallAIAbility::IsCombatStyleAssault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "IsCombatStyleAssault");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ECallAICombatStyle ACallAIAbility::GetCurrentCombatStyle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "GetCurrentCombatStyle");
    struct
    {
        enum ECallAICombatStyle ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FCallAIStatusInfo ACallAIAbility::GetCallAIStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "GetCallAIStatus");
    struct
    {
        struct FCallAIStatusInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ACallAIAbility::ClientShowTips(struct FString TipsBuffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIAbility", "ClientShowTips");
    struct
    {
        struct FString TipsBuffer;
    } Parms{};
    Parms.TipsBuffer = (struct FString)TipsBuffer;
    this->ProcessEvent(Func, &Parms);
}

// UCallAIInfoPanelControllerHelper
void UCallAIInfoPanelControllerHelper::OnCallAIStatusUpdated(const struct FCallAIStatusInfo& StatusInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelControllerHelper", "OnCallAIStatusUpdated");
    struct
    {
        struct FCallAIStatusInfo StatusInfo;
    } Parms{};
    Parms.StatusInfo = (struct FCallAIStatusInfo)StatusInfo;
    this->ProcessEvent(Func, &Parms);
}

// UCallAIInfoPanelHudView
void UCallAIInfoPanelHudView::UpdateAIStatus(const struct FCallAIStatusInfo& StatusInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelHudView", "UpdateAIStatus");
    struct
    {
        struct FCallAIStatusInfo StatusInfo;
    } Parms{};
    Parms.StatusInfo = (struct FCallAIStatusInfo)StatusInfo;
    this->ProcessEvent(Func, &Parms);
}

void UCallAIInfoPanelHudView::BP_SetType(int32_t CombatStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelHudView", "BP_SetType");
    struct
    {
        int32_t CombatStyle;
    } Parms{};
    Parms.CombatStyle = (int32_t)CombatStyle;
    this->ProcessEvent(Func, &Parms);
}

void UCallAIInfoPanelHudView::BP_SetPercent(float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelHudView", "BP_SetPercent");
    struct
    {
        float Percent;
    } Parms{};
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
}

void UCallAIInfoPanelHudView::BP_SetAINumb(int32_t RifleCount, int32_t MGCount, int32_t ShieldCount, int32_t FirebatCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelHudView", "BP_SetAINumb");
    struct
    {
        int32_t RifleCount;
        int32_t MGCount;
        int32_t ShieldCount;
        int32_t FirebatCount;
    } Parms{};
    Parms.RifleCount = (int32_t)RifleCount;
    Parms.MGCount = (int32_t)MGCount;
    Parms.ShieldCount = (int32_t)ShieldCount;
    Parms.FirebatCount = (int32_t)FirebatCount;
    this->ProcessEvent(Func, &Parms);
}

// UCallAIInfoPanelUIView
void UCallAIInfoPanelUIView::UpdateAIStatus(const struct FCallAIStatusInfo& StatusInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelUIView", "UpdateAIStatus");
    struct
    {
        struct FCallAIStatusInfo StatusInfo;
    } Parms{};
    Parms.StatusInfo = (struct FCallAIStatusInfo)StatusInfo;
    this->ProcessEvent(Func, &Parms);
}

void UCallAIInfoPanelUIView::BP_SetType(int32_t CombatStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelUIView", "BP_SetType");
    struct
    {
        int32_t CombatStyle;
    } Parms{};
    Parms.CombatStyle = (int32_t)CombatStyle;
    this->ProcessEvent(Func, &Parms);
}

void UCallAIInfoPanelUIView::BP_SetPercent(float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelUIView", "BP_SetPercent");
    struct
    {
        float Percent;
    } Parms{};
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
}

void UCallAIInfoPanelUIView::BP_SetAINumb(int32_t RifleCount, int32_t MGCount, int32_t ShieldCount, int32_t FirebatCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallAIInfoPanelUIView", "BP_SetAINumb");
    struct
    {
        int32_t RifleCount;
        int32_t MGCount;
        int32_t ShieldCount;
        int32_t FirebatCount;
    } Parms{};
    Parms.RifleCount = (int32_t)RifleCount;
    Parms.MGCount = (int32_t)MGCount;
    Parms.ShieldCount = (int32_t)ShieldCount;
    Parms.FirebatCount = (int32_t)FirebatCount;
    this->ProcessEvent(Func, &Parms);
}

// UCallDogFightTargetComponent
void UCallDogFightTargetComponent::RemoveCandidate(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "RemoveCandidate");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UCallDogFightTargetComponent::RemoveBroadcastedFightTarget(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "RemoveBroadcastedFightTarget");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UCallDogFightTargetComponent::IsBroadcastedFightTarget(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "IsBroadcastedFightTarget");
    struct
    {
        struct ADFMCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCallDogFightTargetComponent::HasValidFightTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "HasValidFightTarget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMCharacter* UCallDogFightTargetComponent::GetCurrentFightTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "GetCurrentFightTarget");
    struct
    {
        struct ADFMCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FCallDogFightTargetCandidate> UCallDogFightTargetComponent::GetCandidateList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "GetCandidateList");
    struct
    {
        struct TArray<struct FCallDogFightTargetCandidate> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UCallDogFightTargetComponent::GetCandidateCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "GetCandidateCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UCallDogFightTargetComponent::GetBroadcastedFightTargetCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "GetBroadcastedFightTargetCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCallDogFightTargetComponent::ForceReevaluateTargets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "ForceReevaluateTargets");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCallDogFightTargetComponent::ClearCandidates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "ClearCandidates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCallDogFightTargetComponent::ClearBroadcastedFightTargets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "ClearBroadcastedFightTargets");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCallDogFightTargetComponent::AddCandidate(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "AddCandidate");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UCallDogFightTargetComponent::AddBroadcastedFightTarget(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CallDogFightTargetComponent", "AddBroadcastedFightTarget");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

// UChainHookAnimComponent
void UChainHookAnimComponent::UpdateWeaponAnimInstanceParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookAnimComponent", "UpdateWeaponAnimInstanceParams");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookAnimComponent::ResetWeaponAnimInstanceParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookAnimComponent", "ResetWeaponAnimInstanceParams");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChainHookAnimComponent::IsNeedShowHook(EGPWeaponInnerEvent InWeaponEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookAnimComponent", "IsNeedShowHook");
    struct
    {
        enum EGPWeaponInnerEvent InWeaponEvent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InWeaponEvent = (enum EGPWeaponInnerEvent)InWeaponEvent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookAnimComponent::GetIsShowHook()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookAnimComponent", "GetIsShowHook");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UChainHookComponent
void UChainHookComponent::UpdateClientHookItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "UpdateClientHookItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::UpdateCarryView(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "UpdateCarryView");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChainHookComponent::UpdateBend_Multi(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "UpdateBend_Multi");
    struct
    {
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::UnloadClientHookItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "UnloadClientHookItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TrySpawnHitBoxActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TrySpawnHitBoxActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TrySetSkin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TrySetSkin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TryResetKeyPoint(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryResetKeyPoint");
    struct
    {
        struct FVector Start;
        struct FVector End;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TryMoveKeyPoint(int32_t Idx, struct TArray<struct FChainHookRopePoint>& KeyPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryMoveKeyPoint");
    struct
    {
        int32_t Idx;
        struct TArray<struct FChainHookRopePoint> KeyPoints;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    this->ProcessEvent(Func, &Parms);
    KeyPoints = Parms.KeyPoints;
}

void UChainHookComponent::TryMergeKeyPoint(uint8_t bIsStart, struct TArray<struct FChainHookRopePoint>& KeyPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryMergeKeyPoint");
    struct
    {
        uint8_t bIsStart;
        struct TArray<struct FChainHookRopePoint> KeyPoints;
    } Parms{};
    Parms.bIsStart = (uint8_t)bIsStart;
    this->ProcessEvent(Func, &Parms);
    KeyPoints = Parms.KeyPoints;
}

void UChainHookComponent::TryLoadClientHookItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryLoadClientHookItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TryInitHookWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryInitHookWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TryInitBend()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryInitBend");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TryFix3PMoveForward()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryFix3PMoveForward");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TryDrawDebugMultiInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryDrawDebugMultiInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TryDoRobotAIBreakAddDamage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryDoRobotAIBreakAddDamage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TryDestroyHitBoxActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryDestroyHitBoxActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector UChainHookComponent::TryClientFitBend(const struct FVector& Start, const struct FVector& End, struct FVector AddPoint, struct FVector Forward)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryClientFitBend");
    struct
    {
        struct FVector Start;
        struct FVector End;
        struct FVector AddPoint;
        struct FVector Forward;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.AddPoint = (struct FVector)AddPoint;
    Parms.Forward = (struct FVector)Forward;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::TryCarryTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryCarryTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChainHookComponent::TryBreakChainHook(struct AActor* HitActor, uint8_t bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryBreakChainHook");
    struct
    {
        struct AActor* HitActor;
        uint8_t bForce;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HitActor = (struct AActor*)HitActor;
    Parms.bForce = (uint8_t)bForce;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::TryBreak()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TryBreak");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TimingSkillDataFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TimingSkillDataFlow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TickPullBack(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TickPullBack");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TickMoveForward()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TickMoveForward");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TickHookTakerLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TickHookTakerLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TickHitTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TickHitTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TickHitBoxActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TickHitBoxActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::TickEnd(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TickEnd");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChainHookComponent::TickChain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TickChain");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::TickBackToSocket(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "TickBackToSocket");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SyncHitTargetInfo(uint8_t bIsHit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SyncHitTargetInfo");
    struct
    {
        uint8_t bIsHit;
    } Parms{};
    Parms.bIsHit = (uint8_t)bIsHit;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SyncChainHookInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SyncChainHookInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::StopExitTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "StopExitTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::StopAllSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "StopAllSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::StartExitTimer(float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "StartExitTimer");
    struct
    {
        float DelayTime;
    } Parms{};
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SkillComRepChainHookInfo(EChainHookState State, struct AActor* HitActor, struct FVector HitOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SkillComRepChainHookInfo");
    struct
    {
        enum EChainHookState State;
        struct AActor* HitActor;
        struct FVector HitOffset;
    } Parms{};
    Parms.State = (enum EChainHookState)State;
    Parms.HitActor = (struct AActor*)HitActor;
    Parms.HitOffset = (struct FVector)HitOffset;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SetState(EChainHookState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SetState");
    struct
    {
        enum EChainHookState State;
    } Parms{};
    Parms.State = (enum EChainHookState)State;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SetHookAimingHudState(uint8_t bIsShowAim, uint8_t bIsShowTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SetHookAimingHudState");
    struct
    {
        uint8_t bIsShowAim;
        uint8_t bIsShowTarget;
    } Parms{};
    Parms.bIsShowAim = (uint8_t)bIsShowAim;
    Parms.bIsShowTarget = (uint8_t)bIsShowTarget;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SetHitSkillTipsState(uint8_t bIsShowTips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SetHitSkillTipsState");
    struct
    {
        uint8_t bIsShowTips;
    } Parms{};
    Parms.bIsShowTips = (uint8_t)bIsShowTips;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SetHitBoxActorCanHit(uint8_t bIsCanHit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SetHitBoxActorCanHit");
    struct
    {
        uint8_t bIsCanHit;
    } Parms{};
    Parms.bIsCanHit = (uint8_t)bIsCanHit;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SetForceUpdateItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SetForceUpdateItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SetCancleBtnState(uint8_t bIsShowCancleBtn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SetCancleBtnState");
    struct
    {
        uint8_t bIsShowCancleBtn;
    } Parms{};
    Parms.bIsShowCancleBtn = (uint8_t)bIsShowCancleBtn;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::SendServerHitInvalidTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "SendServerHitInvalidTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::ResetHitBoxHP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "ResetHitBoxHP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::RemovePullBackDelayHookedBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "RemovePullBackDelayHookedBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::RemovePullBackDelayBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "RemovePullBackDelayBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::RefreshKeyInfo(int32_t Idx, struct TArray<struct FChainHookRopePoint>& KeyPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "RefreshKeyInfo");
    struct
    {
        int32_t Idx;
        struct TArray<struct FChainHookRopePoint> KeyPoints;
    } Parms{};
    Parms.Idx = (int32_t)Idx;
    this->ProcessEvent(Func, &Parms);
    KeyPoints = Parms.KeyPoints;
}

void UChainHookComponent::PlaySetStateSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "PlaySetStateSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::PlayItemBreakSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "PlayItemBreakSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::PlayBreakSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "PlayBreakSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnServerHitInvalidTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnServerHitInvalidTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnRepHitBoxActor(struct AChainHookHitBoxActor* BoxActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnRepHitBoxActor");
    struct
    {
        struct AChainHookHitBoxActor* BoxActor;
    } Parms{};
    Parms.BoxActor = (struct AChainHookHitBoxActor*)BoxActor;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnPullBackEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnPullBackEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnHookUnregister(struct AChainHookGrenade* Grenade)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnHookUnregister");
    struct
    {
        struct AChainHookGrenade* Grenade;
    } Parms{};
    Parms.Grenade = (struct AChainHookGrenade*)Grenade;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnHookGrenadeRegister(struct AChainHookGrenade* Grenade)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnHookGrenadeRegister");
    struct
    {
        struct AChainHookGrenade* Grenade;
    } Parms{};
    Parms.Grenade = (struct AChainHookGrenade*)Grenade;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnHitTarget(struct TScriptInterface<IChainHookTakerInterface> InHookTaker, struct FVector HitLocation, struct FVector ProjectileStickyOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnHitTarget");
    struct
    {
        struct TScriptInterface<IChainHookTakerInterface> InHookTaker;
        struct FVector HitLocation;
        struct FVector ProjectileStickyOffset;
    } Parms{};
    Parms.InHookTaker = (struct TScriptInterface<IChainHookTakerInterface>)InHookTaker;
    Parms.HitLocation = (struct FVector)HitLocation;
    Parms.ProjectileStickyOffset = (struct FVector)ProjectileStickyOffset;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnHitOthers(struct FVector HitLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnHitOthers");
    struct
    {
        struct FVector HitLocation;
    } Parms{};
    Parms.HitLocation = (struct FVector)HitLocation;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnHitNone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnHitNone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnHitInvalidTarget(uint8_t bIsHitNone)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnHitInvalidTarget");
    struct
    {
        uint8_t bIsHitNone;
    } Parms{};
    Parms.bIsHitNone = (uint8_t)bIsHitNone;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnHitAndDestroyed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnHitAndDestroyed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnHitAddBendIgnoredActor(struct AActor* HitActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnHitAddBendIgnoredActor");
    struct
    {
        struct AActor* HitActor;
    } Parms{};
    Parms.HitActor = (struct AActor*)HitActor;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnClientHookItemLoaded(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnClientHookItemLoaded");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnBreak(uint8_t bIsAddCount, uint8_t bCheckEndSimple)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnBreak");
    struct
    {
        uint8_t bIsAddCount;
        uint8_t bCheckEndSimple;
    } Parms{};
    Parms.bIsAddCount = (uint8_t)bIsAddCount;
    Parms.bCheckEndSimple = (uint8_t)bCheckEndSimple;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::OnBackToSocketEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "OnBackToSocketEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::MultiCheckKeyPoint(uint8_t bIsStart, struct FVector TargetLoc, struct TArray<struct FChainHookRopePoint>& KeyPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "MultiCheckKeyPoint");
    struct
    {
        uint8_t bIsStart;
        struct FVector TargetLoc;
        struct TArray<struct FChainHookRopePoint> KeyPoints;
    } Parms{};
    Parms.bIsStart = (uint8_t)bIsStart;
    Parms.TargetLoc = (struct FVector)TargetLoc;
    this->ProcessEvent(Func, &Parms);
    KeyPoints = Parms.KeyPoints;
}

uint8_t UChainHookComponent::IsDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "IsDS");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::IsDirectConnection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "IsDirectConnection");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::IsClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "IsClient");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::IsCanHitTarget(struct TScriptInterface<IChainHookTakerInterface> InHookTaker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "IsCanHitTarget");
    struct
    {
        struct TScriptInterface<IChainHookTakerInterface> InHookTaker;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InHookTaker = (struct TScriptInterface<IChainHookTakerInterface>)InHookTaker;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::InitGameRoleData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "InitGameRoleData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::HideClientHookItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "HideClientHookItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector UChainHookComponent::GetWeaponSocketLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetWeaponSocketLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UChainHookComponent::GetPullBackEndPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetPullBackEndPoint");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UChainHookComponent::GetPullBackEndLocation(struct FVector PullBackTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetPullBackEndLocation");
    struct
    {
        struct FVector PullBackTarget;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PullBackTarget = (struct FVector)PullBackTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::GetIsCutOff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetIsCutOff");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UChainHookComponent::GetHookTakerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetHookTakerActor");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EChainHookState UChainHookComponent::GetCurrState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetCurrState");
    struct
    {
        enum EChainHookState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UChainHookComponent::GetCheckStartPoint(EChainHookCheckStartType StartType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetCheckStartPoint");
    struct
    {
        enum EChainHookCheckStartType StartType;
        struct FVector ReturnValue;
    } Parms{};
    Parms.StartType = (enum EChainHookCheckStartType)StartType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UChainHookComponent::GetCheckEndPoint(EChainHookCheckEndType EndType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetCheckEndPoint");
    struct
    {
        enum EChainHookCheckEndType EndType;
        struct FVector ReturnValue;
    } Parms{};
    Parms.EndType = (enum EChainHookCheckEndType)EndType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UChainHookComponent::GetCameraLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "GetCameraLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::ForbidCharacterAbility(uint8_t bIsForbid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "ForbidCharacterAbility");
    struct
    {
        uint8_t bIsForbid;
    } Parms{};
    Parms.bIsForbid = (uint8_t)bIsForbid;
    this->ProcessEvent(Func, &Parms);
}

int32_t UChainHookComponent::FindGameRoleDataIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "FindGameRoleDataIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::DSCheckChain_Multi()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DSCheckChain_Multi");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::DrawDebugSegment(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DrawDebugSegment");
    struct
    {
        struct FVector Start;
        struct FVector End;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::DrawDebugInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DrawDebugInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::DoMultiCheckKeyPoint(uint8_t bIsStart, struct FVector TargetLoc, struct TArray<struct FChainHookRopePoint>& KeyPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DoMultiCheckKeyPoint");
    struct
    {
        uint8_t bIsStart;
        struct FVector TargetLoc;
        struct TArray<struct FChainHookRopePoint> KeyPoints;
    } Parms{};
    Parms.bIsStart = (uint8_t)bIsStart;
    Parms.TargetLoc = (struct FVector)TargetLoc;
    this->ProcessEvent(Func, &Parms);
    KeyPoints = Parms.KeyPoints;
}

void UChainHookComponent::DoExit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DoExit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChainHookComponent::DoBendSweep(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DoBendSweep");
    struct
    {
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

void UChainHookComponent::DoAddKeyPoint(uint8_t bIsStart, struct FVector TargetLoc, struct TArray<struct FChainHookRopePoint>& KeyPoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DoAddKeyPoint");
    struct
    {
        uint8_t bIsStart;
        struct FVector TargetLoc;
        struct TArray<struct FChainHookRopePoint> KeyPoints;
    } Parms{};
    Parms.bIsStart = (uint8_t)bIsStart;
    Parms.TargetLoc = (struct FVector)TargetLoc;
    this->ProcessEvent(Func, &Parms);
    KeyPoints = Parms.KeyPoints;
}

void UChainHookComponent::DataFlowAddThrowNumber()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DataFlowAddThrowNumber");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::DataFlowAddHitInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "DataFlowAddHitInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector UChainHookComponent::CountPullBackEndLocation(float StopDistance, struct FVector Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CountPullBackEndLocation");
    struct
    {
        float StopDistance;
        struct FVector Target;
        struct FVector ReturnValue;
    } Parms{};
    Parms.StopDistance = (float)StopDistance;
    Parms.Target = (struct FVector)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::CountGrenadeStartOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CountGrenadeStartOffset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::ClientShowHitAndDestroyed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "ClientShowHitAndDestroyed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChainHookComponent::ClientCheckChain_Multi()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "ClientCheckChain_Multi");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::CleanLoadClientHookItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CleanLoadClientHookItem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::CleanHitInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CleanHitInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::CleanBend()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CleanBend");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChainHookComponent::CheckSkillComRepState(EChainHookState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckSkillComRepState");
    struct
    {
        enum EChainHookState State;
        uint8_t ReturnValue;
    } Parms{};
    Parms.State = (enum EChainHookState)State;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::CheckPullBackDistance(struct FVector Distance, float XYSize, float ZSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckPullBackDistance");
    struct
    {
        struct FVector Distance;
        float XYSize;
        float ZSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Distance = (struct FVector)Distance;
    Parms.XYSize = (float)XYSize;
    Parms.ZSize = (float)ZSize;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::CheckIsUseLowItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckIsUseLowItem");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::CheckIsPullBackEndSimple()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckIsPullBackEndSimple");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::CheckIsPullBackEnd(struct FVector PullBackTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckIsPullBackEnd");
    struct
    {
        struct FVector PullBackTarget;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PullBackTarget = (struct FVector)PullBackTarget;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::CheckIsLocalHookTakerActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckIsLocalHookTakerActor");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UChainHookComponent::CheckIsHookTakerUsingSceneWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckIsHookTakerUsingSceneWeapon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::CheckHookTakerOffset(const struct FVector& ProjectileStickyOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckHookTakerOffset");
    struct
    {
        struct FVector ProjectileStickyOffset;
    } Parms{};
    Parms.ProjectileStickyOffset = (struct FVector)ProjectileStickyOffset;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::CheckEnableClientHookItemShowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckEnableClientHookItemShowState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::CheckCVarWeaponHookVal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckCVarWeaponHookVal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::CheckClientHookItemShowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CheckClientHookItemShowState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UChainHookComponent::CarryTargetCheckDistance(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CarryTargetCheckDistance");
    struct
    {
        struct AActor* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UChainHookComponent::CancelFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "CancelFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::AddPullBackDelayHookedBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "AddPullBackDelayHookedBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::AddPullBackDelayBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "AddPullBackDelayBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::AddIgnoredWeapon(struct AGPCharacter* GPCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "AddIgnoredWeapon");
    struct
    {
        struct AGPCharacter* GPCharacter;
    } Parms{};
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookComponent::AddHookBrokenCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookComponent", "AddHookBrokenCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AChainHookGrenade
void AChainHookGrenade::UnregisterToHookComponent_3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "UnregisterToHookComponent_3P");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::UnregisterToHookComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "UnregisterToHookComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector AChainHookGrenade::TryStickyHookToCharacter(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "TryStickyHookToCharacter");
    struct
    {
        struct FHitResult ImpactResult;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AChainHookGrenade::TryCheckHitCharAddTrace(struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "TryCheckHitCharAddTrace");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ImpactResult = Parms.ImpactResult;
    return Parms.ReturnValue;
}

void AChainHookGrenade::RegisterToHookComponent_3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "RegisterToHookComponent_3P");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::RegisterToHookComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "RegisterToHookComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::PlayHitSound(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "PlayHitSound");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::PlayHitEffect(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "PlayHitEffect");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::OnHitOthers(struct FVector HitLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "OnHitOthers");
    struct
    {
        struct FVector HitLocation;
    } Parms{};
    Parms.HitLocation = (struct FVector)HitLocation;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::OnHitNone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "OnHitNone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::OnHitHookTaker(struct TScriptInterface<IChainHookTakerInterface> HookTaker, struct FVector HitLocation, struct FVector ProjectileStickyOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "OnHitHookTaker");
    struct
    {
        struct TScriptInterface<IChainHookTakerInterface> HookTaker;
        struct FVector HitLocation;
        struct FVector ProjectileStickyOffset;
    } Parms{};
    Parms.HookTaker = (struct TScriptInterface<IChainHookTakerInterface>)HookTaker;
    Parms.HitLocation = (struct FVector)HitLocation;
    Parms.ProjectileStickyOffset = (struct FVector)ProjectileStickyOffset;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::InitTrajectoryFlagBlackSet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "InitTrajectoryFlagBlackSet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UChainHookComponent* AChainHookGrenade::GetTPPChainHookComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "GetTPPChainHookComponent");
    struct
    {
        struct UChainHookComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AWeaponBase* AChainHookGrenade::GetHookWeapon_3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "GetHookWeapon_3P");
    struct
    {
        struct AWeaponBase* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AChainHookGrenade::GetHookLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "GetHookLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName AChainHookGrenade::GetHitBoneName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "GetHitBoneName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UChainHookComponent* AChainHookGrenade::GetChainHookComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "GetChainHookComponent");
    struct
    {
        struct UChainHookComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AChainHookGrenade::DoHookPointDamage(struct AActor* HitTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "DoHookPointDamage");
    struct
    {
        struct AActor* HitTarget;
    } Parms{};
    Parms.HitTarget = (struct AActor*)HitTarget;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookGrenade::DoHookHealthDamage(struct AActor* HitTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "DoHookHealthDamage");
    struct
    {
        struct AActor* HitTarget;
    } Parms{};
    Parms.HitTarget = (struct AActor*)HitTarget;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AChainHookGrenade::DoCheckHitCharAddTrace(struct FHitResult& OutHit, struct FVector HitCharLocation, struct FVector HitCharNormal, struct AActor* HitChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "DoCheckHitCharAddTrace");
    struct
    {
        struct FHitResult OutHit;
        struct FVector HitCharLocation;
        struct FVector HitCharNormal;
        struct AActor* HitChar;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HitCharLocation = (struct FVector)HitCharLocation;
    Parms.HitCharNormal = (struct FVector)HitCharNormal;
    Parms.HitChar = (struct AActor*)HitChar;
    this->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t AChainHookGrenade::CheckMaxHitDistance(struct FVector HitLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookGrenade", "CheckMaxHitDistance");
    struct
    {
        struct FVector HitLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HitLocation = (struct FVector)HitLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AChainHookHitBoxActor
void AChainHookHitBoxActor::TryRegisterToSkillComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "TryRegisterToSkillComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::TickHitBox(int32_t Index, struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "TickHitBox");
    struct
    {
        int32_t Index;
        struct FVector Start;
        struct FVector End;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::SetIsCanHit(uint8_t isCanHit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "SetIsCanHit");
    struct
    {
        uint8_t isCanHit;
    } Parms{};
    Parms.isCanHit = (uint8_t)isCanHit;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::SetChainHookComponent(struct UChainHookComponent* Hook)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "SetChainHookComponent");
    struct
    {
        struct UChainHookComponent* Hook;
    } Parms{};
    Parms.Hook = (struct UChainHookComponent*)Hook;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::SendProjectileThreatExplosion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "SendProjectileThreatExplosion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::SendProjectileThreatCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "SendProjectileThreatCreate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::ResetHP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "ResetHP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::OnRep_OwnerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "OnRep_OwnerCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::OnRep_IsCanHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "OnRep_IsCanHit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookHitBoxActor::OnHitAndDestroyed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "OnHitAndDestroyed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AChainHookHitBoxActor::IsEnemyCast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "IsEnemyCast");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AChainHookHitBoxActor::Init(struct AGPCharacter* CHARACTER, struct UChainHookComponent* Hook, float inMaxHP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "Init");
    struct
    {
        struct AGPCharacter* CHARACTER;
        struct UChainHookComponent* Hook;
        float inMaxHP;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.Hook = (struct UChainHookComponent*)Hook;
    Parms.inMaxHP = (float)inMaxHP;
    this->ProcessEvent(Func, &Parms);
}

int32_t AChainHookHitBoxActor::GetHitBoxNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "GetHitBoxNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AChainHookHitBoxActor::CloseHitBox(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookHitBoxActor", "CloseHitBox");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

// AChainHookItemActor
void AChainHookItemActor::UpdateTravelerGameAk(struct FVector RelativeLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "UpdateTravelerGameAk");
    struct
    {
        struct FVector RelativeLocation;
    } Parms{};
    Parms.RelativeLocation = (struct FVector)RelativeLocation;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::StopAllSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "StopAllSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::SetStaticMeshHiddenInGame(struct UMeshComponent* StaticMesh, uint8_t bIsHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetStaticMeshHiddenInGame");
    struct
    {
        struct UMeshComponent* StaticMesh;
        uint8_t bIsHidden;
    } Parms{};
    Parms.StaticMesh = (struct UMeshComponent*)StaticMesh;
    Parms.bIsHidden = (uint8_t)bIsHidden;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::SetSkin(int32_t InSkinId, uint64_t InItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetSkin");
    struct
    {
        int32_t InSkinId;
        uint64_t InItemID;
    } Parms{};
    Parms.InSkinId = (int32_t)InSkinId;
    Parms.InItemID = (uint64_t)InItemID;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::SetSkeletalMeshActive(uint8_t bNewActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetSkeletalMeshActive");
    struct
    {
        uint8_t bNewActive;
    } Parms{};
    Parms.bNewActive = (uint8_t)bNewActive;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::SetShowState(uint8_t bInIsShow, uint8_t bIsForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetShowState");
    struct
    {
        uint8_t bInIsShow;
        uint8_t bIsForce;
    } Parms{};
    Parms.bInIsShow = (uint8_t)bInIsShow;
    Parms.bIsForce = (uint8_t)bIsForce;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::SetMeshState(uint8_t bIsHidden, uint8_t bIsCastShadow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetMeshState");
    struct
    {
        uint8_t bIsHidden;
        uint8_t bIsCastShadow;
    } Parms{};
    Parms.bIsHidden = (uint8_t)bIsHidden;
    Parms.bIsCastShadow = (uint8_t)bIsCastShadow;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::SetHookInfoStaticMesh(EChainHookState HookState, struct FVector StartLocation, struct FVector HookLocation, uint8_t bIsBend, struct FVector BendLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetHookInfoStaticMesh");
    struct
    {
        enum EChainHookState HookState;
        struct FVector StartLocation;
        struct FVector HookLocation;
        uint8_t bIsBend;
        struct FVector BendLocation;
    } Parms{};
    Parms.HookState = (enum EChainHookState)HookState;
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.HookLocation = (struct FVector)HookLocation;
    Parms.bIsBend = (uint8_t)bIsBend;
    Parms.BendLocation = (struct FVector)BendLocation;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::SetHookInfoAnim(EChainHookState HookState, struct FVector StartLocation, struct FVector HookLocation, uint8_t bIsBend, struct FVector BendLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetHookInfoAnim");
    struct
    {
        enum EChainHookState HookState;
        struct FVector StartLocation;
        struct FVector HookLocation;
        uint8_t bIsBend;
        struct FVector BendLocation;
    } Parms{};
    Parms.HookState = (enum EChainHookState)HookState;
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.HookLocation = (struct FVector)HookLocation;
    Parms.bIsBend = (uint8_t)bIsBend;
    Parms.BendLocation = (struct FVector)BendLocation;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::SetHookInfo(EChainHookState HookState, struct FVector StartLocation, struct FVector HookLocation, uint8_t bIsBend, struct FVector BendLocation, uint8_t bIsForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetHookInfo");
    struct
    {
        enum EChainHookState HookState;
        struct FVector StartLocation;
        struct FVector HookLocation;
        uint8_t bIsBend;
        struct FVector BendLocation;
        uint8_t bIsForce;
    } Parms{};
    Parms.HookState = (enum EChainHookState)HookState;
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.HookLocation = (struct FVector)HookLocation;
    Parms.bIsBend = (uint8_t)bIsBend;
    Parms.BendLocation = (struct FVector)BendLocation;
    Parms.bIsForce = (uint8_t)bIsForce;
    this->ProcessEvent(Func, &Parms);
}

struct FRotator AChainHookItemActor::SetChainRootInfo(struct USceneComponent* SceneComponent, struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "SetChainRootInfo");
    struct
    {
        struct USceneComponent* SceneComponent;
        struct FVector Start;
        struct FVector End;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.SceneComponent = (struct USceneComponent*)SceneComponent;
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AChainHookItemActor::ResetMeshStateByWeaponMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "ResetMeshStateByWeaponMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::PlayPullBackSound(uint8_t IsStart, uint8_t IsFinish, uint8_t HasTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "PlayPullBackSound");
    struct
    {
        uint8_t IsStart;
        uint8_t IsFinish;
        uint8_t HasTarget;
    } Parms{};
    Parms.IsStart = (uint8_t)IsStart;
    Parms.IsFinish = (uint8_t)IsFinish;
    Parms.HasTarget = (uint8_t)HasTarget;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::PlayBreakSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "PlayBreakSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::OnSkinMatLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "OnSkinMatLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::OnMeshLoadComplete(struct ACHARACTER* CHARACTER, EGPWeaponMode WeaponMode, struct USkeletalMeshComponent* WeaponMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "OnMeshLoadComplete");
    struct
    {
        struct ACHARACTER* CHARACTER;
        enum EGPWeaponMode WeaponMode;
        struct USkeletalMeshComponent* WeaponMesh;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.WeaponMode = (enum EGPWeaponMode)WeaponMode;
    Parms.WeaponMesh = (struct USkeletalMeshComponent*)WeaponMesh;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AChainHookItemActor::IsNeedShowItem(EChainHookState HookState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ChainHookItemActor", "IsNeedShowItem");
    struct
    {
        enum EChainHookState HookState;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HookState = (enum EChainHookState)HookState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AChainHookItemActor::IsInFPPView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "IsInFPPView");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AChainHookItemActor::Is3PWeaponItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "Is3PWeaponItem");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AChainHookItemActor::Is1PWeaponItem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "Is1PWeaponItem");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AChainHookItemActor::InitStaticMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "InitStaticMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::InitHookTravelerAk()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "InitHookTravelerAk");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::InitAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "InitAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::HideAllStaticMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "HideAllStaticMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookItemActor::DoPlaySound(struct UGPAudioEventAsset* Sound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "DoPlaySound");
    struct
    {
        struct UGPAudioEventAsset* Sound;
    } Parms{};
    Parms.Sound = (struct UGPAudioEventAsset*)Sound;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AChainHookItemActor::CheckSound(struct UGPAudioEventAsset* Sound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "CheckSound");
    struct
    {
        struct UGPAudioEventAsset* Sound;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Sound = (struct UGPAudioEventAsset*)Sound;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AChainHookItemActor::CancelLoadSkin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "CancelLoadSkin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector AChainHookItemActor::AdjustedFPPWeaponLocation(struct FVector StartLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemActor", "AdjustedFPPWeaponLocation");
    struct
    {
        struct FVector StartLocation;
        struct FVector ReturnValue;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UChainHookItemAnimInstance
void UChainHookItemAnimInstance::SetHookInfo(uint8_t bIsFPP, EChainHookState HookState, struct FVector StartLocation, struct FVector HookLocation, uint8_t bIsBend, struct FVector BendLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemAnimInstance", "SetHookInfo");
    struct
    {
        uint8_t bIsFPP;
        enum EChainHookState HookState;
        struct FVector StartLocation;
        struct FVector HookLocation;
        uint8_t bIsBend;
        struct FVector BendLocation;
    } Parms{};
    Parms.bIsFPP = (uint8_t)bIsFPP;
    Parms.HookState = (enum EChainHookState)HookState;
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.HookLocation = (struct FVector)HookLocation;
    Parms.bIsBend = (uint8_t)bIsBend;
    Parms.BendLocation = (struct FVector)BendLocation;
    this->ProcessEvent(Func, &Parms);
}

void UChainHookItemAnimInstance::OnMeshLoadComplete(struct USkeletalMeshComponent* WeaponMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookItemAnimInstance", "OnMeshLoadComplete");
    struct
    {
        struct USkeletalMeshComponent* WeaponMesh;
    } Parms{};
    Parms.WeaponMesh = (struct USkeletalMeshComponent*)WeaponMesh;
    this->ProcessEvent(Func, &Parms);
}

// AChainHookWeapon
void AChainHookWeapon::UseSkillComponentData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "UseSkillComponentData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::TryPlayHitSound(struct AActor* HitTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "TryPlayHitSound");
    struct
    {
        struct AActor* HitTarget;
    } Parms{};
    Parms.HitTarget = (struct AActor*)HitTarget;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::StopChargeTimerTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "StopChargeTimerTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::StopAllSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "StopAllSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::StopAllLoopSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "StopAllLoopSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::StartChargeTimerTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "StartChargeTimerTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::RegisterToSkillComponent(uint8_t bIsAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "RegisterToSkillComponent");
    struct
    {
        uint8_t bIsAdd;
    } Parms{};
    Parms.bIsAdd = (uint8_t)bIsAdd;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PreloadAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PreloadAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayWeaponEnableSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayWeaponEnableSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayWeaponDisableSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayWeaponDisableSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayPullBackSound(uint8_t IsStart, uint8_t IsFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayPullBackSound");
    struct
    {
        uint8_t IsStart;
        uint8_t IsFinish;
    } Parms{};
    Parms.IsStart = (uint8_t)IsStart;
    Parms.IsFinish = (uint8_t)IsFinish;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayPullBackFailedSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayPullBackFailedSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayPullBackBreakSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayPullBackBreakSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayMoveForwardSound(uint8_t IsStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayMoveForwardSound");
    struct
    {
        uint8_t IsStart;
    } Parms{};
    Parms.IsStart = (uint8_t)IsStart;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayHitVO(uint8_t IsHitEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayHitVO");
    struct
    {
        uint8_t IsHitEnemy;
    } Parms{};
    Parms.IsHitEnemy = (uint8_t)IsHitEnemy;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayChargeSound(uint8_t IsStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayChargeSound");
    struct
    {
        uint8_t IsStart;
    } Parms{};
    Parms.IsStart = (uint8_t)IsStart;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::PlayBrokenVO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "PlayBrokenVO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::OnChargeTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "OnChargeTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::DoPlayVO(struct FString VoiceString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "DoPlayVO");
    struct
    {
        struct FString VoiceString;
    } Parms{};
    Parms.VoiceString = (struct FString)VoiceString;
    this->ProcessEvent(Func, &Parms);
}

void AChainHookWeapon::DoPlaySound(struct FName EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "DoPlaySound");
    struct
    {
        struct FName EventName;
    } Parms{};
    Parms.EventName = (struct FName)EventName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AChainHookWeapon::CheckSound(struct FName EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ChainHookWeapon", "CheckSound");
    struct
    {
        struct FName EventName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.EventName = (struct FName)EventName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityProjectile
void ADFMAbilityProjectile::OnRep_Target()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProjectile", "OnRep_Target");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProjectile::OnRep_Speed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProjectile", "OnRep_Speed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProjectile::OnProjectileStop(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProjectile", "OnProjectileStop");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProjectile::OnBulletHit(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProjectile", "OnBulletHit");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityDetectorBase
void ADFMAbilityDetectorBase::OnInnerDestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "OnInnerDestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::OnDetectorDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "OnDetectorDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::OnAudioLoad(struct TArray<struct FSoftObjectPath> AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "OnAudioLoad");
    struct
    {
        struct TArray<struct FSoftObjectPath> AssetRef;
    } Parms{};
    Parms.AssetRef = (struct TArray<struct FSoftObjectPath>)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::OnAnimLoad(struct TArray<struct FSoftObjectPath> AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "OnAnimLoad");
    struct
    {
        struct TArray<struct FSoftObjectPath> AssetRef;
    } Parms{};
    Parms.AssetRef = (struct TArray<struct FSoftObjectPath>)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::LogTriggerActors(uint8_t bIsAdd, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "LogTriggerActors");
    struct
    {
        uint8_t bIsAdd;
        struct AActor* OtherActor;
    } Parms{};
    Parms.bIsAdd = (uint8_t)bIsAdd;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityDetectorBase::IsLocalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "IsLocalEnemy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDetectorBase::IsEnemy(struct AGPCharacterBase* CharecterA, struct AGPCharacterBase* CharecterB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "IsEnemy");
    struct
    {
        struct AGPCharacterBase* CharecterA;
        struct AGPCharacterBase* CharecterB;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CharecterA = (struct AGPCharacterBase*)CharecterA;
    Parms.CharecterB = (struct AGPCharacterBase*)CharecterB;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDetectorBase::IsCharacterEnemy(struct AGPCharacter* GPChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "IsCharacterEnemy");
    struct
    {
        struct AGPCharacter* GPChar;
        uint8_t ReturnValue;
    } Parms{};
    Parms.GPChar = (struct AGPCharacter*)GPChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDetectorBase::InnerDestroySelfWithDelay(float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "InnerDestroySelfWithDelay");
    struct
    {
        float Delay;
    } Parms{};
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::InnerDestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "InnerDestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UGPAudioEventAsset* ADFMAbilityDetectorBase::GetAudioByName(struct FName AudioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "GetAudioByName");
    struct
    {
        struct FName AudioName;
        struct UGPAudioEventAsset* ReturnValue;
    } Parms{};
    Parms.AudioName = (struct FName)AudioName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAnimSequenceBase* ADFMAbilityDetectorBase::GetAnimByName(struct FName AnimName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "GetAnimByName");
    struct
    {
        struct FName AnimName;
        struct UAnimSequenceBase* ReturnValue;
    } Parms{};
    Parms.AnimName = (struct FName)AnimName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDetectorBase::DestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "DestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::ClearTriggerActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "ClearTriggerActors");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::BP_StartDestroySelf(uint8_t fromLifeTimeOrCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "BP_StartDestroySelf");
    struct
    {
        uint8_t fromLifeTimeOrCount;
    } Parms{};
    Parms.fromLifeTimeOrCount = (uint8_t)fromLifeTimeOrCount;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::BP_OnAudioLoadFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "BP_OnAudioLoadFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::BP_OnAnimLoadFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "BP_OnAnimLoadFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::BP_LeftTimeUpdate(float CurLeftTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "BP_LeftTimeUpdate");
    struct
    {
        float CurLeftTime;
    } Parms{};
    Parms.CurLeftTime = (float)CurLeftTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetectorBase::BP_ApplyOverlapActors(const struct TArray<struct AActor*>& AllOverlappingActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetectorBase", "BP_ApplyOverlapActors");
    struct
    {
        struct TArray<struct AActor*> AllOverlappingActors;
    } Parms{};
    Parms.AllOverlappingActors = (struct TArray<struct AActor*>)AllOverlappingActors;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityBuffDetector
void ADFMAbilityBuffDetector::UpdatePostEffectVectorParameters(struct FName PostEffectName, struct FName ParameterName, struct FLinearColor Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "UpdatePostEffectVectorParameters");
    struct
    {
        struct FName PostEffectName;
        struct FName ParameterName;
        struct FLinearColor Value;
    } Parms{};
    Parms.PostEffectName = (struct FName)PostEffectName;
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (struct FLinearColor)Value;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::UpdatePostEffectScalarParameters(struct FName PostEffectName, struct FName ParameterName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "UpdatePostEffectScalarParameters");
    struct
    {
        struct FName PostEffectName;
        struct FName ParameterName;
        float Value;
    } Parms{};
    Parms.PostEffectName = (struct FName)PostEffectName;
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::UpdateAttachComSkipUpdateTransformsWhenHidden()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "UpdateAttachComSkipUpdateTransformsWhenHidden");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBuffDetector::TryStickyToThrowAttachable(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "TryStickyToThrowAttachable");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBuffDetector::SyncActor(struct ADFMAbilityBuffDetector* Detector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "SyncActor");
    struct
    {
        struct ADFMAbilityBuffDetector* Detector;
    } Parms{};
    Parms.Detector = (struct ADFMAbilityBuffDetector*)Detector;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::StickyToTargetEx(const struct FHitResult& ImpactResult, uint8_t FixStick, uint8_t OnlyFixCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "StickyToTargetEx");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t FixStick;
        uint8_t OnlyFixCharacter;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    Parms.FixStick = (uint8_t)FixStick;
    Parms.OnlyFixCharacter = (uint8_t)OnlyFixCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::StickyToTarget(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "StickyToTarget");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::ShowHitAbilityActorMarker(const uint8_t& bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "ShowHitAbilityActorMarker");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::SetPostEffectActive(struct FName PostEffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "SetPostEffectActive");
    struct
    {
        struct FName PostEffectName;
    } Parms{};
    Parms.PostEffectName = (struct FName)PostEffectName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::SetBuffTime(struct ADFMCharacter* DFMCharacter, int32_t BuffId, float TargetTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "SetBuffTime");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        int32_t BuffId;
        float TargetTime;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.BuffId = (int32_t)BuffId;
    Parms.TargetTime = (float)TargetTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::SetAbility(int32_t InSkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "SetAbility");
    struct
    {
        int32_t InSkillId;
    } Parms{};
    Parms.InSkillId = (int32_t)InSkillId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::RequestStaggerByName(struct ADFMCharacter* DFMCharacter, struct FName StaggerName, uint8_t bOverrideCurStagger, uint8_t bShouldTurn, float TargetYaw, float CD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "RequestStaggerByName");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        struct FName StaggerName;
        uint8_t bOverrideCurStagger;
        uint8_t bShouldTurn;
        float TargetYaw;
        float CD;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.StaggerName = (struct FName)StaggerName;
    Parms.bOverrideCurStagger = (uint8_t)bOverrideCurStagger;
    Parms.bShouldTurn = (uint8_t)bShouldTurn;
    Parms.TargetYaw = (float)TargetYaw;
    Parms.CD = (float)CD;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::Rep_StickyToChar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "Rep_StickyToChar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::Rep_ServerElimate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "Rep_ServerElimate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::Rep_OwnerUin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "Rep_OwnerUin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::Rep_AbilityID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "Rep_AbilityID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::RemovePostEffect(struct FName PostEffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "RemovePostEffect");
    struct
    {
        struct FName PostEffectName;
    } Parms{};
    Parms.PostEffectName = (struct FName)PostEffectName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::OnStickyToTarget(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "OnStickyToTarget");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::OnStickyTargetDied(struct AActor* Vehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "OnStickyTargetDied");
    struct
    {
        struct AActor* Vehicle;
    } Parms{};
    Parms.Vehicle = (struct AActor*)Vehicle;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::OnRep_StickyInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "OnRep_StickyInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::OnClientStartDestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "OnClientStartDestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBuffDetector::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADFMAbilityBuffDetector::GetTimerRemaining()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "GetTimerRemaining");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName ADFMAbilityBuffDetector::GetResourcePath(struct FName Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "GetResourcePath");
    struct
    {
        struct FName Key;
        struct FName ReturnValue;
    } Parms{};
    Parms.Key = (struct FName)Key;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* ADFMAbilityBuffDetector::GetGPMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "GetGPMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENetRole ADFMAbilityBuffDetector::GetAbilityRole()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "GetAbilityRole");
    struct
    {
        enum ENetRole ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMAbilityInstance* ADFMAbilityBuffDetector::GetAbilityInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "GetAbilityInstance");
    struct
    {
        struct UDFMAbilityInstance* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMCharacter* ADFMAbilityBuffDetector::GetAbilityCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "GetAbilityCharacter");
    struct
    {
        struct ADFMCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityBuffDetector::GetAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "GetAbility");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBuffDetector::DeactiveFXResourceContainerComponent(struct UFXResourceContainerComponent* FX, int32_t FXHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "DeactiveFXResourceContainerComponent");
    struct
    {
        struct UFXResourceContainerComponent* FX;
        int32_t FXHandle;
    } Parms{};
    Parms.FX = (struct UFXResourceContainerComponent*)FX;
    Parms.FXHandle = (int32_t)FXHandle;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::DamageTakerApplyDamageEffect(const uint8_t& bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "DamageTakerApplyDamageEffect");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::ClientPlayCameraHitEffect(uint64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "ClientPlayCameraHitEffect");
    struct
    {
        uint64_t Uin;
    } Parms{};
    Parms.Uin = (uint64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::ClientOnInnerDestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "ClientOnInnerDestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBuffDetector::CheckBuffTime(struct ADFMCharacter* DFMCharacter, int32_t BuffId, float MinTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "CheckBuffTime");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        int32_t BuffId;
        float MinTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.BuffId = (int32_t)BuffId;
    Parms.MinTime = (float)MinTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBuffDetector::C204DataReport(struct AGPCharacter* DamageMaker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "C204DataReport");
    struct
    {
        struct AGPCharacter* DamageMaker;
    } Parms{};
    Parms.DamageMaker = (struct AGPCharacter*)DamageMaker;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_SetCharacterOwner(struct ADFMCharacter* Char)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_SetCharacterOwner");
    struct
    {
        struct ADFMCharacter* Char;
    } Parms{};
    Parms.Char = (struct ADFMCharacter*)Char;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_SetAbilitOwner(int32_t skillEntityIndex, struct ADFMCharacter* Char)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_SetAbilitOwner");
    struct
    {
        int32_t skillEntityIndex;
        struct ADFMCharacter* Char;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.Char = (struct ADFMCharacter*)Char;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_Resonance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_Resonance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_OnStickyToTarget(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_OnStickyToTarget");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_OnSetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_OnSetCharacterOwner");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_LimitStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_LimitStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_HPEmpty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_HPEmpty");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

ESkillLogicType ADFMAbilityBuffDetector::BP_GetSkillLogicType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_GetSkillLogicType");
    struct
    {
        enum ESkillLogicType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBuffDetector::BP_EnableTickBuff(uint8_t Enable, uint8_t Apply)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_EnableTickBuff");
    struct
    {
        uint8_t Enable;
        uint8_t Apply;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    Parms.Apply = (uint8_t)Apply;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_ClientStartDestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_ClientStartDestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBuffDetector::BP_AEffectBuff(struct ADFMCharacter* DFMCharacter, uint8_t Add)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffDetector", "BP_AEffectBuff");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
        uint8_t Add;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.Add = (uint8_t)Add;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityADSDefencer
void ADFMAbilityADSDefencer::OnSectorTransEnd(int32_t ActiveID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityADSDefencer", "OnSectorTransEnd");
    struct
    {
        int32_t ActiveID;
    } Parms{};
    Parms.ActiveID = (int32_t)ActiveID;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityADSDefencer::OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityADSDefencer", "OnCharacterExpertIdChanged");
    struct
    {
        int32_t OldExpertId;
        int32_t CurExpertId;
    } Parms{};
    Parms.OldExpertId = (int32_t)OldExpertId;
    Parms.CurExpertId = (int32_t)CurExpertId;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityADSDefencer::IsSameCamp(struct APlayerController* OwnerPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityADSDefencer", "IsSameCamp");
    struct
    {
        struct APlayerController* OwnerPlayer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OwnerPlayer = (struct APlayerController*)OwnerPlayer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityADSDefencer::DelayDestroy(float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityADSDefencer", "DelayDestroy");
    struct
    {
        float Time;
    } Parms{};
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityADSDefencer::CheckIsInsideWalkableSplines()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityADSDefencer", "CheckIsInsideWalkableSplines");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityBaseBox
void ADFMAbilityBaseBox::UpdateBoxCDList(int64_t Uin, float CD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBaseBox", "UpdateBoxCDList");
    struct
    {
        int64_t Uin;
        float CD;
    } Parms{};
    Parms.Uin = (int64_t)Uin;
    Parms.CD = (float)CD;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBaseBox::StopMeshTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBaseBox", "StopMeshTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBaseBox::StickyToThrowAttachable(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBaseBox", "StickyToThrowAttachable");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBaseBox::OnRep_CD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBaseBox", "OnRep_CD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBaseBox::OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBaseBox", "OnCharacterExpertIdChanged");
    struct
    {
        int32_t OldExpertId;
        int32_t CurExpertId;
    } Parms{};
    Parms.OldExpertId = (int32_t)OldExpertId;
    Parms.CurExpertId = (int32_t)CurExpertId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBaseBox::CheckSkeletalMeshTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBaseBox", "CheckSkeletalMeshTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityAmmoBox
int32_t ADFMAbilityAmmoBox::SpecialAddAmmo(struct ADFMCharacter* TargetChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityAmmoBox", "SpecialAddAmmo");
    struct
    {
        struct ADFMCharacter* TargetChar;
        int32_t ReturnValue;
    } Parms{};
    Parms.TargetChar = (struct ADFMCharacter*)TargetChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct TScriptInterface<IWeaponInterface>> ADFMAbilityAmmoBox::GetWeaponList(struct AGPCharacterBase* GPCharBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityAmmoBox", "GetWeaponList");
    struct
    {
        struct AGPCharacterBase* GPCharBase;
        struct TArray<struct TScriptInterface<IWeaponInterface>> ReturnValue;
    } Parms{};
    Parms.GPCharBase = (struct AGPCharacterBase*)GPCharBase;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityAmmoBox::AddAmmoToTargetWeapon(struct TScriptInterface<IWeaponInterface> IWeapon, EAddAmmoFailReason& FailReason, uint8_t bSimulate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityAmmoBox", "AddAmmoToTargetWeapon");
    struct
    {
        struct TScriptInterface<IWeaponInterface> IWeapon;
        enum EAddAmmoFailReason FailReason;
        uint8_t bSimulate;
        int32_t ReturnValue;
    } Parms{};
    Parms.IWeapon = (struct TScriptInterface<IWeaponInterface>)IWeapon;
    Parms.bSimulate = (uint8_t)bSimulate;
    this->ProcessEvent(Func, &Parms);
    FailReason = Parms.FailReason;
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityAmmoBox::AddAmmo(struct ADFMCharacter* TargetChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityAmmoBox", "AddAmmo");
    struct
    {
        struct ADFMCharacter* TargetChar;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetChar = (struct ADFMCharacter*)TargetChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityPlacementBase
void ADFMAbilityPlacementBase::OverGroundCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlacementBase", "OverGroundCheck");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityPlacementBase::OnRep_bActived()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlacementBase", "OnRep_bActived");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityPlacementBase::OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlacementBase", "OnCharacterExpertIdChanged");
    struct
    {
        int32_t OldExpertId;
        int32_t CurExpertId;
    } Parms{};
    Parms.OldExpertId = (int32_t)OldExpertId;
    Parms.CurExpertId = (int32_t)CurExpertId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityPlacementBase::NotifySqueezedOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlacementBase", "NotifySqueezedOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityPlacementBase::ClientSetCoolDownTime(float CoolDownTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlacementBase", "ClientSetCoolDownTime");
    struct
    {
        float CoolDownTime;
    } Parms{};
    Parms.CoolDownTime = (float)CoolDownTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityPlacementBase::CanStick(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlacementBase", "CanStick");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityMineBase
void ADFMAbilityMineBase::OnPawnDie(struct AGPCharacterBase* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMineBase", "OnPawnDie");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMineBase::NotifyTriggerExplosion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMineBase", "NotifyTriggerExplosion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct AActor*> ADFMAbilityMineBase::GetAllMinesInWorld(struct UWorld* World, struct ADFMCharacter* OwnerCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityMineBase", "GetAllMinesInWorld");
    struct
    {
        struct UWorld* World;
        struct ADFMCharacter* OwnerCharacter;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.OwnerCharacter = (struct ADFMCharacter*)OwnerCharacter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityMineBase::GenerateExplodeCrater(uint64_t ImpactFXId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMineBase", "GenerateExplodeCrater");
    struct
    {
        uint64_t ImpactFXId;
    } Parms{};
    Parms.ImpactFXId = (uint64_t)ImpactFXId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMineBase::DoExplosion(uint8_t bHPEmpty, struct AActor* Maker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMineBase", "DoExplosion");
    struct
    {
        uint8_t bHPEmpty;
        struct AActor* Maker;
    } Parms{};
    Parms.bHPEmpty = (uint8_t)bHPEmpty;
    Parms.Maker = (struct AActor*)Maker;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityAntiTankMine
void ADFMAbilityAntiTankMine::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityAntiTankMine", "OnOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityAntiTankMine::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityAntiTankMine", "OnOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityAntiTankMine::NotifyDoExplosion(uint8_t bHPEmpty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityAntiTankMine", "NotifyDoExplosion");
    struct
    {
        uint8_t bHPEmpty;
    } Parms{};
    Parms.bHPEmpty = (uint8_t)bHPEmpty;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityDiffuseArea
void ADFMAbilityDiffuseArea::UnPackageCellInfo(int32_t CellInfo, int32_t& X, int32_t& Y, int32_t& XOffset, int32_t& YOffset, EDiffuseAreaCellDiffuseType& DiffuseType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityDiffuseArea", "UnPackageCellInfo");
    struct
    {
        int32_t CellInfo;
        int32_t X;
        int32_t Y;
        int32_t XOffset;
        int32_t YOffset;
        enum EDiffuseAreaCellDiffuseType DiffuseType;
    } Parms{};
    Parms.CellInfo = (int32_t)CellInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    X = Parms.X;
    Y = Parms.Y;
    XOffset = Parms.XOffset;
    YOffset = Parms.YOffset;
    DiffuseType = Parms.DiffuseType;
}

void ADFMAbilityDiffuseArea::TryDeactivateClientCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "TryDeactivateClientCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityDiffuseArea::TickClientStartCreateCell()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "TickClientStartCreateCell");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDiffuseArea::TickCheckCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "TickCheckCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::SyncAllActiveCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "SyncAllActiveCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::StopCheckClientCellTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "StopCheckClientCellTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::StartCheckClientCellTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "StartCheckClientCellTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::StartCheckCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "StartCheckCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::SendProjectileThreatExplosion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "SendProjectileThreatExplosion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::SendProjectileThreatCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "SendProjectileThreatCreate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float ADFMAbilityDiffuseArea::RealDoCheckCell(struct FHitResult& HitResult, uint8_t bIsChildCell, struct FVector CellCenter, float MinOffset, float MaxOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "RealDoCheckCell");
    struct
    {
        struct FHitResult HitResult;
        uint8_t bIsChildCell;
        struct FVector CellCenter;
        float MinOffset;
        float MaxOffset;
        float ReturnValue;
    } Parms{};
    Parms.bIsChildCell = (uint8_t)bIsChildCell;
    Parms.CellCenter = (struct FVector)CellCenter;
    Parms.MinOffset = (float)MinOffset;
    Parms.MaxOffset = (float)MaxOffset;
    this->ProcessEvent(Func, &Parms);
    HitResult = Parms.HitResult;
    return Parms.ReturnValue;
}

struct FVector ADFMAbilityDiffuseArea::RandomClientCellOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "RandomClientCellOffset");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADFMAbilityDiffuseArea::RandomClientCellAngleOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "RandomClientCellAngleOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityDiffuseArea::PackageCellInfo(int32_t X, int32_t Y, int32_t XOffset, int32_t YOffset, EDiffuseAreaCellDiffuseType DiffuseType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityDiffuseArea", "PackageCellInfo");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t XOffset;
        int32_t YOffset;
        enum EDiffuseAreaCellDiffuseType DiffuseType;
        int32_t ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.XOffset = (int32_t)XOffset;
    Parms.YOffset = (int32_t)YOffset;
    Parms.DiffuseType = (enum EDiffuseAreaCellDiffuseType)DiffuseType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDiffuseArea::OnStartTickCheckCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "OnStartTickCheckCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::OnRep_AllActiveCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "OnRep_AllActiveCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::OnEndTickCheckCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "OnEndTickCheckCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::OnDeactivateAllClientCell(struct FDiffuseAreaClientCell& ClientCell)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "OnDeactivateAllClientCell");
    struct
    {
        struct FDiffuseAreaClientCell ClientCell;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    ClientCell = Parms.ClientCell;
}

void ADFMAbilityDiffuseArea::OnCreateClientCellEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "OnCreateClientCellEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::OnCheckCellsEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "OnCheckCellsEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::OnCellPassCheck(uint8_t bIsChildCell, struct FDiffuseAreaCell& Cell, const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "OnCellPassCheck");
    struct
    {
        uint8_t bIsChildCell;
        struct FDiffuseAreaCell Cell;
        struct FHitResult HitResult;
    } Parms{};
    Parms.bIsChildCell = (uint8_t)bIsChildCell;
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
    Cell = Parms.Cell;
}

uint8_t ADFMAbilityDiffuseArea::IsOverlapCell(struct AActor* Actor, uint8_t bAddLineTrace, uint8_t bIsActorLocationCenter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "IsOverlapCell");
    struct
    {
        struct AActor* Actor;
        uint8_t bAddLineTrace;
        uint8_t bIsActorLocationCenter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.bAddLineTrace = (uint8_t)bAddLineTrace;
    Parms.bIsActorLocationCenter = (uint8_t)bIsActorLocationCenter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::IsNeedSpawnClientCell()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "IsNeedSpawnClientCell");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::IsHitWater(const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "IsHitWater");
    struct
    {
        struct FHitResult HitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::IsCheckWaterData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "IsCheckWaterData");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDiffuseArea::InitTraceParms()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "InitTraceParms");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::InitOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "InitOwner");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::InitCheckInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "InitCheckInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::InitCheckCellRange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "InitCheckCellRange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UGPSkillComponent* ADFMAbilityDiffuseArea::GetSkillComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetSkillComponent");
    struct
    {
        struct UGPSkillComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityDiffuseArea::GetMergeIndex(int32_t Index, int32_t CellMergeNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityDiffuseArea", "GetMergeIndex");
    struct
    {
        int32_t Index;
        int32_t CellMergeNum;
        int32_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.CellMergeNum = (int32_t)CellMergeNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADFMAbilityDiffuseArea::GetClientCellSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetClientCellSize");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityDiffuseArea::GetClientCellMergeNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetClientCellMergeNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityDiffuseArea::GetClientCellIdx(int32_t X, int32_t Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetClientCellIdx");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADFMAbilityDiffuseArea::GetClientCellCheckOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetClientCellCheckOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ADFMAbilityDiffuseArea::GetClientCellCenter(int32_t CellIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetClientCellCenter");
    struct
    {
        int32_t CellIdx;
        struct FVector ReturnValue;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator ADFMAbilityDiffuseArea::GetCellRotator(const struct FVector& Normal, const float& BaseYaw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetCellRotator");
    struct
    {
        struct FVector Normal;
        float BaseYaw;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.Normal = (struct FVector)Normal;
    Parms.BaseYaw = (float)BaseYaw;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ADFMAbilityDiffuseArea::GetCellLocalCenter(int32_t X, int32_t Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetCellLocalCenter");
    struct
    {
        int32_t X;
        int32_t Y;
        struct FVector ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityDiffuseArea::GetCellIdx(int32_t X, int32_t Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetCellIdx");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EDiffuseAreaType ADFMAbilityDiffuseArea::GetAreaType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "GetAreaType");
    struct
    {
        enum EDiffuseAreaType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDiffuseArea::DoStartCheckCells(int32_t X, int32_t Y, int32_t XOffset, int32_t YOffset, EDiffuseAreaCellDiffuseType DiffuseType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoStartCheckCells");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t XOffset;
        int32_t YOffset;
        enum EDiffuseAreaCellDiffuseType DiffuseType;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.XOffset = (int32_t)XOffset;
    Parms.YOffset = (int32_t)YOffset;
    Parms.DiffuseType = (enum EDiffuseAreaCellDiffuseType)DiffuseType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityDiffuseArea::DoSpawnClientCell(int32_t CellIdx, float MaxHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoSpawnClientCell");
    struct
    {
        int32_t CellIdx;
        float MaxHeight;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    Parms.MaxHeight = (float)MaxHeight;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::DoSpawnCheck(int32_t CellIdx, float MaxHeight, struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoSpawnCheck");
    struct
    {
        int32_t CellIdx;
        float MaxHeight;
        struct FHitResult HitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    Parms.MaxHeight = (float)MaxHeight;
    this->ProcessEvent(Func, &Parms);
    HitResult = Parms.HitResult;
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::DoLineTraceSingle_WaterData(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoLineTraceSingle_WaterData");
    struct
    {
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::DoLineTraceSingle_LineTrace(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoLineTraceSingle_LineTrace");
    struct
    {
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::DoLineTraceSingle(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End, uint8_t bDebugLine)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoLineTraceSingle");
    struct
    {
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        uint8_t bDebugLine;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.bDebugLine = (uint8_t)bDebugLine;
    this->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::DoFitGroundCheck(struct FVector BaseLocation, struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoFitGroundCheck");
    struct
    {
        struct FVector BaseLocation;
        struct FHitResult HitResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BaseLocation = (struct FVector)BaseLocation;
    this->ProcessEvent(Func, &Parms);
    HitResult = Parms.HitResult;
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::DoExtraCheckClientCell(struct FHitResult& OutHit, const struct FVector& Start, const struct FVector& End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoExtraCheckClientCell");
    struct
    {
        struct FHitResult OutHit;
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::DoCheckClientCellEffect(const struct FDiffuseAreaClientCell& ClientCell)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoCheckClientCellEffect");
    struct
    {
        struct FDiffuseAreaClientCell ClientCell;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ClientCell = (struct FDiffuseAreaClientCell)ClientCell;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDiffuseArea::DoCheckCell(int32_t X, int32_t Y, int32_t XOffset, int32_t YOffset, EDiffuseAreaCellDiffuseType DiffuseType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DoCheckCell");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t XOffset;
        int32_t YOffset;
        enum EDiffuseAreaCellDiffuseType DiffuseType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.XOffset = (int32_t)XOffset;
    Parms.YOffset = (int32_t)YOffset;
    Parms.DiffuseType = (enum EDiffuseAreaCellDiffuseType)DiffuseType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDiffuseArea::DeactivateAllClientCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DeactivateAllClientCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::DataFlowHitInfo(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DataFlowHitInfo");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::DataFlowAddThrowNumber()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "DataFlowAddThrowNumber");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::CountMarkerLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "CountMarkerLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityDiffuseArea::CountClientCheckPlaneNormal(struct FHitResult& OutHit, const uint8_t& bIsCenterHit, const struct TArray<struct FHitResult>& AllHitResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "CountClientCheckPlaneNormal");
    struct
    {
        struct FHitResult OutHit;
        uint8_t bIsCenterHit;
        struct TArray<struct FHitResult> AllHitResults;
        uint8_t ReturnValue;
    } Parms{};
    Parms.bIsCenterHit = (uint8_t)bIsCenterHit;
    Parms.AllHitResults = (struct TArray<struct FHitResult>)AllHitResults;
    this->ProcessEvent(Func, &Parms);
    OutHit = Parms.OutHit;
    return Parms.ReturnValue;
}

void ADFMAbilityDiffuseArea::CheckClientCellTimerTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "CheckClientCellTimerTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::CheckCenterCell()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "CheckCenterCell");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDiffuseArea::CheckActiveCellsNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDiffuseArea", "CheckActiveCellsNum");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityBarbedWireArea
void ADFMAbilityBarbedWireArea::UnregisterCharacterEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "UnregisterCharacterEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::TrySpawnLightingEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TrySpawnLightingEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::TryCreateMainMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TryCreateMainMaterial");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBarbedWireArea::TryCheckFireArrowDamage(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TryCheckFireArrowDamage");
    struct
    {
        struct FDamageResultInfo DamageResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBarbedWireArea::TickMeshScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TickMeshScale");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::TickMeshComponent(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TickMeshComponent");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::TickMainTargetLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TickMainTargetLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::TickLightingEffect(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TickLightingEffect");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::TickCheckLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TickCheckLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::TickCheckDestroyedCellNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "TickCheckDestroyedCellNum");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::StartMeshScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "StartMeshScale");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::SpawnHitBox(const int32_t& ClientIdx, const struct FVector& Location, const struct FRotator& Rotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "SpawnHitBox");
    struct
    {
        int32_t ClientIdx;
        struct FVector Location;
        struct FRotator Rotator;
    } Parms{};
    Parms.ClientIdx = (int32_t)ClientIdx;
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::SpawnAllHitBoxesClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "SpawnAllHitBoxesClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::SpawnAllHitBoxes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "SpawnAllHitBoxes");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::SendMarkerManagerDelete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "SendMarkerManagerDelete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::SendMarkerManagerCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "SendMarkerManagerCreate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::RegisterCharacterEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "RegisterCharacterEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::PlayMoveSound(struct AGPCharacter* Char)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "PlayMoveSound");
    struct
    {
        struct AGPCharacter* Char;
    } Parms{};
    Parms.Char = (struct AGPCharacter*)Char;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::PlayMobileExplosionSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "PlayMobileExplosionSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::OnSkinMatLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "OnSkinMatLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::OnClientOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "OnClientOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::OnClientOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "OnClientOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "OnCharacterDead");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::MulticastSpawnLightingEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "MulticastSpawnLightingEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::MulticastPlayExtinguishEffect(int32_t ClientIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "MulticastPlayExtinguishEffect");
    struct
    {
        int32_t ClientIndex;
    } Parms{};
    Parms.ClientIndex = (int32_t)ClientIndex;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBarbedWireArea::IsOverlapCell_Client(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "IsOverlapCell_Client");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityBarbedWireArea::IsInSOL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "IsInSOL");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBarbedWireArea::InitMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "InitMeshComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::InitGameRoleData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "InitGameRoleData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::InitClientCheckBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "InitClientCheckBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::InitBaseHitBoxCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "InitBaseHitBoxCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UMeshComponent* ADFMAbilityBarbedWireArea::GetMeshComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "GetMeshComponent");
    struct
    {
        struct UMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityBarbedWireArea::GetHitComponentIndex(struct UPrimitiveComponent* HitComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "GetHitComponentIndex");
    struct
    {
        struct UPrimitiveComponent* HitComponent;
        int32_t ReturnValue;
    } Parms{};
    Parms.HitComponent = (struct UPrimitiveComponent*)HitComponent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMSkillComponent* ADFMAbilityBarbedWireArea::GetEnemySkillComponent(struct AGPCharacter* TargetChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "GetEnemySkillComponent");
    struct
    {
        struct AGPCharacter* TargetChar;
        struct UDFMSkillComponent* ReturnValue;
    } Parms{};
    Parms.TargetChar = (struct AGPCharacter*)TargetChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityBarbedWireArea::FindHitComponentIndex(const struct FVector& HitLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "FindHitComponentIndex");
    struct
    {
        struct FVector HitLocation;
        int32_t ReturnValue;
    } Parms{};
    Parms.HitLocation = (struct FVector)HitLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityBarbedWireArea::FindGameRoleDataIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "FindGameRoleDataIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBarbedWireArea::FinClientCheckBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "FinClientCheckBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::DoSpawnMeshComponent(int32_t CellIdx, float MaxHeight, struct FDiffuseAreaClientCell& ClientCell)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "DoSpawnMeshComponent");
    struct
    {
        int32_t CellIdx;
        float MaxHeight;
        struct FDiffuseAreaClientCell ClientCell;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    Parms.MaxHeight = (float)MaxHeight;
    this->ProcessEvent(Func, &Parms);
    ClientCell = Parms.ClientCell;
}

void ADFMAbilityBarbedWireArea::DoHitExitTarget(struct AGPCharacter* Char, int32_t HitNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "DoHitExitTarget");
    struct
    {
        struct AGPCharacter* Char;
        int32_t HitNum;
    } Parms{};
    Parms.Char = (struct AGPCharacter*)Char;
    Parms.HitNum = (int32_t)HitNum;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBarbedWireArea::DoDestroyClientCell(int32_t ClientIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "DoDestroyClientCell");
    struct
    {
        int32_t ClientIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ClientIndex = (int32_t)ClientIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBarbedWireArea::DeleteLightingEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "DeleteLightingEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBarbedWireArea::DamageTakerModifyIndex(struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "DamageTakerModifyIndex");
    struct
    {
        struct FDamageResultInfo DamageResult;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    DamageResult = Parms.DamageResult;
    return Parms.ReturnValue;
}

void ADFMAbilityBarbedWireArea::CleanTargetsCurrFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CleanTargetsCurrFlag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::CheckTargetsExit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckTargetsExit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::CheckOwnerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckOwnerCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::CheckMaxDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckMaxDistance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::CheckMaxCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckMaxCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityBarbedWireArea::CheckFireArrowHasEnemy(struct AGPCharacterBase* FireArrowOwner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckFireArrowHasEnemy");
    struct
    {
        struct AGPCharacterBase* FireArrowOwner;
        uint8_t ReturnValue;
    } Parms{};
    Parms.FireArrowOwner = (struct AGPCharacterBase*)FireArrowOwner;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityBarbedWireArea::CheckEnemySkillComponentHitLimit(struct AGPCharacter* TargetChar, struct FVector TargetLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckEnemySkillComponentHitLimit");
    struct
    {
        struct AGPCharacter* TargetChar;
        struct FVector TargetLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetChar = (struct AGPCharacter*)TargetChar;
    Parms.TargetLocation = (struct FVector)TargetLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityBarbedWireArea::CheckDamageType(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckDamageType");
    struct
    {
        struct FDamageResultInfo DamageResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityBarbedWireArea::CheckCharacterMoveDistance(struct AGPCharacter* Char, uint8_t bIsCheckHit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckCharacterMoveDistance");
    struct
    {
        struct AGPCharacter* Char;
        uint8_t bIsCheckHit;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Char = (struct AGPCharacter*)Char;
    Parms.bIsCheckHit = (uint8_t)bIsCheckHit;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBarbedWireArea::CheckCenterMeshState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CheckCenterMeshState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBarbedWireArea::CancelInitSkin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBarbedWireArea", "CancelInitSkin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityBeacon
uint8_t ADFMAbilityBeacon::IsEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBeacon", "IsEnemy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityBeacon::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBeacon", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityBeacon::BP_TakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBeacon", "BP_TakeDamage");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityBlindingSmokeMine
void ADFMAbilityBlindingSmokeMine::TryExtinguishIncendiary()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "TryExtinguishIncendiary");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::TryActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "TryActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::RemoveVisualSmokeBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "RemoveVisualSmokeBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::OnServerMatchEnd(EMatchOverReason EndReason, int64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "OnServerMatchEnd");
    struct
    {
        enum EMatchOverReason EndReason;
        int64_t Uin;
    } Parms{};
    Parms.EndReason = (enum EMatchOverReason)EndReason;
    Parms.Uin = (int64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::OnRep_ActiveState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "OnRep_ActiveState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "OnCharacterDead");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::OnCharacterBeKnockedDown(struct FKillInfo& KillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "OnCharacterBeKnockedDown");
    struct
    {
        struct FKillInfo KillInfo;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    KillInfo = Parms.KillInfo;
}

void ADFMAbilityBlindingSmokeMine::OnCharacterArmedForceChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "OnCharacterArmedForceChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::MulticastClientActiveSmoke()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "MulticastClientActiveSmoke");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::DestroyIt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "DestroyIt");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::BP_OnActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "BP_OnActive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBlindingSmokeMine::AddVisualSmokeBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBlindingSmokeMine", "AddVisualSmokeBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilitySystemBase
void UDFMAbilitySystemBase::Update()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "Update");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::SystemEndPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "SystemEndPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::Rollback(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "Rollback");
    struct
    {
        struct UQA_AbilityLogicTask* QA;
        int32_t skillEntityIndex;
        int32_t LogicID;
    } Parms{};
    Parms.QA = (struct UQA_AbilityLogicTask*)QA;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::ReEnterSystemLogic(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID, float EnterTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "ReEnterSystemLogic");
    struct
    {
        struct UQA_AbilityLogicTask* QA;
        int32_t skillEntityIndex;
        int32_t LogicID;
        float EnterTime;
    } Parms{};
    Parms.QA = (struct UQA_AbilityLogicTask*)QA;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    Parms.EnterTime = (float)EnterTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::PreMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "PreMatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::PostLeaveSystemLogic(int32_t skillEntityIndex, int32_t LogicID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "PostLeaveSystemLogic");
    struct
    {
        int32_t skillEntityIndex;
        int32_t LogicID;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::OnUnNormalEnd(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "OnUnNormalEnd");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::OnRemoveSkillFromeCharacter(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "OnRemoveSkillFromeCharacter");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::OnNormalBreak(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "OnNormalBreak");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::OnCharacterDie(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "OnCharacterDie");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::LeaveSystemLogic(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "LeaveSystemLogic");
    struct
    {
        struct UQA_AbilityLogicTask* QA;
        int32_t skillEntityIndex;
        int32_t LogicID;
    } Parms{};
    Parms.QA = (struct UQA_AbilityLogicTask*)QA;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    this->ProcessEvent(Func, &Parms);
}

struct ASkillSubsystem* UDFMAbilitySystemBase::GetSkillSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "GetSkillSystem");
    struct
    {
        struct ASkillSubsystem* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UAbilityEntityManager* UDFMAbilitySystemBase::GetEntityMgr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "GetEntityMgr");
    struct
    {
        struct UAbilityEntityManager* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMAbilityInstance* UDFMAbilitySystemBase::GetAbility(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "GetAbility");
    struct
    {
        int32_t skillEntityIndex;
        struct UDFMAbilityInstance* ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAbilitySystemBase::EnterSystemLogic(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID, float EnterTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "EnterSystemLogic");
    struct
    {
        struct UQA_AbilityLogicTask* QA;
        int32_t skillEntityIndex;
        int32_t LogicID;
        float EnterTime;
    } Parms{};
    Parms.QA = (struct UQA_AbilityLogicTask*)QA;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    Parms.EnterTime = (float)EnterTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::EnableTick(uint8_t B, float InRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "EnableTick");
    struct
    {
        uint8_t B;
        float InRate;
    } Parms{};
    Parms.B = (uint8_t)B;
    Parms.InRate = (float)InRate;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::DoTrigger(int32_t skillEntityIndex, int32_t LogicID, EAbilityTriggerType Type, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "DoTrigger");
    struct
    {
        int32_t skillEntityIndex;
        int32_t LogicID;
        enum EAbilityTriggerType Type;
        int32_t Index;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    Parms.Type = (enum EAbilityTriggerType)Type;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::DisableTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "DisableTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilitySystemBase::CreateTypeView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySystemBase", "CreateTypeView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityBuffSystem
void UDFMAbilityBuffSystem::ProcessKillAward(struct UDFMCharacterBuffEntityBase* BuffEntity, int32_t skillEntityIndex, struct UQA_AbilityBuff* BuffQA, const struct FKillInfo& NewKillInfo, struct UGPModularWeaponDesc* Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffSystem", "ProcessKillAward");
    struct
    {
        struct UDFMCharacterBuffEntityBase* BuffEntity;
        int32_t skillEntityIndex;
        struct UQA_AbilityBuff* BuffQA;
        struct FKillInfo NewKillInfo;
        struct UGPModularWeaponDesc* Desc;
    } Parms{};
    Parms.BuffEntity = (struct UDFMCharacterBuffEntityBase*)BuffEntity;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.BuffQA = (struct UQA_AbilityBuff*)BuffQA;
    Parms.NewKillInfo = (struct FKillInfo)NewKillInfo;
    Parms.Desc = (struct UGPModularWeaponDesc*)Desc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityBuffSystem::OnPlayerKnockDown(const struct FKillInfo& NewAddKillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffSystem", "OnPlayerKnockDown");
    struct
    {
        struct FKillInfo NewAddKillInfo;
    } Parms{};
    Parms.NewAddKillInfo = (struct FKillInfo)NewAddKillInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityBuffSystem::OnKillAward(const struct FKillInfo& NewKillInfo, struct UGPModularWeaponDesc* Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffSystem", "OnKillAward");
    struct
    {
        struct FKillInfo NewKillInfo;
        struct UGPModularWeaponDesc* Desc;
    } Parms{};
    Parms.NewKillInfo = (struct FKillInfo)NewKillInfo;
    Parms.Desc = (struct UGPModularWeaponDesc*)Desc;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityBuffSystem::OnCharacterLiveStatusChanged(struct AGPCharacterBase* CharacterBase, ECharacterLiveStatus OldStatus, ECharacterLiveStatus NewStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffSystem", "OnCharacterLiveStatusChanged");
    struct
    {
        struct AGPCharacterBase* CharacterBase;
        enum ECharacterLiveStatus OldStatus;
        enum ECharacterLiveStatus NewStatus;
    } Parms{};
    Parms.CharacterBase = (struct AGPCharacterBase*)CharacterBase;
    Parms.OldStatus = (enum ECharacterLiveStatus)OldStatus;
    Parms.NewStatus = (enum ECharacterLiveStatus)NewStatus;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityBuffSystem::OnBuffRemove(struct UDFMCharacterBuffEntityBase* BuffEntityBase)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBuffSystem", "OnBuffRemove");
    struct
    {
        struct UDFMCharacterBuffEntityBase* BuffEntityBase;
    } Parms{};
    Parms.BuffEntityBase = (struct UDFMCharacterBuffEntityBase*)BuffEntityBase;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityBunkerPiece
void ADFMAbilityBunkerPiece::OnRep_Health()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBunkerPiece", "OnRep_Health");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityBunkerPiece::BP_TakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityBunkerPiece", "BP_TakeDamage");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityC204Interference
void ADFMAbilityC204Interference::RegisterFXComp(struct UFXResourceContainerComponent* TargetComp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityC204Interference", "RegisterFXComp");
    struct
    {
        struct UFXResourceContainerComponent* TargetComp;
    } Parms{};
    Parms.TargetComp = (struct UFXResourceContainerComponent*)TargetComp;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityC204Interference::PlayExplodeFX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityC204Interference", "PlayExplodeFX");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityC204Interference::InitData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityC204Interference", "InitData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityC204Interference::DoExplode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityC204Interference", "DoExplode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityC204Interference::DetectEnemy(struct ADFMCharacter* DFMChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityC204Interference", "DetectEnemy");
    struct
    {
        struct ADFMCharacter* DFMChar;
    } Parms{};
    Parms.DFMChar = (struct ADFMCharacter*)DFMChar;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityC204Interference::DestroyInterference()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityC204Interference", "DestroyInterference");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityCammyBulletDetector
void ADFMAbilityCammyBulletDetector::UnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityCammyBulletDetector", "UnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityCammyBulletDetector::OnTakeWeaponDamage(const struct FDamageResultInfo& DamageResultInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityCammyBulletDetector", "OnTakeWeaponDamage");
    struct
    {
        struct FDamageResultInfo DamageResultInfo;
    } Parms{};
    Parms.DamageResultInfo = (struct FDamageResultInfo)DamageResultInfo;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityCammyBulletDetector::OnServerPostRadialDamage(const struct FDamageSourceInfo& DamageSource, const struct TArray<struct FDamageResultInfo>& DamageResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityCammyBulletDetector", "OnServerPostRadialDamage");
    struct
    {
        struct FDamageSourceInfo DamageSource;
        struct TArray<struct FDamageResultInfo> DamageResults;
    } Parms{};
    Parms.DamageSource = (struct FDamageSourceInfo)DamageSource;
    Parms.DamageResults = (struct TArray<struct FDamageResultInfo>)DamageResults;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityCammyBulletDetector::OnRepUin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityCammyBulletDetector", "OnRepUin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityCammyBulletDetector::OnRepDetectRadius()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityCammyBulletDetector", "OnRepDetectRadius");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityCammyBulletDetector::OnBeDamage(const struct FDamageResultInfo& DamageResult, ECharacterPart& HitPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityCammyBulletDetector", "OnBeDamage");
    struct
    {
        struct FDamageResultInfo DamageResult;
        enum ECharacterPart HitPart;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
    HitPart = Parms.HitPart;
}

void ADFMAbilityCammyBulletDetector::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityCammyBulletDetector", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityClaymoreMine
void ADFMAbilityClaymoreMine::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityClaymoreMine", "OnOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityClaymoreMine::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityClaymoreMine", "OnOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityClaymoreMine::NotifyDoExplosion(uint8_t bHPEmpty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityClaymoreMine", "NotifyDoExplosion");
    struct
    {
        uint8_t bHPEmpty;
    } Parms{};
    Parms.bHPEmpty = (uint8_t)bHPEmpty;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityDamageTaker
uint8_t ADFMAbilityDamageTaker::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDamageTaker", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDamageTaker::BP_DetectorTakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDamageTaker", "BP_DetectorTakeDamage");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityDefaultSystem
void UDFMAbilityDefaultSystem::RecycleAttachMesh(int32_t skillEntityIndex, struct FName MeshName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDefaultSystem", "RecycleAttachMesh");
    struct
    {
        int32_t skillEntityIndex;
        struct FName MeshName;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityDefaultSystem::DestroyAttachMesh(int32_t skillEntityIndex, struct FName MeshName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDefaultSystem", "DestroyAttachMesh");
    struct
    {
        int32_t skillEntityIndex;
        struct FName MeshName;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityDefaultSystem::ClearAttachMeshData(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDefaultSystem", "ClearAttachMeshData");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityDefaultSystem::ClearAbilitySkeletalMeshData(struct FAbilitySkeletalMeshData& AbilitySkeletalMeshData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDefaultSystem", "ClearAbilitySkeletalMeshData");
    struct
    {
        struct FAbilitySkeletalMeshData AbilitySkeletalMeshData;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    AbilitySkeletalMeshData = Parms.AbilitySkeletalMeshData;
}

// ADFMAbilityDeformableSmokeActor
void ADFMAbilityDeformableSmokeActor::InitExtinguishComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDeformableSmokeActor", "InitExtinguishComp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDeformableSmokeActor::CreateExtinguishArea(struct FGPDeformableSmokePathPoint& PointSmokeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDeformableSmokeActor", "CreateExtinguishArea");
    struct
    {
        struct FGPDeformableSmokePathPoint PointSmokeData;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PointSmokeData = Parms.PointSmokeData;
}

void ADFMAbilityDeformableSmokeActor::ClearExtinguishArea(struct FGPDeformableSmokePathPoint& PointSmokeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDeformableSmokeActor", "ClearExtinguishArea");
    struct
    {
        struct FGPDeformableSmokePathPoint PointSmokeData;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PointSmokeData = Parms.PointSmokeData;
}

// ADFMAbilityDeformableThermalSmokeActor
void ADFMAbilityDeformableThermalSmokeActor::InitExtinguishComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDeformableThermalSmokeActor", "InitExtinguishComp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDeformableThermalSmokeActor::CreateExtinguishArea(struct FGPDeformableSmokePathPoint& PointSmokeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDeformableThermalSmokeActor", "CreateExtinguishArea");
    struct
    {
        struct FGPDeformableSmokePathPoint PointSmokeData;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PointSmokeData = Parms.PointSmokeData;
}

void ADFMAbilityDeformableThermalSmokeActor::ClearExtinguishArea(struct FGPDeformableSmokePathPoint& PointSmokeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDeformableThermalSmokeActor", "ClearExtinguishArea");
    struct
    {
        struct FGPDeformableSmokePathPoint PointSmokeData;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PointSmokeData = Parms.PointSmokeData;
}

// ADFMAbilityDetector
uint8_t ADFMAbilityDetector::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetector", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDetector::BP_UpdateDetectorWorldRange(float WorldRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetector", "BP_UpdateDetectorWorldRange");
    struct
    {
        float WorldRange;
    } Parms{};
    Parms.WorldRange = (float)WorldRange;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetector::BP_DetectorTakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetector", "BP_DetectorTakeDamage");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetector::BP_ClearMapIcon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetector", "BP_ClearMapIcon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDetector::BP_AssaultShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDetector", "BP_AssaultShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityDFMVehicle
void ADFMAbilityDFMVehicle::VehicleRecycle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "VehicleRecycle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::VehicleMovementModeChanged(struct ACHARACTER* CHARACTER, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "VehicleMovementModeChanged");
    struct
    {
        struct ACHARACTER* CHARACTER;
        enum EMovementMode PrevMovementMode;
        uint8_t PreviousCustomMode;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.PrevMovementMode = (enum EMovementMode)PrevMovementMode;
    Parms.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::VehicleEndOverlap(struct AActor* InTrigger, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "VehicleEndOverlap");
    struct
    {
        struct AActor* InTrigger;
        struct AActor* OtherActor;
    } Parms{};
    Parms.InTrigger = (struct AActor*)InTrigger;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::VehicleDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "VehicleDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::VehicleBeginOverlap(struct AActor* InTrigger, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "VehicleBeginOverlap");
    struct
    {
        struct AActor* InTrigger;
        struct AActor* OtherActor;
    } Parms{};
    Parms.InTrigger = (struct AActor*)InTrigger;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::UpdateMoveResult(struct FVector pos, struct FVector spos, struct FRotator Rot, float ForwardValue, float RightValue, uint8_t bJump)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "UpdateMoveResult");
    struct
    {
        struct FVector pos;
        struct FVector spos;
        struct FRotator Rot;
        float ForwardValue;
        float RightValue;
        uint8_t bJump;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.spos = (struct FVector)spos;
    Parms.Rot = (struct FRotator)Rot;
    Parms.ForwardValue = (float)ForwardValue;
    Parms.RightValue = (float)RightValue;
    Parms.bJump = (uint8_t)bJump;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::ShowLowPowerHud(uint8_t isShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "ShowLowPowerHud");
    struct
    {
        uint8_t isShow;
    } Parms{};
    Parms.isShow = (uint8_t)isShow;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::SetVehicleBehaviorForbit(EVehicleBehaviorForbit Behavior)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "SetVehicleBehaviorForbit");
    struct
    {
        enum EVehicleBehaviorForbit Behavior;
    } Parms{};
    Parms.Behavior = (enum EVehicleBehaviorForbit)Behavior;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::SetOperaterAbilityOffControlledVehicle(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "SetOperaterAbilityOffControlledVehicle");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::ServerStartBoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "ServerStartBoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::ServerOffOperate(uint8_t Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "ServerOffOperate");
    struct
    {
        uint8_t Delay;
    } Parms{};
    Parms.Delay = (uint8_t)Delay;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::ServerGetVehicleItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "ServerGetVehicleItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::OnRep_MovementEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "OnRep_MovementEnable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::NotifyServerStopLocalFocusDone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "NotifyServerStopLocalFocusDone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::NotifyHealthTakeHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "NotifyHealthTakeHit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityDFMVehicle::IsEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "IsEnemy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDFMVehicle::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDFMVehicle::IsCharacterEnemy(struct AGPCharacter* GPChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "IsCharacterEnemy");
    struct
    {
        struct AGPCharacter* GPChar;
        uint8_t ReturnValue;
    } Parms{};
    Parms.GPChar = (struct AGPCharacter*)GPChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDFMVehicle::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMCharacter* ADFMAbilityDFMVehicle::GetOperator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "GetOperator");
    struct
    {
        struct ADFMCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDFMVehicle::GetOff(uint8_t Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "GetOff");
    struct
    {
        uint8_t Delay;
    } Parms{};
    Parms.Delay = (uint8_t)Delay;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::DoServerStartBoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "DoServerStartBoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::ClientUpdateMoveResult(struct FVector pos, struct FRotator Rot, float ForwardValue, float RightValue, uint8_t bJump)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "ClientUpdateMoveResult");
    struct
    {
        struct FVector pos;
        struct FRotator Rot;
        float ForwardValue;
        float RightValue;
        uint8_t bJump;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.Rot = (struct FRotator)Rot;
    Parms.ForwardValue = (float)ForwardValue;
    Parms.RightValue = (float)RightValue;
    Parms.bJump = (uint8_t)bJump;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::ClientSetEngineVehicleIngore(struct ADFMCharacter* Char, uint8_t On)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "ClientSetEngineVehicleIngore");
    struct
    {
        struct ADFMCharacter* Char;
        uint8_t On;
    } Parms{};
    Parms.Char = (struct ADFMCharacter*)Char;
    Parms.On = (uint8_t)On;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityDFMVehicle::CheckVehicleBehaviorForbit(EVehicleBehaviorForbit Behavior)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "CheckVehicleBehaviorForbit");
    struct
    {
        enum EVehicleBehaviorForbit Behavior;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Behavior = (enum EVehicleBehaviorForbit)Behavior;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityDFMVehicle::CanMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "CanMove");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDFMVehicle::BroadCastEnginVehicleLowPowerToGetOff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BroadCastEnginVehicleLowPowerToGetOff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BroadCastEnginVehicleDestroyToHud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BroadCastEnginVehicleDestroyToHud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BroadCastAbilityVehicleDestroy(EAbilityVehicleDestroyReason Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BroadCastAbilityVehicleDestroy");
    struct
    {
        enum EAbilityVehicleDestroyReason Reason;
    } Parms{};
    Parms.Reason = (enum EAbilityVehicleDestroyReason)Reason;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_VehicleTakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_VehicleTakeDamage");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_TurnLookUpAtRate(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_TurnLookUpAtRate");
    struct
    {
        float Rate;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_StartBoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_StartBoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_OwnerAssaultShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_OwnerAssaultShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_OnOperateDie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_OnOperateDie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_OnOperate(uint8_t On)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_OnOperate");
    struct
    {
        uint8_t On;
    } Parms{};
    Parms.On = (uint8_t)On;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_MoveRight(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_MoveRight");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_MoveForward(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_MoveForward");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_Jump()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_Jump");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDFMVehicle::BP_GetVehicleItems()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_GetVehicleItems");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float ADFMAbilityDFMVehicle::BP_GetPowerPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_GetPowerPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADFMAbilityDFMVehicle::BP_GetMarkableHealthPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_GetMarkableHealthPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityDFMVehicle::BP_AssaultShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDFMVehicle", "BP_AssaultShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityDun
void ADFMAbilityDun::OnSprintStateChange(uint8_t bCurSprintState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDun", "OnSprintStateChange");
    struct
    {
        uint8_t bCurSprintState;
    } Parms{};
    Parms.bCurSprintState = (uint8_t)bCurSprintState;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityDun::FireProjectile(struct UDFMAbilityInstance* Instance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityDun", "FireProjectile");
    struct
    {
        struct UDFMAbilityInstance* Instance;
    } Parms{};
    Parms.Instance = (struct UDFMAbilityInstance*)Instance;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityElectricShockBomb
void ADFMAbilityElectricShockBomb::StartShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "StartShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::SetProjFlyTime(float FlyTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "SetProjFlyTime");
    struct
    {
        float FlyTime;
    } Parms{};
    Parms.FlyTime = (float)FlyTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::OnRep_bDrilled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "OnRep_bDrilled");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::NotifyPlayImpact(struct FVector Point)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "NotifyPlayImpact");
    struct
    {
        struct FVector Point;
    } Parms{};
    Parms.Point = (struct FVector)Point;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::MultCastElecStickInfo(uint8_t bHitCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "MultCastElecStickInfo");
    struct
    {
        uint8_t bHitCharacter;
    } Parms{};
    Parms.bHitCharacter = (uint8_t)bHitCharacter;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::EndShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "EndShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::DoShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "DoShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::DisableCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "DisableCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::ClientStartShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "ClientStartShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityElectricShockBomb::ClientDoShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityElectricShockBomb", "ClientDoShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityEMPBullet
void ADFMAbilityEMPBullet::SpawnSubBullet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityEMPBullet", "SpawnSubBullet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityEMPBullet::DoSpawnSubBullet(const struct FVector& Location, const struct FRotator& Rotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityEMPBullet", "DoSpawnSubBullet");
    struct
    {
        struct FVector Location;
        struct FRotator Rotator;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotator = (struct FRotator)Rotator;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityEMPGrenade
void ADFMAbilityEMPGrenade::StopCountDownStartSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityEMPGrenade", "StopCountDownStartSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityEMPGrenade::PlayCountDownStartSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityEMPGrenade", "PlayCountDownStartSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityEMPGrenade::DataFlowOldDengAddEMPHitPlayerCount(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityEMPGrenade", "DataFlowOldDengAddEMPHitPlayerCount");
    struct
    {
        struct AGPCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityEMPGrenade::DataFlowOldDengAddEMPCastCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityEMPGrenade", "DataFlowOldDengAddEMPCastCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityEMPLauncherGrenade
void ADFMAbilityEMPLauncherGrenade::DataFlowOldDengAddEMPHitPlayerCount(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityEMPLauncherGrenade", "DataFlowOldDengAddEMPHitPlayerCount");
    struct
    {
        struct AGPCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityEMPSubBullet
void ADFMAbilityEMPSubBullet::InitBulletInfo(struct ADFMAbilityEMPBullet* EMPBullet, const struct FWeaponBulletBaseInitParam& ParentParam, const struct FRotator& Rotator, const float& RandomDelay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityEMPSubBullet", "InitBulletInfo");
    struct
    {
        struct ADFMAbilityEMPBullet* EMPBullet;
        struct FWeaponBulletBaseInitParam ParentParam;
        struct FRotator Rotator;
        float RandomDelay;
    } Parms{};
    Parms.EMPBullet = (struct ADFMAbilityEMPBullet*)EMPBullet;
    Parms.ParentParam = (struct FWeaponBulletBaseInitParam)ParentParam;
    Parms.Rotator = (struct FRotator)Rotator;
    Parms.RandomDelay = (float)RandomDelay;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityFireArrow
void ADFMAbilityFireArrow::StopFireArrowDamage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "StopFireArrowDamage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::SetFlyDistance(float FlyDis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "SetFlyDistance");
    struct
    {
        float FlyDis;
    } Parms{};
    Parms.FlyDis = (float)FlyDis;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::Rep_StopDamage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "Rep_StopDamage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::PullOut()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "PullOut");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::MakeDamage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "MakeDamage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityFireArrow::IsTeammateNoMe(struct AGPCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "IsTeammateNoMe");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityFireArrow::IsOnwerEnemyWithVehicle(struct ADFMVehicleBase* Vehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "IsOnwerEnemyWithVehicle");
    struct
    {
        struct ADFMVehicleBase* Vehicle;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityFireArrow::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityFireArrow::ClientOnOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "ClientOnOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::ClientOnOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "ClientOnOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComp;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComp = (struct UPrimitiveComponent*)OverlappedComp;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::CheckBarbedWireDamage(struct AGPCharacter* Target, uint8_t bIsOverlapEnemy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "CheckBarbedWireDamage");
    struct
    {
        struct AGPCharacter* Target;
        uint8_t bIsOverlapEnemy;
    } Parms{};
    Parms.Target = (struct AGPCharacter*)Target;
    Parms.bIsOverlapEnemy = (uint8_t)bIsOverlapEnemy;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::BP_StopElectricEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "BP_StopElectricEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::BP_PlayElectricEffect(struct FVector TargetPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "BP_PlayElectricEffect");
    struct
    {
        struct FVector TargetPos;
    } Parms{};
    Parms.TargetPos = (struct FVector)TargetPos;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::AddScoreInfo(EScoreName ScoreType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "AddScoreInfo");
    struct
    {
        enum EScoreName ScoreType;
    } Parms{};
    Parms.ScoreType = (enum EScoreName)ScoreType;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFireArrow::AddHitTarget(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "AddHitTarget");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityFireArrow::ActorIsLocal(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFireArrow", "ActorIsLocal");
    struct
    {
        struct AActor* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityFlyRebot
void ADFMAbilityFlyRebot::VehicleMovementModeChanged(struct ACHARACTER* CHARACTER, EMovementMode PrevMovementMode, uint8_t PreviousCustomMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "VehicleMovementModeChanged");
    struct
    {
        struct ACHARACTER* CHARACTER;
        enum EMovementMode PrevMovementMode;
        uint8_t PreviousCustomMode;
    } Parms{};
    Parms.CHARACTER = (struct ACHARACTER*)CHARACTER;
    Parms.PrevMovementMode = (enum EMovementMode)PrevMovementMode;
    Parms.PreviousCustomMode = (uint8_t)PreviousCustomMode;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::UpdateMoveResult(struct FVector pos, struct FVector spos, struct FRotator Rot, float ForwardValue, float RightValue, uint8_t bJump)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "UpdateMoveResult");
    struct
    {
        struct FVector pos;
        struct FVector spos;
        struct FRotator Rot;
        float ForwardValue;
        float RightValue;
        uint8_t bJump;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.spos = (struct FVector)spos;
    Parms.Rot = (struct FRotator)Rot;
    Parms.ForwardValue = (float)ForwardValue;
    Parms.RightValue = (float)RightValue;
    Parms.bJump = (uint8_t)bJump;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::SetVehicleBehaviorForbit(EVehicleBehaviorForbit Behavior)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "SetVehicleBehaviorForbit");
    struct
    {
        enum EVehicleBehaviorForbit Behavior;
    } Parms{};
    Parms.Behavior = (enum EVehicleBehaviorForbit)Behavior;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::ServerOffOperate(float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "ServerOffOperate");
    struct
    {
        float Delay;
    } Parms{};
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::OnRep_MovementEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "OnRep_MovementEnable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityFlyRebot::IsEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "IsEnemy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityFlyRebot::IsCharacterEnemy(struct AGPCharacter* GPChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "IsCharacterEnemy");
    struct
    {
        struct AGPCharacter* GPChar;
        uint8_t ReturnValue;
    } Parms{};
    Parms.GPChar = (struct AGPCharacter*)GPChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityFlyRebot::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPSlotChargingComponent* ADFMAbilityFlyRebot::GetSlotCharging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "GetSlotCharging");
    struct
    {
        struct UGPSlotChargingComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMCharacter* ADFMAbilityFlyRebot::GetOperator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "GetOperator");
    struct
    {
        struct ADFMCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityFlyRebot::ClientUpdateMoveResult(struct FVector pos, struct FRotator Rot, float ForwardValue, float RightValue, uint8_t bJump)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "ClientUpdateMoveResult");
    struct
    {
        struct FVector pos;
        struct FRotator Rot;
        float ForwardValue;
        float RightValue;
        uint8_t bJump;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.Rot = (struct FRotator)Rot;
    Parms.ForwardValue = (float)ForwardValue;
    Parms.RightValue = (float)RightValue;
    Parms.bJump = (uint8_t)bJump;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::ClientSetEngineVehicleIngore(struct ADFMCharacter* Char, uint8_t On)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "ClientSetEngineVehicleIngore");
    struct
    {
        struct ADFMCharacter* Char;
        uint8_t On;
    } Parms{};
    Parms.Char = (struct ADFMCharacter*)Char;
    Parms.On = (uint8_t)On;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityFlyRebot::CheckVehicleBehaviorForbit(EVehicleBehaviorForbit Behavior)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "CheckVehicleBehaviorForbit");
    struct
    {
        enum EVehicleBehaviorForbit Behavior;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Behavior = (enum EVehicleBehaviorForbit)Behavior;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityFlyRebot::CanMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "CanMove");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityFlyRebot::BP_TurnLookUpAtRate(float Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "BP_TurnLookUpAtRate");
    struct
    {
        float Rate;
    } Parms{};
    Parms.Rate = (float)Rate;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::BP_OnOperateDie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "BP_OnOperateDie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::BP_OnOperate(uint8_t On)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "BP_OnOperate");
    struct
    {
        uint8_t On;
    } Parms{};
    Parms.On = (uint8_t)On;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::BP_OnFouce(uint8_t On)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "BP_OnFouce");
    struct
    {
        uint8_t On;
    } Parms{};
    Parms.On = (uint8_t)On;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::BP_MoveUp(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "BP_MoveUp");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::BP_MoveRight(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "BP_MoveRight");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::BP_MoveForward(int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "BP_MoveForward");
    struct
    {
        int32_t Value;
    } Parms{};
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::BP_GetOff(float Delay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "BP_GetOff");
    struct
    {
        float Delay;
    } Parms{};
    Parms.Delay = (float)Delay;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityFlyRebot::AddToAIGrende()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityFlyRebot", "AddToAIGrende");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityGameStateComponent
void UDFMAbilityGameStateComponent::Rep_AbilityTemplateRepData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityGameStateComponent", "Rep_AbilityTemplateRepData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityGameStateComponent::Rep_AbilityIndexRam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityGameStateComponent", "Rep_AbilityIndexRam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityGameStateComponent::OnScoreDiscoutPreLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityGameStateComponent", "OnScoreDiscoutPreLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityGameStateComponent::OnAddDamageModifyItem(struct FName Item, float Value, uint64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityGameStateComponent", "OnAddDamageModifyItem");
    struct
    {
        struct FName Item;
        float Value;
        uint64_t Uin;
    } Parms{};
    Parms.Item = (struct FName)Item;
    Parms.Value = (float)Value;
    Parms.Uin = (uint64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

int64_t UDFMAbilityGameStateComponent::GetSkillIDUniSkill(int64_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityGameStateComponent", "GetSkillIDUniSkill");
    struct
    {
        int64_t SkillId;
        int64_t ReturnValue;
    } Parms{};
    Parms.SkillId = (int64_t)SkillId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UDFMAbilityGameStateComponent::GetSkillIDUniNum(int64_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityGameStateComponent", "GetSkillIDUniNum");
    struct
    {
        int64_t SkillId;
        int64_t ReturnValue;
    } Parms{};
    Parms.SkillId = (int64_t)SkillId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityIncendiaryArea
uint8_t ADFMAbilityIncendiaryArea::TryFullEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "TryFullEffect");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityIncendiaryArea::TryAutoFitDecalTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "TryAutoFitDecalTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::TickCheckExtinguishCell()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "TickCheckExtinguishCell");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::TickCheckEffectOverlap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "TickCheckEffectOverlap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityIncendiaryArea::SpawnCellPS(int32_t CellIdx, float MaxHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "SpawnCellPS");
    struct
    {
        int32_t CellIdx;
        float MaxHeight;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    Parms.MaxHeight = (float)MaxHeight;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityIncendiaryArea::SetFullEffectState(uint8_t bIsShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "SetFullEffectState");
    struct
    {
        uint8_t bIsShow;
    } Parms{};
    Parms.bIsShow = (uint8_t)bIsShow;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::SetExtinguishFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "SetExtinguishFlag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::RemoveIncendiarySphere(int32_t uid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "RemoveIncendiarySphere");
    struct
    {
        int32_t uid;
    } Parms{};
    Parms.uid = (int32_t)uid;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::RealDoHitActor(struct AActor* HitTarget, int32_t AttackerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "RealDoHitActor");
    struct
    {
        struct AActor* HitTarget;
        int32_t AttackerId;
    } Parms{};
    Parms.HitTarget = (struct AActor*)HitTarget;
    Parms.AttackerId = (int32_t)AttackerId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::OnAbilityIncendiaryAreaSpawned(struct AActor* IncendiaryAreaActor, int32_t InSourceVehicleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "OnAbilityIncendiaryAreaSpawned");
    struct
    {
        struct AActor* IncendiaryAreaActor;
        int32_t InSourceVehicleId;
    } Parms{};
    Parms.IncendiaryAreaActor = (struct AActor*)IncendiaryAreaActor;
    Parms.InSourceVehicleId = (int32_t)InSourceVehicleId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::MulticastPlayExtinguishAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "MulticastPlayExtinguishAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityIncendiaryArea::IsNeedCheckEffectMaxIgnoreOverlapRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "IsNeedCheckEffectMaxIgnoreOverlapRate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityIncendiaryArea::IsInExtinguishArea(const struct FVector& CellCenter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "IsInExtinguishArea");
    struct
    {
        struct FVector CellCenter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CellCenter = (struct FVector)CellCenter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName ADFMAbilityIncendiaryArea::GetCellPSName(int32_t CellIdx, uint8_t bIsOnWater)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "GetCellPSName");
    struct
    {
        int32_t CellIdx;
        uint8_t bIsOnWater;
        struct FName ReturnValue;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    Parms.bIsOnWater = (uint8_t)bIsOnWater;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPAbilityGameStateComponent* ADFMAbilityIncendiaryArea::GetAbilityGameStateComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "GetAbilityGameStateComponent");
    struct
    {
        struct UGPAbilityGameStateComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityIncendiaryArea::FindAllExtinguishComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "FindAllExtinguishComponents");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::EmptyAllExtinguishComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "EmptyAllExtinguishComponents");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UMeshComponent* ADFMAbilityIncendiaryArea::DoSpawnMeshComponent(int32_t CellIdx, struct FVector& BaseLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DoSpawnMeshComponent");
    struct
    {
        int32_t CellIdx;
        struct FVector BaseLocation;
        struct UMeshComponent* ReturnValue;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    this->ProcessEvent(Func, &Parms);
    BaseLocation = Parms.BaseLocation;
    return Parms.ReturnValue;
}

struct UFXResourceContainerComponent* ADFMAbilityIncendiaryArea::DoSpawnEffect(int32_t CellIdx, float MaxHeight, struct FVector& BaseLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DoSpawnEffect");
    struct
    {
        int32_t CellIdx;
        float MaxHeight;
        struct FVector BaseLocation;
        struct UFXResourceContainerComponent* ReturnValue;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    Parms.MaxHeight = (float)MaxHeight;
    this->ProcessEvent(Func, &Parms);
    BaseLocation = Parms.BaseLocation;
    return Parms.ReturnValue;
}

void ADFMAbilityIncendiaryArea::DoHitBreakableItem(struct ABreakableItemBase* BreakableItem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DoHitBreakableItem");
    struct
    {
        struct ABreakableItemBase* BreakableItem;
    } Parms{};
    Parms.BreakableItem = (struct ABreakableItemBase*)BreakableItem;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::DoHitAbilityActor(struct AActor* HitTarget, struct AActor* HitTargetOwner, int32_t HitTargetSkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DoHitAbilityActor");
    struct
    {
        struct AActor* HitTarget;
        struct AActor* HitTargetOwner;
        int32_t HitTargetSkillId;
    } Parms{};
    Parms.HitTarget = (struct AActor*)HitTarget;
    Parms.HitTargetOwner = (struct AActor*)HitTargetOwner;
    Parms.HitTargetSkillId = (int32_t)HitTargetSkillId;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityIncendiaryArea::DoExtinguishSphere(struct USphereComponent* SphereComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DoExtinguishSphere");
    struct
    {
        struct USphereComponent* SphereComponent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SphereComponent = (struct USphereComponent*)SphereComponent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityIncendiaryArea::DoExtinguishClientCell(int32_t ClientIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DoExtinguishClientCell");
    struct
    {
        int32_t ClientIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ClientIndex = (int32_t)ClientIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityIncendiaryArea::DoExtinguishBox(struct UBoxComponent* BoxComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DoExtinguishBox");
    struct
    {
        struct UBoxComponent* BoxComponent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BoxComponent = (struct UBoxComponent*)BoxComponent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityIncendiaryArea::DoExtinguish(struct UShapeComponent* ExtinguishRange)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DoExtinguish");
    struct
    {
        struct UShapeComponent* ExtinguishRange;
    } Parms{};
    Parms.ExtinguishRange = (struct UShapeComponent*)ExtinguishRange;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::DataFlowAddExtinguishedNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "DataFlowAddExtinguishedNum");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryArea::CustomDoExtinguish(struct FBox Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "CustomDoExtinguish");
    struct
    {
        struct FBox Box;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityIncendiaryArea::CheckSyncFullEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "CheckSyncFullEffect");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityIncendiaryArea::CheckForceFullEffectDistance(uint8_t CheckExit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "CheckForceFullEffectDistance");
    struct
    {
        uint8_t CheckExit;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CheckExit = (uint8_t)CheckExit;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityIncendiaryArea::CheckEffectMinIgnoreOverlapRate(int32_t CellIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "CheckEffectMinIgnoreOverlapRate");
    struct
    {
        int32_t CellIdx;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CellIdx = (int32_t)CellIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityIncendiaryArea::AddIncendiarySphere(struct FVector Center, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryArea", "AddIncendiarySphere");
    struct
    {
        struct FVector Center;
        float radius;
        int32_t ReturnValue;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityIncendiaryGrenade
void ADFMAbilityIncendiaryGrenade::TryStickyToTarget(struct ADFMAbilityDiffuseArea* Area)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryGrenade", "TryStickyToTarget");
    struct
    {
        struct ADFMAbilityDiffuseArea* Area;
    } Parms{};
    Parms.Area = (struct ADFMAbilityDiffuseArea*)Area;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityIncendiaryGrenade::TrySpawnIncendiaryActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryGrenade", "TrySpawnIncendiaryActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityIncendiaryGrenade::IsHitGroundBase(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryGrenade", "IsHitGroundBase");
    struct
    {
        struct FHitResult ImpactResult;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ADFMAbilityIncendiaryGrenade::CheckAreaPlaneSize(struct FVector AreaLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityIncendiaryGrenade", "CheckAreaPlaneSize");
    struct
    {
        struct FVector AreaLocation;
        struct FVector ReturnValue;
    } Parms{};
    Parms.AreaLocation = (struct FVector)AreaLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMAbilityInstanceAdvancedScan
void UDFMAbilityInstanceAdvancedScan::OnScanResult(int32_t InSkillId, const struct TArray<struct AActor*>& InScanArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceAdvancedScan", "OnScanResult");
    struct
    {
        int32_t InSkillId;
        struct TArray<struct AActor*> InScanArray;
    } Parms{};
    Parms.InSkillId = (int32_t)InSkillId;
    Parms.InScanArray = (struct TArray<struct AActor*>)InScanArray;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceAdvancedScan::OnFindPathResult(int32_t InSkillId, struct AActor* PlayerTarget, const struct TArray<struct FVector>& Paths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceAdvancedScan", "OnFindPathResult");
    struct
    {
        int32_t InSkillId;
        struct AActor* PlayerTarget;
        struct TArray<struct FVector> Paths;
    } Parms{};
    Parms.InSkillId = (int32_t)InSkillId;
    Parms.PlayerTarget = (struct AActor*)PlayerTarget;
    Parms.Paths = (struct TArray<struct FVector>)Paths;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceAdvancedScan::EndScan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceAdvancedScan", "EndScan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceAdvancedScan::BeginScan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceAdvancedScan", "BeginScan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceRankSkill
void UDFMAbilityInstanceRankSkill::UpdateRankSkillState(uint8_t RefreshReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRankSkill", "UpdateRankSkillState");
    struct
    {
        uint8_t RefreshReason;
    } Parms{};
    Parms.RefreshReason = (uint8_t)RefreshReason;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceRankSkill::OnSectorTransEnd(int32_t ActiveID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRankSkill", "OnSectorTransEnd");
    struct
    {
        int32_t ActiveID;
    } Parms{};
    Parms.ActiveID = (int32_t)ActiveID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceRankSkill::EnableHudStateCheck(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRankSkill", "EnableHudStateCheck");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceRankSkill::CheckHudStateValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRankSkill", "CheckHudStateValid");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceAssault
void UDFMAbilityInstanceAssault::OnPlayerSlidingTackle(struct AGPCharacter* GPChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceAssault", "OnPlayerSlidingTackle");
    struct
    {
        struct AGPCharacter* GPChar;
    } Parms{};
    Parms.GPChar = (struct AGPCharacter*)GPChar;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceBlastShield
void UDFMAbilityInstanceBlastShield::ShowTipsForSwitchWeapon(ECharacterFSMEventDefine Event, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceBlastShield", "ShowTipsForSwitchWeapon");
    struct
    {
        enum ECharacterFSMEventDefine Event;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.Event = (enum ECharacterFSMEventDefine)Event;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceBlastShield::OnServerRemoveBuff(uint32_t BuffId, ECharacterPart Part)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceBlastShield", "OnServerRemoveBuff");
    struct
    {
        uint32_t BuffId;
        enum ECharacterPart Part;
    } Parms{};
    Parms.BuffId = (uint32_t)BuffId;
    Parms.Part = (enum ECharacterPart)Part;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceBlastShield::OnServerAddBuff(uint32_t BuffId, ECharacterPart Part)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceBlastShield", "OnServerAddBuff");
    struct
    {
        uint32_t BuffId;
        enum ECharacterPart Part;
    } Parms{};
    Parms.BuffId = (uint32_t)BuffId;
    Parms.Part = (enum ECharacterPart)Part;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceMine
void UDFMAbilityInstanceMine::OnAbilitySpawnActorCreated(struct AActor* CharacterOwner, struct AActor* SpawnActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceMine", "OnAbilitySpawnActorCreated");
    struct
    {
        struct AActor* CharacterOwner;
        struct AActor* SpawnActor;
    } Parms{};
    Parms.CharacterOwner = (struct AActor*)CharacterOwner;
    Parms.SpawnActor = (struct AActor*)SpawnActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceMine::ListenSpawnActorCreate(struct AActor* SpawnActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceMine", "ListenSpawnActorCreate");
    struct
    {
        struct AActor* SpawnActor;
    } Parms{};
    Parms.SpawnActor = (struct AActor*)SpawnActor;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceCommanderRankSkill
void UDFMAbilityInstanceCommanderRankSkill::UpdateCommanderRankSkillState(uint8_t RefreshReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceCommanderRankSkill", "UpdateCommanderRankSkillState");
    struct
    {
        uint8_t RefreshReason;
    } Parms{};
    Parms.RefreshReason = (uint8_t)RefreshReason;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceCommanderRankSkill::OnSectorTransEnd(int32_t ActiveID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceCommanderRankSkill", "OnSectorTransEnd");
    struct
    {
        int32_t ActiveID;
    } Parms{};
    Parms.ActiveID = (int32_t)ActiveID;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceCruiseMissile
void UDFMAbilityInstanceCruiseMissile::OnPassiveMoveAction(uint8_t IsActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceCruiseMissile", "OnPassiveMoveAction");
    struct
    {
        uint8_t IsActive;
    } Parms{};
    Parms.IsActive = (uint8_t)IsActive;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceCruiseMissile::OnEscaping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceCruiseMissile", "OnEscaping");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceCruiseMissile::OnBeingAssassinate(uint8_t bCarried)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceCruiseMissile", "OnBeingAssassinate");
    struct
    {
        uint8_t bCarried;
    } Parms{};
    Parms.bCarried = (uint8_t)bCarried;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceDefense
void UDFMAbilityInstanceDefense::OnSkillPropSpawned(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceDefense", "OnSkillPropSpawned");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceDefense::OnSkillPropDestroyed(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceDefense", "OnSkillPropDestroyed");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceDefense::CheckNeedAddBuff()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceDefense", "CheckNeedAddBuff");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceEngineer
void UDFMAbilityInstanceEngineer::SetEngineVehicleRecycleData(float HealthPercent, float PowerPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "SetEngineVehicleRecycleData");
    struct
    {
        float HealthPercent;
        float PowerPercent;
    } Parms{};
    Parms.HealthPercent = (float)HealthPercent;
    Parms.PowerPercent = (float)PowerPercent;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::SetButtonVisible(uint8_t Visible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "SetButtonVisible");
    struct
    {
        uint8_t Visible;
    } Parms{};
    Parms.Visible = (uint8_t)Visible;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::ResetEngineVehicleRecycleData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "ResetEngineVehicleRecycleData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::OverrideSkillUISlot(uint8_t bOverride, ESkillUISlot NewUISlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "OverrideSkillUISlot");
    struct
    {
        uint8_t bOverride;
        enum ESkillUISlot NewUISlot;
    } Parms{};
    Parms.bOverride = (uint8_t)bOverride;
    Parms.NewUISlot = (enum ESkillUISlot)NewUISlot;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::OnAddDamageModifyItem(struct FName Item, float Value, struct AGPCharacterBase* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "OnAddDamageModifyItem");
    struct
    {
        struct FName Item;
        float Value;
        struct AGPCharacterBase* CHARACTER;
    } Parms{};
    Parms.Item = (struct FName)Item;
    Parms.Value = (float)Value;
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::OnAbilitySpawnActorTrigger(struct AActor* CharacterOwner, struct AActor* SpawnActor, int32_t TriggerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "OnAbilitySpawnActorTrigger");
    struct
    {
        struct AActor* CharacterOwner;
        struct AActor* SpawnActor;
        int32_t TriggerType;
    } Parms{};
    Parms.CharacterOwner = (struct AActor*)CharacterOwner;
    Parms.SpawnActor = (struct AActor*)SpawnActor;
    Parms.TriggerType = (int32_t)TriggerType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::OnAbilitySpawnActorCreated(struct AActor* CharacterOwner, struct AActor* SpawnActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "OnAbilitySpawnActorCreated");
    struct
    {
        struct AActor* CharacterOwner;
        struct AActor* SpawnActor;
    } Parms{};
    Parms.CharacterOwner = (struct AActor*)CharacterOwner;
    Parms.SpawnActor = (struct AActor*)SpawnActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::ListenSpawnActorTrigger(EAbilityDetectorTriggerType TriggerType, struct AActor* SpawnActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "ListenSpawnActorTrigger");
    struct
    {
        enum EAbilityDetectorTriggerType TriggerType;
        struct AActor* SpawnActor;
    } Parms{};
    Parms.TriggerType = (enum EAbilityDetectorTriggerType)TriggerType;
    Parms.SpawnActor = (struct AActor*)SpawnActor;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::ListenSpawnActorCreate(struct AActor* SpawnActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "ListenSpawnActorCreate");
    struct
    {
        struct AActor* SpawnActor;
    } Parms{};
    Parms.SpawnActor = (struct AActor*)SpawnActor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMAbilityInstanceEngineer::IsVehicleValid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "IsVehicleValid");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAbilityInstanceEngineer::EngineVehivleStopCharging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "EngineVehivleStopCharging");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceEngineer::EngineVehicleStartCharging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceEngineer", "EngineVehicleStartCharging");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceMauriceAura
void UDFMAbilityInstanceMauriceAura::CheckAuraLogic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceMauriceAura", "CheckAuraLogic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceRelink
void UDFMAbilityInstanceRelink::OnRelinkEnableInfoChange(struct AGPCharacter* CHARACTER, struct FRelinkEnableInfo RelinkEnableInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRelink", "OnRelinkEnableInfoChange");
    struct
    {
        struct AGPCharacter* CHARACTER;
        struct FRelinkEnableInfo RelinkEnableInfo;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.RelinkEnableInfo = (struct FRelinkEnableInfo)RelinkEnableInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceRelink::OnLocalFocusChange(struct AActor* OldTarget, struct AActor* NewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRelink", "OnLocalFocusChange");
    struct
    {
        struct AActor* OldTarget;
        struct AActor* NewTarget;
    } Parms{};
    Parms.OldTarget = (struct AActor*)OldTarget;
    Parms.NewTarget = (struct AActor*)NewTarget;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceRemoteVehicle
void UDFMAbilityInstanceRemoteVehicle::OnPassiveMoveAction(uint8_t IsActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRemoteVehicle", "OnPassiveMoveAction");
    struct
    {
        uint8_t IsActive;
    } Parms{};
    Parms.IsActive = (uint8_t)IsActive;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceRemoteVehicle::OnEscaping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRemoteVehicle", "OnEscaping");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceRemoteVehicle::OnBeingAssassinate(uint8_t bCarried)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRemoteVehicle", "OnBeingAssassinate");
    struct
    {
        uint8_t bCarried;
    } Parms{};
    Parms.bCarried = (uint8_t)bCarried;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceSelfCure
void UDFMAbilityInstanceSelfCure::OnCharaterHealthChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceSelfCure", "OnCharaterHealthChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceSelfCure::ListenHealthEvent(int32_t change, int32_t cur, int32_t Max, float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceSelfCure", "ListenHealthEvent");
    struct
    {
        int32_t change;
        int32_t cur;
        int32_t Max;
        float Percent;
    } Parms{};
    Parms.change = (int32_t)change;
    Parms.cur = (int32_t)cur;
    Parms.Max = (int32_t)Max;
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
}

struct FText UDFMAbilityInstanceSelfCure::GetHealthTipsActionText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceSelfCure", "GetHealthTipsActionText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UDFMAbilityInstanceSelfCure::GetHealthTipsActionName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceSelfCure", "GetHealthTipsActionName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMAbilityInstanceSmokeWall
void UDFMAbilityInstanceSmokeWall::OnClientInputLieDownEvent(ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceSmokeWall", "OnClientInputLieDownEvent");
    struct
    {
        enum ECharacterFSMEventDefine FSMEvent;
        float Value;
        struct UObject* EventObject;
    } Parms{};
    Parms.FSMEvent = (enum ECharacterFSMEventDefine)FSMEvent;
    Parms.Value = (float)Value;
    Parms.EventObject = (struct UObject*)EventObject;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityLevelActorManager
void ADFMAbilityLevelActorManager::UnRegisterProjectile(struct AGPWeaponBulletBase* InProjectile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLevelActorManager", "UnRegisterProjectile");
    struct
    {
        struct AGPWeaponBulletBase* InProjectile;
    } Parms{};
    Parms.InProjectile = (struct AGPWeaponBulletBase*)InProjectile;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLevelActorManager::RegisterProjectile(struct AGPWeaponBulletBase* InProjectile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLevelActorManager", "RegisterProjectile");
    struct
    {
        struct AGPWeaponBulletBase* InProjectile;
    } Parms{};
    Parms.InProjectile = (struct AGPWeaponBulletBase*)InProjectile;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLevelActorManager::OnServerArenaRoundRearrange(int32_t InRound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLevelActorManager", "OnServerArenaRoundRearrange");
    struct
    {
        int32_t InRound;
    } Parms{};
    Parms.InRound = (int32_t)InRound;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLevelActorManager::OnBattleFieldPropSkillChanged(struct AGPCharacter* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLevelActorManager", "OnBattleFieldPropSkillChanged");
    struct
    {
        struct AGPCharacter* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct AGPCharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityLevelActorManager::IsServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLevelActorManager", "IsServer");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityLogicTemplate
void ADFMAbilityLogicTemplate::WeaponProjectileSpawnActorCallback(int32_t skillEntityIndex, int32_t LogicID, struct AActor* Actor, struct FName ActorName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "WeaponProjectileSpawnActorCallback");
    struct
    {
        int32_t skillEntityIndex;
        int32_t LogicID;
        struct AActor* Actor;
        struct FName ActorName;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    Parms.Actor = (struct AActor*)Actor;
    Parms.ActorName = (struct FName)ActorName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::UpdateFootStepAudioStyleID(int32_t skillEntityIndex, int32_t AudioStyleId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "UpdateFootStepAudioStyleID");
    struct
    {
        int32_t skillEntityIndex;
        int32_t AudioStyleId;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.AudioStyleId = (int32_t)AudioStyleId;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::UpdateAvatarMesh1P(int32_t skillEntityIndex, struct FName MeshName, uint8_t bIs1P)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "UpdateAvatarMesh1P");
    struct
    {
        int32_t skillEntityIndex;
        struct FName MeshName;
        uint8_t bIs1P;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    Parms.bIs1P = (uint8_t)bIs1P;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::SwitchAvatarMeshToMasterPose(int32_t skillEntityIndex, struct FName MeshName, uint8_t MasterPose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "SwitchAvatarMeshToMasterPose");
    struct
    {
        int32_t skillEntityIndex;
        struct FName MeshName;
        uint8_t MasterPose;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    Parms.MasterPose = (uint8_t)MasterPose;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::SpawnActorCallback(int32_t skillEntityIndex, int32_t LogicID, struct AActor* Actor, struct FName ActorName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "SpawnActorCallback");
    struct
    {
        int32_t skillEntityIndex;
        int32_t LogicID;
        struct AActor* Actor;
        struct FName ActorName;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    Parms.Actor = (struct AActor*)Actor;
    Parms.ActorName = (struct FName)ActorName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::ShowUIStateTips(int32_t skillEntityIndex, ESkillUIState State, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "ShowUIStateTips");
    struct
    {
        int32_t skillEntityIndex;
        enum ESkillUIState State;
        float Time;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.State = (enum ESkillUIState)State;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::SetSheildHealth(int32_t skillEntityIndex, float Init, float Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "SetSheildHealth");
    struct
    {
        int32_t skillEntityIndex;
        float Init;
        float Max;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.Init = (float)Init;
    Parms.Max = (float)Max;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::SetForbidSOLOverloadBuff(int32_t skillEntityIndex, uint8_t NewForbidSOLOverloadBuff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "SetForbidSOLOverloadBuff");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t NewForbidSOLOverloadBuff;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.NewForbidSOLOverloadBuff = (uint8_t)NewForbidSOLOverloadBuff;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::SetAvatarMaterialParams(int32_t skillEntityIndex, struct FName MeshName, struct FName ParamsKey, float Value, int32_t Slot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "SetAvatarMaterialParams");
    struct
    {
        int32_t skillEntityIndex;
        struct FName MeshName;
        struct FName ParamsKey;
        float Value;
        int32_t Slot;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    Parms.ParamsKey = (struct FName)ParamsKey;
    Parms.Value = (float)Value;
    Parms.Slot = (int32_t)Slot;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::SetAbilityData(int32_t skillEntityIndex, struct FGPAbilityEntityData Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "SetAbilityData");
    struct
    {
        int32_t skillEntityIndex;
        struct FGPAbilityEntityData Data;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.Data = (struct FGPAbilityEntityData)Data;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::PlayMontage(int32_t skillEntityIndex, struct USkeletalMeshComponent* InSkeletalMeshComponent, struct TSoftObjectPtr<UAnimMontage> montageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "PlayMontage");
    struct
    {
        int32_t skillEntityIndex;
        struct USkeletalMeshComponent* InSkeletalMeshComponent;
        struct TSoftObjectPtr<UAnimMontage> montageToPlay;
        float PlayRate;
        float StartingPosition;
        struct FName StartingSection;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.InSkeletalMeshComponent = (struct USkeletalMeshComponent*)InSkeletalMeshComponent;
    Parms.montageToPlay = (struct TSoftObjectPtr<UAnimMontage>)montageToPlay;
    Parms.PlayRate = (float)PlayRate;
    Parms.StartingPosition = (float)StartingPosition;
    Parms.StartingSection = (struct FName)StartingSection;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::OnWeaponZoomingStateChange(int32_t skillEntityIndex, uint8_t isZoom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "OnWeaponZoomingStateChange");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t isZoom;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.isZoom = (uint8_t)isZoom;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::OnLoadedMontage(const struct FSoftObjectPath& SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "OnLoadedMontage");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::OnGPAbilityTriggerBehaviorNoCast(struct AGPCharacter* CHARACTER, ESkillBehavior Behavior)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "OnGPAbilityTriggerBehaviorNoCast");
    struct
    {
        struct AGPCharacter* CHARACTER;
        enum ESkillBehavior Behavior;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.Behavior = (enum ESkillBehavior)Behavior;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::OnAddDamageModifyItem(int32_t skillEntityIndex, struct FName Item, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "OnAddDamageModifyItem");
    struct
    {
        int32_t skillEntityIndex;
        struct FName Item;
        float Value;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.Item = (struct FName)Item;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::LogicFlow_ListenerBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "LogicFlow_ListenerBase");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::LogicFlow_Listener()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "LogicFlow_Listener");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityLogicTemplate::IsEquipingWeapon(int32_t skillEntityIndex, int32_t WeaponSlot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "IsEquipingWeapon");
    struct
    {
        int32_t skillEntityIndex;
        int32_t WeaponSlot;
        uint8_t ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.WeaponSlot = (int32_t)WeaponSlot;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityLogicTemplate::Is1P(int32_t skillEntityIndex, uint8_t IncludeLive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "Is1P");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t IncludeLive;
        uint8_t ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.IncludeLive = (uint8_t)IncludeLive;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ESkillUIState ADFMAbilityLogicTemplate::GetUIState(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetUIState");
    struct
    {
        int32_t skillEntityIndex;
        enum ESkillUIState ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENetMode ADFMAbilityLogicTemplate::GetSkillNetMode(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetSkillNetMode");
    struct
    {
        int32_t skillEntityIndex;
        enum ENetMode ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENetRole ADFMAbilityLogicTemplate::GetSkillENetRole(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetSkillENetRole");
    struct
    {
        int32_t skillEntityIndex;
        enum ENetRole ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityLogicTemplate::GetSheildHealth(int32_t skillEntityIndex, float& cur, float& Max)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetSheildHealth");
    struct
    {
        int32_t skillEntityIndex;
        float cur;
        float Max;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    cur = Parms.cur;
    Max = Parms.Max;
}

EDFMGamePlayMode ADFMAbilityLogicTemplate::GetGamePlayMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetGamePlayMode");
    struct
    {
        enum EDFMGamePlayMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName ADFMAbilityLogicTemplate::GetCurrentRealName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetCurrentRealName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* ADFMAbilityLogicTemplate::GetAbilityLogic(int32_t LogicID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetAbilityLogic");
    struct
    {
        int32_t LogicID;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicID = (int32_t)LogicID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAbilityEntityData ADFMAbilityLogicTemplate::GetAbilityData(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetAbilityData");
    struct
    {
        int32_t skillEntityIndex;
        struct FGPAbilityEntityData ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMCharacter* ADFMAbilityLogicTemplate::GetAbilityCharacter(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetAbilityCharacter");
    struct
    {
        int32_t skillEntityIndex;
        struct ADFMCharacter* ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMAbilityInstance* ADFMAbilityLogicTemplate::GetAbility(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "GetAbility");
    struct
    {
        int32_t skillEntityIndex;
        struct UDFMAbilityInstance* ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityLogicTemplate::FunctionTrigger(int32_t skillEntityIndex, struct FName LogicName, EAbilityTriggerType Type, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "FunctionTrigger");
    struct
    {
        int32_t skillEntityIndex;
        struct FName LogicName;
        enum EAbilityTriggerType Type;
        int32_t Index;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicName = (struct FName)LogicName;
    Parms.Type = (enum EAbilityTriggerType)Type;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::ForbitWeaponReciol(int32_t skillEntityIndex, uint8_t forbit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "ForbitWeaponReciol");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t forbit;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.forbit = (uint8_t)forbit;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::BreakThrouthScoreInBluePrint(int32_t skillEntityIndex, int32_t ScoreName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "BreakThrouthScoreInBluePrint");
    struct
    {
        int32_t skillEntityIndex;
        int32_t ScoreName;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.ScoreName = (int32_t)ScoreName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::BreakThrouthScore(int32_t skillEntityIndex, EScoreName ScoreName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "BreakThrouthScore");
    struct
    {
        int32_t skillEntityIndex;
        enum EScoreName ScoreName;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.ScoreName = (enum EScoreName)ScoreName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityLogicTemplate::BP_SetBPAnimIndex(int32_t skillEntityIndex, struct UGPSkeletalMeshComponent* ItemMesh, int32_t AnimIndex, float PlayRate, uint8_t bLoopAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityLogicTemplate", "BP_SetBPAnimIndex");
    struct
    {
        int32_t skillEntityIndex;
        struct UGPSkeletalMeshComponent* ItemMesh;
        int32_t AnimIndex;
        float PlayRate;
        uint8_t bLoopAnim;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.ItemMesh = (struct UGPSkeletalMeshComponent*)ItemMesh;
    Parms.AnimIndex = (int32_t)AnimIndex;
    Parms.PlayRate = (float)PlayRate;
    Parms.bLoopAnim = (uint8_t)bLoopAnim;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilitySensorDetector
void ADFMAbilitySensorDetector::BP_ApplySensorEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySensorDetector", "BP_ApplySensorEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityMedic
void ADFMAbilityMedic::UpdateTimeMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "UpdateTimeMap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::UpdateClientPos(struct FVector pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "UpdateClientPos");
    struct
    {
        struct FVector pos;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::UpdateCharacterTimeMap(struct AActor* OtherActor, uint8_t Enter, uint8_t IsRemove, uint8_t fromDetect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "UpdateCharacterTimeMap");
    struct
    {
        struct AActor* OtherActor;
        uint8_t Enter;
        uint8_t IsRemove;
        uint8_t fromDetect;
    } Parms{};
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.Enter = (uint8_t)Enter;
    Parms.IsRemove = (uint8_t)IsRemove;
    Parms.fromDetect = (uint8_t)fromDetect;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::UpdateBindPosition(struct FVector pos, struct FRotator Quat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "UpdateBindPosition");
    struct
    {
        struct FVector pos;
        struct FRotator Quat;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.Quat = (struct FRotator)Quat;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::SetupBindAttach()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "SetupBindAttach");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::SetCanLockByStingerMissile(struct AActor* Actor, uint8_t can)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "SetCanLockByStingerMissile");
    struct
    {
        struct AActor* Actor;
        uint8_t can;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.can = (uint8_t)can;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::ServerMove(float Timestamp, struct FVector_NetQuantize10 Location, struct FVector_NetQuantize100 Rotator, struct FVector_NetQuantize100 Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "ServerMove");
    struct
    {
        float Timestamp;
        struct FVector_NetQuantize10 Location;
        struct FVector_NetQuantize100 Rotator;
        struct FVector_NetQuantize100 Velocity;
    } Parms{};
    Parms.Timestamp = (float)Timestamp;
    Parms.Location = (struct FVector_NetQuantize10)Location;
    Parms.Rotator = (struct FVector_NetQuantize100)Rotator;
    Parms.Velocity = (struct FVector_NetQuantize100)Velocity;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::Rep_ClientControllerRotator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "Rep_ClientControllerRotator");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::Rep_bMoveStoped()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "Rep_bMoveStoped");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::OnPropellerLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "OnPropellerLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::OnMeshAssetLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "OnMeshAssetLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::OnMaterialAssetLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "OnMaterialAssetLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::OnActorIgnoreFormDetectorBuff(struct AActor* Actor, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "OnActorIgnoreFormDetectorBuff");
    struct
    {
        struct AActor* Actor;
        struct FName Tag;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::NotifyEffectActorNum(int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "NotifyEffectActorNum");
    struct
    {
        int32_t Num;
    } Parms{};
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::MulticastServerMovement(float Timestamp, struct FVector_NetQuantize10 Location, struct FVector_NetQuantize100 Rotator, struct FVector_NetQuantize100 Velocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "MulticastServerMovement");
    struct
    {
        float Timestamp;
        struct FVector_NetQuantize10 Location;
        struct FVector_NetQuantize100 Rotator;
        struct FVector_NetQuantize100 Velocity;
    } Parms{};
    Parms.Timestamp = (float)Timestamp;
    Parms.Location = (struct FVector_NetQuantize10)Location;
    Parms.Rotator = (struct FVector_NetQuantize100)Rotator;
    Parms.Velocity = (struct FVector_NetQuantize100)Velocity;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::MulticastCharacterOwnerBeKnockback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "MulticastCharacterOwnerBeKnockback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::MulticastBeginMoveStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "MulticastBeginMoveStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::LineTraceLocalCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "LineTraceLocalCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityMedic::IsOnwerEnemyWithVehicle(struct ADFMVehicleBase* Charecter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "IsOnwerEnemyWithVehicle");
    struct
    {
        struct ADFMVehicleBase* Charecter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Charecter = (struct ADFMVehicleBase*)Charecter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityMedic::IsOnwerEnemyWithCharacter(struct AGPCharacterBase* Charecter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "IsOnwerEnemyWithCharacter");
    struct
    {
        struct AGPCharacterBase* Charecter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Charecter = (struct AGPCharacterBase*)Charecter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityMedic::IsLastWave()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "IsLastWave");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityMedic::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityMedic::ClientOnActorIgnoreFormDetectorBuff(struct AActor* Actor, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "ClientOnActorIgnoreFormDetectorBuff");
    struct
    {
        struct AActor* Actor;
        struct FName Tag;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::BP_OnActorIgnoreFormDetectorBuff(struct AActor* Actor, struct FName Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "BP_OnActorIgnoreFormDetectorBuff");
    struct
    {
        struct AActor* Actor;
        struct FName Tag;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.Tag = (struct FName)Tag;
    this->ProcessEvent(Func, &Parms);
}

struct USkeletalMeshComponent* ADFMAbilityMedic::BP_GetBindToAttachMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "BP_GetBindToAttachMesh");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityMedic::BP_BindToAttachMesh_Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "BP_BindToAttachMesh_Start");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::BP_BindToAttachMesh_End()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "BP_BindToAttachMesh_End");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityMedic::BP_AssaultShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityMedic", "BP_AssaultShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityParticleSmokeWallComponent
void UDFMAbilityParticleSmokeWallComponent::TickMoveParticle(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityParticleSmokeWallComponent", "TickMoveParticle");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityParticleSmokeWallComponent::TickGeneratePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityParticleSmokeWallComponent", "TickGeneratePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityParticleSmokeWallComponent::TickFadeOut(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityParticleSmokeWallComponent", "TickFadeOut");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMAbilityParticleSmokeWallComponent::ShouldUseHighQualityMoveFX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityParticleSmokeWallComponent", "ShouldUseHighQualityMoveFX");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAbilityParticleSmokeWallComponent::RemoveMoveFX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityParticleSmokeWallComponent", "RemoveMoveFX");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityParticleSmokeWallComponent::InitMoveFX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityParticleSmokeWallComponent", "InitMoveFX");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityPlayMontageSystem
void UDFMAbilityPlayMontageSystem::TryBindAudioTrigger(int32_t skillEntityIndex, struct FAbilityPlayMontageResources& ResourceData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlayMontageSystem", "TryBindAudioTrigger");
    struct
    {
        int32_t skillEntityIndex;
        struct FAbilityPlayMontageResources ResourceData;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    ResourceData = Parms.ResourceData;
}

uint8_t UDFMAbilityPlayMontageSystem::RecoradEndedDelegateMontage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlayMontageSystem", "RecoradEndedDelegateMontage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMAbilityPlayMontageSystem::OnPutWeaponEnded(int32_t skillEntityIndex, int32_t LogicID, struct UAnimMontage* Montage, uint8_t bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlayMontageSystem", "OnPutWeaponEnded");
    struct
    {
        int32_t skillEntityIndex;
        int32_t LogicID;
        struct UAnimMontage* Montage;
        uint8_t bInterrupted;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (uint8_t)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityPlayMontageSystem::OnMontageEnded(int32_t skillEntityIndex, int32_t LogicID, struct UAnimMontage* Montage, uint8_t bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlayMontageSystem", "OnMontageEnded");
    struct
    {
        int32_t skillEntityIndex;
        int32_t LogicID;
        struct UAnimMontage* Montage;
        uint8_t bInterrupted;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (uint8_t)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityPlayMontageSystem::ClearAudioTrigger(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityPlayMontageSystem", "ClearAudioTrigger");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityProxSensor
uint8_t ADFMAbilityProxSensor::IsOnwerEnemyWithCharacter(struct AGPCharacterBase* Charecter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensor", "IsOnwerEnemyWithCharacter");
    struct
    {
        struct AGPCharacterBase* Charecter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Charecter = (struct AGPCharacterBase*)Charecter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityProxSensor::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensor", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityProxSensor::BP_DetectorTakeDamage(uint8_t bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensor", "BP_DetectorTakeDamage");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProxSensor::BP_AssaultShock()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensor", "BP_AssaultShock");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityProxSensorAdvanceScan
void ADFMAbilityProxSensorAdvanceScan::TickScan()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensorAdvanceScan", "TickScan");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProxSensorAdvanceScan::TickEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensorAdvanceScan", "TickEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProxSensorAdvanceScan::SyncNavigationResult(struct ADFMCharacter* Target, struct TArray<struct FVector> Paths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensorAdvanceScan", "SyncNavigationResult");
    struct
    {
        struct ADFMCharacter* Target;
        struct TArray<struct FVector> Paths;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    Parms.Paths = (struct TArray<struct FVector>)Paths;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProxSensorAdvanceScan::Rep_ScanCharacters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensorAdvanceScan", "Rep_ScanCharacters");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProxSensorAdvanceScan::OnProcessClear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensorAdvanceScan", "OnProcessClear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProxSensorAdvanceScan::DrawPaths()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensorAdvanceScan", "DrawPaths");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProxSensorAdvanceScan::DoScanNavigation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensorAdvanceScan", "DoScanNavigation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityProxSensorAdvanceScan::DoScanEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityProxSensorAdvanceScan", "DoScanEnemy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityRopeRoot
struct UPrimitiveComponent* ADFMAbilityRopeRoot::GetIngoreMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityRopeRoot", "GetIngoreMesh");
    struct
    {
        struct UPrimitiveComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityRopeRootMarker
void ADFMAbilityRopeRootMarker::Rep_LifeSpanRep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityRopeRootMarker", "Rep_LifeSpanRep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityInstanceRope
void UDFMAbilityInstanceRope::OnGameHudStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRope", "OnGameHudStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityInstanceRope::CheckCancelSkill()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityInstanceRope", "CheckCancelSkill");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilitySmokeDeformableActor
void ADFMAbilitySmokeDeformableActor::UpdateTickInterval()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "UpdateTickInterval");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::UpdateAKComponentLocation(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "UpdateAKComponentLocation");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::TryPlaySoundEvent(struct TSoftObjectPtr<UGPAudioEventAsset> SoundEvent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "TryPlaySoundEvent");
    struct
    {
        struct TSoftObjectPtr<UGPAudioEventAsset> SoundEvent;
    } Parms{};
    Parms.SoundEvent = (struct TSoftObjectPtr<UGPAudioEventAsset>)SoundEvent;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::SetSmokeState(ESmokeState NewSmokeState, int32_t SmokeIndex, uint8_t bNeedSet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "SetSmokeState");
    struct
    {
        enum ESmokeState NewSmokeState;
        int32_t SmokeIndex;
        uint8_t bNeedSet;
    } Parms{};
    Parms.NewSmokeState = (enum ESmokeState)NewSmokeState;
    Parms.SmokeIndex = (int32_t)SmokeIndex;
    Parms.bNeedSet = (uint8_t)bNeedSet;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::RecoverSmoke(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "RecoverSmoke");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::ProcessLocalCharacterLeave()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "ProcessLocalCharacterLeave");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::ProcessLocalCharacterEnter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "ProcessLocalCharacterEnter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::OnSoundEventPreLoaded(struct TArray<struct FSoftObjectPath> SoftObjectPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "OnSoundEventPreLoaded");
    struct
    {
        struct TArray<struct FSoftObjectPath> SoftObjectPaths;
    } Parms{};
    Parms.SoftObjectPaths = (struct TArray<struct FSoftObjectPath>)SoftObjectPaths;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::OnSoundEventLoaded(const struct FSoftObjectPath& SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "OnSoundEventLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::OnSmokeRecover(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "OnSmokeRecover");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::OnSmokeBlowOut(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "OnSmokeBlowOut");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::OnRep_SmokeStateChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "OnRep_SmokeStateChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::MulticastSetSmokeState(ESmokeState NewSmokeState, int32_t SmokeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "MulticastSetSmokeState");
    struct
    {
        enum ESmokeState NewSmokeState;
        int32_t SmokeIndex;
    } Parms{};
    Parms.NewSmokeState = (enum ESmokeState)NewSmokeState;
    Parms.SmokeIndex = (int32_t)SmokeIndex;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::MulticastSetSmokeFadeParam(struct FSkillSmokeBreakerInfo SmokeBreakerInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "MulticastSetSmokeFadeParam");
    struct
    {
        struct FSkillSmokeBreakerInfo SmokeBreakerInfo;
    } Parms{};
    Parms.SmokeBreakerInfo = (struct FSkillSmokeBreakerInfo)SmokeBreakerInfo;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::MulticastCheckBurst(struct FVector BurstLocation, float BurstRadius, float BurstDelay, int32_t SmokeIndex, struct FSmokeBreakInfo SmokeBreakerInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "MulticastCheckBurst");
    struct
    {
        struct FVector BurstLocation;
        float BurstRadius;
        float BurstDelay;
        int32_t SmokeIndex;
        struct FSmokeBreakInfo SmokeBreakerInfo;
    } Parms{};
    Parms.BurstLocation = (struct FVector)BurstLocation;
    Parms.BurstRadius = (float)BurstRadius;
    Parms.BurstDelay = (float)BurstDelay;
    Parms.SmokeIndex = (int32_t)SmokeIndex;
    Parms.SmokeBreakerInfo = (struct FSmokeBreakInfo)SmokeBreakerInfo;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::DoPlaySoundEvent(struct FSoftObjectPath AudioEventAssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "DoPlaySoundEvent");
    struct
    {
        struct FSoftObjectPath AudioEventAssetRef;
    } Parms{};
    Parms.AudioEventAssetRef = (struct FSoftObjectPath)AudioEventAssetRef;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::DissipateSmoke(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "DissipateSmoke");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::ClearSmokeRelativeBox(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "ClearSmokeRelativeBox");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilitySmokeDeformableActor::CheckCanBeBlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "CheckCanBeBlow");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilitySmokeDeformableActor::ApplyAKComponentLocation(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "ApplyAKComponentLocation");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::AddSmokeRelativeBox(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "AddSmokeRelativeBox");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeDeformableActor::AddExtinguishIncendiaryComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeDeformableActor", "AddExtinguishIncendiaryComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilitySmokeWallUAS
void ADFMAbilitySmokeWallUAS::UnRegisterAbilityActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "UnRegisterAbilityActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::StartPlayParticleSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "StartPlayParticleSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::ShowActionBar(struct FText Action, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "ShowActionBar");
    struct
    {
        struct FText Action;
        float Time;
    } Parms{};
    Parms.Action = (struct FText)Action;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::SetMeshVisible(uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "SetMeshVisible");
    struct
    {
        uint8_t bVisible;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::RegisterAbilityActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "RegisterAbilityActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::OnRep_SkillId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "OnRep_SkillId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::OnRep_ServerUASStage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "OnRep_ServerUASStage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::OnRep_ServerOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "OnRep_ServerOwner");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::OnPanelShow(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "OnPanelShow");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::OnOwnerWeaponChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "OnOwnerWeaponChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::OnNotifyFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "OnNotifyFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::OnAutoStartRep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "OnAutoStartRep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::NotifyShowHud(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "NotifyShowHud");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::NotifyServerBeginMove(struct FVector Position, struct FVector InitVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "NotifyServerBeginMove");
    struct
    {
        struct FVector Position;
        struct FVector InitVelocity;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.InitVelocity = (struct FVector)InitVelocity;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::NotifyInitHud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "NotifyInitHud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::MulticastBeginMove(struct FVector Position, struct FVector InitVelocity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "MulticastBeginMove");
    struct
    {
        struct FVector Position;
        struct FVector InitVelocity;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.InitVelocity = (struct FVector)InitVelocity;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilitySmokeWallUAS::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilitySmokeWallUAS::InitRTC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "InitRTC");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::DestroyParticleSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "DestroyParticleSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySmokeWallUAS::CreateActionBar(uint8_t createOrHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "CreateActionBar");
    struct
    {
        uint8_t createOrHide;
    } Parms{};
    Parms.createOrHide = (uint8_t)createOrHide;
    this->ProcessEvent(Func, &Parms);
}

struct FText ADFMAbilitySmokeWallUAS::BP_GetActionBarText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "BP_GetActionBarText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilitySmokeWallUAS::AsyncPlayParticle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySmokeWallUAS", "AsyncPlayParticle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilitySonarDevice
void ADFMAbilitySonarDevice::UpdateScanCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "UpdateScanCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::UpdateCharacterTimeMap(struct AActor* OtherActor, uint8_t fromDetect, uint8_t Enter, uint8_t IsRemove, float StartTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "UpdateCharacterTimeMap");
    struct
    {
        struct AActor* OtherActor;
        uint8_t fromDetect;
        uint8_t Enter;
        uint8_t IsRemove;
        float StartTime;
    } Parms{};
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.fromDetect = (uint8_t)fromDetect;
    Parms.Enter = (uint8_t)Enter;
    Parms.IsRemove = (uint8_t)IsRemove;
    Parms.StartTime = (float)StartTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::TryAttachToSurface()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "TryAttachToSurface");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::TickDetectList(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "TickDetectList");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::StartAudioListen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "StartAudioListen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::ResetVO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "ResetVO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::ResetMarkVO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "ResetMarkVO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::RegisterFXComp(struct UFXResourceContainerComponent* FXComp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "RegisterFXComp");
    struct
    {
        struct UFXResourceContainerComponent* FXComp;
    } Parms{};
    Parms.FXComp = (struct UFXResourceContainerComponent*)FXComp;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::RefreshDetectLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "RefreshDetectLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::RangeDetectCheck(uint8_t Enter, uint8_t Remove, uint8_t bNeedUpdateTimeMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "RangeDetectCheck");
    struct
    {
        uint8_t Enter;
        uint8_t Remove;
        uint8_t bNeedUpdateTimeMap;
    } Parms{};
    Parms.Enter = (uint8_t)Enter;
    Parms.Remove = (uint8_t)Remove;
    Parms.bNeedUpdateTimeMap = (uint8_t)bNeedUpdateTimeMap;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::RangeCheckTeammate(uint8_t Enter, uint8_t Remove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "RangeCheckTeammate");
    struct
    {
        uint8_t Enter;
        uint8_t Remove;
    } Parms{};
    Parms.Enter = (uint8_t)Enter;
    Parms.Remove = (uint8_t)Remove;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::RangeCheckCharacterOut(struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "RangeCheckCharacterOut");
    struct
    {
        struct ADFMCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::RangeCheckCharacterIn(struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "RangeCheckCharacterIn");
    struct
    {
        struct ADFMCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::PreStartAudioListen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "PreStartAudioListen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::PlayVO(struct FString VOName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "PlayVO");
    struct
    {
        struct FString VOName;
    } Parms{};
    Parms.VOName = (struct FString)VOName;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::PlayScanFX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "PlayScanFX");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::PlayMarkVO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "PlayMarkVO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::PlayCurrentStateAudio(int32_t CurrentState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "PlayCurrentStateAudio");
    struct
    {
        int32_t CurrentState;
    } Parms{};
    Parms.CurrentState = (int32_t)CurrentState;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::PlayCharacterMarkAudio(struct ADFMCharacter* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "PlayCharacterMarkAudio");
    struct
    {
        struct ADFMCharacter* Target;
    } Parms{};
    Parms.Target = (struct ADFMCharacter*)Target;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::MulticastClientDestroySelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "MulticastClientDestroySelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::InitAudioListenComp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "InitAudioListenComp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::EndShowScanCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "EndShowScanCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::EndAudioListen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "EndAudioListen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::EmptyDetectCharList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "EmptyDetectCharList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::EmptyDetectCandidateList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "EmptyDetectCandidateList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::DetectVehicle(struct AGPVehicleBase* Vehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "DetectVehicle");
    struct
    {
        struct AGPVehicleBase* Vehicle;
    } Parms{};
    Parms.Vehicle = (struct AGPVehicleBase*)Vehicle;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::DetectCharacter(struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "DetectCharacter");
    struct
    {
        struct ADFMCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::DestroySelfActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "DestroySelfActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::ClientShowLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "ClientShowLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::ClearDetectMarker(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "ClearDetectMarker");
    struct
    {
        struct AActor* Target;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::CheckIsInWater()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "CheckIsInWater");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilitySonarDevice::CheckActorValid(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "CheckActorValid");
    struct
    {
        struct AActor* InActor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilitySonarDevice::CharacterDetectStart(struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "CharacterDetectStart");
    struct
    {
        struct ADFMCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySonarDevice::CharacterDetectEnd(struct ADFMCharacter* CHARACTER, float LastDetectTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySonarDevice", "CharacterDetectEnd");
    struct
    {
        struct ADFMCharacter* CHARACTER;
        float LastDetectTime;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    Parms.LastDetectTime = (float)LastDetectTime;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityStateSystem
void UDFMAbilityStateSystem::OnLeaveStateSignal(struct UQA_AbilityLogicTask* QA, int32_t skillEntityIndex, int32_t LogicID, EAbilityTriggerType Trigger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityStateSystem", "OnLeaveStateSignal");
    struct
    {
        struct UQA_AbilityLogicTask* QA;
        int32_t skillEntityIndex;
        int32_t LogicID;
        enum EAbilityTriggerType Trigger;
    } Parms{};
    Parms.QA = (struct UQA_AbilityLogicTask*)QA;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LogicID = (int32_t)LogicID;
    Parms.Trigger = (enum EAbilityTriggerType)Trigger;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityStormBall
uint8_t ADFMAbilityStormBall::IsDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityStormBall", "IsDestroy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMAbilitySubtitleManagerSystem
void UDFMAbilitySubtitleManagerSystem::PreloadSubtitleResource(const struct FName& SubtitleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySubtitleManagerSystem", "PreloadSubtitleResource");
    struct
    {
        struct FName SubtitleName;
    } Parms{};
    Parms.SubtitleName = (struct FName)SubtitleName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMAbilitySubtitleManagerSystem::PlaySubtitle(const struct FName& SubtitleName, struct AActor* SpeakerActor, const struct FVector& AlertLocation, struct FString POIName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySubtitleManagerSystem", "PlaySubtitle");
    struct
    {
        struct FName SubtitleName;
        struct AActor* SpeakerActor;
        struct FVector AlertLocation;
        struct FString POIName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SubtitleName = (struct FName)SubtitleName;
    Parms.SpeakerActor = (struct AActor*)SpeakerActor;
    Parms.AlertLocation = (struct FVector)AlertLocation;
    Parms.POIName = (struct FString)POIName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAbilitySubtitleManagerSystem::GetSubtitleConfig(const struct FName& SubtitleName, struct FDFMAbilitySubTitleConfig& SubtitleConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySubtitleManagerSystem", "GetSubtitleConfig");
    struct
    {
        struct FName SubtitleName;
        struct FDFMAbilitySubTitleConfig SubtitleConfig;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SubtitleName = (struct FName)SubtitleName;
    this->ProcessEvent(Func, &Parms);
    SubtitleConfig = Parms.SubtitleConfig;
    return Parms.ReturnValue;
}

struct UDFMAbilitySubtitleManagerSystem* UDFMAbilitySubtitleManagerSystem::GetInstance(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilitySubtitleManagerSystem", "GetInstance");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDFMAbilitySubtitleManagerSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilitySuppressionMine
void ADFMAbilitySuppressionMine::SuppressionMineTriggerEvent(struct AActor* NewCharacterOwner, struct AActor* Bunker, int32_t TriggerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "SuppressionMineTriggerEvent");
    struct
    {
        struct AActor* NewCharacterOwner;
        struct AActor* Bunker;
        int32_t TriggerType;
    } Parms{};
    Parms.NewCharacterOwner = (struct AActor*)NewCharacterOwner;
    Parms.Bunker = (struct AActor*)Bunker;
    Parms.TriggerType = (int32_t)TriggerType;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::StartAction()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "StartAction");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::SetDeployFinished(uint8_t NewDeployFinished)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "SetDeployFinished");
    struct
    {
        uint8_t NewDeployFinished;
    } Parms{};
    Parms.NewDeployFinished = (uint8_t)NewDeployFinished;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::Recycle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "Recycle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::OnServerMatchEnd(EMatchOverReason EndReason, int64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "OnServerMatchEnd");
    struct
    {
        enum EMatchOverReason EndReason;
        int64_t Uin;
    } Parms{};
    Parms.EndReason = (enum EMatchOverReason)EndReason;
    Parms.Uin = (int64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::OnRep_TriggerState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "OnRep_TriggerState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::OnDSReplayTimerCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "OnDSReplayTimerCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "OnCharacterDead");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::OnCharacterBeKnockedDown(struct FKillInfo& KillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "OnCharacterBeKnockedDown");
    struct
    {
        struct FKillInfo KillInfo;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    KillInfo = Parms.KillInfo;
}

void ADFMAbilitySuppressionMine::OnCharacterArmedForceChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "OnCharacterArmedForceChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::OnActivatePlayDSReplay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "OnActivatePlayDSReplay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::NotifyDataFlowDead()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "NotifyDataFlowDead");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::NotifyClientEnenyInside(int32_t EnemyCount, uint8_t IsFirstEnemyEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "NotifyClientEnenyInside");
    struct
    {
        int32_t EnemyCount;
        uint8_t IsFirstEnemyEnter;
    } Parms{};
    Parms.EnemyCount = (int32_t)EnemyCount;
    Parms.IsFirstEnemyEnter = (uint8_t)IsFirstEnemyEnter;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilitySuppressionMine::IsPreDestroyed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "IsPreDestroyed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilitySuppressionMine::HasActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "HasActive");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText ADFMAbilitySuppressionMine::GetRecycleTipsActionText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "GetRecycleTipsActionText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName ADFMAbilitySuppressionMine::GetRecycleTipsActionName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "GetRecycleTipsActionName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ACHARACTER* ADFMAbilitySuppressionMine::GetCharacterOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "GetCharacterOwner");
    struct
    {
        struct ACHARACTER* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText ADFMAbilitySuppressionMine::GetActiveTipsActionText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "GetActiveTipsActionText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName ADFMAbilitySuppressionMine::GetActiveTipsActionName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "GetActiveTipsActionName");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilitySuppressionMine::EMPClientRecover(uint8_t IsReady)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "EMPClientRecover");
    struct
    {
        uint8_t IsReady;
    } Parms{};
    Parms.IsReady = (uint8_t)IsReady;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::EMPClientDisable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "EMPClientDisable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::DelayExit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "DelayExit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::ClientRecycle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "ClientRecycle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::ClientPreDestoy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "ClientPreDestoy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::ClientActiveSuppressionMine(uint8_t IsOwnerActivate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "ClientActiveSuppressionMine");
    struct
    {
        uint8_t IsOwnerActivate;
    } Parms{};
    Parms.IsOwnerActivate = (uint8_t)IsOwnerActivate;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::ClientActivePlayWantVoice(uint8_t bOwnerActivate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "ClientActivePlayWantVoice");
    struct
    {
        uint8_t bOwnerActivate;
    } Parms{};
    Parms.bOwnerActivate = (uint8_t)bOwnerActivate;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::ClearDSReplayTimerCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "ClearDSReplayTimerCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::CheckAttachedParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "CheckAttachedParent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_Recycle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_Recycle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_PlayAudioOnPreDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_PlayAudioOnPreDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_PlayAudioOnFlyToGround()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_PlayAudioOnFlyToGround");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_PlayAudioOnEnemyLeave()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_PlayAudioOnEnemyLeave");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_PlayAudioOnEnemyEnter(uint8_t IsFirstEnemyEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_PlayAudioOnEnemyEnter");
    struct
    {
        uint8_t IsFirstEnemyEnter;
    } Parms{};
    Parms.IsFirstEnemyEnter = (uint8_t)IsFirstEnemyEnter;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_PlayAudioOnActivate(uint8_t IsOwnerActivate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_PlayAudioOnActivate");
    struct
    {
        uint8_t IsOwnerActivate;
    } Parms{};
    Parms.IsOwnerActivate = (uint8_t)IsOwnerActivate;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_OnDeploy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_OnDeploy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_EMPClientRecover(uint8_t IsReady)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_EMPClientRecover");
    struct
    {
        uint8_t IsReady;
    } Parms{};
    Parms.IsReady = (uint8_t)IsReady;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_EMPClientDisable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_EMPClientDisable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_DelayExit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_DelayExit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::BP_AcitveSuppressionMine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "BP_AcitveSuppressionMine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilitySuppressionMine::ActiveSuppressionMine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilitySuppressionMine", "ActiveSuppressionMine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityThrowBlocking
void ADFMAbilityThrowBlocking::TryAddBreakThroughScore(const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "TryAddBreakThroughScore");
    struct
    {
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::TickNavBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "TickNavBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::TickHPCurve(float CurrTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "TickHPCurve");
    struct
    {
        float CurrTime;
    } Parms{};
    Parms.CurrTime = (float)CurrTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::TickCheckPartNumber()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "TickCheckPartNumber");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::TickCheckLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "TickCheckLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::TickCheckCharacters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "TickCheckCharacters");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::TickBurning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "TickBurning");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::StopTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "StopTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::StopSpawnTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "StopSpawnTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::StopSpawnAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "StopSpawnAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::StopDestroyTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "StopDestroyTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::StartTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "StartTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::StartSpawnTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "StartSpawnTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::StartDestroyTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "StartDestroyTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::SetSpawnHitTarget(const struct FHitResult& HitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "SetSpawnHitTarget");
    struct
    {
        struct FHitResult HitResult;
    } Parms{};
    Parms.HitResult = (struct FHitResult)HitResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::ServerCharacterTryBreakBlocking(struct AGPCharacter* CHARACTER, struct UThrowBlockingPartComponent* Part)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "ServerCharacterTryBreakBlocking");
    struct
    {
        struct AGPCharacter* CHARACTER;
        struct UThrowBlockingPartComponent* Part;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.Part = (struct UThrowBlockingPartComponent*)Part;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "OnOverlapEnd");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "OnOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::OnArenaRoundStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "OnArenaRoundStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::MulticastPlaySpawnAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "MulticastPlaySpawnAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityThrowBlocking::IsValidIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "IsValidIndex");
    struct
    {
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityThrowBlocking::InitTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "InitTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::InitNavBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "InitNavBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::InitMainAnimInstanceProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "InitMainAnimInstanceProxy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::InitHPCurve()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "InitHPCurve");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::InitGameRoleData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "InitGameRoleData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::InitAllParts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "InitAllParts");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AActor* ADFMAbilityThrowBlocking::GetSpawnHitTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "GetSpawnHitTarget");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPSkillComponent* ADFMAbilityThrowBlocking::GetSkillComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "GetSkillComponent");
    struct
    {
        struct UGPSkillComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityThrowBlocking::GetIsInSpawnState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "GetIsInSpawnState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityThrowBlocking::GetIsInDestroyedState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "GetIsInDestroyedState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ADFMAbilityThrowBlocking::GetHitComponentIndex(struct UPrimitiveComponent* targetomponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "GetHitComponentIndex");
    struct
    {
        struct UPrimitiveComponent* targetomponent;
        int32_t ReturnValue;
    } Parms{};
    Parms.targetomponent = (struct UPrimitiveComponent*)targetomponent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityThrowBlocking::GetAllPartsArray(struct TArray<struct UThrowBlockingPartComponent*>& OutBlockingArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "GetAllPartsArray");
    struct
    {
        struct TArray<struct UThrowBlockingPartComponent*> OutBlockingArray;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutBlockingArray = Parms.OutBlockingArray;
}

void ADFMAbilityThrowBlocking::GetAllDestroyedPartsArray(struct TArray<struct UThrowBlockingPartComponent*>& OutDestroyedArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "GetAllDestroyedPartsArray");
    struct
    {
        struct TArray<struct UThrowBlockingPartComponent*> OutDestroyedArray;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutDestroyedArray = Parms.OutDestroyedArray;
}

void ADFMAbilityThrowBlocking::FinTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "FinTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t ADFMAbilityThrowBlocking::FindGameRoleDataIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "FindGameRoleDataIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityThrowBlocking::DoTimerTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "DoTimerTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::DoSpawnTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "DoSpawnTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::DoDestroyTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "DoDestroyTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::DoDestroyAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "DoDestroyAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::DataFlowAddThrowNumber()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "DataFlowAddThrowNumber");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::DataFlowAddDestroyedInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "DataFlowAddDestroyedInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::DataFlowAddDamage(uint8_t bIsMainPart, uint8_t bIsRadial, uint8_t bIsPoint, uint8_t IsPartDestroyed, float Damage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "DataFlowAddDamage");
    struct
    {
        uint8_t bIsMainPart;
        uint8_t bIsRadial;
        uint8_t bIsPoint;
        uint8_t IsPartDestroyed;
        float Damage;
    } Parms{};
    Parms.bIsMainPart = (uint8_t)bIsMainPart;
    Parms.bIsRadial = (uint8_t)bIsRadial;
    Parms.bIsPoint = (uint8_t)bIsPoint;
    Parms.IsPartDestroyed = (uint8_t)IsPartDestroyed;
    Parms.Damage = (float)Damage;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityThrowBlocking::DamageTakerModifyIndex(struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "DamageTakerModifyIndex");
    struct
    {
        struct FDamageResultInfo DamageResult;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    DamageResult = Parms.DamageResult;
    return Parms.ReturnValue;
}

void ADFMAbilityThrowBlocking::CloseStopSpawnAudioTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "CloseStopSpawnAudioTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityThrowBlocking::CheckSpawnHitTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "CheckSpawnHitTarget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityThrowBlocking::CheckCharacterZipline(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "CheckCharacterZipline");
    struct
    {
        struct AGPCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::CheckCharacterPassiveMove(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "CheckCharacterPassiveMove");
    struct
    {
        struct AGPCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::CheckCharacterFloorResult(struct AGPCharacter* CHARACTER, const struct FFindFloorResult& CurrentFloor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "CheckCharacterFloorResult");
    struct
    {
        struct AGPCharacter* CHARACTER;
        struct FFindFloorResult CurrentFloor;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.CurrentFloor = (struct FFindFloorResult)CurrentFloor;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::CheckCharacterFalling(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "CheckCharacterFalling");
    struct
    {
        struct AGPCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::CharacterTryDirectionBreakBlocking(struct AGPCharacter* CHARACTER, struct FVector Direction, float radius, float offset, float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "CharacterTryDirectionBreakBlocking");
    struct
    {
        struct AGPCharacter* CHARACTER;
        struct FVector Direction;
        float radius;
        float offset;
        float Distance;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.Direction = (struct FVector)Direction;
    Parms.radius = (float)radius;
    Parms.offset = (float)offset;
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::CharacterTryBreakBlocking(struct AGPCharacter* CHARACTER, struct UPrimitiveComponent* HitComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "CharacterTryBreakBlocking");
    struct
    {
        struct AGPCharacter* CHARACTER;
        struct UPrimitiveComponent* HitComponent;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.HitComponent = (struct UPrimitiveComponent*)HitComponent;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::ChangeBlockingPartHPRate(struct UThrowBlockingPartComponent* Part, float DeltaHPRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "ChangeBlockingPartHPRate");
    struct
    {
        struct UThrowBlockingPartComponent* Part;
        float DeltaHPRate;
    } Parms{};
    Parms.Part = (struct UThrowBlockingPartComponent*)Part;
    Parms.DeltaHPRate = (float)DeltaHPRate;
    this->ProcessEvent(Func, &Parms);
}

float ADFMAbilityThrowBlocking::ChangeBlockingPartHP(struct UThrowBlockingPartComponent* Part, float DeltaHP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "ChangeBlockingPartHP");
    struct
    {
        struct UThrowBlockingPartComponent* Part;
        float DeltaHP;
        float ReturnValue;
    } Parms{};
    Parms.Part = (struct UThrowBlockingPartComponent*)Part;
    Parms.DeltaHP = (float)DeltaHP;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityThrowBlocking::BroadcastSpawnEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "BroadcastSpawnEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlocking::BroadcastDestroyedEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "BroadcastDestroyedEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityThrowBlocking::BaseCheckCharacter(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlocking", "BaseCheckCharacter");
    struct
    {
        struct AGPCharacter* CHARACTER;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityThrowBlockingGrenade
void ADFMAbilityThrowBlockingGrenade::TrySpawnBlockingActor(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlockingGrenade", "TrySpawnBlockingActor");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityThrowBlockingGrenade::SetMeshVisibility(uint8_t bNewVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlockingGrenade", "SetMeshVisibility");
    struct
    {
        uint8_t bNewVisibility;
    } Parms{};
    Parms.bNewVisibility = (uint8_t)bNewVisibility;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityThrowBlockingGrenade::IsValidActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlockingGrenade", "IsValidActor");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityThrowBlockingGrenade::DoDelayShowMeshTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityThrowBlockingGrenade", "DoDelayShowMeshTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMAbilityTraceLine
void ADFMAbilityTraceLine::OnSprintStateChange(uint8_t bCurSprintState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityTraceLine", "OnSprintStateChange");
    struct
    {
        uint8_t bCurSprintState;
    } Parms{};
    Parms.bCurSprintState = (uint8_t)bCurSprintState;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityTraceLine::FireProjectile(struct UDFMAbilityInstance* Instance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityTraceLine", "FireProjectile");
    struct
    {
        struct UDFMAbilityInstance* Instance;
    } Parms{};
    Parms.Instance = (struct UDFMAbilityInstance*)Instance;
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityUASActiveComponent
void UDFMAbilityUASActiveComponent::TickState(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "TickState");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUASActiveComponent::TickMeshRotation(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "TickMeshRotation");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUASActiveComponent::TickIdling(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "TickIdling");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUASActiveComponent::TickEquiping(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "TickEquiping");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUASActiveComponent::SyncPosWithWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "SyncPosWithWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUASActiveComponent::SyncPosToIdle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "SyncPosToIdle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUASActiveComponent::SyncOwnerPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "SyncOwnerPos");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUASActiveComponent::PosIdleHideWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "PosIdleHideWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUASActiveComponent::BeginEquip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityUASActiveComponent", "BeginEquip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMAbilityUtil
void UDFMAbilityUtil::ReleaseUIByName(struct UObject* World, struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "ReleaseUIByName");
    struct
    {
        struct UObject* World;
        struct FName PanelConfigName;
    } Parms{};
    Parms.World = (struct UObject*)World;
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUtil::ReleaseUI(struct UObject* World, int32_t skillEntityIndex, struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "ReleaseUI");
    struct
    {
        struct UObject* World;
        int32_t skillEntityIndex;
        struct FName PanelConfigName;
    } Parms{};
    Parms.World = (struct UObject*)World;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUtil::PreLoadUIByName(struct UObject* World, struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "PreLoadUIByName");
    struct
    {
        struct UObject* World;
        struct FName PanelConfigName;
    } Parms{};
    Parms.World = (struct UObject*)World;
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUtil::PreLoadUI(struct UObject* World, int32_t skillEntityIndex, struct FName PanelConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "PreLoadUI");
    struct
    {
        struct UObject* World;
        int32_t skillEntityIndex;
        struct FName PanelConfigName;
    } Parms{};
    Parms.World = (struct UObject*)World;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.PanelConfigName = (struct FName)PanelConfigName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUtil::PlayImpactEffects(struct UObject* WorldContent, const struct FHitResult& Hit, const struct FVector& BulletStartLoc, uint8_t bOnlyRicochet, uint8_t HitInfoOptFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "PlayImpactEffects");
    struct
    {
        struct UObject* WorldContent;
        struct FHitResult Hit;
        struct FVector BulletStartLoc;
        uint8_t bOnlyRicochet;
        uint8_t HitInfoOptFlag;
    } Parms{};
    Parms.WorldContent = (struct UObject*)WorldContent;
    Parms.Hit = (struct FHitResult)Hit;
    Parms.BulletStartLoc = (struct FVector)BulletStartLoc;
    Parms.bOnlyRicochet = (uint8_t)bOnlyRicochet;
    Parms.HitInfoOptFlag = (uint8_t)HitInfoOptFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMAbilityUtil::PlayDecalEffects(struct UObject* WorldContent, const struct FHitResult& Hit, struct FName& HitDecalId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "PlayDecalEffects");
    struct
    {
        struct UObject* WorldContent;
        struct FHitResult Hit;
        struct FName HitDecalId;
    } Parms{};
    Parms.WorldContent = (struct UObject*)WorldContent;
    Parms.Hit = (struct FHitResult)Hit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    HitDecalId = Parms.HitDecalId;
}

uint8_t UDFMAbilityUtil::IsInSOL(struct UObject* WorldContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "IsInSOL");
    struct
    {
        struct UObject* WorldContent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContent = (struct UObject*)WorldContent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMAbilityUtil::IsInMP(struct UObject* WorldContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "IsInMP");
    struct
    {
        struct UObject* WorldContent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WorldContent = (struct UObject*)WorldContent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EBuffGameRole UDFMAbilityUtil::GetGameRole(struct UObject* WorldContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "GetGameRole");
    struct
    {
        struct UObject* WorldContent;
        enum EBuffGameRole ReturnValue;
    } Parms{};
    Parms.WorldContent = (struct UObject*)WorldContent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EBuffGameRole UDFMAbilityUtil::CastToBuffGameRole(EDFMGamePlayMode PlayMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAbilityUtil", "CastToBuffGameRole");
    struct
    {
        enum EDFMGamePlayMode PlayMode;
        enum EBuffGameRole ReturnValue;
    } Parms{};
    Parms.PlayMode = (enum EDFMGamePlayMode)PlayMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAbilityWeaponThrowableKnife
void ADFMAbilityWeaponThrowableKnife::TryInitPathMeshInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "TryInitPathMeshInstance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::TryInitializePathTracingLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "TryInitializePathTracingLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::SyncOutLineItemLocationsToTeamMates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "SyncOutLineItemLocationsToTeamMates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::PrepareEMP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "PrepareEMP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::OnPathTracingLineAssetLoaded(const struct FSoftObjectPath& AssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "OnPathTracingLineAssetLoaded");
    struct
    {
        struct FSoftObjectPath AssetPath;
    } Parms{};
    Parms.AssetPath = (struct FSoftObjectPath)AssetPath;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::InitializePathTracingLineInternal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "InitializePathTracingLineInternal");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector ADFMAbilityWeaponThrowableKnife::GetTracingLineStartPos()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "GetTracingLineStartPos");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityWeaponThrowableKnife::FindPathCallBack(uint8_t Success, int32_t Key, struct TArray<struct FAbilityTracingPathData>& Paths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "FindPathCallBack");
    struct
    {
        uint8_t Success;
        int32_t Key;
        struct TArray<struct FAbilityTracingPathData> Paths;
    } Parms{};
    Parms.Success = (uint8_t)Success;
    Parms.Key = (int32_t)Key;
    this->ProcessEvent(Func, &Parms);
    Paths = Parms.Paths;
}

uint8_t ADFMAbilityWeaponThrowableKnife::FindNearestPointToEndPointOnPath(const struct TArray<struct FVector>& PathPoints, int32_t& NextIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "FindNearestPointToEndPointOnPath");
    struct
    {
        struct TArray<struct FVector> PathPoints;
        int32_t NextIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PathPoints = (struct TArray<struct FVector>)PathPoints;
    this->ProcessEvent(Func, &Parms);
    NextIndex = Parms.NextIndex;
    return Parms.ReturnValue;
}

struct FVector ADFMAbilityWeaponThrowableKnife::FindNearestPointOnPath(const struct FVector& PointA, const struct TArray<struct FVector>& PathPoints, const struct TArray<float>& PathLengths, int32_t& NextIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "FindNearestPointOnPath");
    struct
    {
        struct FVector PointA;
        struct TArray<struct FVector> PathPoints;
        struct TArray<float> PathLengths;
        int32_t NextIndex;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PointA = (struct FVector)PointA;
    Parms.PathPoints = (struct TArray<struct FVector>)PathPoints;
    Parms.PathLengths = (struct TArray<float>)PathLengths;
    this->ProcessEvent(Func, &Parms);
    NextIndex = Parms.NextIndex;
    return Parms.ReturnValue;
}

void ADFMAbilityWeaponThrowableKnife::DrawPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "DrawPath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientTryLoadPathTracingLineAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientTryLoadPathTracingLineAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientShowPathTracingLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientShowPathTracingLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientPreprocessPaths(struct TArray<struct FAbilityTracingPathData>& InRealPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientPreprocessPaths");
    struct
    {
        struct TArray<struct FAbilityTracingPathData> InRealPaths;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    InRealPaths = Parms.InRealPaths;
}

uint8_t ADFMAbilityWeaponThrowableKnife::ClientPreprocessPath(const struct FAbilityTracingPathData& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientPreprocessPath");
    struct
    {
        struct FAbilityTracingPathData Path;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Path = (struct FAbilityTracingPathData)Path;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAbilityWeaponThrowableKnife::ClientPrepareEMP(struct TArray<struct AActor*> EMPTargetArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientPrepareEMP");
    struct
    {
        struct TArray<struct AActor*> EMPTargetArray;
    } Parms{};
    Parms.EMPTargetArray = (struct TArray<struct AActor*>)EMPTargetArray;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientPlayHitEnemyEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientPlayHitEnemyEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientHidePathTracingLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientHidePathTracingLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientDrawPathTracing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientDrawPathTracing");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientDrawPath(struct TArray<struct FAbilityTracingPathData> ServerTracingPaths)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientDrawPath");
    struct
    {
        struct TArray<struct FAbilityTracingPathData> ServerTracingPaths;
    } Parms{};
    Parms.ServerTracingPaths = (struct TArray<struct FAbilityTracingPathData>)ServerTracingPaths;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientCancelLoadPathTracingLineAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientCancelLoadPathTracingLineAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAbilityWeaponThrowableKnife::ClientCalculatePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientCalculatePath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ADFMAbilityWeaponThrowableKnife::ClientAttachToSurface(const struct FVector& pos, struct FVector& ResultPos, float UpZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "ClientAttachToSurface");
    struct
    {
        struct FVector pos;
        struct FVector ResultPos;
        float UpZ;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.UpZ = (float)UpZ;
    this->ProcessEvent(Func, &Parms);
    ResultPos = Parms.ResultPos;
    return Parms.ReturnValue;
}

uint8_t ADFMAbilityWeaponThrowableKnife::CanBeMarked(struct ADFMCharacter* TargetChar, uint8_t IgnoreCheckTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAbilityWeaponThrowableKnife", "CanBeMarked");
    struct
    {
        struct ADFMCharacter* TargetChar;
        uint8_t IgnoreCheckTag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetChar = (struct ADFMCharacter*)TargetChar;
    Parms.IgnoreCheckTag = (uint8_t)IgnoreCheckTag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ADFMAIBoss07RCVCharacter
void ADFMAIBoss07RCVCharacter::TryDestroyThrowBlocking(struct UObject* Context, const struct FVector& pos, const struct FQuat& Rot, const struct FVector& BoxHalfExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMAIBoss07RCVCharacter", "TryDestroyThrowBlocking");
    struct
    {
        struct UObject* Context;
        struct FVector pos;
        struct FQuat Rot;
        struct FVector BoxHalfExtent;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    Parms.pos = (struct FVector)pos;
    Parms.Rot = (struct FQuat)Rot;
    Parms.BoxHalfExtent = (struct FVector)BoxHalfExtent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ADFMAIBoss07RCVCharacter::SetEnabledADS(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07RCVCharacter", "SetEnabledADS");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIBoss07RCVCharacter::OnRep_ProtectedRemainCounter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07RCVCharacter", "OnRep_ProtectedRemainCounter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIBoss07RCVCharacter::OnProjectileIntercepted(struct FVector ProjectilePos, struct AActor* BulletCreator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07RCVCharacter", "OnProjectileIntercepted");
    struct
    {
        struct FVector ProjectilePos;
        struct AActor* BulletCreator;
    } Parms{};
    Parms.ProjectilePos = (struct FVector)ProjectilePos;
    Parms.BulletCreator = (struct AActor*)BulletCreator;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIBoss07RCVCharacter::OnAIADSWeaponEvent__DelegateSignature(EAIADSWeaponEvent Event, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07RCVCharacter", "OnAIADSWeaponEvent__DelegateSignature");
    struct
    {
        enum EAIADSWeaponEvent Event;
        struct FName SocketName;
    } Parms{};
    Parms.Event = (enum EAIADSWeaponEvent)Event;
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
}

struct FVector ADFMAIBoss07RCVCharacter::GetFireLocBySocket(struct FName Socket)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07RCVCharacter", "GetFireLocBySocket");
    struct
    {
        struct FName Socket;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Socket = (struct FName)Socket;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAIBoss07RCVCharacter::BP_RemoveADSDetector(struct FGPPlayerUIN uid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07RCVCharacter", "BP_RemoveADSDetector");
    struct
    {
        struct FGPPlayerUIN uid;
    } Parms{};
    Parms.uid = (struct FGPPlayerUIN)uid;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIBoss07RCVCharacter::BP_AddADSDetector(struct FGPPlayerUIN uid, struct ADFMAIADSDetector* ADSDetector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07RCVCharacter", "BP_AddADSDetector");
    struct
    {
        struct FGPPlayerUIN uid;
        struct ADFMAIADSDetector* ADSDetector;
    } Parms{};
    Parms.uid = (struct FGPPlayerUIN)uid;
    Parms.ADSDetector = (struct ADFMAIADSDetector*)ADSDetector;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAIBoss07RCVCharacter::AIADSWeaponEvent_RPC(EAIADSWeaponEvent Event, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07RCVCharacter", "AIADSWeaponEvent_RPC");
    struct
    {
        enum EAIADSWeaponEvent Event;
        struct FName SocketName;
    } Parms{};
    Parms.Event = (enum EAIADSWeaponEvent)Event;
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
}

// UAIPatrolManagerComponent
void UAIPatrolManagerComponent::SetCurrentPatrolPoint(struct AController* AIController, int32_t PointUid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPatrolManagerComponent", "SetCurrentPatrolPoint");
    struct
    {
        struct AController* AIController;
        int32_t PointUid;
    } Parms{};
    Parms.AIController = (struct AController*)AIController;
    Parms.PointUid = (int32_t)PointUid;
    this->ProcessEvent(Func, &Parms);
}

void UAIPatrolManagerComponent::InitPatrolPoint(struct AController* AIController, int32_t InSeatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPatrolManagerComponent", "InitPatrolPoint");
    struct
    {
        struct AController* AIController;
        int32_t InSeatIndex;
    } Parms{};
    Parms.AIController = (struct AController*)AIController;
    Parms.InSeatIndex = (int32_t)InSeatIndex;
    this->ProcessEvent(Func, &Parms);
}

void UAIPatrolManagerComponent::GetReturnPointToSection(struct AController* AIController, int32_t& PointUid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPatrolManagerComponent", "GetReturnPointToSection");
    struct
    {
        struct AController* AIController;
        int32_t PointUid;
    } Parms{};
    Parms.AIController = (struct AController*)AIController;
    this->ProcessEvent(Func, &Parms);
    PointUid = Parms.PointUid;
}

void UAIPatrolManagerComponent::GetNextPatrolPoint(struct AController* AIController, int32_t& PointUid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPatrolManagerComponent", "GetNextPatrolPoint");
    struct
    {
        struct AController* AIController;
        int32_t PointUid;
    } Parms{};
    Parms.AIController = (struct AController*)AIController;
    this->ProcessEvent(Func, &Parms);
    PointUid = Parms.PointUid;
}

void UAIPatrolManagerComponent::GetCurrentPatrolPoint(struct AController* AIController, int32_t& PointUid, struct FAIMultiPatrolDataBase& PointData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPatrolManagerComponent", "GetCurrentPatrolPoint");
    struct
    {
        struct AController* AIController;
        int32_t PointUid;
        struct FAIMultiPatrolDataBase PointData;
    } Parms{};
    Parms.AIController = (struct AController*)AIController;
    this->ProcessEvent(Func, &Parms);
    PointUid = Parms.PointUid;
    PointData = Parms.PointData;
}

void UAIPatrolManagerComponent::AllSquadReady(struct AController* AIController, uint8_t& bAllReady)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPatrolManagerComponent", "AllSquadReady");
    struct
    {
        struct AController* AIController;
        uint8_t bAllReady;
    } Parms{};
    Parms.AIController = (struct AController*)AIController;
    this->ProcessEvent(Func, &Parms);
    bAllReady = Parms.bAllReady;
}

void UAIPatrolManagerComponent::AddToSquad(struct AController* AIController, int32_t SeatIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AIPatrolManagerComponent", "AddToSquad");
    struct
    {
        struct AController* AIController;
        int32_t SeatIndex;
    } Parms{};
    Parms.AIController = (struct AController*)AIController;
    Parms.SeatIndex = (int32_t)SeatIndex;
    this->ProcessEvent(Func, &Parms);
}

// AAbilityWeaponThrowableBullet_Boss07
void AAbilityWeaponThrowableBullet_Boss07::PlaySubTrialFX(struct FVector Start, struct FVector End, float FSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableBullet_Boss07", "PlaySubTrialFX");
    struct
    {
        struct FVector Start;
        struct FVector End;
        float FSpeed;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    Parms.FSpeed = (float)FSpeed;
    this->ProcessEvent(Func, &Parms);
}

void AAbilityWeaponThrowableBullet_Boss07::PlayAirExplodeFX(struct FVector pos, struct FVector Normal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AbilityWeaponThrowableBullet_Boss07", "PlayAirExplodeFX");
    struct
    {
        struct FVector pos;
        struct FVector Normal;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.Normal = (struct FVector)Normal;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAIBoss07AbilityFireArrow
void ADFMAIBoss07AbilityFireArrow::SetFireArrowDamage(uint8_t StopDamage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAIBoss07AbilityFireArrow", "SetFireArrowDamage");
    struct
    {
        uint8_t StopDamage;
    } Parms{};
    Parms.StopDamage = (uint8_t)StopDamage;
    this->ProcessEvent(Func, &Parms);
}

// ADFMAICharacterCallDog
void ADFMAICharacterCallDog::TickLeftTime(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "TickLeftTime");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAICharacterCallDog::SetMaxLeftTime(float InMaxLeftTime, float InDespawnShowTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "SetMaxLeftTime");
    struct
    {
        float InMaxLeftTime;
        float InDespawnShowTime;
    } Parms{};
    Parms.InMaxLeftTime = (float)InMaxLeftTime;
    Parms.InDespawnShowTime = (float)InDespawnShowTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAICharacterCallDog::SetCallDogState(ECallDogState InCallDogState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "SetCallDogState");
    struct
    {
        enum ECallDogState InCallDogState;
    } Parms{};
    Parms.InCallDogState = (enum ECallDogState)InCallDogState;
    this->ProcessEvent(Func, &Parms);
}

void ADFMAICharacterCallDog::ResumeCD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "ResumeCD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAICharacterCallDog::OnRep_AbilityInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "OnRep_AbilityInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAICharacterCallDog::MartTarget(struct AActor* InTarget, float InMapMarkTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "MartTarget");
    struct
    {
        struct AActor* InTarget;
        float InMapMarkTime;
    } Parms{};
    Parms.InTarget = (struct AActor*)InTarget;
    Parms.InMapMarkTime = (float)InMapMarkTime;
    this->ProcessEvent(Func, &Parms);
}

float ADFMAICharacterCallDog::GetLeftTimePercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "GetLeftTimePercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ECallDogState ADFMAICharacterCallDog::GetCallDogState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "GetCallDogState");
    struct
    {
        enum ECallDogState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMAICharacterCallDog::DoDespawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "DoDespawn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAICharacterCallDog::ClientSetOwnerDog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "ClientSetOwnerDog");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMAICharacterCallDog::AttackTarget(uint8_t bIsBite, struct AActor* InTarget, int32_t InAttackValueId, int32_t InSkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMAICharacterCallDog", "AttackTarget");
    struct
    {
        uint8_t bIsBite;
        struct AActor* InTarget;
        int32_t InAttackValueId;
        int32_t InSkillId;
    } Parms{};
    Parms.bIsBite = (uint8_t)bIsBite;
    Parms.InTarget = (struct AActor*)InTarget;
    Parms.InAttackValueId = (int32_t)InAttackValueId;
    Parms.InSkillId = (int32_t)InSkillId;
    this->ProcessEvent(Func, &Parms);
}

// UDFMBulletDetectorSubSystem
void UDFMBulletDetectorSubSystem::UnSpawnCammyBulletDetector(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBulletDetectorSubSystem", "UnSpawnCammyBulletDetector");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMBulletDetectorSubSystem::SpawnCammyBulletDetector(int32_t skillEntityIndex, struct UGPCammyBulletDetectorData* DetectorData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMBulletDetectorSubSystem", "SpawnCammyBulletDetector");
    struct
    {
        int32_t skillEntityIndex;
        struct UGPCammyBulletDetectorData* DetectorData;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.DetectorData = (struct UGPCammyBulletDetectorData*)DetectorData;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMBulletDetectorSubSystem* UDFMBulletDetectorSubSystem::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMBulletDetectorSubSystem", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDFMBulletDetectorSubSystem* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMCharBuffEntityC204PassiveMP
void UDFMCharBuffEntityC204PassiveMP::TryDetect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharBuffEntityC204PassiveMP", "TryDetect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMCharBuffEntityC204PassiveSOLNew
void UDFMCharBuffEntityC204PassiveSOLNew::CheckDetect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCharBuffEntityC204PassiveSOLNew", "CheckDetect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMCruiseMissileFuncComponent
void UDFMCruiseMissileFuncComponent::SwitchWeaponNextFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileFuncComponent", "SwitchWeaponNextFrame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCruiseMissileFuncComponent::SwitchToLastUsedWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileFuncComponent", "SwitchToLastUsedWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCruiseMissileFuncComponent::PreShowView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileFuncComponent", "PreShowView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMCruiseMissileMain
void ADFMCruiseMissileMain::UpdateViewData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "UpdateViewData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::UpdateMarkTargets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "UpdateMarkTargets");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::UpdateEnergy(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "UpdateEnergy");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::StopFovChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "StopFovChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::StartSecondaryAccelerate3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "StartSecondaryAccelerate3P");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::StartFovChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "StartFovChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::SpawnSubMissile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "SpawnSubMissile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::ServerStopControl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "ServerStopControl");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::ServerStartControl(uint8_t bControlled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "ServerStartControl");
    struct
    {
        uint8_t bControlled;
    } Parms{};
    Parms.bControlled = (uint8_t)bControlled;
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::OnOutOfEnergy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "OnOutOfEnergy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::MultiDoExplosion(EPhysicalSurface ProjectileHitSurface, uint8_t bHitLandScape, struct FVector ExplosionLoc, struct FVector ExplosionPlane)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "MultiDoExplosion");
    struct
    {
        enum EPhysicalSurface ProjectileHitSurface;
        uint8_t bHitLandScape;
        struct FVector ExplosionLoc;
        struct FVector ExplosionPlane;
    } Parms{};
    Parms.ProjectileHitSurface = (enum EPhysicalSurface)ProjectileHitSurface;
    Parms.bHitLandScape = (uint8_t)bHitLandScape;
    Parms.ExplosionLoc = (struct FVector)ExplosionLoc;
    Parms.ExplosionPlane = (struct FVector)ExplosionPlane;
    this->ProcessEvent(Func, &Parms);
}

struct FVector ADFMCruiseMissileMain::GetSpawnSubMissileLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "GetSpawnSubMissileLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ADFMCruiseMissileMain::GetIsLocalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "GetIsLocalEnemy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ADFMCruiseMissileMain::GetCurrentEnergy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "GetCurrentEnergy");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ADFMCruiseMissileMain::ClientStopControl3p()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "ClientStopControl3p");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::ClientStopControl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "ClientStopControl");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::ClientStartControl3p()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "ClientStartControl3p");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::ClientStartControl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "ClientStartControl");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::BP_StartSecondaryAccelerate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "BP_StartSecondaryAccelerate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMCruiseMissileMain::BP_HideEffect(uint8_t isHide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCruiseMissileMain", "BP_HideEffect");
    struct
    {
        uint8_t isHide;
    } Parms{};
    Parms.isHide = (uint8_t)isHide;
    this->ProcessEvent(Func, &Parms);
}

// UDFMDeformableMeshEmitComponent
void UDFMDeformableMeshEmitComponent::UnRegisterToFXDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMDeformableMeshEmitComponent", "UnRegisterToFXDelegate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMDeformableMeshEmitComponent::RegisterToFXDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMDeformableMeshEmitComponent", "RegisterToFXDelegate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMDeformableMeshEmitComponent::OnDelgateFXRemove(struct UObject* Pointer, struct FVector ZeroBaseLoc, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMDeformableMeshEmitComponent", "OnDelgateFXRemove");
    struct
    {
        struct UObject* Pointer;
        struct FVector ZeroBaseLoc;
        float radius;
    } Parms{};
    Parms.Pointer = (struct UObject*)Pointer;
    Parms.ZeroBaseLoc = (struct FVector)ZeroBaseLoc;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

void UDFMDeformableMeshEmitComponent::OnDelgateFXAdd(struct UObject* Pointer, struct FVector ZeroBaseLoc, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMDeformableMeshEmitComponent", "OnDelgateFXAdd");
    struct
    {
        struct UObject* Pointer;
        struct FVector ZeroBaseLoc;
        float radius;
    } Parms{};
    Parms.Pointer = (struct UObject*)Pointer;
    Parms.ZeroBaseLoc = (struct FVector)ZeroBaseLoc;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

// UDFMSkillReplicateComponent
void UDFMSkillReplicateComponent::ServerSetSonarScanStatus(struct ADFMAbilityActor* MarkActor, int32_t SonarScanState, float SonarScanStateStartTime, float SonarMarkTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ServerSetSonarScanStatus");
    struct
    {
        struct ADFMAbilityActor* MarkActor;
        int32_t SonarScanState;
        float SonarScanStateStartTime;
        float SonarMarkTime;
    } Parms{};
    Parms.MarkActor = (struct ADFMAbilityActor*)MarkActor;
    Parms.SonarScanState = (int32_t)SonarScanState;
    Parms.SonarScanStateStartTime = (float)SonarScanStateStartTime;
    Parms.SonarMarkTime = (float)SonarMarkTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ServerSetSonarDetectEnemyCount(int32_t EnemyCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ServerSetSonarDetectEnemyCount");
    struct
    {
        int32_t EnemyCount;
    } Parms{};
    Parms.EnemyCount = (int32_t)EnemyCount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ServerSetC204PassiveDetectChar(struct AGPCharacter* Char, float MarkTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ServerSetC204PassiveDetectChar");
    struct
    {
        struct AGPCharacter* Char;
        float MarkTime;
    } Parms{};
    Parms.Char = (struct AGPCharacter*)Char;
    Parms.MarkTime = (float)MarkTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::OnRep_SonarScanState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "OnRep_SonarScanState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::OnRep_SonarEnemyDetectCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "OnRep_SonarEnemyDetectCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::MulticastC204PassiveDetectChar(struct AGPCharacter* SourceChar, struct AGPCharacter* DetectChar, float MarkTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "MulticastC204PassiveDetectChar");
    struct
    {
        struct AGPCharacter* SourceChar;
        struct AGPCharacter* DetectChar;
        float MarkTime;
    } Parms{};
    Parms.SourceChar = (struct AGPCharacter*)SourceChar;
    Parms.DetectChar = (struct AGPCharacter*)DetectChar;
    Parms.MarkTime = (float)MarkTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientSonarDetectVehicleMarkRemove(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientSonarDetectVehicleMarkRemove");
    struct
    {
        struct AActor* Target;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientSonarDetectVehicle(struct AActor* Target, float DetectTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientSonarDetectVehicle");
    struct
    {
        struct AActor* Target;
        float DetectTime;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.DetectTime = (float)DetectTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientSonarDetectEnemyMarkRemove(struct AActor* Target, uint8_t bUseGeneralMarker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientSonarDetectEnemyMarkRemove");
    struct
    {
        struct AActor* Target;
        uint8_t bUseGeneralMarker;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.bUseGeneralMarker = (uint8_t)bUseGeneralMarker;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientSonarDetectEnemy(struct AActor* Target, float DetectTime, float RefreshInterval, uint8_t bUseGeneralMarker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientSonarDetectEnemy");
    struct
    {
        struct AActor* Target;
        float DetectTime;
        float RefreshInterval;
        uint8_t bUseGeneralMarker;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.DetectTime = (float)DetectTime;
    Parms.RefreshInterval = (float)RefreshInterval;
    Parms.bUseGeneralMarker = (uint8_t)bUseGeneralMarker;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientSonarDetectEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientSonarDetectEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientSonarDetect(float EndTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientSonarDetect");
    struct
    {
        float EndTime;
    } Parms{};
    Parms.EndTime = (float)EndTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientPreSonarDetect(float StartTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientPreSonarDetect");
    struct
    {
        float StartTime;
    } Parms{};
    Parms.StartTime = (float)StartTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientPlayMarkSound(struct FName AudioName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientPlayMarkSound");
    struct
    {
        struct FName AudioName;
    } Parms{};
    Parms.AudioName = (struct FName)AudioName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientLeftSonarDetectRange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientLeftSonarDetectRange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientEnterSonarDetectRange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientEnterSonarDetectRange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClientBeginSonarDetect(float StartTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClientBeginSonarDetect");
    struct
    {
        float StartTime;
    } Parms{};
    Parms.StartTime = (float)StartTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSkillReplicateComponent::ClearC204PassiveDetectChar()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSkillReplicateComponent", "ClearC204PassiveDetectChar");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMSupportPackSubSystem
void UDFMSupportPackSubSystem::SetSupportLockerData(int32_t skillEntityIndex, struct UGPSupportLockerData* LockerData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "SetSupportLockerData");
    struct
    {
        int32_t skillEntityIndex;
        struct UGPSupportLockerData* LockerData;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.LockerData = (struct UGPSupportLockerData*)LockerData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSupportPackSubSystem::ServerUseSupportPack(struct AActor* Caster, struct AActor* Actor, ESupportType SupportType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "ServerUseSupportPack");
    struct
    {
        struct AActor* Caster;
        struct AActor* Actor;
        enum ESupportType SupportType;
    } Parms{};
    Parms.Caster = (struct AActor*)Caster;
    Parms.Actor = (struct AActor*)Actor;
    Parms.SupportType = (enum ESupportType)SupportType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSupportPackSubSystem::LockerTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "LockerTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMSupportPackSubSystem::HasTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "HasTarget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMSupportPackSubSystem* UDFMSupportPackSubSystem::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMSupportPackSubSystem", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UDFMSupportPackSubSystem* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMSupportPackSubSystem::EnableAutoShowBubble(struct AActor* skillEntityIndex, ESupportType BubbleType, EAutoShowBubbleSourceType SourceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "EnableAutoShowBubble");
    struct
    {
        struct AActor* skillEntityIndex;
        enum ESupportType BubbleType;
        enum EAutoShowBubbleSourceType SourceType;
    } Parms{};
    Parms.skillEntityIndex = (struct AActor*)skillEntityIndex;
    Parms.BubbleType = (enum ESupportType)BubbleType;
    Parms.SourceType = (enum EAutoShowBubbleSourceType)SourceType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSupportPackSubSystem::DisableAutoShowBubble(struct AActor* skillEntityIndex, ESupportType BubbleType, EAutoShowBubbleSourceType SourceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "DisableAutoShowBubble");
    struct
    {
        struct AActor* skillEntityIndex;
        enum ESupportType BubbleType;
        enum EAutoShowBubbleSourceType SourceType;
    } Parms{};
    Parms.skillEntityIndex = (struct AActor*)skillEntityIndex;
    Parms.BubbleType = (enum ESupportType)BubbleType;
    Parms.SourceType = (enum EAutoShowBubbleSourceType)SourceType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSupportPackSubSystem::ClientUseSupportPack(struct TArray<ECharingSlot> CharingSlotList, uint8_t bOnlySelf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "ClientUseSupportPack");
    struct
    {
        struct TArray<ECharingSlot> CharingSlotList;
        uint8_t bOnlySelf;
    } Parms{};
    Parms.CharingSlotList = (struct TArray<ECharingSlot>)CharingSlotList;
    Parms.bOnlySelf = (uint8_t)bOnlySelf;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSupportPackSubSystem::ClientSelfUseSupportPack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "ClientSelfUseSupportPack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMSupportPackSubSystem::ClearSupportLockerData(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "ClearSupportLockerData");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UDFMSupportPackSubSystem::AsyncRayTrace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMSupportPackSubSystem", "AsyncRayTrace");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ADFMThrowableBulletFreezeCannon
void ADFMThrowableBulletFreezeCannon::BP_DoPlayExplosionEffect(uint8_t bMakeDamage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMThrowableBulletFreezeCannon", "BP_DoPlayExplosionEffect");
    struct
    {
        uint8_t bMakeDamage;
    } Parms{};
    Parms.bMakeDamage = (uint8_t)bMakeDamage;
    this->ProcessEvent(Func, &Parms);
}

// ADFMThrowableBulletFreezeSpray
void ADFMThrowableBulletFreezeSpray::StopSprayEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMThrowableBulletFreezeSpray", "StopSprayEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMThrowableBulletFreezeSpray::PlaySprayEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMThrowableBulletFreezeSpray", "PlaySprayEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMThrowWeaponDataAppearanceComp
void UDFMThrowWeaponDataAppearanceComp::ClearAttachFX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMThrowWeaponDataAppearanceComp", "ClearAttachFX");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMUASPilotMovementComponent
void UDFMUASPilotMovementComponent::InitPilot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMUASPilotMovementComponent", "InitPilot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMVehicleSkillBoss04Component
void UDFMVehicleSkillBoss04Component::ServerUpdateShootDir(struct FVector Dir, struct AActor* LockTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillBoss04Component", "ServerUpdateShootDir");
    struct
    {
        struct FVector Dir;
        struct AActor* LockTarget;
    } Parms{};
    Parms.Dir = (struct FVector)Dir;
    Parms.LockTarget = (struct AActor*)LockTarget;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillBoss04Component::ServerSetIsFire(uint8_t bFire, float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillBoss04Component", "ServerSetIsFire");
    struct
    {
        uint8_t bFire;
        float InDuration;
    } Parms{};
    Parms.bFire = (uint8_t)bFire;
    Parms.InDuration = (float)InDuration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillBoss04Component::ServerSetFireInfo(struct FVehicleBoss04SkillState StateInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillBoss04Component", "ServerSetFireInfo");
    struct
    {
        struct FVehicleBoss04SkillState StateInfo;
    } Parms{};
    Parms.StateInfo = (struct FVehicleBoss04SkillState)StateInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillBoss04Component::OnRep_SkillState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillBoss04Component", "OnRep_SkillState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillBoss04Component::MultCastUpdateShootDir(struct FVector Dir, struct AActor* LockTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillBoss04Component", "MultCastUpdateShootDir");
    struct
    {
        struct FVector Dir;
        struct AActor* LockTarget;
    } Parms{};
    Parms.Dir = (struct FVector)Dir;
    Parms.LockTarget = (struct AActor*)LockTarget;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillBoss04Component::MultCastSetIsFire(uint8_t bFire, float InDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillBoss04Component", "MultCastSetIsFire");
    struct
    {
        uint8_t bFire;
        float InDuration;
    } Parms{};
    Parms.bFire = (uint8_t)bFire;
    Parms.InDuration = (float)InDuration;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillBoss04Component::MultCastFireToPoint(int32_t Index, int32_t BulletIndex, struct FVector Point, float BloomTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillBoss04Component", "MultCastFireToPoint");
    struct
    {
        int32_t Index;
        int32_t BulletIndex;
        struct FVector Point;
        float BloomTime;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.BulletIndex = (int32_t)BulletIndex;
    Parms.Point = (struct FVector)Point;
    Parms.BloomTime = (float)BloomTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMVehicleSkillBoss04Component::BP_SetAttackTargets(struct AActor* DamageMaker, struct AActor* DamageTaker)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMVehicleSkillBoss04Component", "BP_SetAttackTargets");
    struct
    {
        struct AActor* DamageMaker;
        struct AActor* DamageTaker;
    } Parms{};
    Parms.DamageMaker = (struct AActor*)DamageMaker;
    Parms.DamageTaker = (struct AActor*)DamageTaker;
    this->ProcessEvent(Func, &Parms);
}

// ADFMWeaponThrowableStunGrenade
void ADFMWeaponThrowableStunGrenade::PlaySmokeEffect(uint8_t bActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWeaponThrowableStunGrenade", "PlaySmokeEffect");
    struct
    {
        uint8_t bActive;
    } Parms{};
    Parms.bActive = (uint8_t)bActive;
    this->ProcessEvent(Func, &Parms);
}

void ADFMWeaponThrowableStunGrenade::OnRep_ScannedCharacters()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWeaponThrowableStunGrenade", "OnRep_ScannedCharacters");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMWeaponThrowableStunGrenade::OnRep_MovementStateRepData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWeaponThrowableStunGrenade", "OnRep_MovementStateRepData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ADFMWeaponThrowableStunGrenade::OnAnimLoadFinish(struct TArray<struct FSoftObjectPath> AssetRef)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMWeaponThrowableStunGrenade", "OnAnimLoadFinish");
    struct
    {
        struct TArray<struct FSoftObjectPath> AssetRef;
    } Parms{};
    Parms.AssetRef = (struct TArray<struct FSoftObjectPath>)AssetRef;
    this->ProcessEvent(Func, &Parms);
}

// UExtinguishIncendiaryComponent
void UExtinguishIncendiaryComponent::SetbActivate(uint8_t bNewActivate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "SetbActivate");
    struct
    {
        uint8_t bNewActivate;
    } Parms{};
    Parms.bNewActivate = (uint8_t)bNewActivate;
    this->ProcessEvent(Func, &Parms);
}

void UExtinguishIncendiaryComponent::RemoveCustomBoxes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "RemoveCustomBoxes");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExtinguishIncendiaryComponent::OnDoExplosion(struct AGPWeaponBulletThrowableProjectile* Grenade)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "OnDoExplosion");
    struct
    {
        struct AGPWeaponBulletThrowableProjectile* Grenade;
    } Parms{};
    Parms.Grenade = (struct AGPWeaponBulletThrowableProjectile*)Grenade;
    this->ProcessEvent(Func, &Parms);
}

int32_t UExtinguishIncendiaryComponent::GetCustomBoxNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "GetCustomBoxNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExtinguishIncendiaryComponent::DoOneCustomExtinguish(struct FBox Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "DoOneCustomExtinguish");
    struct
    {
        struct FBox Box;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    this->ProcessEvent(Func, &Parms);
}

void UExtinguishIncendiaryComponent::DoExtinguish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "DoExtinguish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UExtinguishIncendiaryComponent::DoCustomExtinguish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "DoCustomExtinguish");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExtinguishIncendiaryComponent::DoCheckCell(const struct FVector& CellPos, const struct FQuat& CellQuat, const struct FVector& CellHalfExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "DoCheckCell");
    struct
    {
        struct FVector CellPos;
        struct FQuat CellQuat;
        struct FVector CellHalfExtent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CellPos = (struct FVector)CellPos;
    Parms.CellQuat = (struct FQuat)CellQuat;
    Parms.CellHalfExtent = (struct FVector)CellHalfExtent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExtinguishIncendiaryComponent::DeactiveCustomBox(int32_t BoxIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "DeactiveCustomBox");
    struct
    {
        int32_t BoxIndex;
    } Parms{};
    Parms.BoxIndex = (int32_t)BoxIndex;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UExtinguishIncendiaryComponent::CheckIsActivate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "CheckIsActivate");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UExtinguishIncendiaryComponent::AddCustomBox(struct FBox Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "AddCustomBox");
    struct
    {
        struct FBox Box;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    this->ProcessEvent(Func, &Parms);
}

void UExtinguishIncendiaryComponent::ActiveCustomBox(int32_t BoxIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ExtinguishIncendiaryComponent", "ActiveCustomBox");
    struct
    {
        int32_t BoxIndex;
    } Parms{};
    Parms.BoxIndex = (int32_t)BoxIndex;
    this->ProcessEvent(Func, &Parms);
}

// UFiringBleedingCueHandler
void UFiringBleedingCueHandler::TryCancelWeaponOperate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "TryCancelWeaponOperate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::StopTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "StopTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::StartTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "StartTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::SetDFHDActionTipsState(uint8_t bIsShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "SetDFHDActionTipsState");
    struct
    {
        uint8_t bIsShow;
    } Parms{};
    Parms.bIsShow = (uint8_t)bIsShow;
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::OnInputTypeChanged(EGPInputType InputType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "OnInputTypeChanged");
    struct
    {
        enum EGPInputType InputType;
    } Parms{};
    Parms.InputType = (enum EGPInputType)InputType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UFiringBleedingCueHandler::IsCanSetActionTipsState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "IsCanSetActionTipsState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UFiringBleedingCueHandler::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UFiringBleedingCueHandler::ExitTryCloseTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "ExitTryCloseTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoTimerTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoTimerTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoShowZoyaSwarmsTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoShowZoyaSwarmsTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoShowTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoShowTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoShowInterferenceTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoShowInterferenceTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoShowFirefightingTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoShowFirefightingTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoShowBionicSpyTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoShowBionicSpyTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoHideZoyaSwarmsTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoHideZoyaSwarmsTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoHideTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoHideTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoHideInterferenceTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoHideInterferenceTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoHideFirefightingTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoHideFirefightingTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFiringBleedingCueHandler::DoHideBionicSpyTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FiringBleedingCueHandler", "DoHideBionicSpyTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AFootprintTrackerActor
void AFootprintTrackerActor::TryFindNexTickGroup(struct FFootprintTrackerPlayerData& TargetData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "TryFindNexTickGroup");
    struct
    {
        struct FFootprintTrackerPlayerData TargetData;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    TargetData = Parms.TargetData;
}

void AFootprintTrackerActor::TickShowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "TickShowState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFootprintTrackerActor::TickPlayerData(struct FFootprintTrackerPlayerData& TargetData, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "TickPlayerData");
    struct
    {
        struct FFootprintTrackerPlayerData TargetData;
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    TargetData = Parms.TargetData;
}

void AFootprintTrackerActor::TickNextTickISMInstanceData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "TickNextTickISMInstanceData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFootprintTrackerActor::TickISMInstanceData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "TickISMInstanceData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFootprintTrackerActor::RemovePlayerData(uint32_t TargetUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "RemovePlayerData");
    struct
    {
        uint32_t TargetUID;
    } Parms{};
    Parms.TargetUID = (uint32_t)TargetUID;
    this->ProcessEvent(Func, &Parms);
}

void AFootprintTrackerActor::RefreshISMShowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "RefreshISMShowState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFootprintTrackerActor::RefreshAllISMInstance(struct FFootprintTrackerPlayerData& TargetData, uint8_t bIsMainOnly)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "RefreshAllISMInstance");
    struct
    {
        struct FFootprintTrackerPlayerData TargetData;
        uint8_t bIsMainOnly;
    } Parms{};
    Parms.bIsMainOnly = (uint8_t)bIsMainOnly;
    this->ProcessEvent(Func, &Parms);
    TargetData = Parms.TargetData;
}

void AFootprintTrackerActor::RecycleISMComponent(struct UInstancedStaticMeshComponent* TargetISM)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "RecycleISMComponent");
    struct
    {
        struct UInstancedStaticMeshComponent* TargetISM;
    } Parms{};
    Parms.TargetISM = (struct UInstancedStaticMeshComponent*)TargetISM;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AFootprintTrackerActor::IsNeedTickCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "IsNeedTickCheck");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AFootprintTrackerActor::InitTraceParms()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "InitTraceParms");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AFootprintTrackerActor::InitISMComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "InitISMComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UInstancedStaticMeshComponent* AFootprintTrackerActor::GetOrCreateISMComponent(uint8_t bIsSearched)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "GetOrCreateISMComponent");
    struct
    {
        uint8_t bIsSearched;
        struct UInstancedStaticMeshComponent* ReturnValue;
    } Parms{};
    Parms.bIsSearched = (uint8_t)bIsSearched;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFootprintTrackerPlayerData AFootprintTrackerActor::GetOrAddPlayerData(uint32_t TargetUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "GetOrAddPlayerData");
    struct
    {
        uint32_t TargetUID;
        struct FFootprintTrackerPlayerData ReturnValue;
    } Parms{};
    Parms.TargetUID = (uint32_t)TargetUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AFootprintTrackerActor::DoTickISMInstanceData(struct FFootprintTrackerPlayerData& PlayerData, struct UInstancedStaticMeshComponent* TargetISM, struct TArray<struct FFootprintIsmData>& TargetDataArray, int32_t InstanceIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "DoTickISMInstanceData");
    struct
    {
        struct FFootprintTrackerPlayerData PlayerData;
        struct UInstancedStaticMeshComponent* TargetISM;
        struct TArray<struct FFootprintIsmData> TargetDataArray;
        int32_t InstanceIndex;
    } Parms{};
    Parms.TargetISM = (struct UInstancedStaticMeshComponent*)TargetISM;
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    this->ProcessEvent(Func, &Parms);
    PlayerData = Parms.PlayerData;
    TargetDataArray = Parms.TargetDataArray;
}

void AFootprintTrackerActor::CalcPrintShowData(struct FFootprintTrackerPlayerData& TargetData, uint32_t GroupID, int32_t FootprintIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "CalcPrintShowData");
    struct
    {
        struct FFootprintTrackerPlayerData TargetData;
        uint32_t GroupID;
        int32_t FootprintIndex;
    } Parms{};
    Parms.GroupID = (uint32_t)GroupID;
    Parms.FootprintIndex = (int32_t)FootprintIndex;
    this->ProcessEvent(Func, &Parms);
    TargetData = Parms.TargetData;
}

uint8_t AFootprintTrackerActor::AutoFitGround(struct FVector& FootprintLocation, struct FRotator& FootprintRotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FootprintTrackerActor", "AutoFitGround");
    struct
    {
        struct FVector FootprintLocation;
        struct FRotator FootprintRotator;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    FootprintLocation = Parms.FootprintLocation;
    FootprintRotator = Parms.FootprintRotator;
    return Parms.ReturnValue;
}

// UGameplayTagComponent
int32_t UGameplayTagComponent::SetTagCount(struct FGameplayTag TagToSet, int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "SetTagCount");
    struct
    {
        struct FGameplayTag TagToSet;
        int32_t Count;
        int32_t ReturnValue;
    } Parms{};
    Parms.TagToSet = (struct FGameplayTag)TagToSet;
    Parms.Count = (int32_t)Count;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayTagComponent::RemoveGameplayTags(const struct FGameplayTagContainer& TagsToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "RemoveGameplayTags");
    struct
    {
        struct FGameplayTagContainer TagsToRemove;
    } Parms{};
    Parms.TagsToRemove = (struct FGameplayTagContainer)TagsToRemove;
    this->ProcessEvent(Func, &Parms);
}

int32_t UGameplayTagComponent::RemoveGameplayTag(struct FGameplayTag TagToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "RemoveGameplayTag");
    struct
    {
        struct FGameplayTag TagToRemove;
        int32_t ReturnValue;
    } Parms{};
    Parms.TagToRemove = (struct FGameplayTag)TagToRemove;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayTagComponent::HasMatchingGameplayTag(struct FGameplayTag TagToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "HasMatchingGameplayTag");
    struct
    {
        struct FGameplayTag TagToCheck;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagToCheck = (struct FGameplayTag)TagToCheck;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayTagComponent::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "HasAnyMatchingGameplayTags");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameplayTagComponent::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "HasAllMatchingGameplayTags");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGameplayTagComponent::GetTagCount(struct FGameplayTag TagToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "GetTagCount");
    struct
    {
        struct FGameplayTag TagToCheck;
        int32_t ReturnValue;
    } Parms{};
    Parms.TagToCheck = (struct FGameplayTag)TagToCheck;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameplayTagComponent::GetOwnedGameplayTags(struct FGameplayTagContainer& OutTagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "GetOwnedGameplayTags");
    struct
    {
        struct FGameplayTagContainer OutTagContainer;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutTagContainer = Parms.OutTagContainer;
}

void UGameplayTagComponent::ClearAllTags()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "ClearAllTags");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameplayTagComponent::AddGameplayTags(const struct FGameplayTagContainer& TagsToAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "AddGameplayTags");
    struct
    {
        struct FGameplayTagContainer TagsToAdd;
    } Parms{};
    Parms.TagsToAdd = (struct FGameplayTagContainer)TagsToAdd;
    this->ProcessEvent(Func, &Parms);
}

int32_t UGameplayTagComponent::AddGameplayTag(struct FGameplayTag TagToAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagComponent", "AddGameplayTag");
    struct
    {
        struct FGameplayTag TagToAdd;
        int32_t ReturnValue;
    } Parms{};
    Parms.TagToAdd = (struct FGameplayTag)TagToAdd;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGamePlayTagUtils
uint8_t UGamePlayTagUtils::UnbindOnGameplayTagRemoved(struct AActor* Actor, const struct FDelegate& OnTagRemovedDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "UnbindOnGameplayTagRemoved");
    struct
    {
        struct AActor* Actor;
        struct FDelegate OnTagRemovedDelegate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.OnTagRemovedDelegate = (struct FDelegate)OnTagRemovedDelegate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::UnbindOnGameplayTagAdded(struct AActor* Actor, const struct FDelegate& OnTagAddedDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "UnbindOnGameplayTagAdded");
    struct
    {
        struct AActor* Actor;
        struct FDelegate OnTagAddedDelegate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.OnTagAddedDelegate = (struct FDelegate)OnTagAddedDelegate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::UnbindAllGameplayTagEvents(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "UnbindAllGameplayTagEvents");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamePlayTagUtils::SetActorTagCount(struct AActor* Actor, struct FGameplayTag TagToSet, int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "SetActorTagCount");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTag TagToSet;
        int32_t Count;
        int32_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagToSet = (struct FGameplayTag)TagToSet;
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::RemoveGameplayTagsFromActor(struct AActor* Actor, const struct FGameplayTagContainer& TagsToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "RemoveGameplayTagsFromActor");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTagContainer TagsToRemove;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagsToRemove = (struct FGameplayTagContainer)TagsToRemove;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamePlayTagUtils::RemoveGameplayTagFromActor(struct AActor* Actor, struct FGameplayTag TagToRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "RemoveGameplayTagFromActor");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTag TagToRemove;
        int32_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagToRemove = (struct FGameplayTag)TagToRemove;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameplayTagComponent* UGamePlayTagUtils::GetOrCreateGameplayTagComponent(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "GetOrCreateGameplayTagComponent");
    struct
    {
        struct AActor* Actor;
        struct UGameplayTagComponent* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameplayTagComponent* UGamePlayTagUtils::GetGameplayTagComponent(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "GetGameplayTagComponent");
    struct
    {
        struct AActor* Actor;
        struct UGameplayTagComponent* ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamePlayTagUtils::GetActorTagCount(struct AActor* Actor, struct FGameplayTag TagToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "GetActorTagCount");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTag TagToCheck;
        int32_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagToCheck = (struct FGameplayTag)TagToCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::GetActorGameplayTags(struct AActor* Actor, struct FGameplayTagContainer& OutTagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "GetActorGameplayTags");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTagContainer OutTagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutTagContainer = Parms.OutTagContainer;
    return Parms.ReturnValue;
}

void UGamePlayTagUtils::FindAllActorsWithTag(struct UObject* WorldContextObject, struct FGameplayTag TagToFind, struct TArray<struct AActor*>& OutActors, struct AActor* ActorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "FindAllActorsWithTag");
    struct
    {
        struct UObject* WorldContextObject;
        struct FGameplayTag TagToFind;
        struct TArray<struct AActor*> OutActors;
        struct AActor* ActorClass;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.TagToFind = (struct FGameplayTag)TagToFind;
    Parms.ActorClass = (struct AActor*)ActorClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UGamePlayTagUtils::FindAllActorsWithAnyTags(struct UObject* WorldContextObject, const struct FGameplayTagContainer& AnyTags, struct TArray<struct AActor*>& OutActors, struct AActor* ActorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "FindAllActorsWithAnyTags");
    struct
    {
        struct UObject* WorldContextObject;
        struct FGameplayTagContainer AnyTags;
        struct TArray<struct AActor*> OutActors;
        struct AActor* ActorClass;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.AnyTags = (struct FGameplayTagContainer)AnyTags;
    Parms.ActorClass = (struct AActor*)ActorClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

void UGamePlayTagUtils::FindAllActorsWithAllTags(struct UObject* WorldContextObject, const struct FGameplayTagContainer& RequiredTags, struct TArray<struct AActor*>& OutActors, struct AActor* ActorClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "FindAllActorsWithAllTags");
    struct
    {
        struct UObject* WorldContextObject;
        struct FGameplayTagContainer RequiredTags;
        struct TArray<struct AActor*> OutActors;
        struct AActor* ActorClass;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.RequiredTags = (struct FGameplayTagContainer)RequiredTags;
    Parms.ActorClass = (struct AActor*)ActorClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

uint8_t UGamePlayTagUtils::ClearAllActorGameplayTags(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "ClearAllActorGameplayTags");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::BindOnGameplayTagRemoved(struct AActor* Actor, const struct FDelegate& OnTagRemovedDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "BindOnGameplayTagRemoved");
    struct
    {
        struct AActor* Actor;
        struct FDelegate OnTagRemovedDelegate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.OnTagRemovedDelegate = (struct FDelegate)OnTagRemovedDelegate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::BindOnGameplayTagAdded(struct AActor* Actor, const struct FDelegate& OnTagAddedDelegate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "BindOnGameplayTagAdded");
    struct
    {
        struct AActor* Actor;
        struct FDelegate OnTagAddedDelegate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.OnTagAddedDelegate = (struct FDelegate)OnTagAddedDelegate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGamePlayTagUtils::AddGameplayTagToActor(struct AActor* Actor, struct FGameplayTag TagToAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "AddGameplayTagToActor");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTag TagToAdd;
        int32_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagToAdd = (struct FGameplayTag)TagToAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::AddGameplayTagsToActor(struct AActor* Actor, const struct FGameplayTagContainer& TagsToAdd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "AddGameplayTagsToActor");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTagContainer TagsToAdd;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagsToAdd = (struct FGameplayTagContainer)TagsToAdd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::ActorHasGameplayTag(struct AActor* Actor, struct FGameplayTag TagToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "ActorHasGameplayTag");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTag TagToCheck;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagToCheck = (struct FGameplayTag)TagToCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::ActorHasAnyGameplayTags(struct AActor* Actor, const struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "ActorHasAnyGameplayTags");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTagContainer TagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGamePlayTagUtils::ActorHasAllGameplayTags(struct AActor* Actor, const struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GamePlayTagUtils", "ActorHasAllGameplayTags");
    struct
    {
        struct AActor* Actor;
        struct FGameplayTagContainer TagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPWeaponAbilityFireModeDirectLauncher
void UGPWeaponAbilityFireModeDirectLauncher::SpawnGrenade(const struct FVector& StartLocation, const struct FVector& FireRotation, const struct FVector& AffectInitVelocity, const uint64_t& BulletGuid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAbilityFireModeDirectLauncher", "SpawnGrenade");
    struct
    {
        struct FVector StartLocation;
        struct FVector FireRotation;
        struct FVector AffectInitVelocity;
        uint64_t BulletGuid;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.FireRotation = (struct FVector)FireRotation;
    Parms.AffectInitVelocity = (struct FVector)AffectInitVelocity;
    Parms.BulletGuid = (uint64_t)BulletGuid;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPWeaponAbilityFireModeDirectLauncher::CheckIsClientOnlyThrowConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponAbilityFireModeDirectLauncher", "CheckIsClientOnlyThrowConfig");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULeftWeaponFireModeGrenadeLauncher
uint8_t ULeftWeaponFireModeGrenadeLauncher::ValidateFireInfo(const struct FWeaponFireRepInfo& InFireRepInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LeftWeaponFireModeGrenadeLauncher", "ValidateFireInfo");
    struct
    {
        struct FWeaponFireRepInfo InFireRepInfo;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFireRepInfo = (struct FWeaponFireRepInfo)InFireRepInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPWeaponBulletThrowableProjectile* ULeftWeaponFireModeGrenadeLauncher::SpawnThrowableProjectile(const struct FVector& StartLocation, const struct FVector& StartForward, const struct FVector& AffectInitVelocity, const uint64_t& BulletGuid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LeftWeaponFireModeGrenadeLauncher", "SpawnThrowableProjectile");
    struct
    {
        struct FVector StartLocation;
        struct FVector StartForward;
        struct FVector AffectInitVelocity;
        uint64_t BulletGuid;
        struct AGPWeaponBulletThrowableProjectile* ReturnValue;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.StartForward = (struct FVector)StartForward;
    Parms.AffectInitVelocity = (struct FVector)AffectInitVelocity;
    Parms.BulletGuid = (uint64_t)BulletGuid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULeftWeaponFireModeGrenadeLauncher::GetFireTraceLocation(struct FVector& OutStartLocation, struct FRotator& OutFireRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LeftWeaponFireModeGrenadeLauncher", "GetFireTraceLocation");
    struct
    {
        struct FVector OutStartLocation;
        struct FRotator OutFireRotation;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutStartLocation = Parms.OutStartLocation;
    OutFireRotation = Parms.OutFireRotation;
}

void ULeftWeaponFireModeGrenadeLauncher::DoFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LeftWeaponFireModeGrenadeLauncher", "DoFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULeftWeaponFireModeGrenadeLauncher::DoFailedSwitchWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LeftWeaponFireModeGrenadeLauncher", "DoFailedSwitchWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULeftWeaponFireModeGrenadeLauncher::CheckIsClientOnlyThrowConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LeftWeaponFireModeGrenadeLauncher", "CheckIsClientOnlyThrowConfig");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGPWeaponFireModeChainHook
void UGPWeaponFireModeChainHook::ClearPreviewData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPWeaponFireModeChainHook", "ClearPreviewData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ASkillDeploymentBase
void ASkillDeploymentBase::TryAutoAttachToSurface()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "TryAutoAttachToSurface");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::OnServerMatchEnd(EMatchOverReason EndReason, int64_t Uin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "OnServerMatchEnd");
    struct
    {
        enum EMatchOverReason EndReason;
        int64_t Uin;
    } Parms{};
    Parms.EndReason = (enum EMatchOverReason)EndReason;
    Parms.Uin = (int64_t)Uin;
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::OnRep_TriggerState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "OnRep_TriggerState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "OnCharacterDead");
    struct
    {
        struct AGPCharacterBase* CHARACTER;
        struct AController* Killer;
        struct UDamageType* DamageType;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacterBase*)CHARACTER;
    Parms.Killer = (struct AController*)Killer;
    Parms.DamageType = (struct UDamageType*)DamageType;
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::OnCharacterBeKnockedDown(struct FKillInfo& KillInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "OnCharacterBeKnockedDown");
    struct
    {
        struct FKillInfo KillInfo;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    KillInfo = Parms.KillInfo;
}

void ASkillDeploymentBase::OnCharacterArmedForceChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "OnCharacterArmedForceChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::EMPRecover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "EMPRecover");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::EMPDisable(float EMPAffectTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "EMPDisable");
    struct
    {
        float EMPAffectTime;
    } Parms{};
    Parms.EMPAffectTime = (float)EMPAffectTime;
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::DelayExit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "DelayExit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::CheckAttachedParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "CheckAttachedParent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::BP_SpawnByHeavyAttack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "BP_SpawnByHeavyAttack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASkillDeploymentBase::BP_ClientEmpAffect(uint8_t bAffected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkillDeploymentBase", "BP_ClientEmpAffect");
    struct
    {
        uint8_t bAffected;
    } Parms{};
    Parms.bAffected = (uint8_t)bAffected;
    this->ProcessEvent(Func, &Parms);
}

// AIntelligentSmoke
void AIntelligentSmoke::MulticastActivated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntelligentSmoke", "MulticastActivated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AIntelligentSmoke::BP_ClientActivated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IntelligentSmoke", "BP_ClientActivated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ANitrogenZoneActor
void ANitrogenZoneActor::RefreshActorFreezeState(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "RefreshActorFreezeState");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ANitrogenZoneActor::IsActorInZone(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "IsActorInZone");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ANitrogenZoneActor::InitializeNitrogenZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "InitializeNitrogenZone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UAbilityVoxelizationComponent* ANitrogenZoneActor::GetVoxelizationComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "GetVoxelizationComponent");
    struct
    {
        struct UAbilityVoxelizationComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ANitrogenZoneActor::GetActorsInZoneCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "GetActorsInZoneCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> ANitrogenZoneActor::GetActorsInZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "GetActorsInZone");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ANitrogenZoneActor::ClearAllFreezeStates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "ClearAllFreezeStates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ANitrogenZoneActor::CheckLocationInVoxel(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "CheckLocationInVoxel");
    struct
    {
        struct FVector Location;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ANitrogenZoneActor::BP_OnNitrogenZoneDestroyed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "BP_OnNitrogenZoneDestroyed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANitrogenZoneActor::BP_OnActorLeaveNitrogenZone(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "BP_OnActorLeaveNitrogenZone");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void ANitrogenZoneActor::BP_OnActorEnterNitrogenZone(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NitrogenZoneActor", "BP_OnActorEnterNitrogenZone");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityLogicTask
void UQA_AbilityLogicTask::TickLogic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "TickLogic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::TaskPreload(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "TaskPreload");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::SetupDataType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "SetupDataType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::SetupDataShareData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "SetupDataShareData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::Rollback(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "Rollback");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::RemoveTaskPreload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "RemoveTaskPreload");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::RemoveResouceWaitList(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "RemoveResouceWaitList");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::RemoveFromCharacter(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "RemoveFromCharacter");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::ReleaseLogic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "ReleaseLogic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UQA_AbilityLogicTask::ReApplyLogic(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "ReApplyLogic");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityLogicTask::PreMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "PreMatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UQA_AbilityLogicTask::PredictCheck(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "PredictCheck");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityLogicTask::OnUnNormalEnd(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "OnUnNormalEnd");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::OnTaskLoadedPreload(struct TArray<struct FSoftObjectPath> Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "OnTaskLoadedPreload");
    struct
    {
        struct TArray<struct FSoftObjectPath> Path;
    } Parms{};
    Parms.Path = (struct TArray<struct FSoftObjectPath>)Path;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::OnNormalStart(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "OnNormalStart");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::OnNormalBreak(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "OnNormalBreak");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::OnCharacterDie(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "OnCharacterDie");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UQA_AbilityLogicTask::IsUsePreload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "IsUsePreload");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UQA_AbilityLogicTask::IsTaskResouceDone(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "IsTaskResouceDone");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UQA_AbilityLogicTask::IsResouceNode(struct FName Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "IsResouceNode");
    struct
    {
        struct FName Name;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UQA_AbilityLogicTask::IsResouceDone(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "IsResouceDone");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UQA_AbilityLogicTask::IsAvatarResouceDone(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "IsAvatarResouceDone");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityLogicTask::InnerGetTaskPreloadResource(int32_t skillEntityIndex, uint64_t AvatarID, uint8_t bExclude1P)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "InnerGetTaskPreloadResource");
    struct
    {
        int32_t skillEntityIndex;
        uint64_t AvatarID;
        uint8_t bExclude1P;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.AvatarID = (uint64_t)AvatarID;
    Parms.bExclude1P = (uint8_t)bExclude1P;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::InitLogic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "InitLogic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::GetTemplateTaskPreloadResource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "GetTemplateTaskPreloadResource");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::GetTaskPreloadResource(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "GetTaskPreloadResource");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

struct ASkillSubsystem* UQA_AbilityLogicTask::GetSkillSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "GetSkillSystem");
    struct
    {
        struct ASkillSubsystem* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UQA_AbilityLogicTask::GetCharacterAvatarId(struct AGPCharacter* GPCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "GetCharacterAvatarId");
    struct
    {
        struct AGPCharacter* GPCharacter;
        uint64_t ReturnValue;
    } Parms{};
    Parms.GPCharacter = (struct AGPCharacter*)GPCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityLogicTask::GetAvatarPreloadResource(int32_t skillEntityIndex, uint64_t AvatarID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "GetAvatarPreloadResource");
    struct
    {
        int32_t skillEntityIndex;
        uint64_t AvatarID;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.AvatarID = (uint64_t)AvatarID;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::ExitLogic(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "ExitLogic");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::EnterSystemLogic(int32_t skillEntityIndex, float EnterTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "EnterSystemLogic");
    struct
    {
        int32_t skillEntityIndex;
        float EnterTime;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.EnterTime = (float)EnterTime;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::EnterLogicCheckPreload(int32_t skillEntityIndex, uint8_t ReEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "EnterLogicCheckPreload");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t ReEnter;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.ReEnter = (uint8_t)ReEnter;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::EnterLogic(int32_t skillEntityIndex, uint8_t ReEnter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "EnterLogic");
    struct
    {
        int32_t skillEntityIndex;
        uint8_t ReEnter;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.ReEnter = (uint8_t)ReEnter;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UQA_AbilityLogicTask::CollectTaskPreAssetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "CollectTaskPreAssetName");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UQA_AbilityLogicTask::CollectAvatarTaskPreAssetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "CollectAvatarTaskPreAssetName");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityLogicTask::ApplyLogic(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "ApplyLogic");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityLogicTask::AddResouceWaitList(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityLogicTask", "AddResouceWaitList");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityAddHealth
struct UQA_AbilityLogicTask* UQA_AbilityAddHealth::QA_AbilityAddHealth(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct AActor* TargetCharacter, int32_t AddHealth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityAddHealth", "QA_AbilityAddHealth");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct AActor* TargetCharacter;
        int32_t AddHealth;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.TargetCharacter = (struct AActor*)TargetCharacter;
    Parms.AddHealth = (int32_t)AddHealth;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityAddSheild
struct UQA_AbilityLogicTask* UQA_AbilityAddSheild::QA_AbilityAddSheild(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float AddSheildValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityAddSheild", "QA_AbilityAddSheild");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float AddSheildValue;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.AddSheildValue = (float)AddSheildValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityAddSkillNum
struct UQA_AbilityLogicTask* UQA_AbilityAddSkillNum::QA_AbilityAddSkillNum(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t AddNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityAddSkillNum", "QA_AbilityAddSkillNum");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        int32_t AddNum;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.AddNum = (int32_t)AddNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityAttachMeshAnim
void UQA_AbilityAttachMeshAnim::SetAttachMesh(struct FAbilityBlackBorad_AttachMesh& AttachMeshData, struct AGPCharacter* CHARACTER, struct FName MeshName, struct UGPSkeletalMeshComponent* ItemMesh, uint8_t IsBindMesh, uint8_t IsFPP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "SetAttachMesh");
    struct
    {
        struct FAbilityBlackBorad_AttachMesh AttachMeshData;
        struct AGPCharacter* CHARACTER;
        struct FName MeshName;
        struct UGPSkeletalMeshComponent* ItemMesh;
        uint8_t IsBindMesh;
        uint8_t IsFPP;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    Parms.MeshName = (struct FName)MeshName;
    Parms.ItemMesh = (struct UGPSkeletalMeshComponent*)ItemMesh;
    Parms.IsBindMesh = (uint8_t)IsBindMesh;
    Parms.IsFPP = (uint8_t)IsFPP;
    this->ProcessEvent(Func, &Parms);
    AttachMeshData = Parms.AttachMeshData;
}

void UQA_AbilityAttachMeshAnim::RemovePreload(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "RemovePreload");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

struct UQA_AbilityAttachMeshAnim* UQA_AbilityAttachMeshAnim::QA_AbilityAttachMeshAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityAttachMeshAnimData Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityAttachMeshAnim", "QA_AbilityAttachMeshAnim");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FAbilityAttachMeshAnimData Data;
        struct UQA_AbilityAttachMeshAnim* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Data = (struct FAbilityAttachMeshAnimData)Data;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityAttachMeshAnim::OnSeqAssetLoaded(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "OnSeqAssetLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
        int32_t skillEntityIndex;
        struct FName MeshName;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityAttachMeshAnim::OnMaterialAssetLoaded(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "OnMaterialAssetLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
        int32_t skillEntityIndex;
        struct FName MeshName;
        int32_t Index;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityAttachMeshAnim::OnLoadedPreload(const struct FSoftObjectPath& SoftObjectPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "OnLoadedPreload");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityAttachMeshAnim::OnAudioEventAssetLoaded(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "OnAudioEventAssetLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
        int32_t skillEntityIndex;
        struct FName MeshName;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityAttachMeshAnim::OnAssetLoaded3POn1P(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "OnAssetLoaded3POn1P");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
        int32_t skillEntityIndex;
        struct FName MeshName;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityAttachMeshAnim::OnAssetLoaded(const struct FSoftObjectPath& SoftObjectPath, int32_t skillEntityIndex, struct FName MeshName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "OnAssetLoaded");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
        int32_t skillEntityIndex;
        struct FName MeshName;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.MeshName = (struct FName)MeshName;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityAttachMeshAnim::OnAnimTimerOut(int32_t skillEntityIndex, int32_t InLogicID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityAttachMeshAnim", "OnAnimTimerOut");
    struct
    {
        int32_t skillEntityIndex;
        int32_t InLogicID;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.InLogicID = (int32_t)InLogicID;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityDestroyMeshAnim
struct UQA_AbilityDestroyMeshAnim* UQA_AbilityDestroyMeshAnim::QA_AbilityDestroyMeshAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName _MeshName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityDestroyMeshAnim", "QA_AbilityDestroyMeshAnim");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName _MeshName;
        struct UQA_AbilityDestroyMeshAnim* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms._MeshName = (struct FName)_MeshName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityTagMeshAnim
struct UQA_AbilityTagMeshAnim* UQA_AbilityTagMeshAnim::QA_AbilityTagMeshAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InMeshName, struct FName InTag, uint8_t InAdd, uint8_t InCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityTagMeshAnim", "QA_AbilityTagMeshAnim");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName InMeshName;
        struct FName InTag;
        uint8_t InAdd;
        uint8_t InCheck;
        struct UQA_AbilityTagMeshAnim* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InMeshName = (struct FName)InMeshName;
    Parms.InTag = (struct FName)InTag;
    Parms.InAdd = (uint8_t)InAdd;
    Parms.InCheck = (uint8_t)InCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityAudio
struct UQA_AbilityLogicTask* UQA_AbilityAudio::QA_AbilityAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UGPAudioEventAsset* InAudioEventAsset, struct FName InAudioEventAudioName, EGPAudioBlueprintType EType, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, EAudioRoleType RoleType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityAudio", "QA_AbilityAudio");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UGPAudioEventAsset* InAudioEventAsset;
        struct FName InAudioEventAudioName;
        enum EGPAudioBlueprintType EType;
        float Duration;
        uint8_t bNeedMakeNoise;
        uint8_t bPreCutted;
        enum EAudioRoleType RoleType;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InAudioEventAsset = (struct UGPAudioEventAsset*)InAudioEventAsset;
    Parms.InAudioEventAudioName = (struct FName)InAudioEventAudioName;
    Parms.EType = (enum EGPAudioBlueprintType)EType;
    Parms.Duration = (float)Duration;
    Parms.bNeedMakeNoise = (uint8_t)bNeedMakeNoise;
    Parms.bPreCutted = (uint8_t)bPreCutted;
    Parms.RoleType = (enum EAudioRoleType)RoleType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityResourceAudio
struct UQA_AbilityLogicTask* UQA_AbilityResourceAudio::QA_AbilityResourceAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InResouceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityResourceAudio", "QA_AbilityResourceAudio");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName InResouceID;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InResouceID = (struct FName)InResouceID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityLogicState
struct UQA_AbilityLogicTask* UQA_AbilityLogicState::QA_BeginAbilityState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityLogicState", "QA_BeginAbilityState");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityBehaviorCall
struct UQA_AbilityLogicTask* UQA_AbilityBehaviorCall::QA_AbilitySlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESlotButton sb)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityBehaviorCall", "QA_AbilitySlotButton");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName FunctionName;
        enum ESlotButton sb;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.sb = (enum ESlotButton)sb;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityBehaviorCall::QA_AbilityListnerState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESkillBtnCall Call)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityBehaviorCall", "QA_AbilityListnerState");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName FunctionName;
        enum ESkillBtnCall Call;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.Call = (enum ESkillBtnCall)Call;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityBehaviorCall::QA_AbilityListnerBaseState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESkillBtnCall Call)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityBehaviorCall", "QA_AbilityListnerBaseState");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName FunctionName;
        enum ESkillBtnCall Call;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.Call = (enum ESkillBtnCall)Call;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityBehaviorCall::QA_AbilityFSMStatusListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, EFSMGamePlayStatusDefine Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityBehaviorCall", "QA_AbilityFSMStatusListner");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName FunctionName;
        enum EFSMGamePlayStatusDefine Status;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.Status = (enum EFSMGamePlayStatusDefine)Status;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityBehaviorCall::QA_AbilityBehaviorListnerBase(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESkillBehavior Call, EAbilityStateFlag StateFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityBehaviorCall", "QA_AbilityBehaviorListnerBase");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName FunctionName;
        enum ESkillBehavior Call;
        enum EAbilityStateFlag StateFlag;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.Call = (enum ESkillBehavior)Call;
    Parms.StateFlag = (enum EAbilityStateFlag)StateFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityBehaviorCall::QA_AbilityBehaviorListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, ESkillBehavior Call)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityBehaviorCall", "QA_AbilityBehaviorListner");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName FunctionName;
        enum ESkillBehavior Call;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.Call = (enum ESkillBehavior)Call;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityChangeBehaviorCall
struct UQA_AbilityLogicTask* UQA_AbilityChangeBehaviorCall::QA_AbilityChangeSlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName FunctionName, ESlotButton sb)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityChangeBehaviorCall", "QA_AbilityChangeSlotButton");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName FunctionName;
        enum ESlotButton sb;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.sb = (enum ESlotButton)sb;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityChangeBehaviorCall::QA_AbilityChangeListnerState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName FunctionName, ESkillBtnCall Call)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityChangeBehaviorCall", "QA_AbilityChangeListnerState");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName FunctionName;
        enum ESkillBtnCall Call;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.Call = (enum ESkillBtnCall)Call;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityChangeBehaviorCall::QA_AbilityChangeBehaviorListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName FunctionName, ESkillBehavior Call)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityChangeBehaviorCall", "QA_AbilityChangeBehaviorListner");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName FunctionName;
        enum ESkillBehavior Call;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.Call = (enum ESkillBehavior)Call;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityRevertBehaviorCall
struct UQA_AbilityLogicTask* UQA_AbilityRevertBehaviorCall::QA_AbilityRevertSlotButton(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRevertBehaviorCall", "QA_AbilityRevertSlotButton");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityRevertBehaviorCall::QA_AbilityRevertListnerState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRevertBehaviorCall", "QA_AbilityRevertListnerState");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityLogicTask* UQA_AbilityRevertBehaviorCall::QA_AbilityRevertBehaviorListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRevertBehaviorCall", "QA_AbilityRevertBehaviorListner");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityFSMStatusInstanceListner
struct UQA_AbilityLogicTask* UQA_AbilityFSMStatusInstanceListner::QA_AbilityFSMStatusInstanceListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName, EFSMGamePlayStatusDefine Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityFSMStatusInstanceListner", "QA_AbilityFSMStatusInstanceListner");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName FunctionName;
        enum EFSMGamePlayStatusDefine Status;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.FunctionName = (struct FName)FunctionName;
    Parms.Status = (enum EFSMGamePlayStatusDefine)Status;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityListner
struct UQA_AbilityLogicTask* UQA_AbilityListner::QA_AbilityListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillBtnCall InCall, uint8_t InLockRTT)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityListner", "QA_AbilityListner");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ESkillBtnCall InCall;
        uint8_t InLockRTT;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InCall = (enum ESkillBtnCall)InCall;
    Parms.InLockRTT = (uint8_t)InLockRTT;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityListner::OnSkillBtnCall(int32_t skillEntityIndex, ESkillBtnCall BtnCall)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityListner", "OnSkillBtnCall");
    struct
    {
        int32_t skillEntityIndex;
        enum ESkillBtnCall BtnCall;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.BtnCall = (enum ESkillBtnCall)BtnCall;
    this->ProcessEvent(Func, &Parms);
}

// UQA_SkillBehaviorListner
struct UQA_AbilityLogicTask* UQA_SkillBehaviorListner::QA_SkillBehaviorListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillBehavior InBehehavior, uint8_t InEnableMP, uint8_t InEnableSOL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SkillBehaviorListner", "QA_SkillBehaviorListner");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ESkillBehavior InBehehavior;
        uint8_t InEnableMP;
        uint8_t InEnableSOL;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InBehehavior = (enum ESkillBehavior)InBehehavior;
    Parms.InEnableMP = (uint8_t)InEnableMP;
    Parms.InEnableSOL = (uint8_t)InEnableSOL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_SkillBehaviorListner::OnSkillBehehavior(int32_t skillEntityIndex, ESkillBehavior BehehaviorCall)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_SkillBehaviorListner", "OnSkillBehehavior");
    struct
    {
        int32_t skillEntityIndex;
        enum ESkillBehavior BehehaviorCall;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.BehehaviorCall = (enum ESkillBehavior)BehehaviorCall;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityDisableListner
struct UQA_AbilityLogicTask* UQA_AbilityDisableListner::QA_AbilityDisableListner(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Listner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityDisableListner", "QA_AbilityDisableListner");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName Listner;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Listner = (struct FName)Listner;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityBuff
struct UQA_AbilityBuff* UQA_AbilityBuff::QA_AbilityBuff(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t BuffId, int32_t BFBuffID, int32_t HDBuffID, int32_t HDBFBuffID, ECharacterPart Part, struct FAbilityBuffAwardConfig BF_AwardConfigIn, struct FAbilityBuffAwardConfig SOL_AwardConfigIn, uint8_t AddOrRemove, uint8_t RemoveBuffOnAbilityAbort, uint8_t UseBFBuffWhenIsBF, uint8_t UseHDBuffWhenIsHD, uint8_t LeaveRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityBuff", "QA_AbilityBuff");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        int32_t BuffId;
        int32_t BFBuffID;
        int32_t HDBuffID;
        int32_t HDBFBuffID;
        enum ECharacterPart Part;
        struct FAbilityBuffAwardConfig BF_AwardConfigIn;
        struct FAbilityBuffAwardConfig SOL_AwardConfigIn;
        uint8_t AddOrRemove;
        uint8_t RemoveBuffOnAbilityAbort;
        uint8_t UseBFBuffWhenIsBF;
        uint8_t UseHDBuffWhenIsHD;
        uint8_t LeaveRemove;
        struct UQA_AbilityBuff* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.BuffId = (int32_t)BuffId;
    Parms.BFBuffID = (int32_t)BFBuffID;
    Parms.HDBuffID = (int32_t)HDBuffID;
    Parms.HDBFBuffID = (int32_t)HDBFBuffID;
    Parms.Part = (enum ECharacterPart)Part;
    Parms.BF_AwardConfigIn = (struct FAbilityBuffAwardConfig)BF_AwardConfigIn;
    Parms.SOL_AwardConfigIn = (struct FAbilityBuffAwardConfig)SOL_AwardConfigIn;
    Parms.AddOrRemove = (uint8_t)AddOrRemove;
    Parms.RemoveBuffOnAbilityAbort = (uint8_t)RemoveBuffOnAbilityAbort;
    Parms.UseBFBuffWhenIsBF = (uint8_t)UseBFBuffWhenIsBF;
    Parms.UseHDBuffWhenIsHD = (uint8_t)UseHDBuffWhenIsHD;
    Parms.LeaveRemove = (uint8_t)LeaveRemove;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_C302PassiveBuff
struct UQA_AbilityLogicTask* UQA_C302PassiveBuff::QA_C302PassiveBuff(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_C302PassiveBuff", "QA_C302PassiveBuff");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float CD;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.CD = (float)CD;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityC103RemoteRescure
struct UQA_AbilityLogicTask* UQA_AbilityC103RemoteRescure::QA_AbilityC103RemoteRescure(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityC103RemoteRescure", "QA_AbilityC103RemoteRescure");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCameraModifier
struct UQA_AbilityLogicTask* UQA_AbilityCameraModifier::QA_AbilityCameraModifier(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UCameraModifier* NewModifierClass, uint8_t AddOrRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCameraModifier", "QA_AbilityCameraModifier");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UCameraModifier* NewModifierClass;
        uint8_t AddOrRemove;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.NewModifierClass = (struct UCameraModifier*)NewModifierClass;
    Parms.AddOrRemove = (uint8_t)AddOrRemove;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCastWeaponAmmo
struct UQA_AbilityLogicTask* UQA_AbilityCastWeaponAmmo::QA_AbilityCastWeaponAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECharingSlot Slot, int32_t Cast)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCastWeaponAmmo", "QA_AbilityCastWeaponAmmo");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ECharingSlot Slot;
        int32_t Cast;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Slot = (enum ECharingSlot)Slot;
    Parms.Cast = (int32_t)Cast;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCheckWeaponAmmo
struct UQA_AbilityLogicTask* UQA_AbilityCheckWeaponAmmo::QA_AbilityCheckWeaponAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECharingSlot Slot, struct FName Op, int32_t AmmoNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCheckWeaponAmmo", "QA_AbilityCheckWeaponAmmo");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ECharingSlot Slot;
        struct FName Op;
        int32_t AmmoNum;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Slot = (enum ECharingSlot)Slot;
    Parms.Op = (struct FName)Op;
    Parms.AmmoNum = (int32_t)AmmoNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCD
struct UQA_AbilityLogicTask* UQA_AbilityCD::QA_AbilityCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCD", "QA_AbilityCD");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float CD;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.CD = (float)CD;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityUseCD
struct UQA_AbilityLogicTask* UQA_AbilityUseCD::QA_AbilityUseCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityUseCD", "QA_AbilityUseCD");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityAddCD
struct UQA_AbilityLogicTask* UQA_AbilityAddCD::QA_AbilityAddCD(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Value, uint8_t isPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityAddCD", "QA_AbilityAddCD");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float Value;
        uint8_t isPercent;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Value = (float)Value;
    Parms.isPercent = (uint8_t)isPercent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySlotChargingAfterSkill
struct UQA_AbilityLogicTask* UQA_AbilitySlotChargingAfterSkill::QA_AbilitySlotChargingAfterSkill(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySlotChargingAfterSkill", "QA_AbilitySlotChargingAfterSkill");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AddNewNodeExcuteEntry
struct UQA_AbilityLogicTask* UQA_AddNewNodeExcuteEntry::QA_AddNewNodeExcuteEntry(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AddNewNodeExcuteEntry", "QA_AddNewNodeExcuteEntry");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCDEx
struct UQA_AbilityLogicTask* UQA_AbilityCDEx::QA_AbilityCDEx(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float CD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCDEx", "QA_AbilityCDEx");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float CD;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.CD = (float)CD;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityChangeCharacterAnimation
struct UQA_AbilityLogicTask* UQA_AbilityChangeCharacterAnimation::QA_AbilityChangeCharacterAnimation(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UBlendSpaceBase* MoveBS, struct UAnimSequence* IdleAnim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityChangeCharacterAnimation", "QA_AbilityChangeCharacterAnimation");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UBlendSpaceBase* MoveBS;
        struct UAnimSequence* IdleAnim;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.MoveBS = (struct UBlendSpaceBase*)MoveBS;
    Parms.IdleAnim = (struct UAnimSequence*)IdleAnim;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityChangeWeaponAnimMap
struct UQA_AbilityLogicTask* UQA_AbilityChangeWeaponAnimMap::QA_AbilityChangeWeaponAnimMap(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t isClear, struct FName ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityChangeWeaponAnimMap", "QA_AbilityChangeWeaponAnimMap");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t isClear;
        struct FName ItemID;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.isClear = (uint8_t)isClear;
    Parms.ItemID = (struct FName)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityConsumeItem
struct UQA_AbilityLogicTask* UQA_AbilityConsumeItem::QA_AbilityConsumeItem(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityConsumeItem", "QA_AbilityConsumeItem");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityRecycleSpawnActor
struct UQA_AbilityRecycleSpawnActor* UQA_AbilityRecycleSpawnActor::QA_AbilityRecycleSpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityRecycleSpawnActorData InRecycleData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRecycleSpawnActor", "QA_AbilityRecycleSpawnActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FAbilityRecycleSpawnActorData InRecycleData;
        struct UQA_AbilityRecycleSpawnActor* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InRecycleData = (struct FAbilityRecycleSpawnActorData)InRecycleData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityActiveSpawnActor
struct UQA_AbilityActiveSpawnActor* UQA_AbilityActiveSpawnActor::QA_AbilityActiveSpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECharingSlot ItemPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityActiveSpawnActor", "QA_AbilityActiveSpawnActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ECharingSlot ItemPos;
        struct UQA_AbilityActiveSpawnActor* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.ItemPos = (enum ECharingSlot)ItemPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCostScore
struct UQA_AbilityLogicTask* UQA_AbilityCostScore::QA_AbilityCostScore(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCostScore", "QA_AbilityCostScore");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCrosshairPercent
struct UQA_AbilityLogicTask* UQA_AbilityCrosshairPercent::QA_AbilityCrosshairPercent(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float InSequenceLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCrosshairPercent", "QA_AbilityCrosshairPercent");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float InSequenceLength;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InSequenceLength = (float)InSequenceLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityCrosshairPercent::OnSupportSelfCureShow(struct FString FunctionName, struct UBaseUIView* View)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityCrosshairPercent", "OnSupportSelfCureShow");
    struct
    {
        struct FString FunctionName;
        struct UBaseUIView* View;
    } Parms{};
    Parms.FunctionName = (struct FString)FunctionName;
    Parms.View = (struct UBaseUIView*)View;
    this->ProcessEvent(Func, &Parms);
}

// UQA_SetSupportAmmo
struct UQA_AbilityLogicTask* UQA_SetSupportAmmo::QA_SetSupportAmmo(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InMeshName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_SetSupportAmmo", "QA_SetSupportAmmo");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName InMeshName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InMeshName = (struct FName)InMeshName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityDelay
struct UQA_AbilityLogicTask* UQA_AbilityDelay::QA_AbilityDelay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Delay, uint8_t InDieClear)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityDelay", "QA_AbilityDelay");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float Delay;
        uint8_t InDieClear;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Delay = (float)Delay;
    Parms.InDieClear = (uint8_t)InDieClear;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityDelay::OnAnimTimerOut(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityDelay", "OnAnimTimerOut");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityCustomDelay
struct UQA_AbilityLogicTask* UQA_AbilityCustomDelay::QA_AbilityCustomDelay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float serverDelay, float clientDelay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCustomDelay", "QA_AbilityCustomDelay");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float serverDelay;
        float clientDelay;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.serverDelay = (float)serverDelay;
    Parms.clientDelay = (float)clientDelay;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityCustomDelay::OnAnimTimerOut(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityCustomDelay", "OnAnimTimerOut");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityDriverFlyRebot
struct UQA_AbilityLogicTask* UQA_AbilityDriverFlyRebot::QA_AbilityDriverFlyRebot(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName VehicleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityDriverFlyRebot", "QA_AbilityDriverFlyRebot");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName VehicleName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.VehicleName = (struct FName)VehicleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityDriverFlyRebot::OnAbilityFlyRebotEvent(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityDriverFlyRebot", "OnAbilityFlyRebotEvent");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityDriverVehicle
struct UQA_AbilityLogicTask* UQA_AbilityDriverVehicle::QA_AbilityDriverVehicle(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName VehicleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityDriverVehicle", "QA_AbilityDriverVehicle");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName VehicleName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.VehicleName = (struct FName)VehicleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityEnableLongPress
struct UQA_AbilityLogicTask* UQA_AbilityEnableLongPress::QA_AbilityEnableLongPress(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityEnableLongPress", "QA_AbilityEnableLongPress");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t Enable;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityEndLogic
struct UQA_AbilityLogicTask* UQA_AbilityEndLogic::QA_AbilityEndLogic(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityEndLogic", "QA_AbilityEndLogic");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityEquipAnim
struct UQA_AbilityLogicTask* UQA_AbilityEquipAnim::QA_AbilityEquipAnim(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Equip, int32_t IngoreSlot, int32_t QuietEquipSlot, float BlendIn, float BlendOut, float preTrigger, EInteractivePutWeaponType PutWeaponType, EInteractiveGetWeaponType GetWeaponType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityEquipAnim", "QA_AbilityEquipAnim");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t Equip;
        int32_t IngoreSlot;
        int32_t QuietEquipSlot;
        float BlendIn;
        float BlendOut;
        float preTrigger;
        enum EInteractivePutWeaponType PutWeaponType;
        enum EInteractiveGetWeaponType GetWeaponType;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Equip = (uint8_t)Equip;
    Parms.IngoreSlot = (int32_t)IngoreSlot;
    Parms.QuietEquipSlot = (int32_t)QuietEquipSlot;
    Parms.BlendIn = (float)BlendIn;
    Parms.BlendOut = (float)BlendOut;
    Parms.preTrigger = (float)preTrigger;
    Parms.PutWeaponType = (enum EInteractivePutWeaponType)PutWeaponType;
    Parms.GetWeaponType = (enum EInteractiveGetWeaponType)GetWeaponType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityEquipAnim::OnAnimTimerOut(int32_t skillEntityIndex, int32_t InLogicID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityEquipAnim", "OnAnimTimerOut");
    struct
    {
        int32_t skillEntityIndex;
        int32_t InLogicID;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    Parms.InLogicID = (int32_t)InLogicID;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityEquipWeapon
struct UQA_AbilityLogicTask* UQA_AbilityEquipWeapon::QA_AbilityEquipWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Equip, struct FName WeaponID, int32_t AttachPos, uint8_t UniqueWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityEquipWeapon", "QA_AbilityEquipWeapon");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t Equip;
        struct FName WeaponID;
        int32_t AttachPos;
        uint8_t UniqueWeapon;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Equip = (uint8_t)Equip;
    Parms.WeaponID = (struct FName)WeaponID;
    Parms.AttachPos = (int32_t)AttachPos;
    Parms.UniqueWeapon = (uint8_t)UniqueWeapon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityFirefighting
struct UQA_AbilityLogicTask* UQA_AbilityFirefighting::QA_AbilityFirefighting(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityFirefighting", "QA_AbilityFirefighting");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityFunction
struct UQA_AbilityLogicTask* UQA_AbilityFunction::QA_AbilityFunction(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName FunctionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityFunction", "QA_AbilityFunction");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName FunctionName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.FunctionName = (struct FName)FunctionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityHandleRush
struct UQA_AbilityLogicTask* UQA_AbilityHandleRush::QA_AbilityHandleRush(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillActorEvent InEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityHandleRush", "QA_AbilityHandleRush");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ESkillActorEvent InEventName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InEventName = (enum ESkillActorEvent)InEventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityItemPreviewActor
struct UQA_AbilityLogicTask* UQA_AbilityItemPreviewActor::QA_AbilityItemPreviewActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityItemPreviewData AbilityItemPreviewData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityItemPreviewActor", "QA_AbilityItemPreviewActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FAbilityItemPreviewData AbilityItemPreviewData;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.AbilityItemPreviewData = (struct FAbilityItemPreviewData)AbilityItemPreviewData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityRemoveItemPreviewActor
struct UQA_AbilityLogicTask* UQA_AbilityRemoveItemPreviewActor::QA_AbilityRemoveItemPreviewActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRemoveItemPreviewActor", "QA_AbilityRemoveItemPreviewActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityKickIce
struct UQA_AbilityLogicTask* UQA_AbilityKickIce::QA_AbilityKickIce(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int64_t InAttackValueId, EDamageType InDamageType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityKickIce", "QA_AbilityKickIce");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        int64_t InAttackValueId;
        enum EDamageType InDamageType;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InAttackValueId = (int64_t)InAttackValueId;
    Parms.InDamageType = (enum EDamageType)InDamageType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityLineTrace
struct UQA_AbilityLogicTask* UQA_AbilityLineTrace::QA_AbilityLineTrace(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECollisionChannel _Channel, float _TraceLenth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityLineTrace", "QA_AbilityLineTrace");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ECollisionChannel _Channel;
        float _TraceLenth;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms._Channel = (enum ECollisionChannel)_Channel;
    Parms._TraceLenth = (float)_TraceLenth;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityLineTraceCheck
struct UQA_AbilityLogicTask* UQA_AbilityLineTraceCheck::QA_AbilityLineTraceCheck(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECollisionChannel _Channel, float _TraceLenth, float InForwardTraceLenth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityLineTraceCheck", "QA_AbilityLineTraceCheck");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ECollisionChannel _Channel;
        float _TraceLenth;
        float InForwardTraceLenth;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms._Channel = (enum ECollisionChannel)_Channel;
    Parms._TraceLenth = (float)_TraceLenth;
    Parms.InForwardTraceLenth = (float)InForwardTraceLenth;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityLogicLeaveState
struct UQA_AbilityLogicTask* UQA_AbilityLogicLeaveState::QA_EndAbilityState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EAbilityTriggerType Trigger)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityLogicLeaveState", "QA_EndAbilityState");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum EAbilityTriggerType Trigger;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Trigger = (enum EAbilityTriggerType)Trigger;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityEnd
struct UQA_AbilityLogicTask* UQA_AbilityEnd::QA_EndAbility(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FEndAbilityOption EndOption)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityEnd", "QA_EndAbility");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FEndAbilityOption EndOption;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.EndOption = (struct FEndAbilityOption)EndOption;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCheckNormalBreak
struct UQA_AbilityLogicTask* UQA_AbilityCheckNormalBreak::QA_AbilityCheckNormalBreak(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCheckNormalBreak", "QA_AbilityCheckNormalBreak");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityLeaveSkillState
struct UQA_AbilityLogicTask* UQA_AbilityLeaveSkillState::QA_AbilityLeaveSkillState(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityLeaveSkillState", "QA_AbilityLeaveSkillState");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityMeshMaterialEffect
struct UQA_AbilityLogicTask* UQA_AbilityMeshMaterialEffect::QA_AbilityMeshMaterialEffect(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct TMap<struct FName, struct FMeshMatEffectConfig> Configs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityMeshMaterialEffect", "QA_AbilityMeshMaterialEffect");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct TMap<struct FName, struct FMeshMatEffectConfig> Configs;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Configs = (struct TMap<struct FName, struct FMeshMatEffectConfig>)Configs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityMeshMaterialEffect::OnMatEffectUpdate(struct FName MeshName, int32_t MatIndex, struct FName CacheKeyName, int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityMeshMaterialEffect", "OnMatEffectUpdate");
    struct
    {
        struct FName MeshName;
        int32_t MatIndex;
        struct FName CacheKeyName;
        int32_t skillEntityIndex;
    } Parms{};
    Parms.MeshName = (struct FName)MeshName;
    Parms.MatIndex = (int32_t)MatIndex;
    Parms.CacheKeyName = (struct FName)CacheKeyName;
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityNotify
struct UQA_AbilityLogicTask* UQA_AbilityNotify::QA_AbilityNotify(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillActorEvent InEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityNotify", "QA_AbilityNotify");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ESkillActorEvent InEventName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InEventName = (enum ESkillActorEvent)InEventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityNotifyDSReplay
struct UQA_AbilityLogicTask* UQA_AbilityNotifyDSReplay::QA_AbilityNotifyDSReplay(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InReplayDebugName, float InDuration, float InRadius, struct FColor InColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityNotifyDSReplay", "QA_AbilityNotifyDSReplay");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName InReplayDebugName;
        float InDuration;
        float InRadius;
        struct FColor InColor;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InReplayDebugName = (struct FName)InReplayDebugName;
    Parms.InDuration = (float)InDuration;
    Parms.InRadius = (float)InRadius;
    Parms.InColor = (struct FColor)InColor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityNotifyForwardScan
struct UQA_AbilityLogicTask* UQA_AbilityNotifyForwardScan::QA_AbilityNotifyForwardScan(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t IsActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityNotifyForwardScan", "QA_AbilityNotifyForwardScan");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t IsActive;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.IsActive = (uint8_t)IsActive;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityNotifyRush
struct UQA_AbilityLogicTask* UQA_AbilityNotifyRush::QA_AbilityNotifyRush(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESkillActorEvent InEventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityNotifyRush", "QA_AbilityNotifyRush");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ESkillActorEvent InEventName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InEventName = (enum ESkillActorEvent)InEventName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityRushSetting
struct UQA_AbilityLogicTask* UQA_AbilityRushSetting::QA_AbilityRushSetting(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityRushSettingConfig Config)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRushSetting", "QA_AbilityRushSetting");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FAbilityRushSettingConfig Config;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Config = (struct FAbilityRushSettingConfig)Config;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityOverrideAnimingCheck
struct UQA_AbilityLogicTask* UQA_AbilityOverrideAnimingCheck::QA_AbilityOverrideAnimingCheck(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t bOverrideAimingCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityOverrideAnimingCheck", "QA_AbilityOverrideAnimingCheck");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t bOverrideAimingCheck;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.bOverrideAimingCheck = (uint8_t)bOverrideAimingCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityPlayMontage
struct UQA_AbilityPlayMontage* UQA_AbilityPlayMontage::QA_AbilityPlayMontageWithAnimSet(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName, struct FAbilityPlayMontageDataP2 Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityPlayMontage", "QA_AbilityPlayMontageWithAnimSet");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName _LogicName;
        struct FAbilityPlayMontageDataP2 Data;
        struct UQA_AbilityPlayMontage* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms._LogicName = (struct FName)_LogicName;
    Parms.Data = (struct FAbilityPlayMontageDataP2)Data;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UQA_AbilityPlayMontage* UQA_AbilityPlayMontage::QA_AbilityPlayMontage(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName, struct FAbilityPlayMontageDataP1 Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityPlayMontage", "QA_AbilityPlayMontage");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName _LogicName;
        struct FAbilityPlayMontageDataP1 Data;
        struct UQA_AbilityPlayMontage* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms._LogicName = (struct FName)_LogicName;
    Parms.Data = (struct FAbilityPlayMontageDataP1)Data;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityStopMontage
struct UQA_AbilityStopMontage* UQA_AbilityStopMontage::QA_AbilityStopMontage(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName, int32_t PlayIndex, EAnimationPlayType AnimationPlayType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityStopMontage", "QA_AbilityStopMontage");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName _LogicName;
        int32_t PlayIndex;
        enum EAnimationPlayType AnimationPlayType;
        struct UQA_AbilityStopMontage* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms._LogicName = (struct FName)_LogicName;
    Parms.PlayIndex = (int32_t)PlayIndex;
    Parms.AnimationPlayType = (enum EAnimationPlayType)AnimationPlayType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityTakeDemageStopMontage
struct UQA_AbilityLogicTask* UQA_AbilityTakeDemageStopMontage::QA_AbilityTakeDemageStopMontage(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName _LogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityTakeDemageStopMontage", "QA_AbilityTakeDemageStopMontage");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName _LogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms._LogicName = (struct FName)_LogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityPlayUIAudio
struct UQA_AbilityLogicTask* UQA_AbilityPlayUIAudio::QA_AbilityPlayUIAudio(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UGPAudioEventAsset* AudioAsset, uint8_t Include3P)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityPlayUIAudio", "QA_AbilityPlayUIAudio");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UGPAudioEventAsset* AudioAsset;
        uint8_t Include3P;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.AudioAsset = (struct UGPAudioEventAsset*)AudioAsset;
    Parms.Include3P = (uint8_t)Include3P;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityPreviewActor
struct UQA_AbilityLogicTask* UQA_AbilityPreviewActor::QA_AbilityPreviewActor(struct ADFMAbilityLogicTemplate* InLogicTemplate, struct FName InLogicName, struct FAbilityPreviewData PreviewData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityPreviewActor", "QA_AbilityPreviewActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* InLogicTemplate;
        struct FName InLogicName;
        struct FAbilityPreviewData PreviewData;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.InLogicTemplate = (struct ADFMAbilityLogicTemplate*)InLogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.PreviewData = (struct FAbilityPreviewData)PreviewData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityEnablePreviewLine
struct UQA_AbilityLogicTask* UQA_AbilityEnablePreviewLine::QA_AbilityEnablePreviewLine(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityEnablePreviewLine", "QA_AbilityEnablePreviewLine");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t Enable;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityProcessBar
struct UQA_AbilityLogicTask* UQA_AbilityProcessBar::QA_AbilityProcessBar(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, float Time, struct FName Name, int32_t BarType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityProcessBar", "QA_AbilityProcessBar");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        float Time;
        struct FName Name;
        int32_t BarType;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Time = (float)Time;
    Parms.Name = (struct FName)Name;
    Parms.BarType = (int32_t)BarType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityProjectileActor
struct UQA_AbilityLogicTask* UQA_AbilityProjectileActor::QA_AbilityProjectileActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct UObject* ProjectileActorClass, struct FVector StartLocationOffset, float Speed, struct TSoftClassPtr<struct UObject*> projectileActorClassSoft)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityProjectileActor", "QA_AbilityProjectileActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UObject* ProjectileActorClass;
        struct FVector StartLocationOffset;
        float Speed;
        struct TSoftClassPtr<struct UObject*> projectileActorClassSoft;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.ProjectileActorClass = (struct UObject*)ProjectileActorClass;
    Parms.StartLocationOffset = (struct FVector)StartLocationOffset;
    Parms.Speed = (float)Speed;
    Parms.projectileActorClassSoft = (struct TSoftClassPtr<struct UObject*>)projectileActorClassSoft;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityPullOutFireArrow
struct UQA_AbilityLogicTask* UQA_AbilityPullOutFireArrow::QA_AbilityPullOutFireArrow(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Text, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityPullOutFireArrow", "QA_AbilityPullOutFireArrow");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName Text;
        float Time;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Text = (struct FName)Text;
    Parms.Time = (float)Time;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityRankSkillNightVision
struct UQA_AbilityLogicTask* UQA_AbilityRankSkillNightVision::QA_AbilityRankSkillNightVision(struct ADFMAbilityLogicTemplate* LogicTemplate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRankSkillNightVision", "QA_AbilityRankSkillNightVision");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityRankSkillNightVision::OnRankSkillFinalCastCheck(struct UDFMAbilityInstance* Instance, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityRankSkillNightVision", "OnRankSkillFinalCastCheck");
    struct
    {
        struct UDFMAbilityInstance* Instance;
        uint8_t bSuccess;
    } Parms{};
    Parms.Instance = (struct UDFMAbilityInstance*)Instance;
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityRankSkillOperate
struct UQA_AbilityLogicTask* UQA_AbilityRankSkillOperate::QA_AbilityRankSkillOperate(struct ADFMAbilityLogicTemplate* LogicTemplate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRankSkillOperate", "QA_AbilityRankSkillOperate");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityRankSkillOperate::OnRankSkillFinalCastCheck(struct UDFMAbilityInstance* Instance, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityRankSkillOperate", "OnRankSkillFinalCastCheck");
    struct
    {
        struct UDFMAbilityInstance* Instance;
        uint8_t bSuccess;
    } Parms{};
    Parms.Instance = (struct UDFMAbilityInstance*)Instance;
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityRemoveWeapon
struct UQA_AbilityLogicTask* UQA_AbilityRemoveWeapon::QA_AbilityRemoveWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName WeaponID, int32_t AttachPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRemoveWeapon", "QA_AbilityRemoveWeapon");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName WeaponID;
        int32_t AttachPos;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.WeaponID = (struct FName)WeaponID;
    Parms.AttachPos = (int32_t)AttachPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityRollMove
struct UQA_AbilityLogicTask* UQA_AbilityRollMove::QA_AbilityRollMove(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FGPRollSettingConfig InConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRollMove", "QA_AbilityRollMove");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FGPRollSettingConfig InConfig;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InConfig = (struct FGPRollSettingConfig)InConfig;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityBreakRollMove
struct UQA_AbilityLogicTask* UQA_AbilityBreakRollMove::QA_AbilityBreakRollMove(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityBreakRollMove", "QA_AbilityBreakRollMove");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityRopeTrigger
struct UQA_AbilityLogicTask* UQA_AbilityRopeTrigger::QA_AbilityRopeTrigger(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ERopeTriggerType InRopeTriggerType, uint8_t InRescueInMP)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityRopeTrigger", "QA_AbilityRopeTrigger");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ERopeTriggerType InRopeTriggerType;
        uint8_t InRescueInMP;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InRopeTriggerType = (enum ERopeTriggerType)InRopeTriggerType;
    Parms.InRescueInMP = (uint8_t)InRescueInMP;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySendSupportPackTarget
struct UQA_AbilityLogicTask* UQA_AbilitySendSupportPackTarget::QA_AbilitySendSupportPackTarget(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESupportType SupportType, uint8_t bSelfUse, struct TArray<ECharingSlot> InCharingSlotList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySendSupportPackTarget", "QA_AbilitySendSupportPackTarget");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ESupportType SupportType;
        uint8_t bSelfUse;
        struct TArray<ECharingSlot> InCharingSlotList;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.SupportType = (enum ESupportType)SupportType;
    Parms.bSelfUse = (uint8_t)bSelfUse;
    Parms.InCharingSlotList = (struct TArray<ECharingSlot>)InCharingSlotList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySetAppearanceShapeShift
struct UQA_AbilityLogicTask* UQA_AbilitySetAppearanceShapeShift::QA_AbilitySetAppearanceShapeShift(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EHeroShapeShiftType ShapeType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySetAppearanceShapeShift", "QA_AbilitySetAppearanceShapeShift");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum EHeroShapeShiftType ShapeType;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.ShapeType = (enum EHeroShapeShiftType)ShapeType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySetCanBeBreakByInput
struct UQA_AbilityLogicTask* UQA_AbilitySetCanBeBreakByInput::QA_AbilitySetCanBeBreakByInput(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t CanBeBreakByFire, uint8_t CanBeBreakBySkillButton, uint8_t CanBeBreakByKnockBack, uint8_t CanBeBreakByBeingAssassinate, uint8_t CanBeBreakByPassiveMove, uint8_t CanBeBreakByCrowdControl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySetCanBeBreakByInput", "QA_AbilitySetCanBeBreakByInput");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t CanBeBreakByFire;
        uint8_t CanBeBreakBySkillButton;
        uint8_t CanBeBreakByKnockBack;
        uint8_t CanBeBreakByBeingAssassinate;
        uint8_t CanBeBreakByPassiveMove;
        uint8_t CanBeBreakByCrowdControl;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.CanBeBreakByFire = (uint8_t)CanBeBreakByFire;
    Parms.CanBeBreakBySkillButton = (uint8_t)CanBeBreakBySkillButton;
    Parms.CanBeBreakByKnockBack = (uint8_t)CanBeBreakByKnockBack;
    Parms.CanBeBreakByBeingAssassinate = (uint8_t)CanBeBreakByBeingAssassinate;
    Parms.CanBeBreakByPassiveMove = (uint8_t)CanBeBreakByPassiveMove;
    Parms.CanBeBreakByCrowdControl = (uint8_t)CanBeBreakByCrowdControl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySetCharAbilityMask
struct UQA_AbilitySetCharAbilityMask* UQA_AbilitySetCharAbilityMask::QA_AbilitySetCharAbilityMask(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t bEnableAbility, struct FSetCharAbilityMaskData MaskData, struct FSetCharAbilityMaskData MPMaskData, uint8_t LeaveRemove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySetCharAbilityMask", "QA_AbilitySetCharAbilityMask");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t bEnableAbility;
        struct FSetCharAbilityMaskData MaskData;
        struct FSetCharAbilityMaskData MPMaskData;
        uint8_t LeaveRemove;
        struct UQA_AbilitySetCharAbilityMask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.bEnableAbility = (uint8_t)bEnableAbility;
    Parms.MaskData = (struct FSetCharAbilityMaskData)MaskData;
    Parms.MPMaskData = (struct FSetCharAbilityMaskData)MPMaskData;
    Parms.LeaveRemove = (uint8_t)LeaveRemove;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySetCharCanProneFireMove
struct UQA_AbilityLogicTask* UQA_AbilitySetCharCanProneFireMove::QA_AbilitySetCharCanProneFireMove(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t CanProneFireMove)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySetCharCanProneFireMove", "QA_AbilitySetCharCanProneFireMove");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t CanProneFireMove;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.CanProneFireMove = (uint8_t)CanProneFireMove;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySetUseC301Launcher
struct UQA_AbilityLogicTask* UQA_AbilitySetUseC301Launcher::QA_AbilitySetUseC301Launcher(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t UseC301Launcher, int32_t LastBulletCnt, uint8_t IsFire)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySetUseC301Launcher", "QA_AbilitySetUseC301Launcher");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t UseC301Launcher;
        int32_t LastBulletCnt;
        uint8_t IsFire;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.UseC301Launcher = (uint8_t)UseC301Launcher;
    Parms.LastBulletCnt = (int32_t)LastBulletCnt;
    Parms.IsFire = (uint8_t)IsFire;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySetVaultHeightTypeLimit
struct UQA_AbilityLogicTask* UQA_AbilitySetVaultHeightTypeLimit::QA_AbilitySetVaultHeightTypeLimit(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EObstacleHeightType Type, uint8_t IsReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySetVaultHeightTypeLimit", "QA_AbilitySetVaultHeightTypeLimit");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum EObstacleHeightType Type;
        uint8_t IsReset;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Type = (enum EObstacleHeightType)Type;
    Parms.IsReset = (uint8_t)IsReset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityShowDetectorMap
struct UQA_AbilityLogicTask* UQA_AbilityShowDetectorMap::QA_AbilityShowDetectorMap(struct ADFMAbilityLogicTemplate* LogicTemplate, struct UObject* ActorClass, float DetectorMapRadius, float _SlideSpeedDelay, float _DetectorRadius, float _DetectorRadiusScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityShowDetectorMap", "QA_AbilityShowDetectorMap");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct UObject* ActorClass;
        float DetectorMapRadius;
        float _SlideSpeedDelay;
        float _DetectorRadius;
        float _DetectorRadiusScale;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.ActorClass = (struct UObject*)ActorClass;
    Parms.DetectorMapRadius = (float)DetectorMapRadius;
    Parms._SlideSpeedDelay = (float)_SlideSpeedDelay;
    Parms._DetectorRadius = (float)_DetectorRadius;
    Parms._DetectorRadiusScale = (float)_DetectorRadiusScale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityShowDetectorMap::OnBigMapClose(uint8_t Cast)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityShowDetectorMap", "OnBigMapClose");
    struct
    {
        uint8_t Cast;
    } Parms{};
    Parms.Cast = (uint8_t)Cast;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityShowDetectorMapEx
struct UQA_AbilityLogicTask* UQA_AbilityShowDetectorMapEx::QA_AbilityShowDetectorMapEx(struct ADFMAbilityLogicTemplate* LogicTemplate, struct UObject* ActorClass, float DetectorMapRadius, float _SlideSpeedDelay, float _DetectorRadius, float _DetectorRadiusScale, float MarkerShowTime, uint8_t IsShowMarkerInMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityShowDetectorMapEx", "QA_AbilityShowDetectorMapEx");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct UObject* ActorClass;
        float DetectorMapRadius;
        float _SlideSpeedDelay;
        float _DetectorRadius;
        float _DetectorRadiusScale;
        float MarkerShowTime;
        uint8_t IsShowMarkerInMap;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.ActorClass = (struct UObject*)ActorClass;
    Parms.DetectorMapRadius = (float)DetectorMapRadius;
    Parms._SlideSpeedDelay = (float)_SlideSpeedDelay;
    Parms._DetectorRadius = (float)_DetectorRadius;
    Parms._DetectorRadiusScale = (float)_DetectorRadiusScale;
    Parms.MarkerShowTime = (float)MarkerShowTime;
    Parms.IsShowMarkerInMap = (uint8_t)IsShowMarkerInMap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityShowDetectorMapEx::OnRankSkillFinalCastCheck(struct UDFMAbilityInstance* Instance, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityShowDetectorMapEx", "OnRankSkillFinalCastCheck");
    struct
    {
        struct UDFMAbilityInstance* Instance;
        uint8_t bSuccess;
    } Parms{};
    Parms.Instance = (struct UDFMAbilityInstance*)Instance;
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

void UQA_AbilityShowDetectorMapEx::OnBigMapClose(uint8_t Cast)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityShowDetectorMapEx", "OnBigMapClose");
    struct
    {
        uint8_t Cast;
    } Parms{};
    Parms.Cast = (uint8_t)Cast;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityShowPanel
struct UQA_AbilityLogicTask* UQA_AbilityShowPanel::QA_AbilityShowPanel(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName PanelName, uint8_t Show, uint8_t _Include3p)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityShowPanel", "QA_AbilityShowPanel");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName PanelName;
        uint8_t Show;
        uint8_t _Include3p;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.PanelName = (struct FName)PanelName;
    Parms.Show = (uint8_t)Show;
    Parms._Include3p = (uint8_t)_Include3p;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityShowTips
struct UQA_AbilityLogicTask* UQA_AbilityShowTips::QA_AbilityShowTips(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Text, float Time, uint8_t bUseLuaShowTips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityShowTips", "QA_AbilityShowTips");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName Text;
        float Time;
        uint8_t bUseLuaShowTips;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Text = (struct FName)Text;
    Parms.Time = (float)Time;
    Parms.bUseLuaShowTips = (uint8_t)bUseLuaShowTips;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityKeyTips
struct UQA_AbilityLogicTask* UQA_AbilityKeyTips::QA_AbilityKeyTips(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct TArray<struct FRightKeyTipsSkillData> InTipsData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityKeyTips", "QA_AbilityKeyTips");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct TArray<struct FRightKeyTipsSkillData> InTipsData;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InTipsData = (struct TArray<struct FRightKeyTipsSkillData>)InTipsData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySkillConflictID
struct UQA_AbilityLogicTask* UQA_AbilitySkillConflictID::QA_AbilitySkillConflictID(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t ConflictID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySkillConflictID", "QA_AbilitySkillConflictID");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        int32_t ConflictID;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.ConflictID = (int32_t)ConflictID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySkillUIEvent
struct UQA_AbilityLogicTask* UQA_AbilitySkillUIEvent::QA_AbilitySkillUIEvent(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySkillUIEvent", "QA_AbilitySkillUIEvent");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName Key;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Key = (struct FName)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySoundVisualizationNotify
struct UQA_AbilityLogicTask* UQA_AbilitySoundVisualizationNotify::QA_AbilitySoundVisualizationNotify(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESoundVisualizationType EventType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySoundVisualizationNotify", "QA_AbilitySoundVisualizationNotify");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ESoundVisualizationType EventType;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.EventType = (enum ESoundVisualizationType)EventType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySpawnActor
struct UQA_AbilityLogicTask* UQA_AbilitySpawnActor::QA_AbilitySpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAASpawnActorData InSpawnActorData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySpawnActor", "QA_AbilitySpawnActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FAASpawnActorData InSpawnActorData;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InSpawnActorData = (struct FAASpawnActorData)InSpawnActorData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityNotifySpawnActor
struct UQA_AbilityLogicTask* UQA_AbilityNotifySpawnActor::QA_AbilityNotifySpawnActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InNotifyName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityNotifySpawnActor", "QA_AbilityNotifySpawnActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName InNotifyName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InNotifyName = (struct FName)InNotifyName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityStaminaChange
struct UQA_AbilityLogicTask* UQA_AbilityStaminaChange::QA_AbilityStaminaChange(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EStaminaIndependentChangeType InStaminaChangeType, float InDeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityStaminaChange", "QA_AbilityStaminaChange");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum EStaminaIndependentChangeType InStaminaChangeType;
        float InDeltaSeconds;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InStaminaChangeType = (enum EStaminaIndependentChangeType)InStaminaChangeType;
    Parms.InDeltaSeconds = (float)InDeltaSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySwithLeftWeapon
struct UQA_AbilityLogicTask* UQA_AbilitySwithLeftWeapon::QA_AbilitySwithLeftWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FName InWeaponId, int32_t InAttachPos, int32_t InWeaponManagerSlot, uint8_t InIsEquipWeapon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySwithLeftWeapon", "QA_AbilitySwithLeftWeapon");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FName InWeaponId;
        int32_t InAttachPos;
        int32_t InWeaponManagerSlot;
        uint8_t InIsEquipWeapon;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InWeaponId = (struct FName)InWeaponId;
    Parms.InAttachPos = (int32_t)InAttachPos;
    Parms.InWeaponManagerSlot = (int32_t)InWeaponManagerSlot;
    Parms.InIsEquipWeapon = (uint8_t)InIsEquipWeapon;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilitySwithWeapon
struct UQA_AbilityLogicTask* UQA_AbilitySwithWeapon::QA_AbilitySwithWeapon(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EAbilitySwithWeaponType SwitchType, int32_t AttachPos, uint8_t OnlySwitchPosWeapon, uint8_t CoverPendingSwitch, EWeaponSwitchType InWeaponEquipSwitchType, uint8_t IncludeSkillWeapon, uint8_t InForceSkillEnd, uint8_t InSkipInSwim)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilitySwithWeapon", "QA_AbilitySwithWeapon");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum EAbilitySwithWeaponType SwitchType;
        int32_t AttachPos;
        uint8_t OnlySwitchPosWeapon;
        uint8_t CoverPendingSwitch;
        enum EWeaponSwitchType InWeaponEquipSwitchType;
        uint8_t IncludeSkillWeapon;
        uint8_t InForceSkillEnd;
        uint8_t InSkipInSwim;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.SwitchType = (enum EAbilitySwithWeaponType)SwitchType;
    Parms.AttachPos = (int32_t)AttachPos;
    Parms.OnlySwitchPosWeapon = (uint8_t)OnlySwitchPosWeapon;
    Parms.CoverPendingSwitch = (uint8_t)CoverPendingSwitch;
    Parms.InWeaponEquipSwitchType = (enum EWeaponSwitchType)InWeaponEquipSwitchType;
    Parms.IncludeSkillWeapon = (uint8_t)IncludeSkillWeapon;
    Parms.InForceSkillEnd = (uint8_t)InForceSkillEnd;
    Parms.InSkipInSwim = (uint8_t)InSkipInSwim;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityTrigger
struct UQA_AbilityLogicTask* UQA_AbilityTrigger::QA_AbilityTagTrigger(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, EGPQuestActionTriggerType Type, struct FName QATag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityTrigger", "QA_AbilityTagTrigger");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum EGPQuestActionTriggerType Type;
        struct FName QATag;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Type = (enum EGPQuestActionTriggerType)Type;
    Parms.QATag = (struct FName)QATag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityEnableUseTogether
struct UQA_AbilityLogicTask* UQA_AbilityEnableUseTogether::QA_AbilityEnableUseTogether(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityEnableUseTogether", "QA_AbilityEnableUseTogether");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        uint8_t Enable;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.Enable = (uint8_t)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityCastSkill
struct UQA_AbilityCastSkill* UQA_AbilityCastSkill::QA_AbilityCastSkill(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityCastSkill", "QA_AbilityCastSkill");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        int32_t SkillId;
        struct UQA_AbilityCastSkill* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.SkillId = (int32_t)SkillId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityCastSkill::OnGPPlayerAbilityCast(struct AGPCharacter* Player, ECharingSlot Slot, int32_t SkillId, uint8_t Start)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityCastSkill", "OnGPPlayerAbilityCast");
    struct
    {
        struct AGPCharacter* Player;
        enum ECharingSlot Slot;
        int32_t SkillId;
        uint8_t Start;
    } Parms{};
    Parms.Player = (struct AGPCharacter*)Player;
    Parms.Slot = (enum ECharingSlot)Slot;
    Parms.SkillId = (int32_t)SkillId;
    Parms.Start = (uint8_t)Start;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityHookSkill
struct UQA_AbilityHookSkill* UQA_AbilityHookSkill::QA_AbilityHookSkill(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, int32_t SkillId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityHookSkill", "QA_AbilityHookSkill");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        int32_t SkillId;
        struct UQA_AbilityHookSkill* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.SkillId = (int32_t)SkillId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityUseSupportPack
struct UQA_AbilityUseSupportPack* UQA_AbilityUseSupportPack::QA_AbilityUseSupportPack(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ESupportType SupportType, uint8_t bCondCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityUseSupportPack", "QA_AbilityUseSupportPack");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ESupportType SupportType;
        uint8_t bCondCheck;
        struct UQA_AbilityUseSupportPack* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.SupportType = (enum ESupportType)SupportType;
    Parms.bCondCheck = (uint8_t)bCondCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UQA_AbilityUseSupportPack::OnAnimTimerOut(int32_t skillEntityIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("QA_AbilityUseSupportPack", "OnAnimTimerOut");
    struct
    {
        int32_t skillEntityIndex;
    } Parms{};
    Parms.skillEntityIndex = (int32_t)skillEntityIndex;
    this->ProcessEvent(Func, &Parms);
}

// UQA_AbilityWantCharacterSpeak
struct UQA_AbilityLogicTask* UQA_AbilityWantCharacterSpeak::QA_AbilityWantCharacterSpeak(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, ECharacterAudioType InVoiceType, struct FName InVoiceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityWantCharacterSpeak", "QA_AbilityWantCharacterSpeak");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        enum ECharacterAudioType InVoiceType;
        struct FName InVoiceName;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.InVoiceType = (enum ECharacterAudioType)InVoiceType;
    Parms.InVoiceName = (struct FName)InVoiceName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQA_AbilityWeaponProjectileActor
struct UQA_AbilityLogicTask* UQA_AbilityWeaponProjectileActor::QA_AbilityWeaponProjectileActor(struct ADFMAbilityLogicTemplate* LogicTemplate, struct FName InLogicName, struct FAbilityWeaponProjectileData ProjectileData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QA_AbilityWeaponProjectileActor", "QA_AbilityWeaponProjectileActor");
    struct
    {
        struct ADFMAbilityLogicTemplate* LogicTemplate;
        struct FName InLogicName;
        struct FAbilityWeaponProjectileData ProjectileData;
        struct UQA_AbilityLogicTask* ReturnValue;
    } Parms{};
    Parms.LogicTemplate = (struct ADFMAbilityLogicTemplate*)LogicTemplate;
    Parms.InLogicName = (struct FName)InLogicName;
    Parms.ProjectileData = (struct FAbilityWeaponProjectileData)ProjectileData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ARebornFlag
void ARebornFlag::OnSectorTransEnd(int32_t ActiveID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RebornFlag", "OnSectorTransEnd");
    struct
    {
        int32_t ActiveID;
    } Parms{};
    Parms.ActiveID = (int32_t)ActiveID;
    this->ProcessEvent(Func, &Parms);
}

void ARebornFlag::OnLoadedAllControllerClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RebornFlag", "OnLoadedAllControllerClass");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ARebornFlag::OnCheckAutoDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RebornFlag", "OnCheckAutoDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ARebornFlag::OnCharacterExpertIdChanged(int32_t OldExpertId, int32_t CurExpertId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RebornFlag", "OnCharacterExpertIdChanged");
    struct
    {
        int32_t OldExpertId;
        int32_t CurExpertId;
    } Parms{};
    Parms.OldExpertId = (int32_t)OldExpertId;
    Parms.CurExpertId = (int32_t)CurExpertId;
    this->ProcessEvent(Func, &Parms);
}

void ARebornFlag::OnActorHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, const struct FHitResult& Hit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RebornFlag", "OnActorHitCallback");
    struct
    {
        struct AActor* SelfActor;
        struct AActor* OtherActor;
        struct FVector NormalImpulse;
        struct FHitResult Hit;
    } Parms{};
    Parms.SelfActor = (struct AActor*)SelfActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.NormalImpulse = (struct FVector)NormalImpulse;
    Parms.Hit = (struct FHitResult)Hit;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ARebornFlag::IsSameCamp(struct APlayerController* OwnerPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RebornFlag", "IsSameCamp");
    struct
    {
        struct APlayerController* OwnerPlayer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OwnerPlayer = (struct APlayerController*)OwnerPlayer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ARebornFlag::CheckIsInsideWalkableSplines()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RebornFlag", "CheckIsInsideWalkableSplines");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ARebornFlag::CheckDiffTeamC303(struct AGPCharacter* RebornCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RebornFlag", "CheckDiffTeamC303");
    struct
    {
        struct AGPCharacter* RebornCharacter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.RebornCharacter = (struct AGPCharacter*)RebornCharacter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ARopeTest
void ARopeTest::StartTest(struct ACHARACTER* TestChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RopeTest", "StartTest");
    struct
    {
        struct ACHARACTER* TestChar;
    } Parms{};
    Parms.TestChar = (struct ACHARACTER*)TestChar;
    this->ProcessEvent(Func, &Parms);
}

void ARopeTest::EndTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RopeTest", "EndTest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// USayyidCrossbowCrossHairHudController
void USayyidCrossbowCrossHairHudController::OnArrowNeedReboundChanged(uint8_t bIsRebound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidCrossbowCrossHairHudController", "OnArrowNeedReboundChanged");
    struct
    {
        uint8_t bIsRebound;
    } Parms{};
    Parms.bIsRebound = (uint8_t)bIsRebound;
    this->ProcessEvent(Func, &Parms);
}

// USayyidCrossbowCrossHairHudView
void USayyidCrossbowCrossHairHudView::SetIconType(int32_t InIconType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidCrossbowCrossHairHudView", "SetIconType");
    struct
    {
        int32_t InIconType;
    } Parms{};
    Parms.InIconType = (int32_t)InIconType;
    this->ProcessEvent(Func, &Parms);
}

void USayyidCrossbowCrossHairHudView::BP_SetIconType(int32_t IconType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidCrossbowCrossHairHudView", "BP_SetIconType");
    struct
    {
        int32_t IconType;
    } Parms{};
    Parms.IconType = (int32_t)IconType;
    this->ProcessEvent(Func, &Parms);
}

// USayyidCrossbowCrossHairUIController
void USayyidCrossbowCrossHairUIController::OnArrowNeedReboundChanged(uint8_t bIsRebound)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidCrossbowCrossHairUIController", "OnArrowNeedReboundChanged");
    struct
    {
        uint8_t bIsRebound;
    } Parms{};
    Parms.bIsRebound = (uint8_t)bIsRebound;
    this->ProcessEvent(Func, &Parms);
}

// USayyidCrossbowCrossHairUIView
void USayyidCrossbowCrossHairUIView::SetIconType(int32_t InIconType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidCrossbowCrossHairUIView", "SetIconType");
    struct
    {
        int32_t InIconType;
    } Parms{};
    Parms.InIconType = (int32_t)InIconType;
    this->ProcessEvent(Func, &Parms);
}

void USayyidCrossbowCrossHairUIView::BP_SetIconType(int32_t IconType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidCrossbowCrossHairUIView", "BP_SetIconType");
    struct
    {
        int32_t IconType;
    } Parms{};
    Parms.IconType = (int32_t)IconType;
    this->ProcessEvent(Func, &Parms);
}

// USayyidCrossbowDataComponentAnim
void USayyidCrossbowDataComponentAnim::OnBowBounceStateChanged(uint8_t bBounceEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidCrossbowDataComponentAnim", "OnBowBounceStateChanged");
    struct
    {
        uint8_t bBounceEnabled;
    } Parms{};
    Parms.bBounceEnabled = (uint8_t)bBounceEnabled;
    this->ProcessEvent(Func, &Parms);
}

// USayyidCrossbowFuncComponent
void USayyidCrossbowFuncComponent::OnBowBounceStateChanged(uint8_t bBounceEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidCrossbowFuncComponent", "OnBowBounceStateChanged");
    struct
    {
        uint8_t bBounceEnabled;
    } Parms{};
    Parms.bBounceEnabled = (uint8_t)bBounceEnabled;
    this->ProcessEvent(Func, &Parms);
}

// ASayyidFireArrowProjectile
void ASayyidFireArrowProjectile::SpawnIncendiaryArea(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SayyidFireArrowProjectile", "SpawnIncendiaryArea");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

// ASpiderBase
void ASpiderBase::SpawnProjectileToTarget(struct FVector TargetLocation, struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "SpawnProjectileToTarget");
    struct
    {
        struct FVector TargetLocation;
        struct AActor* Target;
    } Parms{};
    Parms.TargetLocation = (struct FVector)TargetLocation;
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::ShowHitAbilityActorMarker(const uint8_t& bIsServer, const struct FDamageResultInfo& DamageResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "ShowHitAbilityActorMarker");
    struct
    {
        uint8_t bIsServer;
        struct FDamageResultInfo DamageResult;
    } Parms{};
    Parms.bIsServer = (uint8_t)bIsServer;
    Parms.DamageResult = (struct FDamageResultInfo)DamageResult;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::SetFollowTarget(struct AActor* Target, uint8_t bFollowByNav, struct FVector HeadLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "SetFollowTarget");
    struct
    {
        struct AActor* Target;
        uint8_t bFollowByNav;
        struct FVector HeadLoc;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.bFollowByNav = (uint8_t)bFollowByNav;
    Parms.HeadLoc = (struct FVector)HeadLoc;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::PlayDestroyEffect(struct FName DestroyEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "PlayDestroyEffect");
    struct
    {
        struct FName DestroyEffect;
    } Parms{};
    Parms.DestroyEffect = (struct FName)DestroyEffect;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::OnSpiderMoveModeChange(ESpiderMoveMode OldMoveMode, ESpiderMoveMode NewMoveMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "OnSpiderMoveModeChange");
    struct
    {
        enum ESpiderMoveMode OldMoveMode;
        enum ESpiderMoveMode NewMoveMode;
    } Parms{};
    Parms.OldMoveMode = (enum ESpiderMoveMode)OldMoveMode;
    Parms.NewMoveMode = (enum ESpiderMoveMode)NewMoveMode;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::OnSpiderBounce(struct FVector BounceLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "OnSpiderBounce");
    struct
    {
        struct FVector BounceLocation;
    } Parms{};
    Parms.BounceLocation = (struct FVector)BounceLocation;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::OnRep_SpiderState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "OnRep_SpiderState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::OnClientStateChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "OnClientStateChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::MulticastFollowTrack(struct TArray<struct FVector> FollowTrack, int32_t FollowIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "MulticastFollowTrack");
    struct
    {
        struct TArray<struct FVector> FollowTrack;
        int32_t FollowIndex;
    } Parms{};
    Parms.FollowTrack = (struct TArray<struct FVector>)FollowTrack;
    Parms.FollowIndex = (int32_t)FollowIndex;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASpiderBase::IsLocalEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "IsLocalEnemy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASpiderBase::InitBrotherSpiders(struct TArray<struct ASpiderBase*> Brothers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "InitBrotherSpiders");
    struct
    {
        struct TArray<struct ASpiderBase*> Brothers;
    } Parms{};
    Parms.Brothers = (struct TArray<struct ASpiderBase*>)Brothers;
    this->ProcessEvent(Func, &Parms);
}

ESpiderState ASpiderBase::GetSpiderState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "GetSpiderState");
    struct
    {
        enum ESpiderState ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector ASpiderBase::GetAttackLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "GetAttackLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASpiderBase::EMPRecover()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "EMPRecover");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::EMPDisable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "EMPDisable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::DoDetect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "DoDetect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASpiderBase::DoBlockTrace(struct FVector TargetLoc, struct TArray<struct AActor*>& IgnoreActors, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "DoBlockTrace");
    struct
    {
        struct FVector TargetLoc;
        struct TArray<struct AActor*> IgnoreActors;
        float radius;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetLoc = (struct FVector)TargetLoc;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
    IgnoreActors = Parms.IgnoreActors;
    return Parms.ReturnValue;
}

void ASpiderBase::DoAttack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "DoAttack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::ClientPlayExplosion(struct FVector ExplosionLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "ClientPlayExplosion");
    struct
    {
        struct FVector ExplosionLocation;
    } Parms{};
    Parms.ExplosionLocation = (struct FVector)ExplosionLocation;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASpiderBase::CheckValidTarget(struct AActor* Target, float CheckDistSquared, float CheckCosAngle, float CheckHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "CheckValidTarget");
    struct
    {
        struct AActor* Target;
        float CheckDistSquared;
        float CheckCosAngle;
        float CheckHeight;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.CheckDistSquared = (float)CheckDistSquared;
    Parms.CheckCosAngle = (float)CheckCosAngle;
    Parms.CheckHeight = (float)CheckHeight;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ASpiderBase::CheckFollowTargetValid(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "CheckFollowTargetValid");
    struct
    {
        struct AActor* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASpiderBase::CheckCanAttack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "CheckCanAttack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::CheckAwake()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "CheckAwake");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ASpiderBase::BP_CanShowMarker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "BP_CanShowMarker");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ASpiderBase::AwakeAndFollowTarget(struct AActor* Target, uint8_t bFollowByNav)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "AwakeAndFollowTarget");
    struct
    {
        struct AActor* Target;
        uint8_t bFollowByNav;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.bFollowByNav = (uint8_t)bFollowByNav;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::AwakeAndFollowDirection(struct FVector Direction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "AwakeAndFollowDirection");
    struct
    {
        struct FVector Direction;
    } Parms{};
    Parms.Direction = (struct FVector)Direction;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderBase::AddIgnoreTarget(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderBase", "AddIgnoreTarget");
    struct
    {
        struct AActor* Target;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

// USpiderMovementComponent
void USpiderMovementComponent::UpdateTargetPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "UpdateTargetPath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::UpdateSetBase()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "UpdateSetBase");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::UpdateBasedMovement(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "UpdateBasedMovement");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::TickSimulateMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "TickSimulateMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::TickAuthorityMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "TickAuthorityMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::StopMove()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "StopMove");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::SetMovementMode(ESpiderMoveMode NewMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "SetMovementMode");
    struct
    {
        enum ESpiderMoveMode NewMode;
    } Parms{};
    Parms.NewMode = (enum ESpiderMoveMode)NewMode;
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::SetFollowTarget(struct AActor* Target, uint8_t FollowByNav, struct FVector HeadLoc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "SetFollowTarget");
    struct
    {
        struct AActor* Target;
        uint8_t FollowByNav;
        struct FVector HeadLoc;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    Parms.FollowByNav = (uint8_t)FollowByNav;
    Parms.HeadLoc = (struct FVector)HeadLoc;
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::SetBase(struct UPrimitiveComponent* NewBaseComponent, struct FName InBoneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "SetBase");
    struct
    {
        struct UPrimitiveComponent* NewBaseComponent;
        struct FName InBoneName;
    } Parms{};
    Parms.NewBaseComponent = (struct UPrimitiveComponent*)NewBaseComponent;
    Parms.InBoneName = (struct FName)InBoneName;
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::SaveBaseLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "SaveBaseLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::OnAsyncPathFind(uint8_t Result, int32_t Index, struct TArray<struct FAbilityTracingPathData>& PathDatas)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "OnAsyncPathFind");
    struct
    {
        uint8_t Result;
        int32_t Index;
        struct TArray<struct FAbilityTracingPathData> PathDatas;
    } Parms{};
    Parms.Result = (uint8_t)Result;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    PathDatas = Parms.PathDatas;
}

void USpiderMovementComponent::MulticastMovement(struct FSpiderRepMovement LatestMovement)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "MulticastMovement");
    struct
    {
        struct FSpiderRepMovement LatestMovement;
    } Parms{};
    Parms.LatestMovement = (struct FSpiderRepMovement)LatestMovement;
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::MaybeUpdateBasedMovement(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "MaybeUpdateBasedMovement");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::InitSetBaseMovement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "InitSetBaseMovement");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::InitMovement(struct USceneComponent* MoveRoot, struct FVector StartDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "InitMovement");
    struct
    {
        struct USceneComponent* MoveRoot;
        struct FVector StartDir;
    } Parms{};
    Parms.MoveRoot = (struct USceneComponent*)MoveRoot;
    Parms.StartDir = (struct FVector)StartDir;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector> USpiderMovementComponent::GetFollowTrack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "GetFollowTrack");
    struct
    {
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t USpiderMovementComponent::GetFollowIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "GetFollowIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector USpiderMovementComponent::GetCurrentNormal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "GetCurrentNormal");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USpiderMovementComponent::FindPathByNav()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "FindPathByNav");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USpiderMovementComponent::CheckNeedSwitchFollowType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderMovementComponent", "CheckNeedSwitchFollowType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// USpiderNetCueHandle
void USpiderNetCueHandle::FirefightingPlayAnim(uint8_t bPlay, uint8_t AnimType, float StartTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderNetCueHandle", "FirefightingPlayAnim");
    struct
    {
        uint8_t bPlay;
        uint8_t AnimType;
        float StartTime;
    } Parms{};
    Parms.bPlay = (uint8_t)bPlay;
    Parms.AnimType = (uint8_t)AnimType;
    Parms.StartTime = (float)StartTime;
    this->ProcessEvent(Func, &Parms);
}

// ASpiderNetProjectile
void ASpiderNetProjectile::OnOverlapBegin(struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderNetProjectile", "OnOverlapBegin");
    struct
    {
        struct AActor* OtherActor;
    } Parms{};
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// ASpiderSentryHive
void ASpiderSentryHive::SpawnSpider()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderSentryHive", "SpawnSpider");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpiderSentryHive::MulticastSpiderActivate(struct ASpiderBase* ActivatedSpider, uint8_t bOwnerActivate, struct AActor* TriggerActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderSentryHive", "MulticastSpiderActivate");
    struct
    {
        struct ASpiderBase* ActivatedSpider;
        uint8_t bOwnerActivate;
        struct AActor* TriggerActor;
    } Parms{};
    Parms.ActivatedSpider = (struct ASpiderBase*)ActivatedSpider;
    Parms.bOwnerActivate = (uint8_t)bOwnerActivate;
    Parms.TriggerActor = (struct AActor*)TriggerActor;
    this->ProcessEvent(Func, &Parms);
}

void ASpiderSentryHive::HandleWarmUpFinished()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderSentryHive", "HandleWarmUpFinished");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ASpiderSentryHive::ActivateNextSpider()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpiderSentryHive", "ActivateNextSpider");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// USpyExposeCueHandler
void USpyExposeCueHandler::TrySpawnSpyExposeActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpyExposeCueHandler", "TrySpawnSpyExposeActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USpyExposeCueHandler::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SpyExposeCueHandler", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ATestChainHookTakerActor
void ATestChainHookTakerActor::InitChainHookTakerComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestChainHookTakerActor", "InitChainHookTakerComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UThreatDetectionCueHandler
void UThreatDetectionCueHandler::UpdateGameRoleParam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "UpdateGameRoleParam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThreatDetectionCueHandler::StopTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "StopTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThreatDetectionCueHandler::StopCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "StopCheck");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThreatDetectionCueHandler::StartTickTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "StartTickTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThreatDetectionCueHandler::StartCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "StartCheck");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThreatDetectionCueHandler::SetHUDState(uint8_t bIsShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "SetHUDState");
    struct
    {
        uint8_t bIsShow;
    } Parms{};
    Parms.bIsShow = (uint8_t)bIsShow;
    this->ProcessEvent(Func, &Parms);
}

EFThreatDetectionCheckResult UThreatDetectionCueHandler::RealDoCheckThreat(const struct FVector& BaseLocation, const struct FVector& SocketLocation, const struct FVector& SocketForward, float CheckAngle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "RealDoCheckThreat");
    struct
    {
        struct FVector BaseLocation;
        struct FVector SocketLocation;
        struct FVector SocketForward;
        float CheckAngle;
        enum EFThreatDetectionCheckResult ReturnValue;
    } Parms{};
    Parms.BaseLocation = (struct FVector)BaseLocation;
    Parms.SocketLocation = (struct FVector)SocketLocation;
    Parms.SocketForward = (struct FVector)SocketForward;
    Parms.CheckAngle = (float)CheckAngle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UThreatDetectionCueHandler::OnPassCheckThreat(struct AGPCharacter* InCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "OnPassCheckThreat");
    struct
    {
        struct AGPCharacter* InCharacter;
    } Parms{};
    Parms.InCharacter = (struct AGPCharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UThreatDetectionCueHandler::IsNeedCheckThreat(int32_t TickCheckNum, const struct FThreatDetectionCheckInfo& Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "IsNeedCheckThreat");
    struct
    {
        int32_t TickCheckNum;
        struct FThreatDetectionCheckInfo Info;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TickCheckNum = (int32_t)TickCheckNum;
    Parms.Info = (struct FThreatDetectionCheckInfo)Info;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UThreatDetectionCueHandler::Is1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "Is1P");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UThreatDetectionCueHandler::InitTraceParms()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "InitTraceParms");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThreatDetectionCueHandler::InitGameRoleParam()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "InitGameRoleParam");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThreatDetectionCueHandler::GetViewLocationAndDirection(struct AGPCharacter* InCharacter, struct FVector& OutViewLocation, struct FVector& OutViewDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "GetViewLocationAndDirection");
    struct
    {
        struct AGPCharacter* InCharacter;
        struct FVector OutViewLocation;
        struct FVector OutViewDirection;
    } Parms{};
    Parms.InCharacter = (struct AGPCharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
    OutViewLocation = Parms.OutViewLocation;
    OutViewDirection = Parms.OutViewDirection;
}

void UThreatDetectionCueHandler::GetShotLocationAndDirection(struct AGPCharacter* InCharacter, struct FVector& OutShotLocation, struct FVector& OutShotDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "GetShotLocationAndDirection");
    struct
    {
        struct AGPCharacter* InCharacter;
        struct FVector OutShotLocation;
        struct FVector OutShotDirection;
    } Parms{};
    Parms.InCharacter = (struct AGPCharacter*)InCharacter;
    this->ProcessEvent(Func, &Parms);
    OutShotLocation = Parms.OutShotLocation;
    OutShotDirection = Parms.OutShotDirection;
}

void UThreatDetectionCueHandler::DoTimerTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "DoTimerTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

EFThreatDetectionCheckResult UThreatDetectionCueHandler::DoCheckThreat(struct AGPCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "DoCheckThreat");
    struct
    {
        struct AGPCharacter* CHARACTER;
        enum EFThreatDetectionCheckResult ReturnValue;
    } Parms{};
    Parms.CHARACTER = (struct AGPCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UThreatDetectionCueHandler::CheckThreat()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "CheckThreat");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UThreatDetectionCueHandler::CheckBlock(struct FVector Start, struct FVector End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThreatDetectionCueHandler", "CheckBlock");
    struct
    {
        struct FVector Start;
        struct FVector End;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start = (struct FVector)Start;
    Parms.End = (struct FVector)End;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UThrowBlockingAnimInstance
void UThrowBlockingAnimInstance::CheckMaxPlayTimeSeconds(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingAnimInstance", "CheckMaxPlayTimeSeconds");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

// UThrowBlockingPartComponent
void UThrowBlockingPartComponent::UpdateState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "UpdateState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::TrySpawnPartSpawnPS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TrySpawnPartSpawnPS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::TrySpawnPartPS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TrySpawnPartPS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::TrySpawnPartDestroyPS(uint8_t bIsInSpawn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TrySpawnPartDestroyPS");
    struct
    {
        uint8_t bIsInSpawn;
    } Parms{};
    Parms.bIsInSpawn = (uint8_t)bIsInSpawn;
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::TrySpawnPartBurningPS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TrySpawnPartBurningPS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UFXResourceContainerComponent* UThrowBlockingPartComponent::TrySpawnFX(const struct FName& FXName, int32_t& EffectHandle, uint8_t bSetParent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TrySpawnFX");
    struct
    {
        struct FName FXName;
        int32_t EffectHandle;
        uint8_t bSetParent;
        struct UFXResourceContainerComponent* ReturnValue;
    } Parms{};
    Parms.FXName = (struct FName)FXName;
    Parms.bSetParent = (uint8_t)bSetParent;
    this->ProcessEvent(Func, &Parms);
    EffectHandle = Parms.EffectHandle;
    return Parms.ReturnValue;
}

void UThrowBlockingPartComponent::TryInitializeMainMID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TryInitializeMainMID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::TryInitHide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TryInitHide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::TryInitChild()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TryInitChild");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::TryDeactivateFX(struct UFXResourceContainerComponent* FX, int32_t EffectHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TryDeactivateFX");
    struct
    {
        struct UFXResourceContainerComponent* FX;
        int32_t EffectHandle;
    } Parms{};
    Parms.FX = (struct UFXResourceContainerComponent*)FX;
    Parms.EffectHandle = (int32_t)EffectHandle;
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::TryDeactivateAllPS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "TryDeactivateAllPS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::StopSpawnTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "StopSpawnTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::StopClientDestroyedTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "StopClientDestroyedTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::StopBurningTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "StopBurningTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::StartSpawnTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "StartSpawnTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::StartBurningTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "StartBurningTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::SetPartState(EThrowBlockingPartState State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "SetPartState");
    struct
    {
        enum EThrowBlockingPartState State;
    } Parms{};
    Parms.State = (enum EThrowBlockingPartState)State;
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::SetMaterialParameterValue(struct FName ParameterName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "SetMaterialParameterValue");
    struct
    {
        struct FName ParameterName;
        float Value;
    } Parms{};
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::SetChildCollisionEnabled(uint8_t bIsCollisionEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "SetChildCollisionEnabled");
    struct
    {
        uint8_t bIsCollisionEnabled;
    } Parms{};
    Parms.bIsCollisionEnabled = (uint8_t)bIsCollisionEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::PlayDamagedSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "PlayDamagedSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::OnSpawnTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "OnSpawnTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::OnRep_IsBurning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "OnRep_IsBurning");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::OnRep_DamageRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "OnRep_DamageRate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::OnRep_CurrState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "OnRep_CurrState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, uint8_t bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "OnOverlapBegin");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        uint8_t bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (uint8_t)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UThrowBlockingPartComponent::IsThisPart(struct UPrimitiveComponent* HitComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "IsThisPart");
    struct
    {
        struct UPrimitiveComponent* HitComponent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.HitComponent = (struct UPrimitiveComponent*)HitComponent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UThrowBlockingPartComponent::InitTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "InitTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::InitAppearance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "InitAppearance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ADFMAbilityThrowBlocking* UThrowBlockingPartComponent::GetThrowBlockingOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "GetThrowBlockingOwner");
    struct
    {
        struct ADFMAbilityThrowBlocking* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UThrowBlockingPartComponent::FinTrigger()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "FinTrigger");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::DoSpawnTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "DoSpawnTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::DoClientDestroyedTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "DoClientDestroyedTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::DoClientDestroyed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "DoClientDestroyed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UThrowBlockingPartComponent::DoCheckCharacter(struct FVector CheckCharacterAddExtent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "DoCheckCharacter");
    struct
    {
        struct FVector CheckCharacterAddExtent;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CheckCharacterAddExtent = (struct FVector)CheckCharacterAddExtent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UThrowBlockingPartComponent::DoCheck(int32_t MinPassNum, struct FVector BaseOffset, struct FVector CenterOffset, const struct FVector& CheckSize, const struct FVector& EdgeCheckOffset, struct FVector CheckCharacterAddExtent, struct AActor* Owner)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "DoCheck");
    struct
    {
        int32_t MinPassNum;
        struct FVector BaseOffset;
        struct FVector CenterOffset;
        struct FVector CheckSize;
        struct FVector EdgeCheckOffset;
        struct FVector CheckCharacterAddExtent;
        struct AActor* Owner;
    } Parms{};
    Parms.MinPassNum = (int32_t)MinPassNum;
    Parms.BaseOffset = (struct FVector)BaseOffset;
    Parms.CenterOffset = (struct FVector)CenterOffset;
    Parms.CheckSize = (struct FVector)CheckSize;
    Parms.EdgeCheckOffset = (struct FVector)EdgeCheckOffset;
    Parms.CheckCharacterAddExtent = (struct FVector)CheckCharacterAddExtent;
    Parms.Owner = (struct AActor*)Owner;
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::DoBurningTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "DoBurningTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UThrowBlockingPartComponent::CleanAttachChildren()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPartComponent", "CleanAttachChildren");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UThrowBlockingPreviewPartComponent
void UThrowBlockingPreviewPartComponent::InitPreviewPart(struct USceneComponent* BaseNode, struct UMeshComponent* Mesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ThrowBlockingPreviewPartComponent", "InitPreviewPart");
    struct
    {
        struct USceneComponent* BaseNode;
        struct UMeshComponent* Mesh;
    } Parms{};
    Parms.BaseNode = (struct USceneComponent*)BaseNode;
    Parms.Mesh = (struct UMeshComponent*)Mesh;
    this->ProcessEvent(Func, &Parms);
}

// UWeaponBindHUDFuncComponent
void UWeaponBindHUDFuncComponent::TryRemoveHUD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBindHUDFuncComponent", "TryRemoveHUD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponBindHUDFuncComponent::TryLoadHUD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBindHUDFuncComponent", "TryLoadHUD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AWeaponBulletBuff
void AWeaponBulletBuff::ServerAEffectBuff(struct TArray<struct FAbilityDetectorBuffData> AddBuffs, struct ADFMCharacter* DFMCharacter, uint8_t Add)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletBuff", "ServerAEffectBuff");
    struct
    {
        struct TArray<struct FAbilityDetectorBuffData> AddBuffs;
        struct ADFMCharacter* DFMCharacter;
        uint8_t Add;
    } Parms{};
    Parms.AddBuffs = (struct TArray<struct FAbilityDetectorBuffData>)AddBuffs;
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    Parms.Add = (uint8_t)Add;
    this->ProcessEvent(Func, &Parms);
}

uint8_t AWeaponBulletBuff::IsSelfBullet(struct AGPWeaponBulletBase* Bullet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletBuff", "IsSelfBullet");
    struct
    {
        struct AGPWeaponBulletBase* Bullet;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Bullet = (struct AGPWeaponBulletBase*)Bullet;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AWeaponBulletBuff::IsNightMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletBuff", "IsNightMap");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AWeaponBulletBuff::IsEnemyBullet(struct AGPWeaponBulletBase* Bullet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletBuff", "IsEnemyBullet");
    struct
    {
        struct AGPWeaponBulletBase* Bullet;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Bullet = (struct AGPWeaponBulletBase*)Bullet;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AWeaponBulletBuff::IsEnemy(struct AGPCharacterBase* CharecterA, struct AGPCharacterBase* CharecterB)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletBuff", "IsEnemy");
    struct
    {
        struct AGPCharacterBase* CharecterA;
        struct AGPCharacterBase* CharecterB;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CharecterA = (struct AGPCharacterBase*)CharecterA;
    Parms.CharecterB = (struct AGPCharacterBase*)CharecterB;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AWeaponBulletBuff::BreakThrouthScore(EScoreName Score)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletBuff", "BreakThrouthScore");
    struct
    {
        enum EScoreName Score;
    } Parms{};
    Parms.Score = (enum EScoreName)Score;
    this->ProcessEvent(Func, &Parms);
}

ESkillLogicType AWeaponBulletBuff::BP_GetSkillLogicType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletBuff", "BP_GetSkillLogicType");
    struct
    {
        enum ESkillLogicType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AWeaponBulletArrow
void AWeaponBulletArrow::MulticastClientPlayBounceSound(int32_t BounceCnt, struct FVector pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletArrow", "MulticastClientPlayBounceSound");
    struct
    {
        int32_t BounceCnt;
        struct FVector pos;
    } Parms{};
    Parms.BounceCnt = (int32_t)BounceCnt;
    Parms.pos = (struct FVector)pos;
    this->ProcessEvent(Func, &Parms);
}

struct FName AWeaponBulletArrow::GetSkinId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletArrow", "GetSkinId");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AWeaponBulletArrow::GetFlyDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletArrow", "GetFlyDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AWeaponBulletArrow::CreateBulletBuff(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletArrow", "CreateBulletBuff");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletArrow::BP_InitClientBullet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletArrow", "BP_InitClientBullet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletArrow::BP_CreateBulletBuff(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletArrow", "BP_CreateBulletBuff");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletArrow::BP_ClientStopSound()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletArrow", "BP_ClientStopSound");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AWeaponBulletAbilitySayyidFireArrow
void AWeaponBulletAbilitySayyidFireArrow::SpawnIncendiaryAreaDirectly(const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletAbilitySayyidFireArrow", "SpawnIncendiaryAreaDirectly");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletAbilitySayyidFireArrow::SpawnFireProjectile(const struct FVector& Location, const struct FVector& Normal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletAbilitySayyidFireArrow", "SpawnFireProjectile");
    struct
    {
        struct FVector Location;
        struct FVector Normal;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Normal = (struct FVector)Normal;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletAbilitySayyidFireArrow::PlayFireExplosionEffect(uint8_t bIsNearGround, const struct FVector& Location, const struct FVector& Normal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletAbilitySayyidFireArrow", "PlayFireExplosionEffect");
    struct
    {
        uint8_t bIsNearGround;
        struct FVector Location;
        struct FVector Normal;
    } Parms{};
    Parms.bIsNearGround = (uint8_t)bIsNearGround;
    Parms.Location = (struct FVector)Location;
    Parms.Normal = (struct FVector)Normal;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletAbilitySayyidFireArrow::MulticastClientPlayExplosionEffect(uint8_t bIsNearGround, struct FVector Location, struct FVector Normal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletAbilitySayyidFireArrow", "MulticastClientPlayExplosionEffect");
    struct
    {
        uint8_t bIsNearGround;
        struct FVector Location;
        struct FVector Normal;
    } Parms{};
    Parms.bIsNearGround = (uint8_t)bIsNearGround;
    Parms.Location = (struct FVector)Location;
    Parms.Normal = (struct FVector)Normal;
    this->ProcessEvent(Func, &Parms);
}

// AWeaponBulletPenetratingSniper
void AWeaponBulletPenetratingSniper::BP_CreateBulletBuff(const struct FHitResult& ImpactResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletPenetratingSniper", "BP_CreateBulletBuff");
    struct
    {
        struct FHitResult ImpactResult;
    } Parms{};
    Parms.ImpactResult = (struct FHitResult)ImpactResult;
    this->ProcessEvent(Func, &Parms);
}

// AWeaponBulletProxSensorArrow
void AWeaponBulletProxSensorArrow::UpdateClientPostProcessEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "UpdateClientPostProcessEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletProxSensorArrow::TryScanEnemy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "TryScanEnemy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletProxSensorArrow::TryScanCharacter(struct ADFMCharacter* TargetChar, struct FVector& StartLocation, uint8_t IsPassenger, int64_t& EffectAICnt, int64_t& EffectPlayerCnt, uint8_t IsSecondCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "TryScanCharacter");
    struct
    {
        struct ADFMCharacter* TargetChar;
        struct FVector StartLocation;
        uint8_t IsPassenger;
        int64_t EffectAICnt;
        int64_t EffectPlayerCnt;
        uint8_t IsSecondCheck;
    } Parms{};
    Parms.TargetChar = (struct ADFMCharacter*)TargetChar;
    Parms.IsPassenger = (uint8_t)IsPassenger;
    Parms.IsSecondCheck = (uint8_t)IsSecondCheck;
    this->ProcessEvent(Func, &Parms);
    StartLocation = Parms.StartLocation;
    EffectAICnt = Parms.EffectAICnt;
    EffectPlayerCnt = Parms.EffectPlayerCnt;
}

void AWeaponBulletProxSensorArrow::TimeOutDestory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "TimeOutDestory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletProxSensorArrow::SyncEnemyLocationsToTeamMates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "SyncEnemyLocationsToTeamMates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletProxSensorArrow::SyncDetectorLocationsToTeamMates()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "SyncDetectorLocationsToTeamMates");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AWeaponBulletProxSensorArrow::IsOnwerEnemyWithVehicle(struct ADFMVehicleBase* Vehicle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "IsOnwerEnemyWithVehicle");
    struct
    {
        struct ADFMVehicleBase* Vehicle;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Vehicle = (struct ADFMVehicleBase*)Vehicle;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AWeaponBulletProxSensorArrow::IsOnwerEnemyWithCharacter(struct AGPCharacterBase* Charecter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "IsOnwerEnemyWithCharacter");
    struct
    {
        struct AGPCharacterBase* Charecter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Charecter = (struct AGPCharacterBase*)Charecter;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AWeaponBulletProxSensorArrow::GetStartScanLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "GetStartScanLocation");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AWeaponBulletProxSensorArrow::CheckDeformableBlock(const struct FVector& RayStart, const struct FVector& RayEnd, struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "CheckDeformableBlock");
    struct
    {
        struct FVector RayStart;
        struct FVector RayEnd;
        struct AActor* Target;
        uint8_t ReturnValue;
    } Parms{};
    Parms.RayStart = (struct FVector)RayStart;
    Parms.RayEnd = (struct FVector)RayEnd;
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AWeaponBulletProxSensorArrow::CheckBlock(const struct FVector& StartLocation, struct AActor* Target, uint8_t GetHeadPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "CheckBlock");
    struct
    {
        struct FVector StartLocation;
        struct AActor* Target;
        uint8_t GetHeadPos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.Target = (struct AActor*)Target;
    Parms.GetHeadPos = (uint8_t)GetHeadPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AWeaponBulletProxSensorArrow::AddScoreInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "AddScoreInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletProxSensorArrow::ActiveClientPostProcessEffect(uint8_t Active)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletProxSensorArrow", "ActiveClientPostProcessEffect");
    struct
    {
        uint8_t Active;
    } Parms{};
    Parms.Active = (uint8_t)Active;
    this->ProcessEvent(Func, &Parms);
}

// AWeaponBulletSupport
void AWeaponBulletSupport::ServerOverlapByBullet(struct AActor* Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletSupport", "ServerOverlapByBullet");
    struct
    {
        struct AActor* Target;
    } Parms{};
    Parms.Target = (struct AActor*)Target;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponBulletSupport::OnRep_HomingTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponBulletSupport", "OnRep_HomingTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponFireModeBionicBird
void UWeaponFireModeBionicBird::TrySpawnBionicBirdActor(struct FVector StartLocation, struct FRotator FireRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeBionicBird", "TrySpawnBionicBirdActor");
    struct
    {
        struct FVector StartLocation;
        struct FRotator FireRotation;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.FireRotation = (struct FRotator)FireRotation;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeBionicBird::StopSafeSwitchWeaponCheckTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeBionicBird", "StopSafeSwitchWeaponCheckTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeBionicBird::StartSafeSwitchWeaponCheckTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeBionicBird", "StartSafeSwitchWeaponCheckTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeBionicBird::DoSafeSwitchWeaponCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeBionicBird", "DoSafeSwitchWeaponCheck");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeBionicBird::DoFailedSwitchWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeBionicBird", "DoFailedSwitchWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector UWeaponFireModeBionicBird::CheckSpawnLocation(struct FVector StartLocation, struct FRotator FireRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeBionicBird", "CheckSpawnLocation");
    struct
    {
        struct FVector StartLocation;
        struct FRotator FireRotation;
        struct FVector ReturnValue;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.FireRotation = (struct FRotator)FireRotation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UWeaponFireModeBionicSpy
void UWeaponFireModeBionicSpy::TrySpawnSpyActor(uint32_t PlayerUid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeBionicSpy", "TrySpawnSpyActor");
    struct
    {
        uint32_t PlayerUid;
    } Parms{};
    Parms.PlayerUid = (uint32_t)PlayerUid;
    this->ProcessEvent(Func, &Parms);
}

// UWeaponFireModeSpider
void UWeaponFireModeSpider::UpdatePreview(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSpider", "UpdatePreview");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSpider::TrySpawnSpiderActor(const struct FVector& StartLocation, const struct FRotator& FireRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSpider", "TrySpawnSpiderActor");
    struct
    {
        struct FVector StartLocation;
        struct FRotator FireRotation;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.FireRotation = (struct FRotator)FireRotation;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSpider::SetPreviewHiddenInGame(uint8_t bHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSpider", "SetPreviewHiddenInGame");
    struct
    {
        uint8_t bHidden;
    } Parms{};
    Parms.bHidden = (uint8_t)bHidden;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSpider::OnPreviewActorLoaded(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSpider", "OnPreviewActorLoaded");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSpider::LoadPreviewActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSpider", "LoadPreviewActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSpider::GetPreviewActorLocation(struct FVector& OutStartLocation, struct FRotator& OutFireRotation, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSpider", "GetPreviewActorLocation");
    struct
    {
        struct FVector OutStartLocation;
        struct FRotator OutFireRotation;
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    OutStartLocation = Parms.OutStartLocation;
    OutFireRotation = Parms.OutFireRotation;
}

struct FSoftObjectPath UWeaponFireModeSpider::GetPreviewActorClassPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSpider", "GetPreviewActorClassPath");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponFireModeSpider::ClearLoadPreviewActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSpider", "ClearLoadPreviewActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponFireModeSwarms
void UWeaponFireModeSwarms::UpdatePreview(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "UpdatePreview");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::TrySpawnSwarmsActor(const struct FVector& StartLocation, const struct FRotator& FireRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "TrySpawnSwarmsActor");
    struct
    {
        struct FVector StartLocation;
        struct FRotator FireRotation;
    } Parms{};
    Parms.StartLocation = (struct FVector)StartLocation;
    Parms.FireRotation = (struct FRotator)FireRotation;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::TryShowScreenEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "TryShowScreenEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::TickActorOffsetZ(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "TickActorOffsetZ");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::SetPreviewHiddenInGame(uint8_t bHidden)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "SetPreviewHiddenInGame");
    struct
    {
        uint8_t bHidden;
    } Parms{};
    Parms.bHidden = (uint8_t)bHidden;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::SetCanSprint(uint8_t bCanSprint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "SetCanSprint");
    struct
    {
        uint8_t bCanSprint;
    } Parms{};
    Parms.bCanSprint = (uint8_t)bCanSprint;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::SetCanFire(uint8_t CanFire)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "SetCanFire");
    struct
    {
        uint8_t CanFire;
    } Parms{};
    Parms.CanFire = (uint8_t)CanFire;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::SetAimHUD(uint8_t bIsShowHud)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "SetAimHUD");
    struct
    {
        uint8_t bIsShowHud;
    } Parms{};
    Parms.bIsShowHud = (uint8_t)bIsShowHud;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::OnWeaponInteractive(uint8_t bIsInteractive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "OnWeaponInteractive");
    struct
    {
        uint8_t bIsInteractive;
    } Parms{};
    Parms.bIsInteractive = (uint8_t)bIsInteractive;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::OnPreviewActorLoaded(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "OnPreviewActorLoaded");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::LoadPreviewActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "LoadPreviewActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponFireModeSwarms::IsUseHD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "IsUseHD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeaponFireModeSwarms::IsInSOL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "IsInSOL");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponFireModeSwarms::GetPreviewActorLocation(struct FVector& OutStartLocation, struct FRotator& OutFireRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "GetPreviewActorLocation");
    struct
    {
        struct FVector OutStartLocation;
        struct FRotator OutFireRotation;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutStartLocation = Parms.OutStartLocation;
    OutFireRotation = Parms.OutFireRotation;
}

struct FSoftObjectPath UWeaponFireModeSwarms::GetPreviewActorClassPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "GetPreviewActorClassPath");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ADFMCharacter* UWeaponFireModeSwarms::GetDFMOwnerCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "GetDFMOwnerCharacter");
    struct
    {
        struct ADFMCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UWeaponFireModeSwarms::GetAvatarID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "GetAvatarID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPSkillComponent* UWeaponFireModeSwarms::DataFlowGetSkillComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "DataFlowGetSkillComponent");
    struct
    {
        struct UGPSkillComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponFireModeSwarms::DataFlowAddEquipCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "DataFlowAddEquipCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::DataFlowAddCastCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "DataFlowAddCastCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeSwarms::ClearLoadPreviewActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "ClearLoadPreviewActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponFireModeSwarms::CheckIsCanSwarmsFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeSwarms", "CheckIsCanSwarmsFire");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UWeaponFireModeThrowableSpawnSmokeUAS
void UWeaponFireModeThrowableSpawnSmokeUAS::UnRegisterLocalUASActorInitiazliced()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowableSpawnSmokeUAS", "UnRegisterLocalUASActorInitiazliced");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeThrowableSpawnSmokeUAS::TickCheckUASMoveEnd(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowableSpawnSmokeUAS", "TickCheckUASMoveEnd");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeThrowableSpawnSmokeUAS::SpawnThrowableActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowableSpawnSmokeUAS", "SpawnThrowableActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeThrowableSpawnSmokeUAS::RegisterLocalUASActorInitiazliced()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowableSpawnSmokeUAS", "RegisterLocalUASActorInitiazliced");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeThrowableSpawnSmokeUAS::OnLocalGPUASActorInitiazliced(struct AGPUASActor* GPUASActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowableSpawnSmokeUAS", "OnLocalGPUASActorInitiazliced");
    struct
    {
        struct AGPUASActor* GPUASActor;
    } Parms{};
    Parms.GPUASActor = (struct AGPUASActor*)GPUASActor;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeThrowableSpawnSmokeUAS::OnEndReleaseUAS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowableSpawnSmokeUAS", "OnEndReleaseUAS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeThrowableSpawnSmokeUAS::OnBeginReleaseUAS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowableSpawnSmokeUAS", "OnBeginReleaseUAS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponFireModeThrowBlocking
void UWeaponFireModeThrowBlocking::ShowSwitchButtonHUD(uint8_t bActive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowBlocking", "ShowSwitchButtonHUD");
    struct
    {
        uint8_t bActive;
    } Parms{};
    Parms.bActive = (uint8_t)bActive;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeThrowBlocking::OnWeaponStopFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowBlocking", "OnWeaponStopFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFireModeThrowBlocking::CheckThrowBlockingPreviewPart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFireModeThrowBlocking", "CheckThrowBlockingPreviewPart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UWeaponFuncComponentZoyaSwarmsItem
void UWeaponFuncComponentZoyaSwarmsItem::TrySpawnCastEffect_3P(int32_t EffectNum, struct FName EffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentZoyaSwarmsItem", "TrySpawnCastEffect_3P");
    struct
    {
        int32_t EffectNum;
        struct FName EffectName;
    } Parms{};
    Parms.EffectNum = (int32_t)EffectNum;
    Parms.EffectName = (struct FName)EffectName;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentZoyaSwarmsItem::TrySpawnCastEffect_1P(int32_t EffectNum, struct FName EffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentZoyaSwarmsItem", "TrySpawnCastEffect_1P");
    struct
    {
        int32_t EffectNum;
        struct FName EffectName;
    } Parms{};
    Parms.EffectNum = (int32_t)EffectNum;
    Parms.EffectName = (struct FName)EffectName;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentZoyaSwarmsItem::TrySpawnCastEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentZoyaSwarmsItem", "TrySpawnCastEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentZoyaSwarmsItem::TryShowScreenEffect(struct FName EffectName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentZoyaSwarmsItem", "TryShowScreenEffect");
    struct
    {
        struct FName EffectName;
    } Parms{};
    Parms.EffectName = (struct FName)EffectName;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentZoyaSwarmsItem::SetCharacterItemIsBindToTarget(uint8_t bIsBindToTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentZoyaSwarmsItem", "SetCharacterItemIsBindToTarget");
    struct
    {
        uint8_t bIsBindToTarget;
    } Parms{};
    Parms.bIsBindToTarget = (uint8_t)bIsBindToTarget;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponFuncComponentZoyaSwarmsItem::DoSetCharacterItemIsBindToTarget(uint8_t bIsBindToTarget, uint8_t bIs1P)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponFuncComponentZoyaSwarmsItem", "DoSetCharacterItemIsBindToTarget");
    struct
    {
        uint8_t bIsBindToTarget;
        uint8_t bIs1P;
    } Parms{};
    Parms.bIsBindToTarget = (uint8_t)bIsBindToTarget;
    Parms.bIs1P = (uint8_t)bIs1P;
    this->ProcessEvent(Func, &Parms);
}

// UWeaponThrowBunkerDataComponentAnim
void UWeaponThrowBunkerDataComponentAnim::PlayAudioStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponThrowBunkerDataComponentAnim", "PlayAudioStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponThrowBunkerDataComponentAnim::PlayAudioIdle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponThrowBunkerDataComponentAnim", "PlayAudioIdle");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponThrowBunkerDataComponentAnim::DoReportBunkerFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponThrowBunkerDataComponentAnim", "DoReportBunkerFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AZoyaSwarmsActor
void AZoyaSwarmsActor::UpdateTravelerGameAk()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "UpdateTravelerGameAk");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::TryTickLocalPawnLockAudio(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "TryTickLocalPawnLockAudio");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::TrySpawnClientStartEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "TrySpawnClientStartEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::TryPlayLeftAnim(struct ADFMCharacter* TargetChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "TryPlayLeftAnim");
    struct
    {
        struct ADFMCharacter* TargetChar;
    } Parms{};
    Parms.TargetChar = (struct ADFMCharacter*)TargetChar;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::TryLoadAvatarAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "TryLoadAvatarAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::TryCancelUseItem(struct ADFMCharacter* TargetChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "TryCancelUseItem");
    struct
    {
        struct ADFMCharacter* TargetChar;
    } Parms{};
    Parms.TargetChar = (struct ADFMCharacter*)TargetChar;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::StopFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "StopFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::StopFindTargetFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "StopFindTargetFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::SetFindTargetFlyAudioLocation(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "SetFindTargetFlyAudioLocation");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::SendProjectileThreatExplosion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "SendProjectileThreatExplosion");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::SendProjectileThreatCreate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "SendProjectileThreatCreate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::PreloadAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "PreloadAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::PlayHitTargetSound(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "PlayHitTargetSound");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    this->ProcessEvent(Func, &Parms);
}

struct FGPAudioFuturePlayingID AZoyaSwarmsActor::PlayGPAudioAttachByComponent(struct FName EventName, struct UGameAkComponent* GameAk, const struct FName& AudioTypeName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "PlayGPAudioAttachByComponent");
    struct
    {
        struct FName EventName;
        struct UGameAkComponent* GameAk;
        struct FName AudioTypeName;
        struct FGPAudioFuturePlayingID ReturnValue;
    } Parms{};
    Parms.EventName = (struct FName)EventName;
    Parms.GameAk = (struct UGameAkComponent*)GameAk;
    Parms.AudioTypeName = (struct FName)AudioTypeName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AZoyaSwarmsActor::PlayFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "PlayFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::PlayFindTargetFlyAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "PlayFindTargetFlyAudio");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::OnLoadAvatarMeshAssetComplete(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "OnLoadAvatarMeshAssetComplete");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::OnLoadAvatarMaterialAssetComplete(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "OnLoadAvatarMaterialAssetComplete");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::MulticastHitEnemyVO(struct ADFMCharacter* DFMCharacter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "MulticastHitEnemyVO");
    struct
    {
        struct ADFMCharacter* DFMCharacter;
    } Parms{};
    Parms.DFMCharacter = (struct ADFMCharacter*)DFMCharacter;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::MulticastAddDamageTarget(struct AGPCharacter* Char, int32_t CellIndex, int32_t LayerNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "MulticastAddDamageTarget");
    struct
    {
        struct AGPCharacter* Char;
        int32_t CellIndex;
        int32_t LayerNum;
    } Parms{};
    Parms.Char = (struct AGPCharacter*)Char;
    Parms.CellIndex = (int32_t)CellIndex;
    Parms.LayerNum = (int32_t)LayerNum;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::InitravelerGameAk()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "InitravelerGameAk");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::InitOwner()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "InitOwner");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FName AZoyaSwarmsActor::GetAvatarSoundEventName(struct FName EventName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "GetAvatarSoundEventName");
    struct
    {
        struct FName EventName;
        struct FName ReturnValue;
    } Parms{};
    Parms.EventName = (struct FName)EventName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AZoyaSwarmsActor::DoTryLoadAvatarMeshAsset(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "DoTryLoadAvatarMeshAsset");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::DoTryLoadAvatarMaterialAsset(const struct FSoftObjectPath& Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "DoTryLoadAvatarMaterialAsset");
    struct
    {
        struct FSoftObjectPath Path;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    this->ProcessEvent(Func, &Parms);
}

struct FVector AZoyaSwarmsActor::DoSwarmsSoundCheckWater(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "DoSwarmsSoundCheckWater");
    struct
    {
        struct FVector Location;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AZoyaSwarmsActor::CleanLoadAvatarAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "CleanLoadAvatarAsset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsActor::CheckMinLeftTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "CheckMinLeftTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AZoyaSwarmsActor::CheckExtraLODDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "CheckExtraLODDistance");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AZoyaSwarmsActor::CheckBuffDisableTagInWater(struct AGPCharacter* TargetChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsActor", "CheckBuffDisableTagInWater");
    struct
    {
        struct AGPCharacter* TargetChar;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetChar = (struct AGPCharacter*)TargetChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UZoyaSwarmsItemAnimInstance
void UZoyaSwarmsItemAnimInstance::SetIsBindToTarget(uint8_t bIsBindToTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsItemAnimInstance", "SetIsBindToTarget");
    struct
    {
        uint8_t bIsBindToTarget;
    } Parms{};
    Parms.bIsBindToTarget = (uint8_t)bIsBindToTarget;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UZoyaSwarmsItemAnimInstance::CheckIsSwarmsWaepon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsItemAnimInstance", "CheckIsSwarmsWaepon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UZoyaSwarmsItemAnimInstance::CheckIsFppMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsItemAnimInstance", "CheckIsFppMesh");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AZoyaSwarmsPreviewActor
void AZoyaSwarmsPreviewActor::TickMove(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "TickMove");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsPreviewActor::SetPreviewLocationAndRotation(struct FVector NewLocation, struct FRotator NewRotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "SetPreviewLocationAndRotation");
    struct
    {
        struct FVector NewLocation;
        struct FRotator NewRotation;
    } Parms{};
    Parms.NewLocation = (struct FVector)NewLocation;
    Parms.NewRotation = (struct FRotator)NewRotation;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsPreviewActor::SetOwnerCharacter(struct ADFMCharacter* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "SetOwnerCharacter");
    struct
    {
        struct ADFMCharacter* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct ADFMCharacter*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsPreviewActor::SetMove(uint8_t bIsMesh1, float MoveVal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "SetMove");
    struct
    {
        uint8_t bIsMesh1;
        float MoveVal;
    } Parms{};
    Parms.bIsMesh1 = (uint8_t)bIsMesh1;
    Parms.MoveVal = (float)MoveVal;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsPreviewActor::SetColor(uint8_t bIsMesh1, uint8_t bIsCanUse)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "SetColor");
    struct
    {
        uint8_t bIsMesh1;
        uint8_t bIsCanUse;
    } Parms{};
    Parms.bIsMesh1 = (uint8_t)bIsMesh1;
    Parms.bIsCanUse = (uint8_t)bIsCanUse;
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsPreviewActor::ResetMoveTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "ResetMoveTime");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AZoyaSwarmsPreviewActor::InitMaterial(struct UMeshComponent* Mesh, uint8_t bIsMesh1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "InitMaterial");
    struct
    {
        struct UMeshComponent* Mesh;
        uint8_t bIsMesh1;
    } Parms{};
    Parms.Mesh = (struct UMeshComponent*)Mesh;
    Parms.bIsMesh1 = (uint8_t)bIsMesh1;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector> AZoyaSwarmsPreviewActor::GetCurrSpawnPoints(struct FVector& CheckOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "GetCurrSpawnPoints");
    struct
    {
        struct FVector CheckOffset;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    CheckOffset = Parms.CheckOffset;
    return Parms.ReturnValue;
}

uint8_t AZoyaSwarmsPreviewActor::DoCheckShowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "DoCheckShowState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AZoyaSwarmsPreviewActor::DoCheck()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "DoCheck");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AZoyaSwarmsPreviewActor::CheckWaterData(struct FVector pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "CheckWaterData");
    struct
    {
        struct FVector pos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AZoyaSwarmsPreviewActor::CheckVolume(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "CheckVolume");
    struct
    {
        float DeltaTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AZoyaSwarmsPreviewActor::CheckShowState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsPreviewActor", "CheckShowState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AZoyaSwarmsWeapon
void AZoyaSwarmsWeapon::TryShowCheckFailedTips()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsWeapon", "TryShowCheckFailedTips");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FName AZoyaSwarmsWeapon::GetCastScreenEffect1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsWeapon", "GetCastScreenEffect1P");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AZoyaSwarmsWeapon::GetCastEffectNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsWeapon", "GetCastEffectNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName AZoyaSwarmsWeapon::GetCastEffect3P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsWeapon", "GetCastEffect3P");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName AZoyaSwarmsWeapon::GetCastEffect1P()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsWeapon", "GetCastEffect1P");
    struct
    {
        struct FName ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AZoyaSwarmsWeapon::CheckSwarmsCanFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsWeapon", "CheckSwarmsCanFire");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AZoyaSwarmsWeapon::AvatarEffectDataIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ZoyaSwarmsWeapon", "AvatarEffectDataIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
