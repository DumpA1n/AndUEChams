#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFDataVisualizer
// Enums: 2
// Structs: 4
// Classes: 6

struct AActor;
struct UMaterialInterface;
struct UStaticMesh;
struct UWorld;
struct FSceneObjeInfo_Base;
struct FSceneObjInfo_RenderObj;
struct FSceneObjInfo_Foliage;
struct FSceneObjInfo_StaticMeshActor;
struct UMFStatCollectCore;
struct UMFStatisticDataCollectCore;
struct UMFStatisticDataCollectCore_SMBound;
struct UMFStatisticDataCollectCore_RenderObjCount;
struct UMFStatisticDataCollectCore_Foliage;
struct AMFStatisticDataVisualizeActor;

// Object: Enum MFDataVisualizer.EFoliageCollectType
enum class EFoliageCollectType : uint8_t
{
	E_FoliageCount = 0,
	E_FaceCount = 1,
	E_TypeCount = 2,
	E_MAX = 3
};

// Object: Enum MFDataVisualizer.ERenderObjType
enum class ERenderObjType : uint8_t
{
	E_PrimitiveCount = 0,
	E_FaceCount = 1,
	E_InstrucmentCount = 2,
	E_MAX = 3
};

// Object: ScriptStruct MFDataVisualizer.SceneObjeInfo_Base
// Size: 0x28 (Inherited: 0x0)
struct FSceneObjeInfo_Base
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct MFDataVisualizer.SceneObjInfo_RenderObj
// Size: 0x38 (Inherited: 0x28)
struct FSceneObjInfo_RenderObj : FSceneObjeInfo_Base
{
	struct UStaticMesh* MeshResource; // 0x28(0x8)
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
};

// Object: ScriptStruct MFDataVisualizer.SceneObjInfo_Foliage
// Size: 0x30 (Inherited: 0x28)
struct FSceneObjInfo_Foliage : FSceneObjeInfo_Base
{
	struct UStaticMesh* MeshResource; // 0x28(0x8)
};

// Object: ScriptStruct MFDataVisualizer.SceneObjInfo_StaticMeshActor
// Size: 0x48 (Inherited: 0x28)
struct FSceneObjInfo_StaticMeshActor : FSceneObjeInfo_Base
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UStaticMesh* MeshResource; // 0x38(0x8)
	struct UMaterialInterface* MainMat; // 0x40(0x8)
};

// Object: Class MFDataVisualizer.MFStatCollectCore
// Size: 0x28 (Inherited: 0x28)
struct UMFStatCollectCore : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFStatCollectCore, "MFStatCollectCore")

	// Object: Function MFDataVisualizer.MFStatCollectCore.InitAndCollect
	// Flags: [Native|Public]
	// Offset: 0x40853e8
	// Params: [ Num(1) Size(0x8) ]
	void InitAndCollect(struct UWorld* InWorld);
};

// Object: Class MFDataVisualizer.MFStatisticDataCollectCore
// Size: 0x38 (Inherited: 0x28)
struct UMFStatisticDataCollectCore : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFStatisticDataCollectCore, "MFStatisticDataCollectCore")

	struct TArray<struct FSceneObjeInfo_Base> SceneInfoCollect; // 0x28(0x10)

	// Object: Function MFDataVisualizer.MFStatisticDataCollectCore.CookAllSceneInfoToSceneObjData
	// Flags: [Native|Public]
	// Offset: 0x4085568
	// Params: [ Num(1) Size(0x8) ]
	void CookAllSceneInfoToSceneObjData(struct AActor* ConvertParent);

	// Object: Function MFDataVisualizer.MFStatisticDataCollectCore.CollectSceneInfo
	// Flags: [Native|Public]
	// Offset: 0x4085618
	// Params: [ Num(1) Size(0x8) ]
	void CollectSceneInfo(struct UWorld* InWorld);
};

// Object: Class MFDataVisualizer.MFStatisticDataCollectCore_SMBound
// Size: 0x48 (Inherited: 0x38)
struct UMFStatisticDataCollectCore_SMBound : UMFStatisticDataCollectCore
{
	DEFINE_UE_CLASS_HELPERS(UMFStatisticDataCollectCore_SMBound, "MFStatisticDataCollectCore_SMBound")

	struct TArray<struct FSceneObjInfo_StaticMeshActor> SceneInfoCollect_SM; // 0x38(0x10)
};

// Object: Class MFDataVisualizer.MFStatisticDataCollectCore_RenderObjCount
// Size: 0x50 (Inherited: 0x38)
struct UMFStatisticDataCollectCore_RenderObjCount : UMFStatisticDataCollectCore
{
	DEFINE_UE_CLASS_HELPERS(UMFStatisticDataCollectCore_RenderObjCount, "MFStatisticDataCollectCore_RenderObjCount")

	struct TArray<struct FSceneObjInfo_RenderObj> SceneInfoCollect_RenderObj; // 0x38(0x10)
	bool bIncludeFoliage; // 0x48(0x1)
	bool bCollectCenterMode; // 0x49(0x1)
	ERenderObjType RenderObjType; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x5]; // 0x4B(0x5)
};

