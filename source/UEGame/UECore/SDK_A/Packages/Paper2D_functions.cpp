#include "Paper2D.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPaperFlipbook
uint8_t UPaperFlipbook::IsValidKeyFrameIndex(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbook", "IsValidKeyFrameIndex");
    struct
    {
        int32_t Index;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPaperFlipbook::GetTotalDuration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbook", "GetTotalDuration");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, uint8_t bClampToEnds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbook", "GetSpriteAtTime");
    struct
    {
        float Time;
        uint8_t bClampToEnds;
        struct UPaperSprite* ReturnValue;
    } Parms{};
    Parms.Time = (float)Time;
    Parms.bClampToEnds = (uint8_t)bClampToEnds;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int32_t FrameIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbook", "GetSpriteAtFrame");
    struct
    {
        int32_t FrameIndex;
        struct UPaperSprite* ReturnValue;
    } Parms{};
    Parms.FrameIndex = (int32_t)FrameIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPaperFlipbook::GetNumKeyFrames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbook", "GetNumKeyFrames");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPaperFlipbook::GetNumFrames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbook", "GetNumFrames");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, uint8_t bClampToEnds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbook", "GetKeyFrameIndexAtTime");
    struct
    {
        float Time;
        uint8_t bClampToEnds;
        int32_t ReturnValue;
    } Parms{};
    Parms.Time = (float)Time;
    Parms.bClampToEnds = (uint8_t)bClampToEnds;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPaperFlipbookComponent
