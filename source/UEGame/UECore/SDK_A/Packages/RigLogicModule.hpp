#pragma once

#include "../CoreUObject_classes.hpp"
#include "ControlRig.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: RigLogicModule
// Enums: 7
// Structs: 7
// Classes: 1

struct USkeletalMeshComponent;
struct FVertexLayout;
struct FTextureCoordinate;
struct FMeshBlendShapeChannelMapping;
struct FCoordinateSystem;
struct FRigUnit_RigLogic_Data;
struct FRigUnit_RigLogic;
struct FRigUnit_RigLogic_IntArray;
struct UDNAAsset;

// Object: Enum RigLogicModule.EDNADataLayer
enum class EDNADataLayer : uint8_t
{
	Descriptor = 0,
	Definition = 1,
	Behavior = 2,
	Geometry = 3,
	GeometryWithoutBlendShapes = 4,
	AllWithoutBlendShapes = 5,
	All = 6,
	EDNADataLayer_MAX = 7
};

// Object: Enum RigLogicModule.EDirection
enum class EDirection : uint8_t
{
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Front = 4,
	Back = 5,
	EDirection_MAX = 6
};

// Object: Enum RigLogicModule.ERotationUnit
enum class ERotationUnit : uint8_t
{
	Degrees = 0,
	Radians = 1,
	ERotationUnit_MAX = 2
};

// Object: Enum RigLogicModule.ETranslationUnit
enum class ETranslationUnit : uint8_t
{
	CM = 0,
	M = 1,
	ETranslationUnit_MAX = 2
};

// Object: Enum RigLogicModule.EGender
enum class EGender : uint8_t
{
	Male = 0,
	Female = 1,
	Other = 2,
	EGender_MAX = 3
};

// Object: Enum RigLogicModule.EArchetype
enum class EArchetype : uint8_t
{
	Asian = 0,
	Black = 1,
	Caucasian = 2,
	Hispanic = 3,
	Alien = 4,
	Other = 5,
	EArchetype_MAX = 6
};

// Object: Enum RigLogicModule.ERigLogicCalculationType
enum class ERigLogicCalculationType : uint8_t
{
	Scalar = 0,
	SSE = 1,
	AVX = 2,
	ERigLogicCalculationType_MAX = 3
};

// Object: ScriptStruct RigLogicModule.VertexLayout
// Size: 0xC (Inherited: 0x0)
struct FVertexLayout
{
	int32_t position; // 0x0(0x4)
	int32_t TextureCoordinate; // 0x4(0x4)
	int32_t Normal; // 0x8(0x4)
};

// Object: ScriptStruct RigLogicModule.TextureCoordinate
// Size: 0x8 (Inherited: 0x0)
struct FTextureCoordinate
{
	float U; // 0x0(0x4)
	float V; // 0x4(0x4)
};

// Object: ScriptStruct RigLogicModule.MeshBlendShapeChannelMapping
// Size: 0x8 (Inherited: 0x0)
struct FMeshBlendShapeChannelMapping
{
	int32_t MeshIndex; // 0x0(0x4)
	int32_t BlendShapeChannelIndex; // 0x4(0x4)
};

// Object: ScriptStruct RigLogicModule.CoordinateSystem
// Size: 0x3 (Inherited: 0x0)
struct FCoordinateSystem
{
	EDirection XAxis; // 0x0(0x1)
	EDirection YAxis; // 0x1(0x1)
	EDirection ZAxis; // 0x2(0x1)
};

// Object: ScriptStruct RigLogicModule.RigUnit_RigLogic_Data
// Size: 0x80 (Inherited: 0x0)
struct FRigUnit_RigLogic_Data
{
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkelMeshComponent; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
	struct TArray<int32_t> InputCurveIndices; // 0x18(0x10)
	struct TArray<int32_t> HierarchyBoneIndices; // 0x28(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices; // 0x38(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> BlendShapeIndices; // 0x48(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> CurveContainerIndicesForAnimMaps; // 0x58(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps; // 0x68(0x10)
	uint32_t CurrentLOD; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
};

// Object: ScriptStruct RigLogicModule.RigUnit_RigLogic
// Size: 0xE8 (Inherited: 0x68)
struct FRigUnit_RigLogic : FRigUnitMutable
{
	struct FRigUnit_RigLogic_Data Data; // 0x68(0x80)
};

// Object: ScriptStruct RigLogicModule.RigUnit_RigLogic_IntArray
// Size: 0x10 (Inherited: 0x0)
struct FRigUnit_RigLogic_IntArray
{
	struct TArray<int32_t> Values; // 0x0(0x10)
};

// Object: Class RigLogicModule.DNAAsset
// Size: 0x78 (Inherited: 0x28)
struct UDNAAsset : UAssetUserData
{
	DEFINE_UE_CLASS_HELPERS(UDNAAsset, "DNAAsset")

	struct FString DNAFileName; // 0x28(0x10)
	uint8_t Pad_0x38[0x40]; // 0x38(0x40)
};

} // namespace SDK
