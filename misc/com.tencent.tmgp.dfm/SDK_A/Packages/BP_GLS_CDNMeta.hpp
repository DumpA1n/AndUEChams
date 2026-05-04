#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameLaunch.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BP_GLS_CDNMeta
// Enums: 0
// Structs: 0
// Classes: 1

enum class EMetaError : uint8_t;
struct FMetaInfo;
struct UBP_GLS_CDNMeta_C;

// Object: BlueprintGeneratedClass BP_GLS_CDNMeta.BP_GLS_CDNMeta_C
// Size: 0x58 (Inherited: 0x50)
struct UBP_GLS_CDNMeta_C : UGLS_RequestCDNMeta
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x8)


	// Object: Function BP_GLS_CDNMeta.BP_GLS_CDNMeta_C.BP_OnGetMetaData
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void BP_OnGetMetaData(const struct FMetaInfo& MetaInfo);

	// Object: Function BP_GLS_CDNMeta.BP_GLS_CDNMeta_C.BP_OnGetMetaDataFailed
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8) ]
	void BP_OnGetMetaDataFailed(EMetaError MetaError, int32_t InErrorCode);

	// Object: Function BP_GLS_CDNMeta.BP_GLS_CDNMeta_C.ExecuteUbergraph_BP_GLS_CDNMeta
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GLS_CDNMeta(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UBP_GLS_CDNMeta_C, "BP_GLS_CDNMeta_C")

};

} // namespace SDK
