#include "Swarms.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// USwarmsComponent
void USwarmsComponent::UpdateInstances()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "UpdateInstances");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::TryMergeCellsInfo(uint8_t CellInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TryMergeCellsInfo");
    struct
    {
        uint8_t CellInfo;
    } Parms{};
    Parms.CellInfo = (uint8_t)CellInfo;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::TryClientStart_Low()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TryClientStart_Low");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::TryClientStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TryClientStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::TryCheckEmptyBlock(int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TryCheckEmptyBlock");
    struct
    {
        int32_t Y;
        int32_t Z;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::TryAddToBlockInfo(const float& ObjStart, const float& ObjEnd, struct TArray<struct FVector2D>& BlockInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SwarmsComponent", "TryAddToBlockInfo");
    struct
    {
        float ObjStart;
        float ObjEnd;
        struct TArray<struct FVector2D> BlockInfo;
    } Parms{};
    Parms.ObjStart = (float)ObjStart;
    Parms.ObjEnd = (float)ObjEnd;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BlockInfo = Parms.BlockInfo;
}

void USwarmsComponent::TryAddCellDamageInfo(int32_t Y, int32_t Z, const uint8_t& Start, const uint8_t& End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TryAddCellDamageInfo");
    struct
    {
        int32_t Y;
        int32_t Z;
        uint8_t Start;
        uint8_t End;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    Parms.Start = (uint8_t)Start;
    Parms.End = (uint8_t)End;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::TickUpdateTransArray(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TickUpdateTransArray");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::TickFindAllMapCellsNextTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TickFindAllMapCellsNextTarget");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::TickDamageTarget(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TickDamageTarget");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::TickDamageArea()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TickDamageArea");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::TickClientDoUesBlockCellsInfo_Client()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TickClientDoUesBlockCellsInfo_Client");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::TickCheckVoxel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TickCheckVoxel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::TickCheckBlocks(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TickCheckBlocks");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::TickActorTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "TickActorTransform");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::SyncMapInfoToClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "SyncMapInfoToClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::StartParallelFindMoveToTargetPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "StartParallelFindMoveToTargetPath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::StartInitBlocks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "StartInitBlocks");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::StartClientDoUesBlockCellsInfo(int32_t BlockIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "StartClientDoUesBlockCellsInfo");
    struct
    {
        int32_t BlockIndex;
    } Parms{};
    Parms.BlockIndex = (int32_t)BlockIndex;
    this->ProcessEvent(Func, &Parms);
}

struct FVector USwarmsComponent::SlerpForward(struct FVector Current, struct FVector Target, float DeltaTime, float AngleSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SwarmsComponent", "SlerpForward");
    struct
    {
        struct FVector Current;
        struct FVector Target;
        float DeltaTime;
        float AngleSpeed;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Current = (struct FVector)Current;
    Parms.Target = (struct FVector)Target;
    Parms.DeltaTime = (float)DeltaTime;
    Parms.AngleSpeed = (float)AngleSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::SetShowLOD(int32_t LOD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "SetShowLOD");
    struct
    {
        int32_t LOD;
    } Parms{};
    Parms.LOD = (int32_t)LOD;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::SetDamageArea(float DamageCenterX)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "SetDamageArea");
    struct
    {
        float DamageCenterX;
    } Parms{};
    Parms.DamageCenterX = (float)DamageCenterX;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::SetCurrBlockIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "SetCurrBlockIndex");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::SetAvatarMesh(struct UStaticMesh* AvatarMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "SetAvatarMesh");
    struct
    {
        struct UStaticMesh* AvatarMesh;
    } Parms{};
    Parms.AvatarMesh = (struct UStaticMesh*)AvatarMesh;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::SetAvatarMaterial(struct UMaterialInterface* AvatarMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "SetAvatarMaterial");
    struct
    {
        struct UMaterialInterface* AvatarMaterial;
    } Parms{};
    Parms.AvatarMaterial = (struct UMaterialInterface*)AvatarMaterial;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::RayCheckDamageMapCell(const struct FVector& LocalPosition, const float& TargetX)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "RayCheckDamageMapCell");
    struct
    {
        struct FVector LocalPosition;
        float TargetX;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LocalPosition = (struct FVector)LocalPosition;
    Parms.TargetX = (float)TargetX;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::ParallelFindMoveToTargetPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "ParallelFindMoveToTargetPath");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::OnRep_BlockSyncDataArray()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "OnRep_BlockSyncDataArray");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::NormalizeMovePath(struct TArray<struct FVector>& BaseMovePath, struct TArray<float>& BaseMoveRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "NormalizeMovePath");
    struct
    {
        struct TArray<struct FVector> BaseMovePath;
        struct TArray<float> BaseMoveRate;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    BaseMovePath = Parms.BaseMovePath;
    BaseMoveRate = Parms.BaseMoveRate;
}

