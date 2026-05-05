#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: MetaExtra
// Enums: 1
// Structs: 1
// Classes: 4

struct FMTIOTestData2;
struct UMTTestUObject1;
struct UMTTestUObject2;
struct UMTTestUObject3;
struct UMTIOTestData3;

// Object: Enum MetaExtra.EMTTestEnum1
enum class EMTTestEnum1 : uint8_t
{
	Excellent = 0,
	Good = 1,
	Normal = 2,
	Underperformed = 3,
	Bad = 4,
	EMTTestEnum1_MAX = 5
};

// Object: ScriptStruct MetaExtra.MTIOTestData2
// Size: 0x3C0 (Inherited: 0x0)
struct FMTIOTestData2
{
	int8_t IntVal0; // 0x0(0x1)
	uint8_t Pad_0x1[0x1]; // 0x1(0x1)
	int16_t IntVal1; // 0x2(0x2)
	int32_t IntVal2; // 0x4(0x4)
	int64_t IntVal3; // 0x8(0x8)
	uint8_t IntVal4; // 0x10(0x1)
	uint8_t Pad_0x11[0x1]; // 0x11(0x1)
	uint16_t IntVal5; // 0x12(0x2)
	uint32_t IntVal6; // 0x14(0x4)
	uint64_t IntVal7; // 0x18(0x8)
	uint8_t BoolVal0 : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t BoolVal1 : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t BoolVal2 : 1; // 0x22(0x1), Mask(0x1)
	uint8_t BoolVal3 : 1; // 0x22(0x1), Mask(0x2)
	uint8_t BitPad_0x22_2 : 6; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	float FloatVal0; // 0x24(0x4)
	double FloatVal1; // 0x28(0x8)
	struct FVector Vec0; // 0x30(0xC)
	struct FVector2D Vec1; // 0x3C(0x8)
	uint8_t Pad_0x44[0xC]; // 0x44(0xC)
	struct FVector4 Vec2; // 0x50(0x10)
	struct FQuat Quat; // 0x60(0x10)
	struct FTransform Trans; // 0x70(0x30)
	struct FLinearColor Color; // 0xA0(0x10)
	struct FMatrix Mat; // 0xB0(0x40)
	struct FRotator Rot; // 0xF0(0xC)
	struct FBoxSphereBounds BoxSphereBounds; // 0xFC(0x1C)
	struct FOrientedBox OrientedBox; // 0x118(0x3C)
	struct FRay Ray; // 0x154(0x18)
	struct FSphere Sphere; // 0x16C(0x10)
	struct FCapsuleShape CapsuleShape; // 0x17C(0x20)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)
	struct FPlane Plane; // 0x1A0(0x10)
	struct TArray<int64_t> IntArray; // 0x1B0(0x10)
	struct TArray<struct UObject*> UObjArray; // 0x1C0(0x10)
	struct TArray<struct UMTTestUObject1*> UObjSubClassArray; // 0x1D0(0x10)
	struct TMap<int64_t, int64_t> IntMap; // 0x1E0(0x50)
	struct TMap<int64_t, struct UObject*> UObjMap; // 0x230(0x50)
	struct TMap<int64_t, struct UMTTestUObject1*> UObjSubClassMap; // 0x280(0x50)
	struct TSet<int64_t> IntSet; // 0x2D0(0x50)
	struct TSet<struct UObject*> UObjSet; // 0x320(0x50)
	struct TSet<struct UMTTestUObject1*> UObjSubClassSet; // 0x370(0x50)
};

// Object: Class MetaExtra.MTTestUObject1
// Size: 0x48 (Inherited: 0x28)
struct UMTTestUObject1 : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMTTestUObject1, "MTTestUObject1")

	struct FString Name; // 0x28(0x10)
	int64_t ID; // 0x38(0x8)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MetaExtra.MTTestUObject2
// Size: 0x48 (Inherited: 0x48)
struct UMTTestUObject2 : UMTTestUObject1
{
	DEFINE_UE_CLASS_HELPERS(UMTTestUObject2, "MTTestUObject2")

	EMTTestEnum1 Evaluation; // 0x44(0x4)
};

