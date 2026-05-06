#include "MFDataVisualizer.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFStatCollectCore
void UMFStatCollectCore::InitAndCollect(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatCollectCore", "InitAndCollect");
    struct
    {
        struct UWorld* InWorld;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
}

// UMFStatisticDataCollectCore
void UMFStatisticDataCollectCore::CookAllSceneInfoToSceneObjData(struct AActor* ConvertParent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataCollectCore", "CookAllSceneInfoToSceneObjData");
    struct
    {
        struct AActor* ConvertParent;
    } Parms{};
    Parms.ConvertParent = (struct AActor*)ConvertParent;
    this->ProcessEvent(Func, &Parms);
}

void UMFStatisticDataCollectCore::CollectSceneInfo(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataCollectCore", "CollectSceneInfo");
    struct
    {
        struct UWorld* InWorld;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    this->ProcessEvent(Func, &Parms);
}

// AMFStatisticDataVisualizeActor
void AMFStatisticDataVisualizeActor::TestToggleFoliage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "TestToggleFoliage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::PushDataToCell_ForDir(float Data, struct FVector Pos, float RotZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "PushDataToCell_ForDir");
    struct
    {
        float Data;
        struct FVector Pos;
        float RotZ;
    } Parms{};
    Parms.Data = (float)Data;
    Parms.Pos = (struct FVector)Pos;
    Parms.RotZ = (float)RotZ;
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::PushDataToCell(float Data, struct FVector Pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "PushDataToCell");
    struct
    {
        float Data;
        struct FVector Pos;
    } Parms{};
    Parms.Data = (float)Data;
    Parms.Pos = (struct FVector)Pos;
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::InitDataFromBorder()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "InitDataFromBorder");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::GetXYCountFromBorder(int32_t& XCount, int32_t& YCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "GetXYCountFromBorder");
    struct
    {
        int32_t XCount;
        int32_t YCount;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    XCount = Parms.XCount;
    YCount = Parms.YCount;
}

struct FVector AMFStatisticDataVisualizeActor::GetPosFromID(int32_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "GetPosFromID");
    struct
    {
        int32_t ID;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ID = (int32_t)ID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMaterialInterface* AMFStatisticDataVisualizeActor::GetMaterialFromColorLevel(int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "GetMaterialFromColorLevel");
    struct
    {
        int32_t Level;
        struct UMaterialInterface* ReturnValue;
    } Parms{};
    Parms.Level = (int32_t)Level;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AMFStatisticDataVisualizeActor::GetIDFromPos(struct FVector Pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "GetIDFromPos");
    struct
    {
        struct FVector Pos;
        int32_t ReturnValue;
    } Parms{};
    Parms.Pos = (struct FVector)Pos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AMFStatisticDataVisualizeActor::GetColorLevelFromData(float Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "GetColorLevelFromData");
    struct
    {
        float Data;
        int32_t ReturnValue;
    } Parms{};
    Parms.Data = (float)Data;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AMFStatisticDataVisualizeActor::GetCellDataFromPos(struct FVector Pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "GetCellDataFromPos");
    struct
    {
        struct FVector Pos;
        float ReturnValue;
    } Parms{};
    Parms.Pos = (struct FVector)Pos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector4 AMFStatisticDataVisualizeActor::GetCellData_WithDir_FromPos(struct FVector Pos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "GetCellData_WithDir_FromPos");
    struct
    {
        struct FVector Pos;
        struct FVector4 ReturnValue;
    } Parms{};
    Parms.Pos = (struct FVector)Pos;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AMFStatisticDataVisualizeActor::FlushVisualBox_WithDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "FlushVisualBox_WithDir");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::FlushVisualBox()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "FlushVisualBox");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::FillDataFromSceneObj()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "FillDataFromSceneObj");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::FillAreaWithMarker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "FillAreaWithMarker");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::ExportDataPoints()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "ExportDataPoints");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFStatisticDataVisualizeActor::CollectStatData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFStatisticDataVisualizeActor", "CollectStatData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
