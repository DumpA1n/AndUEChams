#pragma once

#include "../CoreUObject_classes.hpp"
#include "Paper2D.hpp"

namespace SDK
{

// Package: SpriteAtlas
// Enums: 0
// Structs: 0
// Classes: 1

struct UTexture2D;
struct USpriteAtlasSheet;

// Object: Class SpriteAtlas.SpriteAtlasSheet
// Size: 0xA0 (Inherited: 0x28)
struct USpriteAtlasSheet : UObject
{
	DEFINE_UE_CLASS_HELPERS(USpriteAtlasSheet, "SpriteAtlasSheet")

	struct TSoftObjectPtr<UTexture2D> BakedTexturePtr; // 0x28(0x28)
	struct TSet<struct TSoftObjectPtr<UPaperSprite>> BakedSpritePtrSet; // 0x50(0x50)
};

} // namespace SDK