void UPaperFlipbookComponent::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "Stop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::SetSpriteColor(struct FLinearColor NewColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "SetSpriteColor");
    struct
    {
        struct FLinearColor NewColor;
    } Parms{};
    Parms.NewColor = (struct FLinearColor)NewColor;
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::SetPlayRate(float NewRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "SetPlayRate");
    struct
    {
        float NewRate;
    } Parms{};
    Parms.NewRate = (float)NewRate;
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32_t NewFramePosition, uint8_t bFireEvents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "SetPlaybackPositionInFrames");
    struct
    {
        int32_t NewFramePosition;
        uint8_t bFireEvents;
    } Parms{};
    Parms.NewFramePosition = (int32_t)NewFramePosition;
    Parms.bFireEvents = (uint8_t)bFireEvents;
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, uint8_t bFireEvents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "SetPlaybackPosition");
    struct
    {
        float NewPosition;
        uint8_t bFireEvents;
    } Parms{};
    Parms.NewPosition = (float)NewPosition;
    Parms.bFireEvents = (uint8_t)bFireEvents;
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::SetNewTime(float NewTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "SetNewTime");
    struct
    {
        float NewTime;
    } Parms{};
    Parms.NewTime = (float)NewTime;
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::SetLooping(uint8_t bNewLooping)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "SetLooping");
    struct
    {
        uint8_t bNewLooping;
    } Parms{};
    Parms.bNewLooping = (uint8_t)bNewLooping;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPaperFlipbookComponent::SetFlipbook(struct UPaperFlipbook* NewFlipbook)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "SetFlipbook");
    struct
    {
        struct UPaperFlipbook* NewFlipbook;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewFlipbook = (struct UPaperFlipbook*)NewFlipbook;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPaperFlipbookComponent::ReverseFromEnd()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "ReverseFromEnd");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::Reverse()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "Reverse");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::PlayFromStart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "PlayFromStart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::Play()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "Play");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPaperFlipbookComponent::OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "OnRep_SourceFlipbook");
    struct
    {
        struct UPaperFlipbook* OldFlipbook;
    } Parms{};
    Parms.OldFlipbook = (struct UPaperFlipbook*)OldFlipbook;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPaperFlipbookComponent::IsReversing()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "IsReversing");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPaperFlipbookComponent::IsPlaying()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "IsPlaying");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPaperFlipbookComponent::IsLooping()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "IsLooping");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPaperFlipbookComponent::GetPlayRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "GetPlayRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPaperFlipbookComponent::GetPlaybackPositionInFrames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "GetPlaybackPositionInFrames");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPaperFlipbookComponent::GetPlaybackPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "GetPlaybackPosition");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPaperFlipbookComponent::GetFlipbookLengthInFrames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "GetFlipbookLengthInFrames");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPaperFlipbookComponent::GetFlipbookLength()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "GetFlipbookLength");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UPaperFlipbookComponent::GetFlipbookFramerate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "GetFlipbookFramerate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperFlipbookComponent", "GetFlipbook");
    struct
    {
        struct UPaperFlipbook* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPaperGroupedSpriteComponent
uint8_t UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32_t InstanceIndex, const struct FTransform& NewInstanceTransform, uint8_t bWorldSpace, uint8_t bMarkRenderStateDirty, uint8_t bTeleport)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperGroupedSpriteComponent", "UpdateInstanceTransform");
    struct
    {
        int32_t InstanceIndex;
        struct FTransform NewInstanceTransform;
        uint8_t bWorldSpace;
        uint8_t bMarkRenderStateDirty;
        uint8_t bTeleport;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.NewInstanceTransform = (struct FTransform)NewInstanceTransform;
    Parms.bWorldSpace = (uint8_t)bWorldSpace;
    Parms.bMarkRenderStateDirty = (uint8_t)bMarkRenderStateDirty;
    Parms.bTeleport = (uint8_t)bTeleport;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPaperGroupedSpriteComponent::UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, uint8_t bMarkRenderStateDirty)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperGroupedSpriteComponent", "UpdateInstanceColor");
    struct
    {
        int32_t InstanceIndex;
        struct FLinearColor NewInstanceColor;
        uint8_t bMarkRenderStateDirty;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.NewInstanceColor = (struct FLinearColor)NewInstanceColor;
    Parms.bMarkRenderStateDirty = (uint8_t)bMarkRenderStateDirty;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperGroupedSpriteComponent", "SortInstancesAlongAxis");
    struct
    {
        struct FVector WorldSpaceSortAxis;
    } Parms{};
    Parms.WorldSpaceSortAxis = (struct FVector)WorldSpaceSortAxis;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPaperGroupedSpriteComponent::RemoveInstance(int32_t InstanceIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperGroupedSpriteComponent", "RemoveInstance");
    struct
    {
        int32_t InstanceIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPaperGroupedSpriteComponent::GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, uint8_t bWorldSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperGroupedSpriteComponent", "GetInstanceTransform");
    struct
    {
        int32_t InstanceIndex;
        struct FTransform OutInstanceTransform;
        uint8_t bWorldSpace;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InstanceIndex = (int32_t)InstanceIndex;
    Parms.bWorldSpace = (uint8_t)bWorldSpace;
    this->ProcessEvent(Func, &Parms);
    OutInstanceTransform = Parms.OutInstanceTransform;
    return Parms.ReturnValue;
}

int32_t UPaperGroupedSpriteComponent::GetInstanceCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperGroupedSpriteComponent", "GetInstanceCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPaperGroupedSpriteComponent::ClearInstances()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperGroupedSpriteComponent", "ClearInstances");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, struct UPaperSprite* Sprite, uint8_t bWorldSpace, struct FLinearColor Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperGroupedSpriteComponent", "AddInstance");
    struct
    {
        struct FTransform Transform;
        struct UPaperSprite* Sprite;
        uint8_t bWorldSpace;
        struct FLinearColor Color;
        int32_t ReturnValue;
    } Parms{};
    Parms.Transform = (struct FTransform)Transform;
    Parms.Sprite = (struct UPaperSprite*)Sprite;
    Parms.bWorldSpace = (uint8_t)bWorldSpace;
    Parms.Color = (struct FLinearColor)Color;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPaperSpriteBlueprintLibrary
struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PaperSpriteBlueprintLibrary", "MakeBrushFromSprite");
    struct
    {
        struct UPaperSprite* Sprite;
        int32_t Width;
        int32_t Height;
        struct FSlateBrush ReturnValue;
    } Parms{};
    Parms.Sprite = (struct UPaperSprite*)Sprite;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPaperSpriteComponent
void UPaperSpriteComponent::SetSpriteColor(struct FLinearColor NewColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperSpriteComponent", "SetSpriteColor");
    struct
    {
        struct FLinearColor NewColor;
    } Parms{};
    Parms.NewColor = (struct FLinearColor)NewColor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPaperSpriteComponent::SetSprite(struct UPaperSprite* NewSprite)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperSpriteComponent", "SetSprite");
    struct
    {
        struct UPaperSprite* NewSprite;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewSprite = (struct UPaperSprite*)NewSprite;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPaperSprite* UPaperSpriteComponent::GetSprite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperSpriteComponent", "GetSprite");
    struct
    {
        struct UPaperSprite* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPaperTerrainComponent
void UPaperTerrainComponent::SetTerrainColor(struct FLinearColor NewColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTerrainComponent", "SetTerrainColor");
    struct
    {
        struct FLinearColor NewColor;
    } Parms{};
    Parms.NewColor = (struct FLinearColor)NewColor;
    this->ProcessEvent(Func, &Parms);
}

// UPaperTileMapComponent
void UPaperTileMapComponent::SetTileMapColor(struct FLinearColor NewColor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "SetTileMapColor");
    struct
    {
        struct FLinearColor NewColor;
    } Parms{};
    Parms.NewColor = (struct FLinearColor)NewColor;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPaperTileMapComponent::SetTileMap(struct UPaperTileMap* NewTileMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "SetTileMap");
    struct
    {
        struct UPaperTileMap* NewTileMap;
        uint8_t ReturnValue;
    } Parms{};
    Parms.NewTileMap = (struct UPaperTileMap*)NewTileMap;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPaperTileMapComponent::SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "SetTile");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Layer;
        struct FPaperTileInfo NewValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Layer = (int32_t)Layer;
    Parms.NewValue = (struct FPaperTileInfo)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UPaperTileMapComponent::SetLayerColor(struct FLinearColor NewColor, int32_t Layer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "SetLayerColor");
    struct
    {
        struct FLinearColor NewColor;
        int32_t Layer;
    } Parms{};
    Parms.NewColor = (struct FLinearColor)NewColor;
    Parms.Layer = (int32_t)Layer;
    this->ProcessEvent(Func, &Parms);
}

void UPaperTileMapComponent::SetLayerCollision(int32_t Layer, uint8_t bHasCollision, uint8_t bOverrideThickness, float CustomThickness, uint8_t bOverrideOffset, float CustomOffset, uint8_t bRebuildCollision)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "SetLayerCollision");
    struct
    {
        int32_t Layer;
        uint8_t bHasCollision;
        uint8_t bOverrideThickness;
        float CustomThickness;
        uint8_t bOverrideOffset;
        float CustomOffset;
        uint8_t bRebuildCollision;
    } Parms{};
    Parms.Layer = (int32_t)Layer;
    Parms.bHasCollision = (uint8_t)bHasCollision;
    Parms.bOverrideThickness = (uint8_t)bOverrideThickness;
    Parms.CustomThickness = (float)CustomThickness;
    Parms.bOverrideOffset = (uint8_t)bOverrideOffset;
    Parms.CustomOffset = (float)CustomOffset;
    Parms.bRebuildCollision = (uint8_t)bRebuildCollision;
    this->ProcessEvent(Func, &Parms);
}

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, uint8_t bRebuildCollision)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "SetDefaultCollisionThickness");
    struct
    {
        float Thickness;
        uint8_t bRebuildCollision;
    } Parms{};
    Parms.Thickness = (float)Thickness;
    Parms.bRebuildCollision = (uint8_t)bRebuildCollision;
    this->ProcessEvent(Func, &Parms);
}

