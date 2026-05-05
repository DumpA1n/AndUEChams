#pragma once

#include "CoreUObject_structs.hpp"

namespace SDK
{

// Package: CoreUObject - Classes(60)

// Object: Class CoreUObject.Object
// Size: 0x28 (Inherited: 0x0)
struct UObject
{
	static inline class TUObjectArrayWrapper GObjects;
	DEFINE_UE_CLASS_HELPERS(UObject, "Object")

	void** VTable; // 0x0(0x8)
	struct UClass* ClassPrivate; // 0x8(0x8)
	struct UObject* OuterPrivate; // 0x10(0x8)
	uint32_t ObjectFlags; // 0x18(0x4)
	FName NamePrivate; // 0x1C(0x8)
	int32_t InternalIndex; // 0x24(0x4)

	// Object: Function CoreUObject.Object.ExecuteUbergraph
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph(int32_t EntryPoint);

	void ProcessEvent(struct UFunction* Function, void* Parms) const;

	std::string GetName() const;
	std::string GetFullName() const;

	bool IsA(EClassCastFlags TypeFlags) const;
	bool IsA(struct UClass* cmp) const;
	bool HasTypeFlag(EClassCastFlags TypeFlags) const;
	bool IsDefaultObject() const;

	void TraverseSupers(const std::function<bool(const struct UObject*)>& Callback) const;

	static struct UObject* FindObjectImpl(const std::string& FullName, EClassCastFlags RequiredType = EClassCastFlags{});
	static struct UObject* FindObjectFastImpl(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags{});

	template<typename UEType = UObject>
	static UEType* FindObject(const std::string& FullName, EClassCastFlags RequiredType = EClassCastFlags{})
	{ return static_cast<UEType*>(FindObjectImpl(FullName, RequiredType)); }

	template<typename UEType = UObject>
	static UEType* FindObjectFast(const std::string& Name, EClassCastFlags RequiredType = EClassCastFlags{})
	{ return static_cast<UEType*>(FindObjectFastImpl(Name, RequiredType)); }

	static struct UClass* FindClass(const std::string& ClassFullName);
	static struct UClass* FindClassFast(const std::string& ClassName);
};

// Object: Class CoreUObject.Interface
// Size: 0x28 (Inherited: 0x28)
struct IInterface : UObject
{
	DEFINE_UE_CLASS_HELPERS(IInterface, "Interface")
};

// Object: Class CoreUObject.Field
// Size: 0x30 (Inherited: 0x28)
struct UField : UObject
{
	DEFINE_UE_CLASS_HELPERS(UField, "Field")

	struct UField* Next; // 0x28(0x8)
};

// Object: Class CoreUObject.Struct
// Size: 0xB0 (Inherited: 0x30)
struct UStruct : UField
{
	DEFINE_UE_CLASS_HELPERS(UStruct, "Struct")

	uint8_t Pad_0x30[0xC]; // 0x30(0xC)
	int32_t PropertiesSize; // 0x3C(0x4)
	struct UStruct* SuperStruct; // 0x40(0x8)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
	struct UField* Children; // 0x50(0x8)
	uint8_t Pad_0x58[0x10]; // 0x58(0x10)
	struct FField* ChildProperties; // 0x68(0x8)
	uint8_t Pad_0x70[0x40]; // 0x70(0x40)
};

// Object: Class CoreUObject.Package
// Size: 0x90 (Inherited: 0x28)
struct UPackage : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPackage, "Package")

	uint8_t Pad_0x28[0x68]; // 0x28(0x68)
};

// Object: Class CoreUObject.Class
// Size: 0x280 (Inherited: 0xB0)
struct UClass : UStruct
{
	DEFINE_UE_CLASS_HELPERS(UClass, "Class")

	uint8_t Pad_0xB0[0x28]; // 0xB0(0x28)
	EClassCastFlags CastFlags; // 0xD8(0x8)
	uint8_t Pad_0xE0[0x58]; // 0xE0(0x58)
	struct UObject* DefaultObject; // 0x138(0x8)
	uint8_t Pad_0x140[0x140]; // 0x140(0x140)

	struct UFunction* GetFunction(const std::string& ClassName, const std::string& FuncName) const;
};

