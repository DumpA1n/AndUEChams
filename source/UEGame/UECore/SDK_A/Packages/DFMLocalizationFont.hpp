#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMLocalizationFont
// Enums: 0
// Structs: 0
// Classes: 1

struct FSlateFontInfo;
struct UDFMLocalizationFontManager;

// Object: Class DFMLocalizationFont.DFMLocalizationFontManager
// Size: 0x60 (Inherited: 0x30)
struct UDFMLocalizationFontManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMLocalizationFontManager, "DFMLocalizationFontManager")

	struct FMulticastInlineDelegate OnServerFontRequestDelegate; // 0x30(0x10)
	uint8_t Pad_0x40[0x20]; // 0x40(0x20)

	// Object: Function DFMLocalizationFont.DFMLocalizationFontManager.OnServerFontResponse
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7b96588
	// Params: [ Num(4) Size(0x1C) ]
	void OnServerFontResponse(const struct TArray<uint8_t>& RawPixels, int32_t size, int32_t SizeY, int32_t CharCode);

	// Object: Function DFMLocalizationFont.DFMLocalizationFontManager.GetCharList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b964f0
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<int32_t> GetCharList();

	// Object: Function DFMLocalizationFont.DFMLocalizationFontManager.GetCharactNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b964bc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCharactNum();

	// Object: Function DFMLocalizationFont.DFMLocalizationFontManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b96418
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMLocalizationFontManager* Get(struct UObject* GameInst);

	// Object: Function DFMLocalizationFont.DFMLocalizationFontManager.ClearList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b96404
	// Params: [ Num(0) Size(0x0) ]
	void ClearList();

	// Object: Function DFMLocalizationFont.DFMLocalizationFontManager.CheckCharNeedRender
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7b963f0
	// Params: [ Num(0) Size(0x0) ]
	void CheckCharNeedRender();

	// Object: Function DFMLocalizationFont.DFMLocalizationFontManager.CharacterIsExistInFont
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7b962e4
	// Params: [ Num(3) Size(0x19) ]
	uint8_t CharacterIsExistInFont(const struct FName& InStyleName, struct FString CheckChar);

	// Object: Function DFMLocalizationFont.DFMLocalizationFontManager.AddMissChar
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7b96198
	// Params: [ Num(2) Size(0x60) ]
	void AddMissChar(int32_t CharCode, const struct FSlateFontInfo& InFontInfo);
};

} // namespace SDK
