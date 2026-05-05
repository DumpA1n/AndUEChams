#include "KantanChartsDatasource.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// IKantanCartesianDatasourceInterface
struct FText IKantanCartesianDatasourceInterface::GetSeriesName(int32_t SeriesIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianDatasourceInterface", "GetSeriesName");
    struct
    {
        int32_t SeriesIdx;
        struct FText ReturnValue;
    } Parms{};
    Parms.SeriesIdx = (int32_t)SeriesIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IKantanCartesianDatasourceInterface::GetSeriesId(int32_t CatIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianDatasourceInterface", "GetSeriesId");
    struct
    {
        int32_t CatIdx;
        struct FName ReturnValue;
    } Parms{};
    Parms.CatIdx = (int32_t)CatIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FKantanCartesianDatapoint> IKantanCartesianDatasourceInterface::GetSeriesDatapoints(int32_t SeriesIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianDatasourceInterface", "GetSeriesDatapoints");
    struct
    {
        int32_t SeriesIdx;
        struct TArray<struct FKantanCartesianDatapoint> ReturnValue;
    } Parms{};
    Parms.SeriesIdx = (int32_t)SeriesIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IKantanCartesianDatasourceInterface::GetNumSeries()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCartesianDatasourceInterface", "GetNumSeries");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IKantanCategoryDatasourceInterface
int32_t IKantanCategoryDatasourceInterface::GetNumCategories()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCategoryDatasourceInterface", "GetNumCategories");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float IKantanCategoryDatasourceInterface::GetCategoryValue(int32_t CatIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCategoryDatasourceInterface", "GetCategoryValue");
    struct
    {
        int32_t CatIdx;
        float ReturnValue;
    } Parms{};
    Parms.CatIdx = (int32_t)CatIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText IKantanCategoryDatasourceInterface::GetCategoryName(int32_t CatIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCategoryDatasourceInterface", "GetCategoryName");
    struct
    {
        int32_t CatIdx;
        struct FText ReturnValue;
    } Parms{};
    Parms.CatIdx = (int32_t)CatIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName IKantanCategoryDatasourceInterface::GetCategoryId(int32_t CatIdx)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanCategoryDatasourceInterface", "GetCategoryId");
    struct
    {
        int32_t CatIdx;
        struct FName ReturnValue;
    } Parms{};
    Parms.CatIdx = (int32_t)CatIdx;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UKantanSimpleCartesianDatasource
struct UKantanSimpleCartesianDatasource* UKantanSimpleCartesianDatasource::NewSimpleCartesianDatasource(int32_t MaxDatapoints)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KantanSimpleCartesianDatasource", "NewSimpleCartesianDatasource");
    struct
    {
        int32_t MaxDatapoints;
        struct UKantanSimpleCartesianDatasource* ReturnValue;
    } Parms{};
    Parms.MaxDatapoints = (int32_t)MaxDatapoints;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UKantanSimpleCartesianDatasource::BP_SetDatapointLimit(int32_t Limit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCartesianDatasource", "BP_SetDatapointLimit");
    struct
    {
        int32_t Limit;
    } Parms{};
    Parms.Limit = (int32_t)Limit;
    this->ProcessEvent(Func, &Parms);
}

void UKantanSimpleCartesianDatasource::BP_RemoveSeries(struct FName ID, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCartesianDatasource", "BP_RemoveSeries");
    struct
    {
        struct FName ID;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void UKantanSimpleCartesianDatasource::BP_RemoveAllSeries()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCartesianDatasource", "BP_RemoveAllSeries");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKantanSimpleCartesianDatasource::BP_AddSeriesWithId(struct FName ID, struct FText Name, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCartesianDatasource", "BP_AddSeriesWithId");
    struct
    {
        struct FName ID;
        struct FText Name;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void UKantanSimpleCartesianDatasource::BP_AddSeries(struct FText Name, struct FName& SeriesId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCartesianDatasource", "BP_AddSeries");
    struct
    {
        struct FText Name;
        struct FName SeriesId;
    } Parms{};
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
    SeriesId = Parms.SeriesId;
}

void UKantanSimpleCartesianDatasource::BP_AddDatapoint(struct FName SeriesId, const struct FVector2D& Point, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCartesianDatasource", "BP_AddDatapoint");
    struct
    {
        struct FName SeriesId;
        struct FVector2D Point;
        uint8_t bSuccess;
    } Parms{};
    Parms.SeriesId = (struct FName)SeriesId;
    Parms.Point = (struct FVector2D)Point;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

// UKantanSimpleCategoryDatasource
struct UKantanSimpleCategoryDatasource* UKantanSimpleCategoryDatasource::NewSimpleCategoryDatasource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KantanSimpleCategoryDatasource", "NewSimpleCategoryDatasource");
    struct
    {
        struct UKantanSimpleCategoryDatasource* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UKantanSimpleCategoryDatasource::BP_UpdateCategoryValue(struct FName ID, float Value, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCategoryDatasource", "BP_UpdateCategoryValue");
    struct
    {
        struct FName ID;
        float Value;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void UKantanSimpleCategoryDatasource::BP_RemoveCategory(struct FName ID, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCategoryDatasource", "BP_RemoveCategory");
    struct
    {
        struct FName ID;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void UKantanSimpleCategoryDatasource::BP_RemoveAllCategories()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCategoryDatasource", "BP_RemoveAllCategories");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UKantanSimpleCategoryDatasource::BP_AddCategoryWithId(struct FName ID, struct FText Name, uint8_t& bSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCategoryDatasource", "BP_AddCategoryWithId");
    struct
    {
        struct FName ID;
        struct FText Name;
        uint8_t bSuccess;
    } Parms{};
    Parms.ID = (struct FName)ID;
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
    bSuccess = Parms.bSuccess;
}

void UKantanSimpleCategoryDatasource::BP_AddCategory(struct FText Name, struct FName& CatId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("KantanSimpleCategoryDatasource", "BP_AddCategory");
    struct
    {
        struct FText Name;
        struct FName CatId;
    } Parms{};
    Parms.Name = (struct FText)Name;
    this->ProcessEvent(Func, &Parms);
    CatId = Parms.CatId;
}

} // namespace SDK