// Object: Class MetaExtra.MTTestUObject3
// Size: 0x40 (Inherited: 0x28)
struct UMTTestUObject3 : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMTTestUObject3, "MTTestUObject3")

	struct FString Nation; // 0x28(0x10)
	int64_t ZipCode; // 0x38(0x8)
};

// Object: Class MetaExtra.MTIOTestData3
// Size: 0x3E0 (Inherited: 0x28)
struct UMTIOTestData3 : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMTIOTestData3, "MTIOTestData3")

	int8_t IntVal0; // 0x28(0x1)
	uint8_t Pad_0x29[0x1]; // 0x29(0x1)
	int16_t IntVal1; // 0x2A(0x2)
	int32_t IntVal2; // 0x2C(0x4)
	int64_t IntVal3; // 0x30(0x8)
	uint8_t IntVal4; // 0x38(0x1)
	uint8_t Pad_0x39[0x1]; // 0x39(0x1)
	uint16_t IntVal5; // 0x3A(0x2)
	uint32_t IntVal6; // 0x3C(0x4)
	uint64_t IntVal7; // 0x40(0x8)
	uint8_t BoolVal0 : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t BoolVal1 : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t BoolVal2 : 1; // 0x4A(0x1), Mask(0x1)
	uint8_t BoolVal3 : 1; // 0x4A(0x1), Mask(0x2)
	uint8_t BitPad_0x4A_2 : 6; // 0x4A(0x1)
	uint8_t Pad_0x4B[0x1]; // 0x4B(0x1)
	float FloatVal0; // 0x4C(0x4)
	double FloatVal1; // 0x50(0x8)
	struct FVector Vec0; // 0x58(0xC)
	struct FVector2D Vec1; // 0x64(0x8)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FVector4 Vec2; // 0x70(0x10)
	struct FQuat Quat; // 0x80(0x10)
	struct FTransform Trans; // 0x90(0x30)
	struct FLinearColor Color; // 0xC0(0x10)
	struct FMatrix Mat; // 0xD0(0x40)
	struct FRotator Rot; // 0x110(0xC)
	struct FBoxSphereBounds BoxSphereBounds; // 0x11C(0x1C)
	struct FOrientedBox OrientedBox; // 0x138(0x3C)
	struct FRay Ray; // 0x174(0x18)
	struct FSphere Sphere; // 0x18C(0x10)
	struct FCapsuleShape CapsuleShape; // 0x19C(0x20)
	uint8_t Pad_0x1BC[0x4]; // 0x1BC(0x4)
	struct FPlane Plane; // 0x1C0(0x10)
	struct TArray<int64_t> IntArray; // 0x1D0(0x10)
	struct TArray<struct UObject*> UObjArray; // 0x1E0(0x10)
	struct TArray<struct UMTTestUObject1*> UObjSubClassArray; // 0x1F0(0x10)
	struct TMap<int64_t, int64_t> IntMap; // 0x200(0x50)
	struct TMap<int64_t, struct UObject*> UObjMap; // 0x250(0x50)
	struct TMap<int64_t, struct UMTTestUObject1*> UObjSubClassMap; // 0x2A0(0x50)
	struct TSet<int64_t> IntSet; // 0x2F0(0x50)
	struct TSet<struct UObject*> UObjSet; // 0x340(0x50)
	struct TSet<struct UMTTestUObject1*> UObjSubClassSet; // 0x390(0x50)

	// Object: Function MetaExtra.MTIOTestData3.TriggerContainerPassTest
	// Flags: [Final|Native|Public]
	// Offset: 0x155d2220
	// Params: [ Num(0) Size(0x0) ]
	void TriggerContainerPassTest();

	// Object: Function MetaExtra.MTIOTestData3.PrintInfo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155d220c
	// Params: [ Num(0) Size(0x0) ]
	static void PrintInfo();

	// Object: Function MetaExtra.MTIOTestData3.Init
	// Flags: [Final|Native|Public]
	// Offset: 0x155d21f8
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function MetaExtra.MTIOTestData3.CombinedTest
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155d21e4
	// Params: [ Num(0) Size(0x0) ]
	static void CombinedTest();
};

} // namespace SDK
