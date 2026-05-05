#include "GPLineRenderer.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPLineRendererComponent
void UGPLineRendererComponent::UpdateLine(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<struct FVector>& Normals)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "UpdateLine");
    struct
    {
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct TArray<struct FVector> Normals;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Normals = (struct TArray<struct FVector>)Normals;
    this->ProcessEvent(Func, &Parms);
}

void UGPLineRendererComponent::SetLineVisible(int32_t SectionIndex, uint8_t bNewVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "SetLineVisible");
    struct
    {
        int32_t SectionIndex;
        uint8_t bNewVisibility;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.bNewVisibility = (uint8_t)bNewVisibility;
    this->ProcessEvent(Func, &Parms);
}

void UGPLineRendererComponent::RemoveLine(int32_t SectionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "RemoveLine");
    struct
    {
        int32_t SectionIndex;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    this->ProcessEvent(Func, &Parms);
}

void UGPLineRendererComponent::RemoveAllLines()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "RemoveAllLines");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGPLineRendererComponent::IsLineVisible(int32_t SectionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "IsLineVisible");
    struct
    {
        int32_t SectionIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPLineRendererComponent::GetNumSections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "GetNumSections");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPLineRendererComponent::CreateLineWithNormal(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<struct FVector>& Normals, const struct FLinearColor& Color, float Thickness, uint8_t bScreenSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "CreateLineWithNormal");
    struct
    {
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct TArray<struct FVector> Normals;
        struct FLinearColor Color;
        float Thickness;
        uint8_t bScreenSpace;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Normals = (struct TArray<struct FVector>)Normals;
    Parms.Color = (struct FLinearColor)Color;
    Parms.Thickness = (float)Thickness;
    Parms.bScreenSpace = (uint8_t)bScreenSpace;
    this->ProcessEvent(Func, &Parms);
}

void UGPLineRendererComponent::CreateLine2Points(int32_t SectionIndex, const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FLinearColor& Color, float Thickness, int32_t NumSegments, uint8_t bScreenSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "CreateLine2Points");
    struct
    {
        int32_t SectionIndex;
        struct FVector StartPoint;
        struct FVector EndPoint;
        struct FLinearColor Color;
        float Thickness;
        int32_t NumSegments;
        uint8_t bScreenSpace;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.StartPoint = (struct FVector)StartPoint;
    Parms.EndPoint = (struct FVector)EndPoint;
    Parms.Color = (struct FLinearColor)Color;
    Parms.Thickness = (float)Thickness;
    Parms.NumSegments = (int32_t)NumSegments;
    Parms.bScreenSpace = (uint8_t)bScreenSpace;
    this->ProcessEvent(Func, &Parms);
}

void UGPLineRendererComponent::CreateLine(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct FLinearColor& Color, float Thickness, uint8_t bScreenSpace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPLineRendererComponent", "CreateLine");
    struct
    {
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct FLinearColor Color;
        float Thickness;
        uint8_t bScreenSpace;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Color = (struct FLinearColor)Color;
    Parms.Thickness = (float)Thickness;
    Parms.bScreenSpace = (uint8_t)bScreenSpace;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
