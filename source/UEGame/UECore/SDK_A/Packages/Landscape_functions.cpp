#include "Landscape.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ALandscapeProxy
void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "SetLandscapeMaterialVectorParameterValue");
    struct
    {
        struct FName ParameterName;
        struct FLinearColor Value;
    } Parms{};
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (struct FLinearColor)Value;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "SetLandscapeMaterialTextureParameterValue");
    struct
    {
        struct FName ParameterName;
        struct UTexture* Value;
    } Parms{};
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (struct UTexture*)Value;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "SetLandscapeMaterialScalarParameterValue");
    struct
    {
        struct FName ParameterName;
        float Value;
    } Parms{};
    Parms.ParameterName = (struct FName)ParameterName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

bool ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "LandscapeExportHeightmapToRenderTarget");
    struct
    {
        struct UTextureRenderTarget2D* InRenderTarget;
        bool InExportHeightIntoRGChannel;
        bool InExportLandscapeProxies;
        bool ReturnValue;
    } Parms{};
    Parms.InRenderTarget = (struct UTextureRenderTarget2D*)InRenderTarget;
    Parms.InExportHeightIntoRGChannel = (bool)InExportHeightIntoRGChannel;
    Parms.InExportLandscapeProxies = (bool)InExportLandscapeProxies;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ALandscapeProxy::EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "EditorSetLandscapeMaterial");
    struct
    {
        struct UMaterialInterface* NewLandscapeMaterial;
    } Parms{};
    Parms.NewLandscapeMaterial = (struct UMaterialInterface*)NewLandscapeMaterial;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeProxy::EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "EditorApplySpline");
    struct
    {
        struct USplineComponent* InSplineComponent;
        float StartWidth;
        float EndWidth;
        float StartSideFalloff;
        float EndSideFalloff;
        float StartRoll;
        float EndRoll;
        int32_t NumSubdivisions;
        bool bRaiseHeights;
        bool bLowerHeights;
        struct ULandscapeLayerInfoObject* PaintLayer;
        struct FName EditLayerName;
    } Parms{};
    Parms.InSplineComponent = (struct USplineComponent*)InSplineComponent;
    Parms.StartWidth = (float)StartWidth;
    Parms.EndWidth = (float)EndWidth;
    Parms.StartSideFalloff = (float)StartSideFalloff;
    Parms.EndSideFalloff = (float)EndSideFalloff;
    Parms.StartRoll = (float)StartRoll;
    Parms.EndRoll = (float)EndRoll;
    Parms.NumSubdivisions = (int32_t)NumSubdivisions;
    Parms.bRaiseHeights = (bool)bRaiseHeights;
    Parms.bLowerHeights = (bool)bLowerHeights;
    Parms.PaintLayer = (struct ULandscapeLayerInfoObject*)PaintLayer;
    Parms.EditLayerName = (struct FName)EditLayerName;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "ChangeUseTessellationComponentScreenSizeFalloff");
    struct
    {
        bool InComponentScreenSizeToUseSubSections;
    } Parms{};
    Parms.InComponentScreenSizeToUseSubSections = (bool)InComponentScreenSizeToUseSubSections;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "ChangeTessellationComponentScreenSizeFalloff");
    struct
    {
        float InUseTessellationComponentScreenSizeFalloff;
    } Parms{};
    Parms.InUseTessellationComponentScreenSizeFalloff = (float)InUseTessellationComponentScreenSizeFalloff;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "ChangeTessellationComponentScreenSize");
    struct
    {
        float InTessellationComponentScreenSize;
    } Parms{};
    Parms.InTessellationComponentScreenSize = (float)InTessellationComponentScreenSize;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "ChangeLODDistanceFactor");
    struct
    {
        float InLODDistanceFactor;
    } Parms{};
    Parms.InLODDistanceFactor = (float)InLODDistanceFactor;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeProxy", "ChangeComponentScreenSizeToUseSubSections");
    struct
    {
        float InComponentScreenSizeToUseSubSections;
    } Parms{};
    Parms.InComponentScreenSizeToUseSubSections = (float)InComponentScreenSizeToUseSubSections;
    this->ProcessEvent(Func, &Parms);
}

// ALandscapeBlueprintBrushBase
void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeBlueprintBrushBase", "RequestLandscapeUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, const struct FName& InWeightmapLayerName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeBlueprintBrushBase", "Render");
    struct
    {
        bool InIsHeightmap;
        struct UTextureRenderTarget2D* InCombinedResult;
        struct FName InWeightmapLayerName;
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    Parms.InIsHeightmap = (bool)InIsHeightmap;
    Parms.InCombinedResult = (struct UTextureRenderTarget2D*)InCombinedResult;
    Parms.InWeightmapLayerName = (struct FName)InWeightmapLayerName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ALandscapeBlueprintBrushBase::Initialize(const struct FTransform& InLandscapeTransform, const struct FIntPoint& InLandscapeSize, const struct FIntPoint& InLandscapeRenderTargetSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeBlueprintBrushBase", "Initialize");
    struct
    {
        struct FTransform InLandscapeTransform;
        struct FIntPoint InLandscapeSize;
        struct FIntPoint InLandscapeRenderTargetSize;
    } Parms{};
    Parms.InLandscapeTransform = (struct FTransform)InLandscapeTransform;
    Parms.InLandscapeSize = (struct FIntPoint)InLandscapeSize;
    Parms.InLandscapeRenderTargetSize = (struct FIntPoint)InLandscapeRenderTargetSize;
    this->ProcessEvent(Func, &Parms);
}

void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeBlueprintBrushBase", "GetBlueprintRenderDependencies");
    struct
    {
        struct TArray<struct UObject*> OutStreamableAssets;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutStreamableAssets = Parms.OutStreamableAssets;
}

// ULandscapeComponent
struct UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeComponent", "GetMaterialInstanceDynamic");
    struct
    {
        int32_t InIndex;
        struct UMaterialInstanceDynamic* ReturnValue;
    } Parms{};
    Parms.InIndex = (int32_t)InIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(const struct FVector& InLocation, struct FName InPaintLayerName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeComponent", "EditorGetPaintLayerWeightByNameAtLocation");
    struct
    {
        struct FVector InLocation;
        struct FName InPaintLayerName;
        float ReturnValue;
    } Parms{};
    Parms.InLocation = (struct FVector)InLocation;
    Parms.InPaintLayerName = (struct FName)InPaintLayerName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(const struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeComponent", "EditorGetPaintLayerWeightAtLocation");
    struct
    {
        struct FVector InLocation;
        struct ULandscapeLayerInfoObject* PaintLayer;
        float ReturnValue;
    } Parms{};
    Parms.InLocation = (struct FVector)InLocation;
    Parms.PaintLayer = (struct ULandscapeLayerInfoObject*)PaintLayer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULandscapeHeightfieldCollisionComponent
struct ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeHeightfieldCollisionComponent", "GetRenderComponent");
    struct
    {
        struct ULandscapeComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULandscapeSplinesComponent
struct TArray<struct USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LandscapeSplinesComponent", "GetSplineMeshComponents");
    struct
    {
        struct TArray<struct USplineMeshComponent*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