// Object: Class CoreUObject.Function
// Size: 0xE0 (Inherited: 0xB0)
struct UFunction : UStruct
{
	DEFINE_UE_CLASS_HELPERS(UFunction, "Function")

	uint8_t NumParams; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x1]; // 0xB1(0x1)
	uint16_t ParamSize; // 0xB2(0x2)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	uint32_t EFunctionFlags; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x1C]; // 0xBC(0x1C)
	void* Func; // 0xD8(0x8)
};

// Object: Class CoreUObject.PackageMap
// Size: 0xE0 (Inherited: 0x28)
struct UPackageMap : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPackageMap, "PackageMap")

	uint8_t Pad_0x28[0xB8]; // 0x28(0xB8)
};

// Object: Class CoreUObject.GCObjectReferencer
// Size: 0x70 (Inherited: 0x28)
struct UGCObjectReferencer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UGCObjectReferencer, "GCObjectReferencer")

	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
};

// Object: Class CoreUObject.TextBuffer
// Size: 0x50 (Inherited: 0x28)
struct UTextBuffer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UTextBuffer, "TextBuffer")

	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
};

// Object: Class CoreUObject.ScriptStruct
// Size: 0xC0 (Inherited: 0xB0)
struct UScriptStruct : UStruct
{
	DEFINE_UE_CLASS_HELPERS(UScriptStruct, "ScriptStruct")

	uint8_t Pad_0xB0[0x10]; // 0xB0(0x10)
};

// Object: Class CoreUObject.DelegateFunction
// Size: 0xE0 (Inherited: 0xE0)
struct UDelegateFunction : UFunction
{
	DEFINE_UE_CLASS_HELPERS(UDelegateFunction, "DelegateFunction")
};

// Object: Class CoreUObject.SparseDelegateFunction
// Size: 0xF0 (Inherited: 0xE0)
struct USparseDelegateFunction : UDelegateFunction
{
	DEFINE_UE_CLASS_HELPERS(USparseDelegateFunction, "SparseDelegateFunction")

	uint8_t Pad_0xE0[0x10]; // 0xE0(0x10)
};

// Object: Class CoreUObject.DynamicClass
// Size: 0x300 (Inherited: 0x280)
struct UDynamicClass : UClass
{
	DEFINE_UE_CLASS_HELPERS(UDynamicClass, "DynamicClass")

	uint8_t Pad_0x280[0x80]; // 0x280(0x80)
};

// Object: Class CoreUObject.Enum
// Size: 0x60 (Inherited: 0x30)
struct UEnum : UField
{
	DEFINE_UE_CLASS_HELPERS(UEnum, "Enum")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	TArray<TPair<FName, int64_t>> Names; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
};

// Object: Class CoreUObject.LinkerPlaceholderClass
// Size: 0x438 (Inherited: 0x280)
struct ULinkerPlaceholderClass : UClass
{
	DEFINE_UE_CLASS_HELPERS(ULinkerPlaceholderClass, "LinkerPlaceholderClass")

	uint8_t Pad_0x280[0x1B8]; // 0x280(0x1B8)
};

// Object: Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xF0 (Inherited: 0x28)
struct ULinkerPlaceholderExportObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULinkerPlaceholderExportObject, "LinkerPlaceholderExportObject")

	uint8_t Pad_0x28[0xC8]; // 0x28(0xC8)
};

// Object: Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x298 (Inherited: 0xE0)
struct ULinkerPlaceholderFunction : UFunction
{
	DEFINE_UE_CLASS_HELPERS(ULinkerPlaceholderFunction, "LinkerPlaceholderFunction")

	uint8_t Pad_0xE0[0x1B8]; // 0xE0(0x1B8)
};

// Object: Class CoreUObject.MetaData
// Size: 0xC8 (Inherited: 0x28)
struct UMetaData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMetaData, "MetaData")

	uint8_t Pad_0x28[0xA0]; // 0x28(0xA0)
};

// Object: Class CoreUObject.ObjectRedirector
// Size: 0x30 (Inherited: 0x28)
struct UObjectRedirector : UObject
{
	DEFINE_UE_CLASS_HELPERS(UObjectRedirector, "ObjectRedirector")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class CoreUObject.Property
// Size: 0x78 (Inherited: 0x30)
struct UProperty : UField
{
	DEFINE_UE_CLASS_HELPERS(UProperty, "Property")

