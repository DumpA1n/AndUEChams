#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PropertyAccess
// Enums: 4
// Structs: 7
// Classes: 3

struct FPropertyAccessCopyBatch;
struct FPropertyAccessLibrary;
struct FPropertyAccessIndirection;
struct FPropertyAccessIndirectionChain;
struct FPropertyAccessCopy;
struct FPropertyAccessPath;
struct FPropertyAccessSegment;
struct IPropertyAccess;
struct IPropertyEventBroadcaster;
struct IPropertyEventSubscriber;

// Object: Enum PropertyAccess.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5
};

// Object: Enum PropertyAccess.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
	None = 0,
	Plain = 1,
	Complex = 2,
	Bool = 3,
	Struct = 4,
	Object = 5,
	Name = 6,
	Array = 7,
	PromoteBoolToByte = 8,
	PromoteBoolToInt32 = 9,
	PromoteBoolToInt64 = 10,
	PromoteBoolToFloat = 11,
	PromoteByteToInt32 = 12,
	PromoteByteToInt64 = 13,
	PromoteByteToFloat = 14,
	PromoteInt32ToInt64 = 15,
	PromoteInt32ToFloat = 16,
	EPropertyAccessCopyType_MAX = 17
};

// Object: Enum PropertyAccess.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4
};

// Object: Enum PropertyAccess.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5
};

// Object: ScriptStruct PropertyAccess.PropertyAccessCopyBatch
// Size: 0x10 (Inherited: 0x0)
struct FPropertyAccessCopyBatch
{
	struct TArray<struct FPropertyAccessCopy> Copies; // 0x0(0x10)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessLibrary
// Size: 0xC8 (Inherited: 0x0)
struct FPropertyAccessLibrary
{
	struct TArray<struct FPropertyAccessSegment> PathSegments; // 0x0(0x10)
	struct TArray<struct FPropertyAccessPath> SrcPaths; // 0x10(0x10)
	struct TArray<struct FPropertyAccessPath> DestPaths; // 0x20(0x10)
	struct FPropertyAccessCopyBatch CopyBatches[0x4]; // 0x30(0x40)
	struct TArray<struct FPropertyAccessIndirectionChain> SrcAccesses; // 0x70(0x10)
	struct TArray<struct FPropertyAccessIndirectionChain> DestAccesses; // 0x80(0x10)
	struct TArray<struct FPropertyAccessIndirection> Indirections; // 0x90(0x10)
	struct TArray<int32_t> EventAccessIndices; // 0xA0(0x10)
	uint8_t Pad_0xB0[0x18]; // 0xB0(0x18)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessIndirection
// Size: 0x40 (Inherited: 0x0)
struct FPropertyAccessIndirection
{
	struct TFieldPath<FArrayProperty> ArrayProperty; // 0x0(0x20)
	struct UFunction* Function; // 0x20(0x8)
	int32_t ReturnBufferSize; // 0x28(0x4)
	int32_t ReturnBufferAlignment; // 0x2C(0x4)
	int32_t ArrayIndex; // 0x30(0x4)
	uint32_t Offset; // 0x34(0x4)
	EPropertyAccessObjectType ObjectType; // 0x38(0x1)
	EPropertyAccessIndirectionType Type; // 0x39(0x1)
	uint8_t Pad_0x3A[0x6]; // 0x3A(0x6)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
// Size: 0x30 (Inherited: 0x0)
struct FPropertyAccessIndirectionChain
{
	struct TFieldPath<FProperty> Property; // 0x0(0x20)
	int32_t IndirectionStartIndex; // 0x20(0x4)
	int32_t IndirectionEndIndex; // 0x24(0x4)
	int32_t EventId; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessCopy
// Size: 0x10 (Inherited: 0x0)
struct FPropertyAccessCopy
{
	int32_t AccessIndex; // 0x0(0x4)
	int32_t DestAccessStartIndex; // 0x4(0x4)
	int32_t DestAccessEndIndex; // 0x8(0x4)
	EPropertyAccessCopyType Type; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessPath
// Size: 0xC (Inherited: 0x0)
struct FPropertyAccessPath
{
	int32_t PathSegmentStartIndex; // 0x0(0x4)
	int32_t PathSegmentCount; // 0x4(0x4)
	uint8_t bHasEvents : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
};

// Object: ScriptStruct PropertyAccess.PropertyAccessSegment
// Size: 0x40 (Inherited: 0x0)
struct FPropertyAccessSegment
{
	struct FName Name; // 0x0(0x8)
	struct UStruct* Struct; // 0x8(0x8)
	struct TFieldPath<FProperty> Property; // 0x10(0x20)
	struct UFunction* Function; // 0x30(0x8)
	int32_t ArrayIndex; // 0x38(0x4)
	uint16_t Flags; // 0x3C(0x2)
	uint8_t Pad_0x3E[0x2]; // 0x3E(0x2)
};

// Object: Class PropertyAccess.PropertyAccess
// Size: 0x28 (Inherited: 0x28)
struct IPropertyAccess : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IPropertyAccess, "PropertyAccess")
};

// Object: Class PropertyAccess.PropertyEventBroadcaster
// Size: 0x28 (Inherited: 0x28)
struct IPropertyEventBroadcaster : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IPropertyEventBroadcaster, "PropertyEventBroadcaster")
};

// Object: Class PropertyAccess.PropertyEventSubscriber
// Size: 0x28 (Inherited: 0x28)
struct IPropertyEventSubscriber : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IPropertyEventSubscriber, "PropertyEventSubscriber")
};

} // namespace SDK