void UPaperTileMapComponent::ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "ResizeMap");
    struct
    {
        int32_t NewWidthInTiles;
        int32_t NewHeightInTiles;
    } Parms{};
    Parms.NewWidthInTiles = (int32_t)NewWidthInTiles;
    Parms.NewHeightInTiles = (int32_t)NewHeightInTiles;
    this->ProcessEvent(Func, &Parms);
}

void UPaperTileMapComponent::RebuildCollision()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "RebuildCollision");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPaperTileMapComponent::OwnsTileMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "OwnsTileMap");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPaperTileMapComponent::MakeTileMapEditable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "MakeTileMapEditable");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPaperTileMapComponent::GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, uint8_t bWorldSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "GetTilePolygon");
    struct
    {
        int32_t TileX;
        int32_t TileY;
        struct TArray<struct FVector> Points;
        int32_t LayerIndex;
        uint8_t bWorldSpace;
    } Parms{};
    Parms.TileX = (int32_t)TileX;
    Parms.TileY = (int32_t)TileY;
    Parms.LayerIndex = (int32_t)LayerIndex;
    Parms.bWorldSpace = (uint8_t)bWorldSpace;
    this->ProcessEvent(Func, &Parms);
    Points = Parms.Points;
}

struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "GetTileMapColor");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, uint8_t bWorldSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "GetTileCornerPosition");
    struct
    {
        int32_t TileX;
        int32_t TileY;
        int32_t LayerIndex;
        uint8_t bWorldSpace;
        struct FVector ReturnValue;
    } Parms{};
    Parms.TileX = (int32_t)TileX;
    Parms.TileY = (int32_t)TileY;
    Parms.LayerIndex = (int32_t)LayerIndex;
    Parms.bWorldSpace = (uint8_t)bWorldSpace;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, uint8_t bWorldSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "GetTileCenterPosition");
    struct
    {
        int32_t TileX;
        int32_t TileY;
        int32_t LayerIndex;
        uint8_t bWorldSpace;
        struct FVector ReturnValue;
    } Parms{};
    Parms.TileX = (int32_t)TileX;
    Parms.TileY = (int32_t)TileY;
    Parms.LayerIndex = (int32_t)LayerIndex;
    Parms.bWorldSpace = (uint8_t)bWorldSpace;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int32_t X, int32_t Y, int32_t Layer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "GetTile");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Layer;
        struct FPaperTileInfo ReturnValue;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Layer = (int32_t)Layer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPaperTileMapComponent::GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "GetMapSize");
    struct
    {
        int32_t MapWidth;
        int32_t MapHeight;
        int32_t NumLayers;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    MapWidth = Parms.MapWidth;
    MapHeight = Parms.MapHeight;
    NumLayers = Parms.NumLayers;
}

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int32_t Layer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "GetLayerColor");
    struct
    {
        int32_t Layer;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.Layer = (int32_t)Layer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPaperTileMapComponent::CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, uint8_t bCreateLayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "CreateNewTileMap");
    struct
    {
        int32_t MapWidth;
        int32_t MapHeight;
        int32_t TileWidth;
        int32_t TileHeight;
        float PixelsPerUnrealUnit;
        uint8_t bCreateLayer;
    } Parms{};
    Parms.MapWidth = (int32_t)MapWidth;
    Parms.MapHeight = (int32_t)MapHeight;
    Parms.TileWidth = (int32_t)TileWidth;
    Parms.TileHeight = (int32_t)TileHeight;
    Parms.PixelsPerUnrealUnit = (float)PixelsPerUnrealUnit;
    Parms.bCreateLayer = (uint8_t)bCreateLayer;
    this->ProcessEvent(Func, &Parms);
}