uint8_t USwarmsComponent::MoveCellIndex(int32_t& Y, int32_t& Z, int32_t ForwardType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "MoveCellIndex");
    struct
    {
        int32_t Y;
        int32_t Z;
        int32_t ForwardType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ForwardType = (int32_t)ForwardType;
    this->ProcessEvent(Func, &Parms);
    Y = Parms.Y;
    Z = Parms.Z;
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::IsUseVoxelData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "IsUseVoxelData");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::IsStandalone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "IsStandalone");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::IsOverlap(float Start1, float End1, float Start2, float End2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SwarmsComponent", "IsOverlap");
    struct
    {
        float Start1;
        float End1;
        float Start2;
        float End2;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Start1 = (float)Start1;
    Parms.End1 = (float)End1;
    Parms.Start2 = (float)Start2;
    Parms.End2 = (float)End2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::IsNextEmptyBlock(int32_t Y)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "IsNextEmptyBlock");
    struct
    {
        int32_t Y;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Y = (int32_t)Y;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::IsDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "IsDS");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::IsClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "IsClient");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USwarmsComponent::InverseForwardsOneAxis(float Val, uint8_t bIsPositiveTarget, float MinAbsVal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SwarmsComponent", "InverseForwardsOneAxis");
    struct
    {
        float Val;
        uint8_t bIsPositiveTarget;
        float MinAbsVal;
        float ReturnValue;
    } Parms{};
    Parms.Val = (float)Val;
    Parms.bIsPositiveTarget = (uint8_t)bIsPositiveTarget;
    Parms.MinAbsVal = (float)MinAbsVal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::InitQualitySettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "InitQualitySettings");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::InitLineTraceParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "InitLineTraceParams");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::InitDamageCheckStartCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "InitDamageCheckStartCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::InitCheckVoxelParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "InitCheckVoxelParams");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::InitBoidsSettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "InitBoidsSettings");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::InitBoids()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "InitBoids");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::InitBlocksParams()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "InitBlocksParams");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::InitAllMapCellsDamageInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "InitAllMapCellsDamageInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::HandleExistingParallelTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "HandleExistingParallelTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FVector USwarmsComponent::GetMoveToTargetCurrBaseLocation(const struct FSwarmsMoveToTargetData& Target)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "GetMoveToTargetCurrBaseLocation");
    struct
    {
        struct FSwarmsMoveToTargetData Target;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Target = (struct FSwarmsMoveToTargetData)Target;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::GetIsFadeIn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "GetIsFadeIn");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector> USwarmsComponent::GetCurrSpawnPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "GetCurrSpawnPoints");
    struct
    {
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInterface* USwarmsComponent::GetCurrMaterial(int32_t LOD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "GetCurrMaterial");
    struct
    {
        int32_t LOD;
        struct UMaterialInterface* ReturnValue;
    } Parms{};
    Parms.LOD = (int32_t)LOD;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector USwarmsComponent::FindMoveToTargetPathBaseLocation(const struct FVector& ActorLocation, const int32_t& CellIndex, const int32_t& LayerNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "FindMoveToTargetPathBaseLocation");
    struct
    {
        struct FVector ActorLocation;
        int32_t CellIndex;
        int32_t LayerNum;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ActorLocation = (struct FVector)ActorLocation;
    Parms.CellIndex = (int32_t)CellIndex;
    Parms.LayerNum = (int32_t)LayerNum;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::FindMoveToTargetPath(struct FSwarmsMoveToTargetData& CurrTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "FindMoveToTargetPath");
    struct
    {
        struct FSwarmsMoveToTargetData CurrTarget;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    CurrTarget = Parms.CurrTarget;
}

int32_t USwarmsComponent::FindMinOpenPoint(const struct TArray<int32_t>& OpenCells, const struct TMap<int32_t, struct FSwarmsFindPathData>& FindPathDataset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "FindMinOpenPoint");
    struct
    {
        struct TArray<int32_t> OpenCells;
        struct TMap<int32_t, struct FSwarmsFindPathData> FindPathDataset;
        int32_t ReturnValue;
    } Parms{};
    Parms.OpenCells = (struct TArray<int32_t>)OpenCells;
    Parms.FindPathDataset = (struct TMap<int32_t, struct FSwarmsFindPathData>)FindPathDataset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector USwarmsComponent::FindDefaultSpawnPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "FindDefaultSpawnPoint");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::FindDeathMapCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "FindDeathMapCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::DoUesBlockCellsInfo(int32_t BlockIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoUesBlockCellsInfo");
    struct
    {
        int32_t BlockIndex;
    } Parms{};
    Parms.BlockIndex = (int32_t)BlockIndex;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::DoTickCheckVoxel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoTickCheckVoxel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::DoTickCheckBlocks(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoTickCheckBlocks");
    struct
    {
        float DeltaTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::DoSingleCellCheck(struct FVector pos, uint8_t bCheckBlock, uint8_t bDrawDebugLine)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoSingleCellCheck");
    struct
    {
        struct FVector pos;
        uint8_t bCheckBlock;
        uint8_t bDrawDebugLine;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    Parms.bCheckBlock = (uint8_t)bCheckBlock;
    Parms.bDrawDebugLine = (uint8_t)bDrawDebugLine;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::DoInitBoids(const int32_t& Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoInitBoids");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::DoFindMoveToTargetPath(struct TArray<struct FVector>& BaseMovePath, const struct FVector& TargetLocalPosition, const int32_t& LocalCellIndex, const int32_t& LocalLayerNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoFindMoveToTargetPath");
    struct
    {
        struct TArray<struct FVector> BaseMovePath;
        struct FVector TargetLocalPosition;
        int32_t LocalCellIndex;
        int32_t LocalLayerNum;
    } Parms{};
    Parms.TargetLocalPosition = (struct FVector)TargetLocalPosition;
    Parms.LocalCellIndex = (int32_t)LocalCellIndex;
    Parms.LocalLayerNum = (int32_t)LocalLayerNum;
    this->ProcessEvent(Func, &Parms);
    BaseMovePath = Parms.BaseMovePath;
}

void USwarmsComponent::DoFindDeathMapCells(int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoFindDeathMapCells");
    struct
    {
        int32_t Y;
        int32_t Z;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::DoDsStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoDsStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::DoDsStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoDsStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::DoCustomTick(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoCustomTick");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::DoCountMapCellsTarget(int32_t Y, int32_t Z, uint8_t Start, uint8_t End, uint8_t ForwardType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoCountMapCellsTarget");
    struct
    {
        int32_t Y;
        int32_t Z;
        uint8_t Start;
        uint8_t End;
        uint8_t ForwardType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    Parms.Start = (uint8_t)Start;
    Parms.End = (uint8_t)End;
    Parms.ForwardType = (uint8_t)ForwardType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USwarmsComponent::DoCountMapCellsMaxMoveDistance(int32_t Y, int32_t Z, float& Start, float& End)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoCountMapCellsMaxMoveDistance");
    struct
    {
        int32_t Y;
        int32_t Z;
        float Start;
        float End;
        float ReturnValue;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
    Start = Parms.Start;
    End = Parms.End;
    return Parms.ReturnValue;
}

void USwarmsComponent::DoClientStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoClientStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::DoClientStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoClientStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::DoCheckSpawnPoint(int32_t CellY, int32_t CellZ, struct FVector SpawnPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoCheckSpawnPoint");
    struct
    {
        int32_t CellY;
        int32_t CellZ;
        struct FVector SpawnPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.CellY = (int32_t)CellY;
    Parms.CellZ = (int32_t)CellZ;
    Parms.SpawnPoint = (struct FVector)SpawnPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::DoCheckBlock(int32_t Y, int32_t Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoCheckBlock");
    struct
    {
        int32_t Y;
        int32_t Z;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::DoAddDamageTarget(const struct FSwarmsMoveToTargetData& CurrTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "DoAddDamageTarget");
    struct
    {
        struct FSwarmsMoveToTargetData CurrTarget;
    } Parms{};
    Parms.CurrTarget = (struct FSwarmsMoveToTargetData)CurrTarget;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::CreateISMComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CreateISMComponent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::CountMapCellsMaxMoveDistance(int32_t Y, int32_t Z, int32_t LayerIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CountMapCellsMaxMoveDistance");
    struct
    {
        int32_t Y;
        int32_t Z;
        int32_t LayerIndex;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    Parms.LayerIndex = (int32_t)LayerIndex;
    this->ProcessEvent(Func, &Parms);
}

int32_t USwarmsComponent::CountLOD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CountLOD");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::ClientTestStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "ClientTestStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::ClientTestStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "ClientTestStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::ClientDrawBox(struct FVector Center, struct FVector BoxSize, struct FQuat BoxQuat, struct FColor Color, float Lifetime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "ClientDrawBox");
    struct
    {
        struct FVector Center;
        struct FVector BoxSize;
        struct FQuat BoxQuat;
        struct FColor Color;
        float Lifetime;
    } Parms{};
    Parms.Center = (struct FVector)Center;
    Parms.BoxSize = (struct FVector)BoxSize;
    Parms.BoxQuat = (struct FQuat)BoxQuat;
    Parms.Color = (struct FColor)Color;
    Parms.Lifetime = (float)Lifetime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::ClientCheckBlockCells()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "ClientCheckBlockCells");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::CheckVoxelData(struct TArray<uint8_t>& OutVoxelData, struct FIntVector& OutVoxelCount, const int32_t& BlockIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckVoxelData");
    struct
    {
        struct TArray<uint8_t> OutVoxelData;
        struct FIntVector OutVoxelCount;
        int32_t BlockIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.BlockIndex = (int32_t)BlockIndex;
    this->ProcessEvent(Func, &Parms);
    OutVoxelData = Parms.OutVoxelData;
    OutVoxelCount = Parms.OutVoxelCount;
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::CheckTargetDistanceToCamera(const struct FVector& ActorLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckTargetDistanceToCamera");
    struct
    {
        struct FVector ActorLocation;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ActorLocation = (struct FVector)ActorLocation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::CheckSpawnPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckSpawnPoints");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::CheckPathPoint(const struct FVector& TargetPosition, const struct FVector& pathPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckPathPoint");
    struct
    {
        struct FVector TargetPosition;
        struct FVector pathPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TargetPosition = (struct FVector)TargetPosition;
    Parms.pathPoint = (struct FVector)pathPoint;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponent::CheckParallelFindMoveToTargetPathTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckParallelFindMoveToTargetPathTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::CheckLOD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckLOD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::CheckIndex(const int32_t& Y, const int32_t& Z, const uint8_t& bShowError)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckIndex");
    struct
    {
        int32_t Y;
        int32_t Z;
        uint8_t bShowError;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    Parms.bShowError = (uint8_t)bShowError;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::CheckDiffuse(const struct FVector& pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckDiffuse");
    struct
    {
        struct FVector pos;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pos = (struct FVector)pos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float USwarmsComponent::CheckDamageTarget(const struct FVector& Position, const float& radius, int32_t& CellIndex, int32_t& LayerNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckDamageTarget");
    struct
    {
        struct FVector Position;
        float radius;
        int32_t CellIndex;
        int32_t LayerNum;
        float ReturnValue;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
    CellIndex = Parms.CellIndex;
    LayerNum = Parms.LayerNum;
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::CheckDamageMapCell(const struct FVector& LocalPosition, const float& radius, int32_t& CellIndex, int32_t& LayerNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckDamageMapCell");
    struct
    {
        struct FVector LocalPosition;
        float radius;
        int32_t CellIndex;
        int32_t LayerNum;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LocalPosition = (struct FVector)LocalPosition;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
    CellIndex = Parms.CellIndex;
    LayerNum = Parms.LayerNum;
    return Parms.ReturnValue;
}

void USwarmsComponent::CheckCurrBlockWaterHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckCurrBlockWaterHeight");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponent::CheckCellIndex(const int32_t& Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "CheckCellIndex");
    struct
    {
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t USwarmsComponent::AddToOpenArray(const int32_t& Y, const int32_t& Z, const float& Start, const float& End, const int32_t& ParentIndex, const float& MoveCost, const float& TargetX, struct TArray<int32_t>& OpenCells, struct TMap<int32_t, struct FSwarmsFindPathData>& FindPathDataset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "AddToOpenArray");
    struct
    {
        int32_t Y;
        int32_t Z;
        float Start;
        float End;
        int32_t ParentIndex;
        float MoveCost;
        float TargetX;
        struct TArray<int32_t> OpenCells;
        struct TMap<int32_t, struct FSwarmsFindPathData> FindPathDataset;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    Parms.Start = (float)Start;
    Parms.End = (float)End;
    Parms.ParentIndex = (int32_t)ParentIndex;
    Parms.MoveCost = (float)MoveCost;
    Parms.TargetX = (float)TargetX;
    this->ProcessEvent(Func, &Parms);
    OpenCells = Parms.OpenCells;
    FindPathDataset = Parms.FindPathDataset;
    return Parms.ReturnValue;
}

void USwarmsComponent::AddDamageTarget(struct APawn* Target, uint8_t bIsLocalPawn, int32_t CellIndex, int32_t LayerNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "AddDamageTarget");
    struct
    {
        struct APawn* Target;
        uint8_t bIsLocalPawn;
        int32_t CellIndex;
        int32_t LayerNum;
    } Parms{};
    Parms.Target = (struct APawn*)Target;
    Parms.bIsLocalPawn = (uint8_t)bIsLocalPawn;
    Parms.CellIndex = (int32_t)CellIndex;
    Parms.LayerNum = (int32_t)LayerNum;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponent::AddCellDamageInfo(int32_t Y, int32_t Z, int32_t Layer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponent", "AddCellDamageInfo");
    struct
    {
        int32_t Y;
        int32_t Z;
        int32_t Layer;
    } Parms{};
    Parms.Y = (int32_t)Y;
    Parms.Z = (int32_t)Z;
    Parms.Layer = (int32_t)Layer;
    this->ProcessEvent(Func, &Parms);
}

// USwarmsComponentCPU
void USwarmsComponentCPU::UpdateTransArray_Low(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "UpdateTransArray_Low");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::UpdateTransArray(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "UpdateTransArray");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::UpdateNoise(const int32_t& Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "UpdateNoise");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

float USwarmsComponentCPU::UpdateFadeIn(const int32_t& Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "UpdateFadeIn");
    struct
    {
        int32_t Index;
        float ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponentCPU::SimpleMoveWithNavPath(const int32_t& Index, float MoveDis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "SimpleMoveWithNavPath");
    struct
    {
        int32_t Index;
        float MoveDis;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.MoveDis = (float)MoveDis;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::SetNavPath(const int32_t& InCellIdxY, const int32_t& InCellIdxZ, const int32_t& Index, const struct FSwarmsMapCellData& InCell, const int32_t& LayerNum, uint8_t bIsNextPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "SetNavPath");
    struct
    {
        int32_t InCellIdxY;
        int32_t InCellIdxZ;
        int32_t Index;
        struct FSwarmsMapCellData InCell;
        int32_t LayerNum;
        uint8_t bIsNextPath;
    } Parms{};
    Parms.InCellIdxY = (int32_t)InCellIdxY;
    Parms.InCellIdxZ = (int32_t)InCellIdxZ;
    Parms.Index = (int32_t)Index;
    Parms.InCell = (struct FSwarmsMapCellData)InCell;
    Parms.LayerNum = (int32_t)LayerNum;
    Parms.bIsNextPath = (uint8_t)bIsNextPath;
    this->ProcessEvent(Func, &Parms);
}

struct FVector USwarmsComponentCPU::MoveToTargetLerp(const struct FVector& offset, const struct FVector& From, const struct FVector& To, const float& FromRate, const float& ToRate, const float& Rate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SwarmsComponentCPU", "MoveToTargetLerp");
    struct
    {
        struct FVector offset;
        struct FVector From;
        struct FVector To;
        float FromRate;
        float ToRate;
        float Rate;
        struct FVector ReturnValue;
    } Parms{};
    Parms.offset = (struct FVector)offset;
    Parms.From = (struct FVector)From;
    Parms.To = (struct FVector)To;
    Parms.FromRate = (float)FromRate;
    Parms.ToRate = (float)ToRate;
    Parms.Rate = (float)Rate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponentCPU::MoveToTarget(uint16_t Index, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "MoveToTarget");
    struct
    {
        uint16_t Index;
        float DeltaTime;
    } Parms{};
    Parms.Index = (uint16_t)Index;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

struct FVector USwarmsComponentCPU::GetNavPath(const float& TargetX, const int32_t& IndexY, const int32_t& IndexZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "GetNavPath");
    struct
    {
        float TargetX;
        int32_t IndexY;
        int32_t IndexZ;
        struct FVector ReturnValue;
    } Parms{};
    Parms.TargetX = (float)TargetX;
    Parms.IndexY = (int32_t)IndexY;
    Parms.IndexZ = (int32_t)IndexZ;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USwarmsComponentCPU::DoUpdateTransArray_Low(float DeltaTime, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "DoUpdateTransArray_Low");
    struct
    {
        float DeltaTime;
        int32_t Index;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::DoUpdateTransArray(float DeltaTime, int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "DoUpdateTransArray");
    struct
    {
        float DeltaTime;
        int32_t Index;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

uint8_t USwarmsComponentCPU::DoSimpleMoveWithNavPath(const int32_t& Index, const struct FVector& NavPathPoint, float& MoveDis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "DoSimpleMoveWithNavPath");
    struct
    {
        int32_t Index;
        struct FVector NavPathPoint;
        float MoveDis;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.NavPathPoint = (struct FVector)NavPathPoint;
    this->ProcessEvent(Func, &Parms);
    MoveDis = Parms.MoveDis;
    return Parms.ReturnValue;
}

void USwarmsComponentCPU::DoInitBoids_Low(const int32_t& I)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "DoInitBoids_Low");
    struct
    {
        int32_t I;
    } Parms{};
    Parms.I = (int32_t)I;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::CheckTargetVelocity(const int32_t& Index, const float& DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckTargetVelocity");
    struct
    {
        int32_t Index;
        float DeltaTime;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::CheckSpawnState(const int32_t& Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckSpawnState");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::CheckNextNavPath(const int32_t& Index, const struct FVector& Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckNextNavPath");
    struct
    {
        int32_t Index;
        struct FVector Position;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Position = (struct FVector)Position;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::CheckMapCells_Low(const int32_t& Index, struct FVector& TargetPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckMapCells_Low");
    struct
    {
        int32_t Index;
        struct FVector TargetPosition;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    TargetPosition = Parms.TargetPosition;
}

void USwarmsComponentCPU::CheckMapCells(const int32_t& Index, struct FVector& TargetPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckMapCells");
    struct
    {
        int32_t Index;
        struct FVector TargetPosition;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    TargetPosition = Parms.TargetPosition;
}

void USwarmsComponentCPU::CheckMainVolume(const int32_t& Index, struct FVector& TargetPosition)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckMainVolume");
    struct
    {
        int32_t Index;
        struct FVector TargetPosition;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    TargetPosition = Parms.TargetPosition;
}

void USwarmsComponentCPU::CheckFadeIn_Low(const int32_t& Index, const float& DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckFadeIn_Low");
    struct
    {
        int32_t Index;
        float DeltaTime;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::CheckFadeIn(const int32_t& Index, const float& DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckFadeIn");
    struct
    {
        int32_t Index;
        float DeltaTime;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::CheckDamageBox(const int32_t& Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "CheckDamageBox");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::BaseUpdateTrans_Low(uint16_t Index, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "BaseUpdateTrans_Low");
    struct
    {
        uint16_t Index;
        float DeltaTime;
    } Parms{};
    Parms.Index = (uint16_t)Index;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void USwarmsComponentCPU::BaseUpdateTrans(uint16_t Index, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwarmsComponentCPU", "BaseUpdateTrans");
    struct
    {
        uint16_t Index;
        float DeltaTime;
    } Parms{};
    Parms.Index = (uint16_t)Index;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

// ATestSwarmsActor
uint8_t ATestSwarmsActor::SubCheckOverlapResult(struct APawn* Char)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestSwarmsActor", "SubCheckOverlapResult");
    struct
    {
        struct APawn* Char;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Char = (struct APawn*)Char;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ATestSwarmsActor::MultiAddDamageTarget(struct APawn* Target, uint8_t bIsLocalPawn, int32_t CellIndex, int32_t LayerNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("TestSwarmsActor", "MultiAddDamageTarget");
    struct
    {
        struct APawn* Target;
        uint8_t bIsLocalPawn;
        int32_t CellIndex;
        int32_t LayerNum;
    } Parms{};
    Parms.Target = (struct APawn*)Target;
    Parms.bIsLocalPawn = (uint8_t)bIsLocalPawn;
    Parms.CellIndex = (int32_t)CellIndex;
    Parms.LayerNum = (int32_t)LayerNum;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
