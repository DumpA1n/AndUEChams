#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PixUIRHI
// Enums: 0
// Structs: 0
// Classes: 2

struct UPxRHIImage;
struct UPxRHIMgr;

// Object: Class PixUIRHI.PxRHIImage
// Size: 0x28 (Inherited: 0x28)
struct UPxRHIImage : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPxRHIImage, "PxRHIImage")

	// Object: Function PixUIRHI.PxRHIImage.GetHandleObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b08a6c
	// Params: [ Num(1) Size(0x8) ]
	struct UObject* GetHandleObject();
};

// Object: Class PixUIRHI.PxRHIMgr
// Size: 0x28 (Inherited: 0x28)
struct UPxRHIMgr : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPxRHIMgr, "PxRHIMgr")

	// Object: Function PixUIRHI.PxRHIMgr.RHIImageUpdate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b08c5c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t RHIImageUpdate(struct UPxRHIMgr* pPxRHIImage);

	// Object: Function PixUIRHI.PxRHIMgr.RHIImageFindByObject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b08bb8
	// Params: [ Num(2) Size(0x10) ]
	static struct UPxRHIMgr* RHIImageFindByObject(struct UObject* pCoreObject);

	// Object: Function PixUIRHI.PxRHIMgr.RHIImageDestroy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b08b10
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t RHIImageDestroy(struct UPxRHIMgr* pPxRHIImage);

	// Object: Function PixUIRHI.PxRHIMgr.RHIImageCreate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b08adc
	// Params: [ Num(1) Size(0x8) ]
	static struct UPxRHIImage* RHIImageCreate();

	// Object: Function PixUIRHI.PxRHIMgr.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b08aa8
	// Params: [ Num(1) Size(0x8) ]
	static struct UPxRHIMgr* Get();
};

} // namespace SDK
