#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MergeRuntime
// Enums: 0
// Structs: 0
// Classes: 2

struct USkeletalMesh;
struct UCompositeSkeletalMeshComponent;
struct UMergeLibrary;

// Object: Class MergeRuntime.CompositeSkeletalMeshComponent
// Size: 0xF80 (Inherited: 0xF50)
struct UCompositeSkeletalMeshComponent : USkeletalMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UCompositeSkeletalMeshComponent, "CompositeSkeletalMeshComponent")

	uint8_t bMergeOnRegister : 1; // 0xF41(0x1), Mask(0x1)
	uint8_t bDestroyOriginMesh : 1; // 0xF42(0x1), Mask(0x1)
	struct TArray<struct USkeletalMesh*> SubSkeletalMeshes; // 0xF48(0x10)
	uint8_t BitPad_0xF60_2 : 6; // 0xF60(0x1)
	uint8_t Pad_0xF61[0x7]; // 0xF61(0x7)
	struct USkeletalMesh* MergedMesh; // 0xF68(0x8)
	uint8_t Pad_0xF70[0x10]; // 0xF70(0x10)

	// Object: Function MergeRuntime.CompositeSkeletalMeshComponent.Merge
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8708080
	// Params: [ Num(0) Size(0x0) ]
	void Merge();

	// Object: Function MergeRuntime.CompositeSkeletalMeshComponent.AddSubSkeletalMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8707fdc
	// Params: [ Num(1) Size(0x8) ]
	void AddSubSkeletalMesh(struct USkeletalMesh* SubMesh);
};

// Object: Class MergeRuntime.MergeLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMergeLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMergeLibrary, "MergeLibrary")

	// Object: Function MergeRuntime.MergeLibrary.MergeSkeletalMeshs
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8708168
	// Params: [ Num(3) Size(0x20) ]
	static struct USkeletalMesh* MergeSkeletalMeshs(struct TArray<struct USkeletalMesh*> SrcMeshList, struct UCompositeSkeletalMeshComponent* Outer);
};

} // namespace SDK
