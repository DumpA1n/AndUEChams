#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: KantanChartsDatasource
// Enums: 0
// Structs: 1
// Classes: 4

struct FKantanCartesianDatapoint;
struct IKantanCartesianDatasourceInterface;
struct IKantanCategoryDatasourceInterface;
struct UKantanSimpleCartesianDatasource;
struct UKantanSimpleCategoryDatasource;

// Object: ScriptStruct KantanChartsDatasource.KantanCartesianDatapoint
// Size: 0x8 (Inherited: 0x0)
struct FKantanCartesianDatapoint
{
	struct FVector2D Coords; // 0x0(0x8)
};

// Object: Class KantanChartsDatasource.KantanCartesianDatasourceInterface
// Size: 0x28 (Inherited: 0x28)
struct IKantanCartesianDatasourceInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IKantanCartesianDatasourceInterface, "KantanCartesianDatasourceInterface")

	// Object: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x777efb4
	// Params: [ Num(2) Size(0x20) ]
	struct FText GetSeriesName(int32_t SeriesIdx);

	// Object: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesId
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x777ef00
	// Params: [ Num(2) Size(0xC) ]
	struct FName GetSeriesId(int32_t CatIdx);

	// Object: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesDatapoints
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x777ee18
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FKantanCartesianDatapoint> GetSeriesDatapoints(int32_t SeriesIdx);

	// Object: Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetNumSeries
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x777eddc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumSeries();
};

// Object: Class KantanChartsDatasource.KantanCategoryDatasourceInterface
// Size: 0x28 (Inherited: 0x28)
struct IKantanCategoryDatasourceInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IKantanCategoryDatasourceInterface, "KantanCategoryDatasourceInterface")

	// Object: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x777f854
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumCategories();

	// Object: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryValue
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x777f7a0
	// Params: [ Num(2) Size(0x8) ]
	float GetCategoryValue(int32_t CatIdx);

	// Object: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryName
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x777f680
	// Params: [ Num(2) Size(0x20) ]
	struct FText GetCategoryName(int32_t CatIdx);

	// Object: Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetCategoryId
	// Flags: [Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const]
	// Offset: 0x777f5cc
	// Params: [ Num(2) Size(0xC) ]
	struct FName GetCategoryId(int32_t CatIdx);
};

// Object: Class KantanChartsDatasource.KantanSimpleCartesianDatasource
// Size: 0x48 (Inherited: 0x28)
struct UKantanSimpleCartesianDatasource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UKantanSimpleCartesianDatasource, "KantanSimpleCartesianDatasource")

	uint8_t Pad_0x28[0x20]; // 0x28(0x20)

	// Object: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x77803e4
	// Params: [ Num(2) Size(0x10) ]
	static struct UKantanSimpleCartesianDatasource* NewSimpleCartesianDatasource(int32_t MaxDatapoints);

	// Object: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_SetDatapointLimit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7780340
	// Params: [ Num(1) Size(0x4) ]
	void BP_SetDatapointLimit(int32_t Limit);

	// Object: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7780250
	// Params: [ Num(2) Size(0x9) ]
	void BP_RemoveSeries(struct FName ID, uint8_t& bSuccess);

	// Object: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_RemoveAllSeries
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x778023c
	// Params: [ Num(0) Size(0x0) ]
	void BP_RemoveAllSeries();

	// Object: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeriesWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7780034
	// Params: [ Num(3) Size(0x21) ]
	void BP_AddSeriesWithId(struct FName ID, struct FText Name, uint8_t& bSuccess);

	// Object: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddSeries
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x777fe68
	// Params: [ Num(2) Size(0x20) ]
	void BP_AddSeries(struct FText Name, struct FName& SeriesId);

	// Object: Function KantanChartsDatasource.KantanSimpleCartesianDatasource.BP_AddDatapoint
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x777fd30
	// Params: [ Num(3) Size(0x11) ]
	void BP_AddDatapoint(struct FName SeriesId, const struct FVector2D& Point, uint8_t& bSuccess);
};

// Object: Class KantanChartsDatasource.KantanSimpleCategoryDatasource
// Size: 0x40 (Inherited: 0x28)
struct UKantanSimpleCategoryDatasource : UObject
{
	DEFINE_UE_CLASS_HELPERS(UKantanSimpleCategoryDatasource, "KantanSimpleCategoryDatasource")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)

	// Object: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7780ab8
	// Params: [ Num(1) Size(0x8) ]
	static struct UKantanSimpleCategoryDatasource* NewSimpleCategoryDatasource();

	// Object: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_UpdateCategoryValue
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x778098c
	// Params: [ Num(3) Size(0xD) ]
	void BP_UpdateCategoryValue(struct FName ID, float Value, uint8_t& bSuccess);

	// Object: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x778089c
	// Params: [ Num(2) Size(0x9) ]
	void BP_RemoveCategory(struct FName ID, uint8_t& bSuccess);

	// Object: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_RemoveAllCategories
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7780888
	// Params: [ Num(0) Size(0x0) ]
	void BP_RemoveAllCategories();

	// Object: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategoryWithId
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7780680
	// Params: [ Num(3) Size(0x21) ]
	void BP_AddCategoryWithId(struct FName ID, struct FText Name, uint8_t& bSuccess);

	// Object: Function KantanChartsDatasource.KantanSimpleCategoryDatasource.BP_AddCategory
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x77804b4
	// Params: [ Num(2) Size(0x20) ]
	void BP_AddCategory(struct FText Name, struct FName& CatId);
};

} // namespace SDK
