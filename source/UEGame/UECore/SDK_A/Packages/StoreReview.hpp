#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: StoreReview
// Enums: 0
// Structs: 0
// Classes: 3

struct UIStoreReview;
struct UGoogleStoreReview;
struct UIOSStoreReview;

// Object: Class StoreReview.IStoreReview
// Size: 0x28 (Inherited: 0x28)
struct UIStoreReview : UObject
{
	DEFINE_UE_CLASS_HELPERS(UIStoreReview, "IStoreReview")

	// Object: Function StoreReview.IStoreReview.ShowStoreReview
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8ce29b4
	// Params: [ Num(0) Size(0x0) ]
	void ShowStoreReview();

	// Object: Function StoreReview.IStoreReview.InitApiService
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8ce2998
	// Params: [ Num(0) Size(0x0) ]
	void InitApiService();

	// Object: Function StoreReview.IStoreReview.GetStoreReview
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8ce2964
	// Params: [ Num(1) Size(0x8) ]
	static struct UIStoreReview* GetStoreReview();

	// Object: Function StoreReview.IStoreReview.EndApiService
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x8ce2948
	// Params: [ Num(0) Size(0x0) ]
	void EndApiService();
};

// Object: Class StoreReview.GoogleStoreReview
// Size: 0x28 (Inherited: 0x28)
struct UGoogleStoreReview : UIStoreReview
{
	DEFINE_UE_CLASS_HELPERS(UGoogleStoreReview, "GoogleStoreReview")
};

// Object: Class StoreReview.IOSStoreReview
// Size: 0x28 (Inherited: 0x28)
struct UIOSStoreReview : UIStoreReview
{
	DEFINE_UE_CLASS_HELPERS(UIOSStoreReview, "IOSStoreReview")
};

} // namespace SDK