struct UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PaperTileMapComponent", "AddNewLayer");
    struct
    {
        struct UPaperTileLayer* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UTileMapBlueprintLibrary
struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, uint8_t bFlipH, uint8_t bFlipV, uint8_t bFlipD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TileMapBlueprintLibrary", "MakeTile");
    struct
    {
        int32_t TileIndex;
        struct UPaperTileSet* TileSet;
        uint8_t bFlipH;
        uint8_t bFlipV;
        uint8_t bFlipD;
        struct FPaperTileInfo ReturnValue;
    } Parms{};
    Parms.TileIndex = (int32_t)TileIndex;
    Parms.TileSet = (struct UPaperTileSet*)TileSet;
    Parms.bFlipH = (uint8_t)bFlipH;
    Parms.bFlipV = (uint8_t)bFlipV;
    Parms.bFlipD = (uint8_t)bFlipD;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UTileMapBlueprintLibrary::GetTileUserData(struct FPaperTileInfo Tile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TileMapBlueprintLibrary", "GetTileUserData");
    struct
    {
        struct FPaperTileInfo Tile;
        struct FName ReturnValue;
    } Parms{};
    Parms.Tile = (struct FPaperTileInfo)Tile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UTileMapBlueprintLibrary::GetTileTransform(struct FPaperTileInfo Tile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TileMapBlueprintLibrary", "GetTileTransform");
    struct
    {
        struct FPaperTileInfo Tile;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.Tile = (struct FPaperTileInfo)Tile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UTileMapBlueprintLibrary::BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, uint8_t& bFlipH, uint8_t& bFlipV, uint8_t& bFlipD)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TileMapBlueprintLibrary", "BreakTile");
    struct
    {
        struct FPaperTileInfo Tile;
        int32_t TileIndex;
        struct UPaperTileSet* TileSet;
        uint8_t bFlipH;
        uint8_t bFlipV;
        uint8_t bFlipD;
    } Parms{};
    Parms.Tile = (struct FPaperTileInfo)Tile;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TileIndex = Parms.TileIndex;
    TileSet = Parms.TileSet;
    bFlipH = Parms.bFlipH;
    bFlipV = Parms.bFlipV;
    bFlipD = Parms.bFlipD;
}

} // namespace SDK
