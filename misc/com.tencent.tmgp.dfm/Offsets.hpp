#pragma once

#include <cstdint>


namespace UEOffsets
{

namespace Config
{
    constexpr bool isUsingCasePreservingName = false;
    constexpr bool IsUsingFNamePool = true;
    constexpr bool isUsingOutlineNumberName = false;
}

namespace FName
{
    constexpr uintptr_t ComparisonIndex = 0x0;
    constexpr uintptr_t Number = 0x4;
    constexpr uintptr_t DisplayIndex = 0x0;
    constexpr uintptr_t Size = 0x8;
}

namespace FNameEntry
{
    constexpr uintptr_t Index = 0x0;
    constexpr uintptr_t Name = 0x0;
}

namespace FNamePool
{
    constexpr int32_t Stride = 2;
    constexpr int32_t BlocksBit = 18;
    constexpr uintptr_t BlocksOff = 0x38;
}

namespace FNamePoolEntry
{
    constexpr uintptr_t Header = 0x0;
}

namespace FUObjectArray
{
    constexpr uintptr_t ObjObjects = 0x10;
}

namespace TUObjectArray
{
    constexpr uintptr_t Objects = 0x10;
    constexpr uintptr_t NumElements = 0x4;
    constexpr uintptr_t NumElementsPerChunk = 0x10000;
}

namespace FUObjectItem
{
    constexpr uintptr_t Object = 0x0;
    constexpr uintptr_t Size = 0x18;
}

namespace UObject
{
    constexpr uintptr_t ObjectFlags = 0x18;
    constexpr uintptr_t InternalIndex = 0x24;
    constexpr uintptr_t ClassPrivate = 0x8;
    constexpr uintptr_t NamePrivate = 0x1c;
    constexpr uintptr_t OuterPrivate = 0x10;
}

namespace UField
{
    constexpr uintptr_t Next = 0x28;
}

namespace UEnum
{
    constexpr uintptr_t Names = 0x40;
}

namespace UStruct
{
    constexpr uintptr_t SuperStruct = 0x40;
    constexpr uintptr_t Children = 0x50;
    constexpr uintptr_t ChildProperties = 0x68;
    constexpr uintptr_t PropertiesSize = 0x3c;
}

namespace UClass
{
    constexpr uintptr_t CastFlags = 0xd8;
    constexpr uintptr_t DefaultObject = 0x138;
}

namespace UFunction
{
    constexpr uintptr_t EFunctionFlags = 0xb8;
    constexpr uintptr_t NumParams = 0xb0;
    constexpr uintptr_t ParamSize = 0xb2;
    constexpr uintptr_t Func = 0xd8;
}

namespace UProperty
{
    constexpr uintptr_t ArrayDim = 0x0;
    constexpr uintptr_t ElementSize = 0x0;
    constexpr uintptr_t PropertyFlags = 0x0;
    constexpr uintptr_t Offset_Internal = 0x0;
    constexpr uintptr_t Size = 0x0;
}

namespace FField
{
    constexpr uintptr_t ClassPrivate = 0x20;
    constexpr uintptr_t Next = 0x18;
    constexpr uintptr_t NamePrivate = 0x28;
    constexpr uintptr_t FlagsPrivate = 0x30;
}

namespace FProperty
{
    constexpr uintptr_t ArrayDim = 0x38;
    constexpr uintptr_t ElementSize = 0x3c;
    constexpr uintptr_t PropertyFlags = 0x40;
    constexpr uintptr_t Offset_Internal = 0x4c;
    constexpr uintptr_t Size = 0x80;
}


}

namespace UEPointers
{
    constexpr uintptr_t Names = 0x1b88ea00;
    constexpr uintptr_t UObjectArray = 0x1b8b5788;
    constexpr uintptr_t ObjObjects = 0x1b8b5798;
    constexpr uintptr_t Engine = 0x1bba73a0;
    constexpr uintptr_t World = 0x1bbaa930;
    constexpr uintptr_t ProcessEvent = 0xdf7e4cc;
    constexpr int32_t ProcessEventIndex = 69;
}