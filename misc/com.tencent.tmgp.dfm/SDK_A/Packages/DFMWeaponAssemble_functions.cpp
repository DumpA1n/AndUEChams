#include "DFMWeaponAssemble.hpp"
#include "DFMGlobalDefines.hpp"
#include "DFMVehicle.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"
#include "GPGlobalDefines.hpp"
#include "RuntimeIcon.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- AAssemblerCameraCtrl::* ----
void AAssemblerCameraCtrl::UpdateDOFParam(EAssemblerCamPoint CameraPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "UpdateDOFParam");
    struct
    {
        enum EAssemblerCamPoint CameraPoint;
    } Parms{};
    Parms.CameraPoint = (enum EAssemblerCamPoint)CameraPoint;
    this->ProcessEvent(Func, &Parms);
}

void AAssemblerCameraCtrl::StartBeginCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "StartBeginCamera");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AAssemblerCameraCtrl::SetTargetPoint(EAssemblerCamPoint PointType, uint8_t bUseCameraID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "SetTargetPoint");
    struct
    {
        enum EAssemblerCamPoint PointType;
        uint8_t bUseCameraID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PointType = (enum EAssemblerCamPoint)PointType;
    Parms.bUseCameraID = (uint8_t)bUseCameraID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAssemblerCameraCtrl::SetPitchEnable(uint8_t IsEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "SetPitchEnable");
    struct
    {
        uint8_t IsEnable;
    } Parms{};
    Parms.IsEnable = (uint8_t)IsEnable;
    this->ProcessEvent(Func, &Parms);
}

void AAssemblerCameraCtrl::SetCameraType(EAssemblerCameraType Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "SetCameraType");
    struct
    {
        enum EAssemblerCameraType Type;
    } Parms{};
    Parms.Type = (enum EAssemblerCameraType)Type;
    this->ProcessEvent(Func, &Parms);
}

struct FGunCameraParamsRow AAssemblerCameraCtrl::SetCameraToWeaponSocketCenter(EAssemblerCamPoint CamPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "SetCameraToWeaponSocketCenter");
    struct
    {
        enum EAssemblerCamPoint CamPoint;
        struct FGunCameraParamsRow ReturnValue;
    } Parms{};
    Parms.CamPoint = (enum EAssemblerCamPoint)CamPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGunCameraParamsRow AAssemblerCameraCtrl::SetCameraToWeaponCenter(EAssemblerCamPoint CamPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "SetCameraToWeaponCenter");
    struct
    {
        enum EAssemblerCamPoint CamPoint;
        struct FGunCameraParamsRow ReturnValue;
    } Parms{};
    Parms.CamPoint = (enum EAssemblerCamPoint)CamPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AAssemblerCameraCtrl::SetCameraParamLerp(struct FGunCameraParamsRow CameraParamsRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "SetCameraParamLerp");
    struct
    {
        struct FGunCameraParamsRow CameraParamsRow;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CameraParamsRow = (struct FGunCameraParamsRow)CameraParamsRow;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAssemblerCameraCtrl::SetCameraParam(EAssemblerCamPoint CamPoint, struct FGunCameraParamsRow Row)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "SetCameraParam");
    struct
    {
        enum EAssemblerCamPoint CamPoint;
        struct FGunCameraParamsRow Row;
    } Parms{};
    Parms.CamPoint = (enum EAssemblerCamPoint)CamPoint;
    Parms.Row = (struct FGunCameraParamsRow)Row;
    this->ProcessEvent(Func, &Parms);
}