	uint8_t Pad_0x30[0x48]; // 0x30(0x48)
};

// Object: Class CoreUObject.EnumProperty
// Size: 0x88 (Inherited: 0x78)
struct UEnumProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UEnumProperty, "EnumProperty")

	uint8_t Pad_0x78[0x10]; // 0x78(0x10)
};

// Object: Class CoreUObject.ArrayProperty
// Size: 0x80 (Inherited: 0x78)
struct UArrayProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UArrayProperty, "ArrayProperty")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.ObjectPropertyBase
// Size: 0x80 (Inherited: 0x78)
struct UObjectPropertyBase : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UObjectPropertyBase, "ObjectPropertyBase")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.BoolProperty
// Size: 0x80 (Inherited: 0x78)
struct UBoolProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UBoolProperty, "BoolProperty")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.NumericProperty
// Size: 0x78 (Inherited: 0x78)
struct UNumericProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UNumericProperty, "NumericProperty")
};

// Object: Class CoreUObject.ByteProperty
// Size: 0x80 (Inherited: 0x78)
struct UByteProperty : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UByteProperty, "ByteProperty")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.ObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct UObjectProperty : UObjectPropertyBase
{
	DEFINE_UE_CLASS_HELPERS(UObjectProperty, "ObjectProperty")
};

// Object: Class CoreUObject.ClassProperty
// Size: 0x88 (Inherited: 0x80)
struct UClassProperty : UObjectProperty
{
	DEFINE_UE_CLASS_HELPERS(UClassProperty, "ClassProperty")

	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class CoreUObject.DelegateProperty
// Size: 0x80 (Inherited: 0x78)
struct UDelegateProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UDelegateProperty, "DelegateProperty")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.DoubleProperty
// Size: 0x78 (Inherited: 0x78)
struct UDoubleProperty : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UDoubleProperty, "DoubleProperty")
};

// Object: Class CoreUObject.FloatProperty
// Size: 0x78 (Inherited: 0x78)
struct UFloatProperty : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UFloatProperty, "FloatProperty")
};

// Object: Class CoreUObject.IntProperty
// Size: 0x78 (Inherited: 0x78)
struct UIntProperty : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UIntProperty, "IntProperty")
};

// Object: Class CoreUObject.Int8Property
// Size: 0x78 (Inherited: 0x78)
struct UInt8Property : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UInt8Property, "Int8Property")
};

// Object: Class CoreUObject.Int16Property
// Size: 0x78 (Inherited: 0x78)
struct UInt16Property : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UInt16Property, "Int16Property")
};

// Object: Class CoreUObject.Int64Property
// Size: 0x78 (Inherited: 0x78)
struct UInt64Property : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UInt64Property, "Int64Property")
};

// Object: Class CoreUObject.InterfaceProperty
// Size: 0x80 (Inherited: 0x78)
struct UInterfaceProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UInterfaceProperty, "InterfaceProperty")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.LazyObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct ULazyObjectProperty : UObjectPropertyBase
{
	DEFINE_UE_CLASS_HELPERS(ULazyObjectProperty, "LazyObjectProperty")
};

// Object: Class CoreUObject.MapProperty
// Size: 0xA0 (Inherited: 0x78)
struct UMapProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UMapProperty, "MapProperty")

	uint8_t Pad_0x78[0x28]; // 0x78(0x28)
};

// Object: Class CoreUObject.MulticastDelegateProperty
// Size: 0x80 (Inherited: 0x78)
struct UMulticastDelegateProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UMulticastDelegateProperty, "MulticastDelegateProperty")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x80 (Inherited: 0x80)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty
{
	DEFINE_UE_CLASS_HELPERS(UMulticastInlineDelegateProperty, "MulticastInlineDelegateProperty")
};

// Object: Class CoreUObject.MulticastSparseDelegateProperty
// Size: 0x80 (Inherited: 0x80)
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty
{
	DEFINE_UE_CLASS_HELPERS(UMulticastSparseDelegateProperty, "MulticastSparseDelegateProperty")
};

// Object: Class CoreUObject.NameProperty
// Size: 0x78 (Inherited: 0x78)
struct UNameProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UNameProperty, "NameProperty")
};

