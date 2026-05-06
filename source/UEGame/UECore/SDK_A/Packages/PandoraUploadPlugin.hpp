#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PandoraUploadPlugin
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_PandoraUploadLibrary;

// Object: Class PandoraUploadPlugin.BP_PandoraUploadLibrary
// Size: 0x38 (Inherited: 0x28)
struct UBP_PandoraUploadLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBP_PandoraUploadLibrary, "BP_PandoraUploadLibrary")

	struct FMulticastInlineDelegate m_TcUploadEventDelegate; // 0x28(0x10)

	// Object: Function PandoraUploadPlugin.BP_PandoraUploadLibrary.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5094208
	// Params: [ Num(1) Size(0x8) ]
	static struct UBP_PandoraUploadLibrary* GetInstance();

	// Object: Function PandoraUploadPlugin.BP_PandoraUploadLibrary.BP_TcUploadVideFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5093f6c
	// Params: [ Num(7) Size(0x4C) ]
	static int32_t BP_TcUploadVideFile(struct FString strSignature, struct FString strVideoPath, struct FString strCoverPath, bool bEnableResume, bool bEnableHttps, struct FString strFileName);

	// Object: Function PandoraUploadPlugin.BP_PandoraUploadLibrary.BP_TcUploadUnInit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x50941a0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t BP_TcUploadUnInit();

	// Object: Function PandoraUploadPlugin.BP_PandoraUploadLibrary.BP_TcUploadInit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x50941d4
	// Params: [ Num(1) Size(0x4) ]
	static int32_t BP_TcUploadInit();

	// Object: Function PandoraUploadPlugin.BP_PandoraUploadLibrary.BP_TcUploadCancel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x5093ec4
	// Params: [ Num(2) Size(0x8) ]
	static int32_t BP_TcUploadCancel(int32_t nSessionId);

	// Object: Function PandoraUploadPlugin.BP_PandoraUploadLibrary.BP_GetSavePath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x5093e14
	// Params: [ Num(1) Size(0x10) ]
	static void BP_GetSavePath(struct FString& strSavePath);
};

} // namespace SDK