void AAssemblerCameraCtrl::ResetOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "ResetOffset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssemblerCameraCtrl::ResetCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "ResetCamera");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssemblerCameraCtrl::ProcessEnvionmentOnOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "ProcessEnvionmentOnOpen");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssemblerCameraCtrl::ProcessEnvionmentOnClose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "ProcessEnvionmentOnClose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssemblerCameraCtrl::PlayBracketShakeAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "PlayBracketShakeAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssemblerCameraCtrl::PlayBracketDropAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "PlayBracketDropAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AAssemblerCameraCtrl::IsAutoSizeCameraPoint(EAssemblerCamPoint CamPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "IsAutoSizeCameraPoint");
    struct
    {
        enum EAssemblerCamPoint CamPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CamPoint = (enum EAssemblerCamPoint)CamPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AGPPlayerCameraManager* AAssemblerCameraCtrl::GetGPPlayerCameraManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "GetGPPlayerCameraManager");
    struct
    {
        struct AGPPlayerCameraManager* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EAssemblerCamPoint AAssemblerCameraCtrl::GetFocusCameraPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "GetFocusCameraPoint");
    struct
    {
        enum EAssemblerCamPoint ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAssemblerCameraCtrl::CheckCameraViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssemblerCameraCtrl", "CheckCameraViewTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- AAssembleWeaponActor::* ----
void AAssembleWeaponActor::UpdateFoldState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "UpdateFoldState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::UpdateFixWorldTransformLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "UpdateFixWorldTransformLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetWorldTransformLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetWorldTransformLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetWeaponPartOffsetEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetWeaponPartOffsetEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetVisibility(uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetVisibility");
    struct
    {
        uint8_t bVisible;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetUseInRTCapture(uint8_t InbUseInRTCapture, uint8_t InbWhiteIcon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetUseInRTCapture");
    struct
    {
        uint8_t InbUseInRTCapture;
        uint8_t InbWhiteIcon;
    } Parms{};
    Parms.InbUseInRTCapture = (uint8_t)InbUseInRTCapture;
    Parms.InbWhiteIcon = (uint8_t)InbWhiteIcon;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetupSkelatalMeshComponentTree(int32_t PartNodeIndex, int32_t ParentNodeIndex, struct FName SocketName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetupSkelatalMeshComponentTree");
    struct
    {
        int32_t PartNodeIndex;
        int32_t ParentNodeIndex;
        struct FName SocketName;
    } Parms{};
    Parms.PartNodeIndex = (int32_t)PartNodeIndex;
    Parms.ParentNodeIndex = (int32_t)ParentNodeIndex;
    Parms.SocketName = (struct FName)SocketName;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetSkeletalOutLine(int16_t PartIndex, int32_t DepthValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetSkeletalOutLine");
    struct
    {
        int16_t PartIndex;
        int32_t DepthValue;
    } Parms{};
    Parms.PartIndex = (int16_t)PartIndex;
    Parms.DepthValue = (int32_t)DepthValue;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetPreviewDynamicEffect(uint8_t InPreviewDynamicEffect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetPreviewDynamicEffect");
    struct
    {
        uint8_t InPreviewDynamicEffect;
    } Parms{};
    Parms.InPreviewDynamicEffect = (uint8_t)InPreviewDynamicEffect;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetForceLOD(int32_t LOD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetForceLOD");
    struct
    {
        int32_t LOD;
    } Parms{};
    Parms.LOD = (int32_t)LOD;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::SetAllSkeletalOutLine(int32_t DepthValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "SetAllSkeletalOutLine");
    struct
    {
        int32_t DepthValue;
    } Parms{};
    Parms.DepthValue = (int32_t)DepthValue;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::RemovePart(int16_t ParentPartNodeIndex, int16_t SlotIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "RemovePart");
    struct
    {
        int16_t ParentPartNodeIndex;
        int16_t SlotIndex;
    } Parms{};
    Parms.ParentPartNodeIndex = (int16_t)ParentPartNodeIndex;
    Parms.SlotIndex = (int16_t)SlotIndex;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::RemoveNewPart(uint64_t ParentGuid, uint32_t SocketId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "RemoveNewPart");
    struct
    {
        uint64_t ParentGuid;
        uint32_t SocketId;
    } Parms{};
    Parms.ParentGuid = (uint64_t)ParentGuid;
    Parms.SocketId = (uint32_t)SocketId;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::PreviewBoundOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "PreviewBoundOffset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::PrepareSnapshotNodeTreeFromDesc(struct UModularWeaponDesc* InDesc, uint8_t bRefreshSocketNodeFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "PrepareSnapshotNodeTreeFromDesc");
    struct
    {
        struct UModularWeaponDesc* InDesc;
        uint8_t bRefreshSocketNodeFlag;
    } Parms{};
    Parms.InDesc = (struct UModularWeaponDesc*)InDesc;
    Parms.bRefreshSocketNodeFlag = (uint8_t)bRefreshSocketNodeFlag;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::PrepareNodeTreeFromDesc(struct UModularWeaponDesc* InDesc, uint8_t bRefreshSocketNodeFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "PrepareNodeTreeFromDesc");
    struct
    {
        struct UModularWeaponDesc* InDesc;
        uint8_t bRefreshSocketNodeFlag;
    } Parms{};
    Parms.InDesc = (struct UModularWeaponDesc*)InDesc;
    Parms.bRefreshSocketNodeFlag = (uint8_t)bRefreshSocketNodeFlag;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::PostBuildCompleteTickOneFrame(float dt, const struct FTimerHandle& TimerHandle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "PostBuildCompleteTickOneFrame");
    struct
    {
        float dt;
        struct FTimerHandle TimerHandle;
    } Parms{};
    Parms.dt = (float)dt;
    Parms.TimerHandle = (struct FTimerHandle)TimerHandle;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::PlayPendantAnimation(const struct FSoftObjectPath& PendantAnimSequencePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "PlayPendantAnimation");
    struct
    {
        struct FSoftObjectPath PendantAnimSequencePath;
    } Parms{};
    Parms.PendantAnimSequencePath = (struct FSoftObjectPath)PendantAnimSequencePath;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::PlayPartDefaultAnimByIndex(int16_t PartIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "PlayPartDefaultAnimByIndex");
    struct
    {
        int16_t PartIndex;
    } Parms{};
    Parms.PartIndex = (int16_t)PartIndex;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::OnSkeletalMeshSetup(struct UModularWeaponDynamicSkeletalMeshComponent* DynamicMeshComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "OnSkeletalMeshSetup");
    struct
    {
        struct UModularWeaponDynamicSkeletalMeshComponent* DynamicMeshComponent;
    } Parms{};
    Parms.DynamicMeshComponent = (struct UModularWeaponDynamicSkeletalMeshComponent*)DynamicMeshComponent;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::OnPlayPendantAnimationEnd(struct UAnimMontage* Montage, uint8_t bInterrupted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "OnPlayPendantAnimationEnd");
    struct
    {
        struct UAnimMontage* Montage;
        uint8_t bInterrupted;
    } Parms{};
    Parms.Montage = (struct UAnimMontage*)Montage;
    Parms.bInterrupted = (uint8_t)bInterrupted;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::OnLoadAnimInstance(const struct FSoftObjectPath& SoftPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "OnLoadAnimInstance");
    struct
    {
        struct FSoftObjectPath SoftPath;
    } Parms{};
    Parms.SoftPath = (struct FSoftObjectPath)SoftPath;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::OnDescAddPartCallback(const struct FGPModularWeaponPartNode& Node)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "OnDescAddPartCallback");
    struct
    {
        struct FGPModularWeaponPartNode Node;
    } Parms{};
    Parms.Node = (struct FGPModularWeaponPartNode)Node;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::OnBuildMergeMeshComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "OnBuildMergeMeshComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct USkeletalMeshComponent* AAssembleWeaponActor::NewSkeletalCom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "NewSkeletalCom");
    struct
    {
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AAssembleWeaponActor::IsMerged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "IsMerged");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AAssembleWeaponActor::IsFullTextureStreamIn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "IsFullTextureStreamIn");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AAssembleWeaponActor::HasCacheSkeletalMesh(struct FSoftObjectPath SoftObjectPath, struct USkeletalMesh*& OutMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "HasCacheSkeletalMesh");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
        struct USkeletalMesh* OutMesh;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    this->ProcessEvent(Func, &Parms);
    OutMesh = Parms.OutMesh;
    return Parms.ReturnValue;
}

struct FVector AAssembleWeaponActor::GetSocketOffset(int16_t ParentPartIndex, int16_t SocketIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetSocketOffset");
    struct
    {
        int16_t ParentPartIndex;
        int16_t SocketIndex;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ParentPartIndex = (int16_t)ParentPartIndex;
    Parms.SocketIndex = (int16_t)SocketIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D AAssembleWeaponActor::GetSocketLocationOnViewportBySocketGUID(uint64_t SocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetSocketLocationOnViewportBySocketGUID");
    struct
    {
        uint64_t SocketGUID;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.SocketGUID = (uint64_t)SocketGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D AAssembleWeaponActor::GetSocketLocationOnViewport(int16_t PartIndex, int16_t SocketIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetSocketLocationOnViewport");
    struct
    {
        int16_t PartIndex;
        int16_t SocketIndex;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.PartIndex = (int16_t)PartIndex;
    Parms.SocketIndex = (int16_t)SocketIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAssembleWeaponActor::GetSocketLocationBySocketName(struct FName SocketName, uint8_t bScreenPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetSocketLocationBySocketName");
    struct
    {
        struct FName SocketName;
        uint8_t bScreenPos;
        struct FVector ReturnValue;
    } Parms{};
    Parms.SocketName = (struct FName)SocketName;
    Parms.bScreenPos = (uint8_t)bScreenPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAssembleWeaponActor::GetSocketLocationBySocketGUID(uint64_t SocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetSocketLocationBySocketGUID");
    struct
    {
        uint64_t SocketGUID;
        struct FVector ReturnValue;
    } Parms{};
    Parms.SocketGUID = (uint64_t)SocketGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAssembleWeaponActor::GetSocketLocationByRelative(int16_t PartIndex, int16_t SocketIndex, ERelativeTransformSpace RelativeTransformSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetSocketLocationByRelative");
    struct
    {
        int16_t PartIndex;
        int16_t SocketIndex;
        enum ERelativeTransformSpace RelativeTransformSpace;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PartIndex = (int16_t)PartIndex;
    Parms.SocketIndex = (int16_t)SocketIndex;
    Parms.RelativeTransformSpace = (enum ERelativeTransformSpace)RelativeTransformSpace;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAssembleWeaponActor::GetSocketLocation(int16_t PartIndex, int16_t SocketIndex, uint8_t bScreenPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetSocketLocation");
    struct
    {
        int16_t PartIndex;
        int16_t SocketIndex;
        uint8_t bScreenPos;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PartIndex = (int16_t)PartIndex;
    Parms.SocketIndex = (int16_t)SocketIndex;
    Parms.bScreenPos = (uint8_t)bScreenPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAssembleWeaponActor::GetPartOffset(int16_t PartIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetPartOffset");
    struct
    {
        int16_t PartIndex;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PartIndex = (int16_t)PartIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D AAssembleWeaponActor::GetPartCenterLocationOnViewport(int16_t PartIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetPartCenterLocationOnViewport");
    struct
    {
        int16_t PartIndex;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.PartIndex = (int16_t)PartIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAssembleWeaponActor::GetPartCenterLocation(int16_t PartIndex, uint8_t bScreenPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetPartCenterLocation");
    struct
    {
        int16_t PartIndex;
        uint8_t bScreenPos;
        struct FVector ReturnValue;
    } Parms{};
    Parms.PartIndex = (int16_t)PartIndex;
    Parms.bScreenPos = (uint8_t)bScreenPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct USkeletalMeshComponent* AAssembleWeaponActor::GetOrNewSkeletalCom(int16_t Index, uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetOrNewSkeletalCom");
    struct
    {
        int16_t Index;
        uint64_t ItemID;
        struct USkeletalMeshComponent* ReturnValue;
    } Parms{};
    Parms.Index = (int16_t)Index;
    Parms.ItemID = (uint64_t)ItemID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t AAssembleWeaponActor::GetFixWorldTransformLocationDirty()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetFixWorldTransformLocationDirty");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AAssembleWeaponActor::GetBoundsCenterOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "GetBoundsCenterOffset");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAssembleWeaponActor::FullTextureStreamIn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "FullTextureStreamIn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::DrawDebugBounds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "DrawDebugBounds");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::CreateWeaponFromRow(const struct FGunPresetRow& GunRow, uint8_t isAsync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CreateWeaponFromRow");
    struct
    {
        struct FGunPresetRow GunRow;
        uint8_t isAsync;
    } Parms{};
    Parms.GunRow = (struct FGunPresetRow)GunRow;
    Parms.isAsync = (uint8_t)isAsync;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::CreateWeaponFromNodesV2(struct TArray<struct FGPModularWeaponPartNode>& Nodes, struct FWeaponSkinInfo SkinInfo, uint8_t bIsBipodDeploy, uint8_t IsFolding, uint8_t isAsync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CreateWeaponFromNodesV2");
    struct
    {
        struct TArray<struct FGPModularWeaponPartNode> Nodes;
        struct FWeaponSkinInfo SkinInfo;
        uint8_t bIsBipodDeploy;
        uint8_t IsFolding;
        uint8_t isAsync;
    } Parms{};
    Parms.SkinInfo = (struct FWeaponSkinInfo)SkinInfo;
    Parms.bIsBipodDeploy = (uint8_t)bIsBipodDeploy;
    Parms.IsFolding = (uint8_t)IsFolding;
    Parms.isAsync = (uint8_t)isAsync;
    this->ProcessEvent(Func, &Parms);
    Nodes = Parms.Nodes;
}

void AAssembleWeaponActor::CreateWeaponFromNodes(struct TArray<struct FGPModularWeaponPartNode>& Nodes, struct FWeaponSkinInfo SkinInfo, uint8_t isAsync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CreateWeaponFromNodes");
    struct
    {
        struct TArray<struct FGPModularWeaponPartNode> Nodes;
        struct FWeaponSkinInfo SkinInfo;
        uint8_t isAsync;
    } Parms{};
    Parms.SkinInfo = (struct FWeaponSkinInfo)SkinInfo;
    Parms.isAsync = (uint8_t)isAsync;
    this->ProcessEvent(Func, &Parms);
    Nodes = Parms.Nodes;
}

void AAssembleWeaponActor::CreateWeaponFromDescId(uint64_t DescId, uint8_t isAsync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CreateWeaponFromDescId");
    struct
    {
        uint64_t DescId;
        uint8_t isAsync;
    } Parms{};
    Parms.DescId = (uint64_t)DescId;
    Parms.isAsync = (uint8_t)isAsync;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::CreateWeaponFromDesc(struct UModularWeaponDesc* Desc, uint8_t isAsync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CreateWeaponFromDesc");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint8_t isAsync;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.isAsync = (uint8_t)isAsync;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::CreateRootPart(const struct FPartsDataRow& PartDataRow, uint64_t Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CreateRootPart");
    struct
    {
        struct FPartsDataRow PartDataRow;
        uint64_t Guid;
    } Parms{};
    Parms.PartDataRow = (struct FPartsDataRow)PartDataRow;
    Parms.Guid = (uint64_t)Guid;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::CreatePreviewGunOnScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CreatePreviewGunOnScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UModularWeaponDynamicSkeletalMeshComponent* AAssembleWeaponActor::CreateDynamicSkeletalMeshComponent(struct USkeletalMeshComponent* ParentSkeletalMeshComponent, struct FName AttachName, uint64_t ItemGid, uint64_t ItemID, struct USkeletalMesh* SkeletalMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CreateDynamicSkeletalMeshComponent");
    struct
    {
        struct USkeletalMeshComponent* ParentSkeletalMeshComponent;
        struct FName AttachName;
        uint64_t ItemGid;
        uint64_t ItemID;
        struct USkeletalMesh* SkeletalMesh;
        struct UModularWeaponDynamicSkeletalMeshComponent* ReturnValue;
    } Parms{};
    Parms.ParentSkeletalMeshComponent = (struct USkeletalMeshComponent*)ParentSkeletalMeshComponent;
    Parms.AttachName = (struct FName)AttachName;
    Parms.ItemGid = (uint64_t)ItemGid;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.SkeletalMesh = (struct USkeletalMesh*)SkeletalMesh;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AAssembleWeaponActor::CopyChild(int16_t SrcPartIndex, int16_t DesPartIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CopyChild");
    struct
    {
        int16_t SrcPartIndex;
        int16_t DesPartIndex;
    } Parms{};
    Parms.SrcPartIndex = (int16_t)SrcPartIndex;
    Parms.DesPartIndex = (int16_t)DesPartIndex;
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::ClearSnapshotNodeTree()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "ClearSnapshotNodeTree");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::ClearSkinLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "ClearSkinLoading");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::ClearDebugBounds()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "ClearDebugBounds");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::CancelTexturePendingMipChangeRequest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CancelTexturePendingMipChangeRequest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AAssembleWeaponActor::CacheSkeletalMeshRef(struct FSoftObjectPath SoftObjectPath, struct USkeletalMesh* Mesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "CacheSkeletalMeshRef");
    struct
    {
        struct FSoftObjectPath SoftObjectPath;
        struct USkeletalMesh* Mesh;
    } Parms{};
    Parms.SoftObjectPath = (struct FSoftObjectPath)SoftObjectPath;
    Parms.Mesh = (struct USkeletalMesh*)Mesh;
    this->ProcessEvent(Func, &Parms);
}

int16_t AAssembleWeaponActor::AddNewPart(uint64_t ItemID, struct FItemInfoContext ItemInfo, int16_t ParentNodeIndex, uint32_t SocketId, uint64_t Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponActor", "AddNewPart");
    struct
    {
        uint64_t ItemID;
        struct FItemInfoContext ItemInfo;
        int16_t ParentNodeIndex;
        uint32_t SocketId;
        uint64_t Guid;
        int16_t ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ItemInfo = (struct FItemInfoContext)ItemInfo;
    Parms.ParentNodeIndex = (int16_t)ParentNodeIndex;
    Parms.SocketId = (uint32_t)SocketId;
    Parms.Guid = (uint64_t)Guid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAssembleWeaponNodeTree::* ----
void UAssembleWeaponNodeTree::SetSocketFlag(struct FGPAssemblePartNode& Node, uint8_t bIsSimulateParentNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "SetSocketFlag");
    struct
    {
        struct FGPAssemblePartNode Node;
        uint8_t bIsSimulateParentNode;
    } Parms{};
    Parms.bIsSimulateParentNode = (uint8_t)bIsSimulateParentNode;
    this->ProcessEvent(Func, &Parms);
    Node = Parms.Node;
}

void UAssembleWeaponNodeTree::ReLinkSocketGUIDs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "ReLinkSocketGUIDs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UAssembleWeaponNodeTree::RefreshSocketNodeFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "RefreshSocketNodeFlag");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FGPAssemblePartSocket UAssembleWeaponNodeTree::GetSocketFromSocketGUID(uint64_t Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "GetSocketFromSocketGUID");
    struct
    {
        uint64_t Guid;
        struct FGPAssemblePartSocket ReturnValue;
    } Parms{};
    Parms.Guid = (uint64_t)Guid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UAssembleWeaponNodeTree::GetRootItemID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "GetRootItemID");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAssemblePartNode UAssembleWeaponNodeTree::GetNodeBySocketGUID(uint64_t SocketGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "GetNodeBySocketGUID");
    struct
    {
        uint64_t SocketGUID;
        struct FGPAssemblePartNode ReturnValue;
    } Parms{};
    Parms.SocketGUID = (uint64_t)SocketGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAssemblePartNode UAssembleWeaponNodeTree::GetNodeByIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "GetNodeByIndex");
    struct
    {
        int32_t Index;
        struct FGPAssemblePartNode ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAssemblePartNode UAssembleWeaponNodeTree::GetNodeByGUID(uint64_t Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "GetNodeByGUID");
    struct
    {
        uint64_t Guid;
        struct FGPAssemblePartNode ReturnValue;
    } Parms{};
    Parms.Guid = (uint64_t)Guid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAssemblePartNode UAssembleWeaponNodeTree::GetNode(EAdapterItemType PartType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "GetNode");
    struct
    {
        enum EAdapterItemType PartType;
        struct FGPAssemblePartNode ReturnValue;
    } Parms{};
    Parms.PartType = (enum EAdapterItemType)PartType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGPAssemblePartNode UAssembleWeaponNodeTree::GetAttachmentNode(EWeaponExtraModelType PartType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponNodeTree", "GetAttachmentNode");
    struct
    {
        enum EWeaponExtraModelType PartType;
        struct FGPAssemblePartNode ReturnValue;
    } Parms{};
    Parms.PartType = (enum EWeaponExtraModelType)PartType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UAssembleWeaponDataLibrary::* ----
struct FFastEquipResult UAssembleWeaponDataLibrary::RemoveNodeFromeDescByIndex(struct UModularWeaponDesc* Desc, int32_t PartNodeIndex, uint8_t bOnlyForCheck, uint8_t bFillVirtualParts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "RemoveNodeFromeDescByIndex");
    struct
    {
        struct UModularWeaponDesc* Desc;
        int32_t PartNodeIndex;
        uint8_t bOnlyForCheck;
        uint8_t bFillVirtualParts;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.PartNodeIndex = (int32_t)PartNodeIndex;
    Parms.bOnlyForCheck = (uint8_t)bOnlyForCheck;
    Parms.bFillVirtualParts = (uint8_t)bFillVirtualParts;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAssembleWeaponDataLibrary::RefreshVirutalSocketNodeFlagFromWeaponDesc(struct UModularWeaponDesc* Desc, uint64_t PartNodeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "RefreshVirutalSocketNodeFlagFromWeaponDesc");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t PartNodeIndex;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.PartNodeIndex = (uint64_t)PartNodeIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAssembleWeaponDataLibrary::RefreshSocketNodeFlagFromWeaponDesc(struct UModularWeaponDesc* Desc, uint64_t PartNodeIndex, uint8_t bIsSimulateParentNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "RefreshSocketNodeFlagFromWeaponDesc");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t PartNodeIndex;
        uint8_t bIsSimulateParentNode;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.PartNodeIndex = (uint64_t)PartNodeIndex;
    Parms.bIsSimulateParentNode = (uint8_t)bIsSimulateParentNode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UAssembleWeaponDataLibrary::IsVirutalPartItem(uint64_t PartItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsVirutalPartItem");
    struct
    {
        uint64_t PartItemId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PartItemId = (uint64_t)PartItemId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsValidWeapon(struct UModularWeaponDesc* Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsValidWeapon");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsUseFoldedIcon(uint64_t WeaponItemId, EAttachPosition AttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsUseFoldedIcon");
    struct
    {
        uint64_t WeaponItemId;
        enum EAttachPosition AttachPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsHiddenInGunsmith(uint64_t PartItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsHiddenInGunsmith");
    struct
    {
        uint64_t PartItemId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PartItemId = (uint64_t)PartItemId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsForbidPartByWeaponID(uint64_t WeaponItemId, uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsForbidPartByWeaponID");
    struct
    {
        uint64_t WeaponItemId;
        uint64_t ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsForbidInstallPartByWeaponID(uint64_t WeaponItemId, uint64_t ItemID, EAttachPosition AttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsForbidInstallPartByWeaponID");
    struct
    {
        uint64_t WeaponItemId;
        uint64_t ItemID;
        enum EAttachPosition AttachPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.WeaponItemId = (uint64_t)WeaponItemId;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsForbidInstallPart(struct UModularWeaponDesc* Desc, uint64_t ItemID, EAttachPosition AttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsForbidInstallPart");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        enum EAttachPosition AttachPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsCanInstallOnWeaponOnlyPartsRules(struct UModularWeaponDesc* Desc, uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsCanInstallOnWeaponOnlyPartsRules");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsCanInstallOnWeapon(struct UModularWeaponDesc* Desc, uint64_t ItemID, EAttachPosition AttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsCanInstallOnWeapon");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        enum EAttachPosition AttachPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsCanInstallBySocketGUID(struct UModularWeaponDesc* Desc, uint64_t SocketGUID, uint64_t ItemID, EAttachPosition SlotType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsCanInstallBySocketGUID");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t SocketGUID;
        uint64_t ItemID;
        enum EAttachPosition SlotType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.SocketGUID = (uint64_t)SocketGUID;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.SlotType = (enum EAttachPosition)SlotType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::IsBasicSocket(uint64_t RecId, int32_t SocketId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "IsBasicSocket");
    struct
    {
        uint64_t RecId;
        int32_t SocketId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.RecId = (uint64_t)RecId;
    Parms.SocketId = (int32_t)SocketId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::HasVirtualPart(uint64_t RecId, uint32_t ParentSocketId, uint64_t& OutItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "HasVirtualPart");
    struct
    {
        uint64_t RecId;
        uint32_t ParentSocketId;
        uint64_t OutItemId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.RecId = (uint64_t)RecId;
    Parms.ParentSocketId = (uint32_t)ParentSocketId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutItemId = Parms.OutItemId;
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::HasNotMatchSlotPart(const struct TArray<uint64_t>& PartItemIds, EAttachPosition AttachPosition, struct TArray<uint64_t>& NotMatchPartItemIds, uint8_t bIsSOL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "HasNotMatchSlotPart");
    struct
    {
        struct TArray<uint64_t> PartItemIds;
        enum EAttachPosition AttachPosition;
        struct TArray<uint64_t> NotMatchPartItemIds;
        uint8_t bIsSOL;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PartItemIds = (struct TArray<uint64_t>)PartItemIds;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    Parms.bIsSOL = (uint8_t)bIsSOL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    NotMatchPartItemIds = Parms.NotMatchPartItemIds;
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::HasForbidInstallPart(struct UModularWeaponDesc* Desc, struct TArray<uint64_t>& ForbidItemIDs, EAttachPosition AttachPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "HasForbidInstallPart");
    struct
    {
        struct UModularWeaponDesc* Desc;
        struct TArray<uint64_t> ForbidItemIDs;
        enum EAttachPosition AttachPosition;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.AttachPosition = (enum EAttachPosition)AttachPosition;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ForbidItemIDs = Parms.ForbidItemIDs;
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UAssembleWeaponDataLibrary::GetWeaponDescFromWeaponID(uint64_t InWeaponId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetWeaponDescFromWeaponID");
    struct
    {
        uint64_t InWeaponId;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.InWeaponId = (uint64_t)InWeaponId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UAssembleWeaponDataLibrary::GetWeaponDescFromPresetId(uint64_t PresetId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetWeaponDescFromPresetId");
    struct
    {
        uint64_t PresetId;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.PresetId = (uint64_t)PresetId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UAssembleWeaponDataLibrary::GetWeaponDescFromPreset(const struct FGunPresetRow& GunRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetWeaponDescFromPreset");
    struct
    {
        struct FGunPresetRow GunRow;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.GunRow = (struct FGunPresetRow)GunRow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UAssembleWeaponDataLibrary::GetWeaponDescFromModularInfo(const struct FModularWeaponInfo& ModularWeaponInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetWeaponDescFromModularInfo");
    struct
    {
        struct FModularWeaponInfo ModularWeaponInfo;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.ModularWeaponInfo = (struct FModularWeaponInfo)ModularWeaponInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UAssembleWeaponDataLibrary::GetWeaponDescFromModularContext(const struct FModularContext& ModularContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetWeaponDescFromModularContext");
    struct
    {
        struct FModularContext ModularContext;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.ModularContext = (struct FModularContext)ModularContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UAssembleWeaponDataLibrary::GetWeaponDescFromAdapterID(uint64_t InAdapaterItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetWeaponDescFromAdapterID");
    struct
    {
        uint64_t InAdapaterItemId;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.InAdapaterItemId = (uint64_t)InAdapaterItemId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UAssembleWeaponDataLibrary::GetWeaponDescAndPartIndexsFromPreset(const struct FGunPresetRow& GunRow, struct TArray<int32_t>& PartIndexs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetWeaponDescAndPartIndexsFromPreset");
    struct
    {
        struct FGunPresetRow GunRow;
        struct TArray<int32_t> PartIndexs;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.GunRow = (struct FGunPresetRow)GunRow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PartIndexs = Parms.PartIndexs;
    return Parms.ReturnValue;
}

void UAssembleWeaponDataLibrary::GetReceiverIDValidInstallList(uint64_t ReceiverID, struct TArray<uint64_t>& OutValidInstallItemIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetReceiverIDValidInstallList");
    struct
    {
        uint64_t ReceiverID;
        struct TArray<uint64_t> OutValidInstallItemIds;
    } Parms{};
    Parms.ReceiverID = (uint64_t)ReceiverID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValidInstallItemIds = Parms.OutValidInstallItemIds;
}

void UAssembleWeaponDataLibrary::GetPossiblePartInstallList(uint64_t ReceiverID, struct TArray<uint64_t>& OutValidInstallItemIds, uint8_t bIncludeExtraModel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetPossiblePartInstallList");
    struct
    {
        uint64_t ReceiverID;
        struct TArray<uint64_t> OutValidInstallItemIds;
        uint8_t bIncludeExtraModel;
    } Parms{};
    Parms.ReceiverID = (uint64_t)ReceiverID;
    Parms.bIncludeExtraModel = (uint8_t)bIncludeExtraModel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValidInstallItemIds = Parms.OutValidInstallItemIds;
}

void UAssembleWeaponDataLibrary::GetPartSocketValidInstallList(uint64_t PartItemId, uint32_t SocketId, struct TArray<uint64_t>& OutValidInstallItemIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetPartSocketValidInstallList");
    struct
    {
        uint64_t PartItemId;
        uint32_t SocketId;
        struct TArray<uint64_t> OutValidInstallItemIds;
    } Parms{};
    Parms.PartItemId = (uint64_t)PartItemId;
    Parms.SocketId = (uint32_t)SocketId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutValidInstallItemIds = Parms.OutValidInstallItemIds;
}

struct TArray<uint64_t> UAssembleWeaponDataLibrary::GetPartInstallReceiverList(uint64_t PartItemId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetPartInstallReceiverList");
    struct
    {
        uint64_t PartItemId;
        struct TArray<uint64_t> ReturnValue;
    } Parms{};
    Parms.PartItemId = (uint64_t)PartItemId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::GetItemIDAndModelID4ShareCode(struct FString ShareCodeString, uint64_t& ItemID, int32_t& ModelID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetItemIDAndModelID4ShareCode");
    struct
    {
        struct FString ShareCodeString;
        uint64_t ItemID;
        int32_t ModelID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ShareCodeString = (struct FString)ShareCodeString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ItemID = Parms.ItemID;
    ModelID = Parms.ModelID;
    return Parms.ReturnValue;
}

struct UAssembleWeaponNodeTree* UAssembleWeaponDataLibrary::GetAssemblePartNodesFromeDesc(struct UModularWeaponDesc* Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "GetAssemblePartNodesFromeDesc");
    struct
    {
        struct UModularWeaponDesc* Desc;
        struct UAssembleWeaponNodeTree* ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint32_t> UAssembleWeaponDataLibrary::FindValidSocketIdList(struct UModularWeaponDesc* Desc, uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "FindValidSocketIdList");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        struct TArray<uint32_t> ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAssembleWeaponDataLibrary::CheckSocketCanAddItem(struct FGPAssemblePartSocket Socket, uint64_t NodeItemId, uint64_t ItemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CheckSocketCanAddItem");
    struct
    {
        struct FGPAssemblePartSocket Socket;
        uint64_t NodeItemId;
        uint64_t ItemID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Socket = (struct FGPAssemblePartSocket)Socket;
    Parms.NodeItemId = (uint64_t)NodeItemId;
    Parms.ItemID = (uint64_t)ItemID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFastEquipResult UAssembleWeaponDataLibrary::CheckFastEquip(struct UModularWeaponDesc* Desc, uint64_t ItemID, struct FItemInfoContext ItemInfo, uint64_t Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CheckFastEquip");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        struct FItemInfoContext ItemInfo;
        uint64_t Guid;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ItemInfo = (struct FItemInfoContext)ItemInfo;
    Parms.Guid = (uint64_t)Guid;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAssembleWeaponDataLibrary::CheckAndFillVirtualPartV2(struct UModularWeaponDesc* Desc, struct FFastEquipResult& InOutEquipResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CheckAndFillVirtualPartV2");
    struct
    {
        struct UModularWeaponDesc* Desc;
        struct FFastEquipResult InOutEquipResult;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutEquipResult = Parms.InOutEquipResult;
}

void UAssembleWeaponDataLibrary::CheckAndFillVirtualPart(struct UModularWeaponDesc* Desc, struct FFastEquipResult& InOutEquipResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CheckAndFillVirtualPart");
    struct
    {
        struct UModularWeaponDesc* Desc;
        struct FFastEquipResult InOutEquipResult;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutEquipResult = Parms.InOutEquipResult;
}

void UAssembleWeaponDataLibrary::CheckAndFillSkinAttachModels(struct UModularWeaponDesc* Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CheckAndFillSkinAttachModels");
    struct
    {
        struct UModularWeaponDesc* Desc;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAssembleWeaponDataLibrary::CheckAndFillExtraModels(struct UModularWeaponDesc* Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CheckAndFillExtraModels");
    struct
    {
        struct UModularWeaponDesc* Desc;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FFastEquipResult UAssembleWeaponDataLibrary::ChcekOccupySocketFromSocketGUID(struct UModularWeaponDesc* Desc, const struct FGPModularWeaponPartNode& ParentNode, uint64_t ItemID, uint32_t SocketId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "ChcekOccupySocketFromSocketGUID");
    struct
    {
        struct UModularWeaponDesc* Desc;
        struct FGPModularWeaponPartNode ParentNode;
        uint64_t ItemID;
        uint32_t SocketId;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ParentNode = (struct FGPModularWeaponPartNode)ParentNode;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.SocketId = (uint32_t)SocketId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFastEquipResult UAssembleWeaponDataLibrary::ChcekOccupySocket(struct UModularWeaponDesc* Desc, int32_t PartIndex, uint64_t ItemID, uint32_t SocketId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "ChcekOccupySocket");
    struct
    {
        struct UModularWeaponDesc* Desc;
        int32_t PartIndex;
        uint64_t ItemID;
        uint32_t SocketId;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.PartIndex = (int32_t)PartIndex;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.SocketId = (uint32_t)SocketId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAssembleWeaponDataLibrary::CalculateWeaponWeightByDescInfo(const struct FGPWeaponDescInfo& GunDescInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CalculateWeaponWeightByDescInfo");
    struct
    {
        struct FGPWeaponDescInfo GunDescInfo;
        float ReturnValue;
    } Parms{};
    Parms.GunDescInfo = (struct FGPWeaponDescInfo)GunDescInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAssembleWeaponDataLibrary::CalculateWeaponWeight(struct UModularWeaponDesc* ModularWeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CalculateWeaponWeight");
    struct
    {
        struct UModularWeaponDesc* ModularWeaponDesc;
        float ReturnValue;
    } Parms{};
    Parms.ModularWeaponDesc = (struct UModularWeaponDesc*)ModularWeaponDesc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UAssembleWeaponDataLibrary::CalculateWeaponPrice(struct UModularWeaponDesc* ModularWeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "CalculateWeaponPrice");
    struct
    {
        struct UModularWeaponDesc* ModularWeaponDesc;
        float ReturnValue;
    } Parms{};
    Parms.ModularWeaponDesc = (struct UModularWeaponDesc*)ModularWeaponDesc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UAssembleWeaponDataLibrary::BaseRefreshSocketNodeFlagFromWeaponDesc(struct UModularWeaponDesc* Desc, uint64_t PartNodeIndex, uint8_t bIsSimulateParentNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "BaseRefreshSocketNodeFlagFromWeaponDesc");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t PartNodeIndex;
        uint8_t bIsSimulateParentNode;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.PartNodeIndex = (uint64_t)PartNodeIndex;
    Parms.bIsSimulateParentNode = (uint8_t)bIsSimulateParentNode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FFastEquipResult UAssembleWeaponDataLibrary::AutoRemoveNodeFromeDesc(struct UModularWeaponDesc* Desc, uint64_t ItemID, uint64_t Guid, uint8_t bOnlyForCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "AutoRemoveNodeFromeDesc");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        uint64_t Guid;
        uint8_t bOnlyForCheck;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.Guid = (uint64_t)Guid;
    Parms.bOnlyForCheck = (uint8_t)bOnlyForCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFastEquipResult UAssembleWeaponDataLibrary::AutoRemoveNodeFromDescWithSocketGUID(struct UModularWeaponDesc* Desc, uint64_t SocketGUID, uint8_t bOnlyForCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "AutoRemoveNodeFromDescWithSocketGUID");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t SocketGUID;
        uint8_t bOnlyForCheck;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.SocketGUID = (uint64_t)SocketGUID;
    Parms.bOnlyForCheck = (uint8_t)bOnlyForCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFastEquipResult UAssembleWeaponDataLibrary::AutoAddNodeToDesc(struct UModularWeaponDesc* Desc, uint64_t ItemID, struct FItemInfoContext ItemInfo, uint64_t Guid, uint8_t bOnlyForCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "AutoAddNodeToDesc");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        struct FItemInfoContext ItemInfo;
        uint64_t Guid;
        uint8_t bOnlyForCheck;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ItemInfo = (struct FItemInfoContext)ItemInfo;
    Parms.Guid = (uint64_t)Guid;
    Parms.bOnlyForCheck = (uint8_t)bOnlyForCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFastEquipResult UAssembleWeaponDataLibrary::AddNodeToDescFromSocketGUID(struct UModularWeaponDesc* Desc, uint64_t ItemID, uint64_t ItemGUID, struct FItemInfoContext ItemInfo, uint64_t SocketGUID, uint8_t bOnlyForCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "AddNodeToDescFromSocketGUID");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        uint64_t ItemGUID;
        struct FItemInfoContext ItemInfo;
        uint64_t SocketGUID;
        uint8_t bOnlyForCheck;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ItemGUID = (uint64_t)ItemGUID;
    Parms.ItemInfo = (struct FItemInfoContext)ItemInfo;
    Parms.SocketGUID = (uint64_t)SocketGUID;
    Parms.bOnlyForCheck = (uint8_t)bOnlyForCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFastEquipResult UAssembleWeaponDataLibrary::AddNodeToDescFromParentNode(struct UModularWeaponDesc* Desc, uint64_t ItemID, struct FItemInfoContext ItemInfo, uint64_t Guid, uint32_t SocketId, struct FGPModularWeaponPartNode ParentNode, uint8_t bOnlyForCheck, uint8_t bFillVirtualParts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "AddNodeToDescFromParentNode");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        struct FItemInfoContext ItemInfo;
        uint64_t Guid;
        uint32_t SocketId;
        struct FGPModularWeaponPartNode ParentNode;
        uint8_t bOnlyForCheck;
        uint8_t bFillVirtualParts;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ItemInfo = (struct FItemInfoContext)ItemInfo;
    Parms.Guid = (uint64_t)Guid;
    Parms.SocketId = (uint32_t)SocketId;
    Parms.ParentNode = (struct FGPModularWeaponPartNode)ParentNode;
    Parms.bOnlyForCheck = (uint8_t)bOnlyForCheck;
    Parms.bFillVirtualParts = (uint8_t)bFillVirtualParts;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFastEquipResult UAssembleWeaponDataLibrary::AddNodeToDesc(struct UModularWeaponDesc* Desc, uint64_t ItemID, struct FItemInfoContext ItemInfo, uint64_t Guid, uint64_t ParentGid, uint32_t SocketId, uint8_t bOnlyForCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssembleWeaponDataLibrary", "AddNodeToDesc");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint64_t ItemID;
        struct FItemInfoContext ItemInfo;
        uint64_t Guid;
        uint64_t ParentGid;
        uint32_t SocketId;
        uint8_t bOnlyForCheck;
        struct FFastEquipResult ReturnValue;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.ItemID = (uint64_t)ItemID;
    Parms.ItemInfo = (struct FItemInfoContext)ItemInfo;
    Parms.Guid = (uint64_t)Guid;
    Parms.ParentGid = (uint64_t)ParentGid;
    Parms.SocketId = (uint32_t)SocketId;
    Parms.bOnlyForCheck = (uint8_t)bOnlyForCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- AAssembleWeaponMgr::* ----
void AAssembleWeaponMgr::OnPreGarbageCollect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponMgr", "OnPreGarbageCollect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AAssembleWeaponActor* AAssembleWeaponMgr::GetEmptyWeaponForRTI(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponMgr", "GetEmptyWeaponForRTI");
    struct
    {
        struct UWorld* InWorld;
        struct AAssembleWeaponActor* ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAssembleWeaponActor* AAssembleWeaponMgr::GetEmptyWeapon(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AssembleWeaponMgr", "GetEmptyWeapon");
    struct
    {
        struct UWorld* InWorld;
        struct AAssembleWeaponActor* ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- ABracketActor::* ----
void ABracketActor::SetYaw(float Yaw)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BracketActor", "SetYaw");
    struct
    {
        float Yaw;
    } Parms{};
    Parms.Yaw = (float)Yaw;
    this->ProcessEvent(Func, &Parms);
}

void ABracketActor::PlayShakeAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BracketActor", "PlayShakeAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ABracketActor::PlayDropAnim()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BracketActor", "PlayDropAnim");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float ABracketActor::GetYaw()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BracketActor", "GetYaw");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ABracketActor::CreateAssmblerAndCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BracketActor", "CreateAssmblerAndCamera");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- ALightEnvToogle::* ----
void ALightEnvToogle::ToogleEnv(uint8_t bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LightEnvToogle", "ToogleEnv");
    struct
    {
        uint8_t bOpen;
    } Parms{};
    Parms.bOpen = (uint8_t)bOpen;
    this->ProcessEvent(Func, &Parms);
}

void ALightEnvToogle::SyncDisplayBoardLight(uint8_t bIsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LightEnvToogle", "SyncDisplayBoardLight");
    struct
    {
        uint8_t bIsOpen;
    } Parms{};
    Parms.bIsOpen = (uint8_t)bIsOpen;
    this->ProcessEvent(Func, &Parms);
}

void ALightEnvToogle::OpenEnv()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LightEnvToogle", "OpenEnv");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ALightEnvToogle::CloseEnv()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LightEnvToogle", "CloseEnv");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFMWeaponSkinUtil::* ----
float UDFMWeaponSkinUtil::TexasPokerPatternEnumToMaterialParameter(int32_t InPatternEnum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMWeaponSkinUtil", "TexasPokerPatternEnumToMaterialParameter");
    struct
    {
        int32_t InPatternEnum;
        float ReturnValue;
    } Parms{};
    Parms.InPatternEnum = (int32_t)InPatternEnum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMWeaponSkinUtil::TexasPokerPatternEnumToDebugString(int32_t InPatternEnum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMWeaponSkinUtil", "TexasPokerPatternEnumToDebugString");
    struct
    {
        int32_t InPatternEnum;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPatternEnum = (int32_t)InPatternEnum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMWeaponSkinUtil::TexasPokerNumberEnumToMaterialParameter(int32_t InNumberEnum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMWeaponSkinUtil", "TexasPokerNumberEnumToMaterialParameter");
    struct
    {
        int32_t InNumberEnum;
        float ReturnValue;
    } Parms{};
    Parms.InNumberEnum = (int32_t)InNumberEnum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMWeaponSkinUtil::TexasPokerNumberEnumToDebugString(int32_t InNumberEnum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMWeaponSkinUtil", "TexasPokerNumberEnumToDebugString");
    struct
    {
        int32_t InNumberEnum;
        struct FString ReturnValue;
    } Parms{};
    Parms.InNumberEnum = (int32_t)InNumberEnum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FWeaponSkin_TexasPoker_Card> UDFMWeaponSkinUtil::Generate_TexasPokerCards(int32_t TexasPokerRuleId, uint64_t RandomSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMWeaponSkinUtil", "Generate_TexasPokerCards");
    struct
    {
        int32_t TexasPokerRuleId;
        uint64_t RandomSeed;
        struct TArray<struct FWeaponSkin_TexasPoker_Card> ReturnValue;
    } Parms{};
    Parms.TexasPokerRuleId = (int32_t)TexasPokerRuleId;
    Parms.RandomSeed = (uint64_t)RandomSeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URTIActorData_HeroItem::* ----
void URTIActorData_HeroItem::OnLoadHeroItemComplete(const struct FSoftObjectPath& Path, struct FName HeroItemId, struct FName HeroItemFahionId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RTIActorData_HeroItem", "OnLoadHeroItemComplete");
    struct
    {
        struct FSoftObjectPath Path;
        struct FName HeroItemId;
        struct FName HeroItemFahionId;
    } Parms{};
    Parms.Path = (struct FSoftObjectPath)Path;
    Parms.HeroItemId = (struct FName)HeroItemId;
    Parms.HeroItemFahionId = (struct FName)HeroItemFahionId;
    this->ProcessEvent(Func, &Parms);
}

// ---- URTIActorData_Vehicle::* ----
void URTIActorData_Vehicle::OnLoadVehicleComplete(uint64_t ID, uint8_t bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RTIActorData_Vehicle", "OnLoadVehicleComplete");
    struct
    {
        uint64_t ID;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (uint64_t)ID;
    Parms.bSuccess = (uint8_t)bSuccess;
    this->ProcessEvent(Func, &Parms);
}

// ---- ARTICapture::* ----
void ARTICapture::HandleCaptureWeapon(struct URTIActorData* RTIActorData, struct FVector2D RTSize, const struct FRTIConfigRow& RTIConfigRow, struct UCaptureRTResult* CaptureRTResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RTICapture", "HandleCaptureWeapon");
    struct
    {
        struct URTIActorData* RTIActorData;
        struct FVector2D RTSize;
        struct FRTIConfigRow RTIConfigRow;
        struct UCaptureRTResult* CaptureRTResult;
    } Parms{};
    Parms.RTIActorData = (struct URTIActorData*)RTIActorData;
    Parms.RTSize = (struct FVector2D)RTSize;
    Parms.RTIConfigRow = (struct FRTIConfigRow)RTIConfigRow;
    Parms.CaptureRTResult = (struct UCaptureRTResult*)CaptureRTResult;
    this->ProcessEvent(Func, &Parms);
}

struct UCaptureRTResult* ARTICapture::CaptureWeapon(struct URTIActorData* RTIActorData, struct FVector2D RTSize, const struct FRTIParamData& InRTIParamData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RTICapture", "CaptureWeapon");
    struct
    {
        struct URTIActorData* RTIActorData;
        struct FVector2D RTSize;
        struct FRTIParamData InRTIParamData;
        struct UCaptureRTResult* ReturnValue;
    } Parms{};
    Parms.RTIActorData = (struct URTIActorData*)RTIActorData;
    Parms.RTSize = (struct FVector2D)RTSize;
    Parms.InRTIParamData = (struct FRTIParamData)InRTIParamData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URTIResourceManager::* ----
struct FSoftObjectPath URTIResourceManager::GetDefaultCommon_Transition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RTIResourceManager", "GetDefaultCommon_Transition");
    struct
    {
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URuntimeIconMaker::* ----
void URuntimeIconMaker::RequestStaticIcon(struct FSoftObjectPath IconPath, struct UImage* Image, struct FRTIParamData InRTIParamData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "RequestStaticIcon");
    struct
    {
        struct FSoftObjectPath IconPath;
        struct UImage* Image;
        struct FRTIParamData InRTIParamData;
    } Parms{};
    Parms.IconPath = (struct FSoftObjectPath)IconPath;
    Parms.Image = (struct UImage*)Image;
    Parms.InRTIParamData = (struct FRTIParamData)InRTIParamData;
    this->ProcessEvent(Func, &Parms);
}

void URuntimeIconMaker::RequestRuntimeIcon_Vehicle(struct UVehicleFrontendContext* VehicleFrontendContext, struct UDFMImage* DFMImage, struct FRTIParamData InRTIParamData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "RequestRuntimeIcon_Vehicle");
    struct
    {
        struct UVehicleFrontendContext* VehicleFrontendContext;
        struct UDFMImage* DFMImage;
        struct FRTIParamData InRTIParamData;
    } Parms{};
    Parms.VehicleFrontendContext = (struct UVehicleFrontendContext*)VehicleFrontendContext;
    Parms.DFMImage = (struct UDFMImage*)DFMImage;
    Parms.InRTIParamData = (struct FRTIParamData)InRTIParamData;
    this->ProcessEvent(Func, &Parms);
}

void URuntimeIconMaker::RequestRuntimeIcon_Item(uint64_t InItemID, struct UDFMImage* DFMImage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "RequestRuntimeIcon_Item");
    struct
    {
        uint64_t InItemID;
        struct UDFMImage* DFMImage;
    } Parms{};
    Parms.InItemID = (uint64_t)InItemID;
    Parms.DFMImage = (struct UDFMImage*)DFMImage;
    this->ProcessEvent(Func, &Parms);
}

void URuntimeIconMaker::RequestRuntimeIcon_HeroItem(struct FHeroItemFashionStruct HeroItemContext, struct UDFMImage* DFMImage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "RequestRuntimeIcon_HeroItem");
    struct
    {
        struct FHeroItemFashionStruct HeroItemContext;
        struct UDFMImage* DFMImage;
    } Parms{};
    Parms.HeroItemContext = (struct FHeroItemFashionStruct)HeroItemContext;
    Parms.DFMImage = (struct UDFMImage*)DFMImage;
    this->ProcessEvent(Func, &Parms);
}

void URuntimeIconMaker::RequestRuntimeIcon(struct UModularWeaponDesc* WeaponDesc, struct UImage* Image, struct FRTIParamData InRTIParamData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "RequestRuntimeIcon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
        struct UImage* Image;
        struct FRTIParamData InRTIParamData;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    Parms.Image = (struct UImage*)Image;
    Parms.InRTIParamData = (struct FRTIParamData)InRTIParamData;
    this->ProcessEvent(Func, &Parms);
}

void URuntimeIconMaker::PreLoadStaticIcon(struct FSoftObjectPath IconPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "PreLoadStaticIcon");
    struct
    {
        struct FSoftObjectPath IconPath;
    } Parms{};
    Parms.IconPath = (struct FSoftObjectPath)IconPath;
    this->ProcessEvent(Func, &Parms);
}

void URuntimeIconMaker::PreLoadRuntimeIcon(struct UModularWeaponDesc* WeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "PreLoadRuntimeIcon");
    struct
    {
        struct UModularWeaponDesc* WeaponDesc;
    } Parms{};
    Parms.WeaponDesc = (struct UModularWeaponDesc*)WeaponDesc;
    this->ProcessEvent(Func, &Parms);
}

uint8_t URuntimeIconMaker::IsEnableProcessIcon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "IsEnableProcessIcon");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void URuntimeIconMaker::EnableProcessIcon(uint8_t bInEnableProcessIcon)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "EnableProcessIcon");
    struct
    {
        uint8_t bInEnableProcessIcon;
    } Parms{};
    Parms.bInEnableProcessIcon = (uint8_t)bInEnableProcessIcon;
    this->ProcessEvent(Func, &Parms);
}

void URuntimeIconMaker::ClearDFMImage(struct UDFMImage* DFMImage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RuntimeIconMaker", "ClearDFMImage");
    struct
    {
        struct UDFMImage* DFMImage;
    } Parms{};
    Parms.DFMImage = (struct UDFMImage*)DFMImage;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWeaponAdapterItemAimDownSightsSimple::* ----
void UWeaponAdapterItemAimDownSightsSimple::OnAnimSeqLoadComplete(const struct FSoftObjectPath& AssetPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAdapterItemAimDownSightsSimple", "OnAnimSeqLoadComplete");
    struct
    {
        struct FSoftObjectPath AssetPath;
    } Parms{};
    Parms.AssetPath = (struct FSoftObjectPath)AssetPath;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWeaponAdapterItemBipodSimple::* ----
void UWeaponAdapterItemBipodSimple::TryModifyBipod(struct AAssembleWeaponActor* AssembleWeaponActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAdapterItemBipodSimple", "TryModifyBipod");
    struct
    {
        struct AAssembleWeaponActor* AssembleWeaponActor;
    } Parms{};
    Parms.AssembleWeaponActor = (struct AAssembleWeaponActor*)AssembleWeaponActor;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWeaponAssemblerUtil::* ----
EAssemblerCamPoint UWeaponAssemblerUtil::TouchToSwitchPoint(struct FVector2D ScreenPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponAssemblerUtil", "TouchToSwitchPoint");
    struct
    {
        struct FVector2D ScreenPos;
        enum EAssemblerCamPoint ReturnValue;
    } Parms{};
    Parms.ScreenPos = (struct FVector2D)ScreenPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int16_t UWeaponAssemblerUtil::TouchToPartNodeIndex(struct FVector2D ScreenPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponAssemblerUtil", "TouchToPartNodeIndex");
    struct
    {
        struct FVector2D ScreenPos;
        int16_t ReturnValue;
    } Parms{};
    Parms.ScreenPos = (struct FVector2D)ScreenPos;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponAssemblerUtil::StreamInFullTexture(struct UMeshComponent* InMeshCom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponAssemblerUtil", "StreamInFullTexture");
    struct
    {
        struct UMeshComponent* InMeshCom;
    } Parms{};
    Parms.InMeshCom = (struct UMeshComponent*)InMeshCom;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponAssemblerUtil::IsFullTextureStreamedIn(struct UMeshComponent* InMeshCom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponAssemblerUtil", "IsFullTextureStreamedIn");
    struct
    {
        struct UMeshComponent* InMeshCom;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InMeshCom = (struct UMeshComponent*)InMeshCom;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FSoftObjectPath UWeaponAssemblerUtil::GetWeaponPartAppreanceMeshPath(uint64_t ItemID, uint64_t AppearanceId, EWeaponPartMeshType PartMeshType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponAssemblerUtil", "GetWeaponPartAppreanceMeshPath");
    struct
    {
        uint64_t ItemID;
        uint64_t AppearanceId;
        enum EWeaponPartMeshType PartMeshType;
        struct FSoftObjectPath ReturnValue;
    } Parms{};
    Parms.ItemID = (uint64_t)ItemID;
    Parms.AppearanceId = (uint64_t)AppearanceId;
    Parms.PartMeshType = (enum EWeaponPartMeshType)PartMeshType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponAssemblerUtil::ForceCancelTextureStreamingThisTime(struct UMeshComponent* InMeshCom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponAssemblerUtil", "ForceCancelTextureStreamingThisTime");
    struct
    {
        struct UMeshComponent* InMeshCom;
    } Parms{};
    Parms.InMeshCom = (struct UMeshComponent*)InMeshCom;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWeaponAssemblerUtil::CancelTexturePendingMipChangeRequest(struct UMeshComponent* InMeshCom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponAssemblerUtil", "CancelTexturePendingMipChangeRequest");
    struct
    {
        struct UMeshComponent* InMeshCom;
    } Parms{};
    Parms.InMeshCom = (struct UMeshComponent*)InMeshCom;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ---- UWeaponAssembleSubsystem::* ----
void UWeaponAssembleSubsystem::ToggleTextureStreaming(uint8_t bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "ToggleTextureStreaming");
    struct
    {
        uint8_t bOpen;
    } Parms{};
    Parms.bOpen = (uint8_t)bOpen;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::SetWeaponIntermediateActorTransform(const struct FRotator& Rotation, struct FVector Location, struct FVector Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "SetWeaponIntermediateActorTransform");
    struct
    {
        struct FRotator Rotation;
        struct FVector Location;
        struct FVector Scale;
    } Parms{};
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Location = (struct FVector)Location;
    Parms.Scale = (struct FVector)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::SetWeaponIntermediateActorLocation(struct FVector Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "SetWeaponIntermediateActorLocation");
    struct
    {
        struct FVector Location;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::SetIsInGameAndClearRTI(uint8_t bIsInGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "SetIsInGameAndClearRTI");
    struct
    {
        uint8_t bIsInGame;
    } Parms{};
    Parms.bIsInGame = (uint8_t)bIsInGame;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::PostApplyWorldOffset(struct UWorld* World, struct FIntVector IntVector1, struct FIntVector IntVector2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "PostApplyWorldOffset");
    struct
    {
        struct UWorld* World;
        struct FIntVector IntVector1;
        struct FIntVector IntVector2;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.IntVector1 = (struct FIntVector)IntVector1;
    Parms.IntVector2 = (struct FIntVector)IntVector2;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponAssembleSubsystem::OpenGunSmith()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "OpenGunSmith");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponAssembleSubsystem::OpenCameraEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "OpenCameraEditor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::OnGunsmithSceneChangeEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "OnGunsmithSceneChangeEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::OnGunsmithLevelUnloadSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "OnGunsmithLevelUnloadSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponAssembleSubsystem::IsInGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "IsInGame");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UWeaponAssembleSubsystem::IsGameModeMP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "IsGameModeMP");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponAssembleSubsystem::InitSceneActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "InitSceneActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::InitLightSceneActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "InitLightSceneActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UWeaponAssembleSubsystem::HasSkeletalMeshCache(struct FSoftObjectPath MeshPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "HasSkeletalMeshCache");
    struct
    {
        struct FSoftObjectPath MeshPath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MeshPath = (struct FSoftObjectPath)MeshPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAssembleWeaponMgr* UWeaponAssembleSubsystem::GetWeaponActorMgr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetWeaponActorMgr");
    struct
    {
        struct AAssembleWeaponMgr* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URuntimeIconManager* UWeaponAssembleSubsystem::GetRuntimeIconManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetRuntimeIconManager");
    struct
    {
        struct URuntimeIconManager* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URuntimeIconMaker* UWeaponAssembleSubsystem::GetRuntimeIconMaker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetRuntimeIconMaker");
    struct
    {
        struct URuntimeIconMaker* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct URTIResourceManager* UWeaponAssembleSubsystem::GetRTIResourceManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetRTIResourceManager");
    struct
    {
        struct URTIResourceManager* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ARTICapture* UWeaponAssembleSubsystem::GetRTICapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetRTICapture");
    struct
    {
        struct ARTICapture* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UModularApperanceBaseProvider* UWeaponAssembleSubsystem::GetModularAppearanceProvider()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetModularAppearanceProvider");
    struct
    {
        struct UModularApperanceBaseProvider* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TWeakObjectPtr<struct ALightEnvToogle> UWeaponAssembleSubsystem::GetLightEnvToogle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetLightEnvToogle");
    struct
    {
        struct TWeakObjectPtr<struct ALightEnvToogle> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAssembleWeaponActor* UWeaponAssembleSubsystem::GetGunsmithWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetGunsmithWeapon");
    struct
    {
        struct AAssembleWeaponActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TWeakObjectPtr<struct APostProcessVolume> UWeaponAssembleSubsystem::GetGunSmithScenePostProcessVolume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetGunSmithScenePostProcessVolume");
    struct
    {
        struct TWeakObjectPtr<struct APostProcessVolume> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AWeaponDisplayBoard* UWeaponAssembleSubsystem::GetDisplayBoard()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "GetDisplayBoard");
    struct
    {
        struct AWeaponDisplayBoard* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWeaponAssembleSubsystem* UWeaponAssembleSubsystem::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponAssembleSubsystem", "Get");
    struct
    {
        struct UWeaponAssembleSubsystem* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponAssembleSubsystem::DestroyRTICapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "DestroyRTICapture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::CreateWeaponIntermediateActor(struct FVector Location, struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "CreateWeaponIntermediateActor");
    struct
    {
        struct FVector Location;
        struct FRotator Rotation;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::CreateViewTargetPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "CreateViewTargetPoint");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::CreateGunsmithWeapon(struct FVector Location, struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "CreateGunsmithWeapon");
    struct
    {
        struct FVector Location;
        struct FRotator Rotation;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::CreateCameraCtrl(struct FVector Location, struct FRotator Rotation, struct UObject* BPClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "CreateCameraCtrl");
    struct
    {
        struct FVector Location;
        struct FRotator Rotation;
        struct UObject* BPClass;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.BPClass = (struct UObject*)BPClass;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::CloseGunSmith()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "CloseGunSmith");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::ClearRTI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "ClearRTI");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponAssembleSubsystem::CacheSkeletalMesh(struct FSoftObjectPath MeshPath, struct USkeletalMesh* Mesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponAssembleSubsystem", "CacheSkeletalMesh");
    struct
    {
        struct FSoftObjectPath MeshPath;
        struct USkeletalMesh* Mesh;
    } Parms{};
    Parms.MeshPath = (struct FSoftObjectPath)MeshPath;
    Parms.Mesh = (struct USkeletalMesh*)Mesh;
    this->ProcessEvent(Func, &Parms);
}

// ---- UWeaponDataComponentAdapterSimple::* ----
uint8_t UWeaponDataComponentAdapterSimple::GetAnimOverideFunction(struct TArray<struct FGPModularWeaponPartNode>& FunctionNode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDataComponentAdapterSimple", "GetAnimOverideFunction");
    struct
    {
        struct TArray<struct FGPModularWeaponPartNode> FunctionNode;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    FunctionNode = Parms.FunctionNode;
    return Parms.ReturnValue;
}

// ---- AWeaponDisplayBoard::* ----
int16_t AWeaponDisplayBoard::Touch(struct FVector2D ScreenPos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "Touch");
    struct
    {
        struct FVector2D ScreenPos;
        int16_t ReturnValue;
    } Parms{};
    Parms.ScreenPos = (struct FVector2D)ScreenPos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AWeaponDisplayBoard::SpawnWeaponFromePresetRow(const struct FGunPresetRow& GunRow, uint8_t bSpecial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "SpawnWeaponFromePresetRow");
    struct
    {
        struct FGunPresetRow GunRow;
        uint8_t bSpecial;
    } Parms{};
    Parms.GunRow = (struct FGunPresetRow)GunRow;
    Parms.bSpecial = (uint8_t)bSpecial;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponDisplayBoard::SpawnWeapon(struct UModularWeaponDesc* Desc, uint8_t bSpecial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "SpawnWeapon");
    struct
    {
        struct UModularWeaponDesc* Desc;
        uint8_t bSpecial;
    } Parms{};
    Parms.Desc = (struct UModularWeaponDesc*)Desc;
    Parms.bSpecial = (uint8_t)bSpecial;
    this->ProcessEvent(Func, &Parms);
}

int16_t AWeaponDisplayBoard::ResetWeapon(uint16_t WeaponIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "ResetWeapon");
    struct
    {
        uint16_t WeaponIndex;
        int16_t ReturnValue;
    } Parms{};
    Parms.WeaponIndex = (uint16_t)WeaponIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AWeaponDisplayBoard::RemoveWeapon(uint16_t WeaponIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "RemoveWeapon");
    struct
    {
        uint16_t WeaponIndex;
    } Parms{};
    Parms.WeaponIndex = (uint16_t)WeaponIndex;
    this->ProcessEvent(Func, &Parms);
}

int16_t AWeaponDisplayBoard::PopWeapon(uint16_t WeaponIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "PopWeapon");
    struct
    {
        uint16_t WeaponIndex;
        int16_t ReturnValue;
    } Parms{};
    Parms.WeaponIndex = (uint16_t)WeaponIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AWeaponDisplayBoard::PlayWeaponDropBackAnim(uint8_t WeaponIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "PlayWeaponDropBackAnim");
    struct
    {
        uint8_t WeaponIndex;
    } Parms{};
    Parms.WeaponIndex = (uint8_t)WeaponIndex;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponDisplayBoard::PlaySlidingAnim(uint8_t bIsLeft)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "PlaySlidingAnim");
    struct
    {
        uint8_t bIsLeft;
    } Parms{};
    Parms.bIsLeft = (uint8_t)bIsLeft;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponDisplayBoard::OpenDisplayBoardLight(uint8_t bVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "OpenDisplayBoardLight");
    struct
    {
        uint8_t bVisible;
    } Parms{};
    Parms.bVisible = (uint8_t)bVisible;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponDisplayBoard::OnSlidingAnim(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "OnSlidingAnim");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void AWeaponDisplayBoard::OnGunSmithLightEnvPrepareFinsh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "OnGunSmithLightEnvPrepareFinsh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D AWeaponDisplayBoard::GetWeaponTopRightPos(uint16_t WeaponIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "GetWeaponTopRightPos");
    struct
    {
        uint16_t WeaponIndex;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.WeaponIndex = (uint16_t)WeaponIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AWeaponDisplayBoard::GetWeaponScreenPos(uint16_t WeaponIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "GetWeaponScreenPos");
    struct
    {
        uint16_t WeaponIndex;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WeaponIndex = (uint16_t)WeaponIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UModularWeaponDesc* AWeaponDisplayBoard::GetWeaponDesc(uint16_t WeaponIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "GetWeaponDesc");
    struct
    {
        uint16_t WeaponIndex;
        struct UModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.WeaponIndex = (uint16_t)WeaponIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AWeaponDisplayBoard::ClearWeapon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponDisplayBoard", "ClearWeapon");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UWeaponPresetGenerateTool::* ----
struct UGPModularWeaponDesc* UWeaponPresetGenerateTool::GenerateWepaonPresetInner(struct UGPModularWeaponDesc* InWeaponDesc, struct FWeaponPresetGenerateParam Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponPresetGenerateTool", "GenerateWepaonPresetInner");
    struct
    {
        struct UGPModularWeaponDesc* InWeaponDesc;
        struct FWeaponPresetGenerateParam Param;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.InWeaponDesc = (struct UGPModularWeaponDesc*)InWeaponDesc;
    Parms.Param = (struct FWeaponPresetGenerateParam)Param;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UWeaponPresetGenerateTool::GenerateWepaonPresetByRecId(uint64_t RecId, struct FWeaponPresetGenerateParam Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponPresetGenerateTool", "GenerateWepaonPresetByRecId");
    struct
    {
        uint64_t RecId;
        struct FWeaponPresetGenerateParam Param;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.RecId = (uint64_t)RecId;
    Parms.Param = (struct FWeaponPresetGenerateParam)Param;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPModularWeaponDesc* UWeaponPresetGenerateTool::GenerateWepaonPreset(uint64_t DefaultPresetID, struct FWeaponPresetGenerateParam Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponPresetGenerateTool", "GenerateWepaonPreset");
    struct
    {
        uint64_t DefaultPresetID;
        struct FWeaponPresetGenerateParam Param;
        struct UGPModularWeaponDesc* ReturnValue;
    } Parms{};
    Parms.DefaultPresetID = (uint64_t)DefaultPresetID;
    Parms.Param = (struct FWeaponPresetGenerateParam)Param;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWeaponPresetGenerateTool::GenerateAllWepaonPresetsImpl_ForechSockets(struct FWeaponAllPresetGenerateContext& Context, int32_t MaxNum, struct UAssembleWeaponNodeTree* AssembleWeaponNodeTree, struct UGPModularWeaponDesc* WeaponDesc, struct TArray<struct FWeaponPresetGeneratePartSocket> PendingSocketList, int32_t CurrentSocketIndex, int32_t Depth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponPresetGenerateTool", "GenerateAllWepaonPresetsImpl_ForechSockets");
    struct
    {
        struct FWeaponAllPresetGenerateContext Context;
        int32_t MaxNum;
        struct UAssembleWeaponNodeTree* AssembleWeaponNodeTree;
        struct UGPModularWeaponDesc* WeaponDesc;
        struct TArray<struct FWeaponPresetGeneratePartSocket> PendingSocketList;
        int32_t CurrentSocketIndex;
        int32_t Depth;
    } Parms{};
    Parms.MaxNum = (int32_t)MaxNum;
    Parms.AssembleWeaponNodeTree = (struct UAssembleWeaponNodeTree*)AssembleWeaponNodeTree;
    Parms.WeaponDesc = (struct UGPModularWeaponDesc*)WeaponDesc;
    Parms.PendingSocketList = (struct TArray<struct FWeaponPresetGeneratePartSocket>)PendingSocketList;
    Parms.CurrentSocketIndex = (int32_t)CurrentSocketIndex;
    Parms.Depth = (int32_t)Depth;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UWeaponPresetGenerateTool::GenerateAllWepaonPresetsImpl(struct FWeaponAllPresetGenerateContext& Context, int32_t MaxNum, struct UAssembleWeaponNodeTree* AssembleWeaponNodeTree, struct UGPModularWeaponDesc* WeaponDesc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponPresetGenerateTool", "GenerateAllWepaonPresetsImpl");
    struct
    {
        struct FWeaponAllPresetGenerateContext Context;
        int32_t MaxNum;
        struct UAssembleWeaponNodeTree* AssembleWeaponNodeTree;
        struct UGPModularWeaponDesc* WeaponDesc;
    } Parms{};
    Parms.MaxNum = (int32_t)MaxNum;
    Parms.AssembleWeaponNodeTree = (struct UAssembleWeaponNodeTree*)AssembleWeaponNodeTree;
    Parms.WeaponDesc = (struct UGPModularWeaponDesc*)WeaponDesc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

void UWeaponPresetGenerateTool::GenerateAllWepaonPresetsForTool(int32_t MaxNum, uint8_t SpecNum, struct FString RecIdsStr, struct FString OutPaths, uint8_t bAsync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponPresetGenerateTool", "GenerateAllWepaonPresetsForTool");
    struct
    {
        int32_t MaxNum;
        uint8_t SpecNum;
        struct FString RecIdsStr;
        struct FString OutPaths;
        uint8_t bAsync;
    } Parms{};
    Parms.MaxNum = (int32_t)MaxNum;
    Parms.SpecNum = (uint8_t)SpecNum;
    Parms.RecIdsStr = (struct FString)RecIdsStr;
    Parms.OutPaths = (struct FString)OutPaths;
    Parms.bAsync = (uint8_t)bAsync;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWeaponPresetGenerateTool::GenerateAllWepaonPresets(int32_t InMaxNum, uint8_t SpecNum, struct TArray<uint64_t> RecId, struct FString OutPaths, uint8_t bAsync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponPresetGenerateTool", "GenerateAllWepaonPresets");
    struct
    {
        int32_t InMaxNum;
        uint8_t SpecNum;
        struct TArray<uint64_t> RecId;
        struct FString OutPaths;
        uint8_t bAsync;
    } Parms{};
    Parms.InMaxNum = (int32_t)InMaxNum;
    Parms.SpecNum = (uint8_t)SpecNum;
    Parms.RecId = (struct TArray<uint64_t>)RecId;
    Parms.OutPaths = (struct FString)OutPaths;
    Parms.bAsync = (uint8_t)bAsync;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UWeaponPresetGenerateTool::ExportWeaponDesc(struct UModularWeaponDesc* InDesc, struct FWeaponAllPresetGenerateContext& Context, int32_t MaxPart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("WeaponPresetGenerateTool", "ExportWeaponDesc");
    struct
    {
        struct UModularWeaponDesc* InDesc;
        struct FWeaponAllPresetGenerateContext Context;
        int32_t MaxPart;
    } Parms{};
    Parms.InDesc = (struct UModularWeaponDesc*)InDesc;
    Parms.MaxPart = (int32_t)MaxPart;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
}

// ---- AWeaponSkinPreviewSpawner::* ----
void AWeaponSkinPreviewSpawner::RefreshWeaponActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponSkinPreviewSpawner", "RefreshWeaponActor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UWeaponTestWorldSystem::* ----
void UWeaponTestWorldSystem::EnableFocusWeaponMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponTestWorldSystem", "EnableFocusWeaponMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponTestWorldSystem::DisableFocusWeaponMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponTestWorldSystem", "DisableFocusWeaponMode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponTestWorldSystem::ClearWeaponTestWeaponMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponTestWorldSystem", "ClearWeaponTestWeaponMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponTestWorldSystem::ClearWeaponTestCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponTestWorldSystem", "ClearWeaponTestCharacter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWeaponTestWorldSystem::AddWeaponTestWeaponMesh(struct AAssembleWeaponActor* AssembleWeaponActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponTestWorldSystem", "AddWeaponTestWeaponMesh");
    struct
    {
        struct AAssembleWeaponActor* AssembleWeaponActor;
    } Parms{};
    Parms.AssembleWeaponActor = (struct AAssembleWeaponActor*)AssembleWeaponActor;
    this->ProcessEvent(Func, &Parms);
}

void UWeaponTestWorldSystem::AddWeaponTestCharacter(struct AActor* CHARACTER)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WeaponTestWorldSystem", "AddWeaponTestCharacter");
    struct
    {
        struct AActor* CHARACTER;
    } Parms{};
    Parms.CHARACTER = (struct AActor*)CHARACTER;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