// Object: Class MFDataVisualizer.MFStatisticDataCollectCore_Foliage
// Size: 0x50 (Inherited: 0x38)
struct UMFStatisticDataCollectCore_Foliage : UMFStatisticDataCollectCore
{
	DEFINE_UE_CLASS_HELPERS(UMFStatisticDataCollectCore_Foliage, "MFStatisticDataCollectCore_Foliage")

	struct TArray<struct FSceneObjInfo_Foliage> SceneInfoCollect_Foliage; // 0x38(0x10)
	EFoliageCollectType MyCollectType; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
};

// Object: Class MFDataVisualizer.MFStatisticDataVisualizeActor
// Size: 0x388 (Inherited: 0x300)
struct AMFStatisticDataVisualizeActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFStatisticDataVisualizeActor, "MFStatisticDataVisualizeActor")

	struct UMFStatisticDataCollectCore* DataCollecterClass; // 0x300(0x8)
	struct UMFStatCollectCore* StatCollectClass; // 0x308(0x8)
	struct UStaticMesh* PixelMesh; // 0x310(0x8)
	float PixelSize; // 0x318(0x4)
	uint8_t Pad_0x31C[0x4]; // 0x31C(0x4)
	struct AActor* StartAnchor; // 0x320(0x8)
	struct AActor* EndAnchor; // 0x328(0x8)
	float DataUpperLimit; // 0x330(0x4)
	float DataLowerLimit; // 0x334(0x4)
	int32_t XCountCache; // 0x338(0x4)
	int32_t YCountCache; // 0x33C(0x4)
	struct TArray<float> DataCache; // 0x340(0x10)
	struct TArray<struct FVector4> DataCache_FourDir; // 0x350(0x10)
	struct TArray<struct UMaterialInterface*> ColorLevelMaterial; // 0x360(0x10)
	struct AActor* MarkerClass; // 0x370(0x8)
	struct FString NewLine; // 0x378(0x10)

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.TestToggleFoliage
	// Flags: [Final|Native|Public]
	// Offset: 0x4085798
	// Params: [ Num(0) Size(0x0) ]
	void TestToggleFoliage();

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.PushDataToCell_ForDir
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x4085b74
	// Params: [ Num(3) Size(0x14) ]
	void PushDataToCell_ForDir(float Data, struct FVector Pos, float RotZ);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.PushDataToCell
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x4085c9c
	// Params: [ Num(2) Size(0x10) ]
	void PushDataToCell(float Data, struct FVector Pos);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.InitDataFromBorder
	// Flags: [Final|Native|Public]
	// Offset: 0x4085784
	// Params: [ Num(0) Size(0x0) ]
	void InitDataFromBorder();

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.GetXYCountFromBorder
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x4085a74
	// Params: [ Num(2) Size(0x8) ]
	void GetXYCountFromBorder(int32_t& XCount, int32_t& YCount);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.GetPosFromID
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x40857ac
	// Params: [ Num(2) Size(0x10) ]
	struct FVector GetPosFromID(int32_t ID);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.GetMaterialFromColorLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x4085d84
	// Params: [ Num(2) Size(0x10) ]
	struct UMaterialInterface* GetMaterialFromColorLevel(int32_t Level);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.GetIDFromPos
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x4085860
	// Params: [ Num(2) Size(0x10) ]
	int32_t GetIDFromPos(struct FVector Pos);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.GetColorLevelFromData
	// Flags: [Final|Native|Public]
	// Offset: 0x4085e34
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetColorLevelFromData(float Data);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.GetCellDataFromPos
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x40859c4
	// Params: [ Num(2) Size(0x10) ]
	float GetCellDataFromPos(struct FVector Pos);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.GetCellData_WithDir_FromPos
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x4085910
	// Params: [ Num(2) Size(0x20) ]
	struct FVector4 GetCellData_WithDir_FromPos(struct FVector Pos);

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.FlushVisualBox_WithDir
	// Flags: [Final|Native|Public]
	// Offset: 0x4085748
	// Params: [ Num(0) Size(0x0) ]
	void FlushVisualBox_WithDir();

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.FlushVisualBox
	// Flags: [Final|Native|Public]
	// Offset: 0x408575c
	// Params: [ Num(0) Size(0x0) ]
	void FlushVisualBox();

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.FillDataFromSceneObj
	// Flags: [Final|Native|Public]
	// Offset: 0x4085770
	// Params: [ Num(0) Size(0x0) ]
	void FillDataFromSceneObj();

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.FillAreaWithMarker
	// Flags: [Final|Native|Public]
	// Offset: 0x4085734
	// Params: [ Num(0) Size(0x0) ]
	void FillAreaWithMarker();

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.ExportDataPoints
	// Flags: [Final|Native|Public]
	// Offset: 0x408570c
	// Params: [ Num(0) Size(0x0) ]
	void ExportDataPoints();

	// Object: Function MFDataVisualizer.MFStatisticDataVisualizeActor.CollectStatData
	// Flags: [Final|Native|Public]
	// Offset: 0x4085720
	// Params: [ Num(0) Size(0x0) ]
	void CollectStatData();
};

} // namespace SDK