// Object: Class CoreUObject.SetProperty
// Size: 0x98 (Inherited: 0x78)
struct USetProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(USetProperty, "SetProperty")

	uint8_t Pad_0x78[0x20]; // 0x78(0x20)
};

// Object: Class CoreUObject.SoftObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct USoftObjectProperty : UObjectPropertyBase
{
	DEFINE_UE_CLASS_HELPERS(USoftObjectProperty, "SoftObjectProperty")
};

// Object: Class CoreUObject.SoftClassProperty
// Size: 0x88 (Inherited: 0x80)
struct USoftClassProperty : USoftObjectProperty
{
	DEFINE_UE_CLASS_HELPERS(USoftClassProperty, "SoftClassProperty")

	uint8_t Pad_0x80[0x8]; // 0x80(0x8)
};

// Object: Class CoreUObject.StrProperty
// Size: 0x78 (Inherited: 0x78)
struct UStrProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UStrProperty, "StrProperty")
};

// Object: Class CoreUObject.StructProperty
// Size: 0x80 (Inherited: 0x78)
struct UStructProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UStructProperty, "StructProperty")

	uint8_t Pad_0x78[0x8]; // 0x78(0x8)
};

// Object: Class CoreUObject.UInt16Property
// Size: 0x78 (Inherited: 0x78)
struct UUInt16Property : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UUInt16Property, "UInt16Property")
};

// Object: Class CoreUObject.UInt32Property
// Size: 0x78 (Inherited: 0x78)
struct UUInt32Property : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UUInt32Property, "UInt32Property")
};

// Object: Class CoreUObject.UInt64Property
// Size: 0x78 (Inherited: 0x78)
struct UUInt64Property : UNumericProperty
{
	DEFINE_UE_CLASS_HELPERS(UUInt64Property, "UInt64Property")
};

// Object: Class CoreUObject.WeakObjectProperty
// Size: 0x80 (Inherited: 0x80)
struct UWeakObjectProperty : UObjectPropertyBase
{
	DEFINE_UE_CLASS_HELPERS(UWeakObjectProperty, "WeakObjectProperty")
};

// Object: Class CoreUObject.TextProperty
// Size: 0x78 (Inherited: 0x78)
struct UTextProperty : UProperty
{
	DEFINE_UE_CLASS_HELPERS(UTextProperty, "TextProperty")
};

// Object: Class CoreUObject.PropertyWrapper
// Size: 0x30 (Inherited: 0x28)
struct UPropertyWrapper : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPropertyWrapper, "PropertyWrapper")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class CoreUObject.MulticastDelegatePropertyWrapper
// Size: 0x30 (Inherited: 0x30)
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper
{
	DEFINE_UE_CLASS_HELPERS(UMulticastDelegatePropertyWrapper, "MulticastDelegatePropertyWrapper")
};

// Object: Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size: 0x30 (Inherited: 0x30)
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper
{
	DEFINE_UE_CLASS_HELPERS(UMulticastInlineDelegatePropertyWrapper, "MulticastInlineDelegatePropertyWrapper")
};

// Object: Class CoreUObject.ObjectPtrProperty
// Size: 0x80 (Inherited: 0x80)
struct UObjectPtrProperty : UObjectPropertyBase
{
	DEFINE_UE_CLASS_HELPERS(UObjectPtrProperty, "ObjectPtrProperty")
};

// Object: Class CoreUObject.Default__Class
// Size: 0x0 (Inherited: 0x0)
struct Default__Class
{
	DEFINE_UE_CLASS_HELPERS(Default__Class, "Default__Class")
};

// Object: DynamicClass CoreUObject.Default__DynamicClass
// Size: 0x0 (Inherited: 0x0)
struct Default__DynamicClass
{
	DEFINE_UE_CLASS_HELPERS(Default__DynamicClass, "Default__DynamicClass")
};

// Object: LinkerPlaceholderClass CoreUObject.Default__LinkerPlaceholderClass
// Size: 0x0 (Inherited: 0x0)
struct Default__LinkerPlaceholderClass
{
	DEFINE_UE_CLASS_HELPERS(Default__LinkerPlaceholderClass, "Default__LinkerPlaceholderClass")
};


} // namespace SDK
