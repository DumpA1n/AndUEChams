#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: StructUtils
// Enums: 0
// Structs: 5
// Classes: 0

struct FInstancedStruct;
struct FChunkedStructBuffer;
struct FInstancedStructStream;
struct FConstSharedStruct;
struct FSharedStruct;

// Object: ScriptStruct StructUtils.InstancedStruct
// Size: 0x10 (Inherited: 0x0)
struct FInstancedStruct
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct StructUtils.ChunkedStructBuffer
// Size: 0x20 (Inherited: 0x0)
struct FChunkedStructBuffer
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct StructUtils.InstancedStructStream
// Size: 0x20 (Inherited: 0x0)
struct FInstancedStructStream
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct StructUtils.ConstSharedStruct
// Size: 0x10 (Inherited: 0x0)
struct FConstSharedStruct
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct StructUtils.SharedStruct
// Size: 0x10 (Inherited: 0x10)
struct FSharedStruct : FConstSharedStruct
{
};

} // namespace SDK
