#include "ProceduralMeshComponent.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UProceduralMeshComponent
void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<struct FVector>& Normals, const struct TArray<struct FVector2D>& UV0, const struct TArray<struct FVector2D>& UV1, const struct TArray<struct FVector2D>& UV2, const struct TArray<struct FVector2D>& UV3, const struct TArray<struct FLinearColor>& VertexColors, const struct TArray<struct FProcMeshTangent>& Tangents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "UpdateMeshSection_LinearColor");
    struct
    {
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct TArray<struct FVector> Normals;
        struct TArray<struct FVector2D> UV0;
        struct TArray<struct FVector2D> UV1;
        struct TArray<struct FVector2D> UV2;
        struct TArray<struct FVector2D> UV3;
        struct TArray<struct FLinearColor> VertexColors;
        struct TArray<struct FProcMeshTangent> Tangents;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Normals = (struct TArray<struct FVector>)Normals;
    Parms.UV0 = (struct TArray<struct FVector2D>)UV0;
    Parms.UV1 = (struct TArray<struct FVector2D>)UV1;
    Parms.UV2 = (struct TArray<struct FVector2D>)UV2;
    Parms.UV3 = (struct TArray<struct FVector2D>)UV3;
    Parms.VertexColors = (struct TArray<struct FLinearColor>)VertexColors;
    Parms.Tangents = (struct TArray<struct FProcMeshTangent>)Tangents;
    this->ProcessEvent(Func, &Parms);
}

void UProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<struct FVector>& Normals, const struct TArray<struct FVector2D>& UV0, const struct TArray<struct FColor>& VertexColors, const struct TArray<struct FProcMeshTangent>& Tangents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "UpdateMeshSection");
    struct
    {
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct TArray<struct FVector> Normals;
        struct TArray<struct FVector2D> UV0;
        struct TArray<struct FColor> VertexColors;
        struct TArray<struct FProcMeshTangent> Tangents;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Normals = (struct TArray<struct FVector>)Normals;
    Parms.UV0 = (struct TArray<struct FVector2D>)UV0;
    Parms.VertexColors = (struct TArray<struct FColor>)VertexColors;
    Parms.Tangents = (struct TArray<struct FProcMeshTangent>)Tangents;
    this->ProcessEvent(Func, &Parms);
}

void UProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "SetMeshSectionVisible");
    struct
    {
        int32_t SectionIndex;
        bool bNewVisibility;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.bNewVisibility = (bool)bNewVisibility;
    this->ProcessEvent(Func, &Parms);
}

bool UProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "IsMeshSectionVisible");
    struct
    {
        int32_t SectionIndex;
        bool ReturnValue;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UProceduralMeshComponent::GetNumSections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "GetNumSections");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector>& Normals, const struct TArray<struct FVector2D>& UV0, const struct TArray<struct FVector2D>& UV1, const struct TArray<struct FVector2D>& UV2, const struct TArray<struct FVector2D>& UV3, const struct TArray<struct FLinearColor>& VertexColors, const struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "CreateMeshSection_LinearColor");
    struct
    {
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector> Normals;
        struct TArray<struct FVector2D> UV0;
        struct TArray<struct FVector2D> UV1;
        struct TArray<struct FVector2D> UV2;
        struct TArray<struct FVector2D> UV3;
        struct TArray<struct FLinearColor> VertexColors;
        struct TArray<struct FProcMeshTangent> Tangents;
        bool bCreateCollision;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Triangles = (struct TArray<int32_t>)Triangles;
    Parms.Normals = (struct TArray<struct FVector>)Normals;
    Parms.UV0 = (struct TArray<struct FVector2D>)UV0;
    Parms.UV1 = (struct TArray<struct FVector2D>)UV1;
    Parms.UV2 = (struct TArray<struct FVector2D>)UV2;
    Parms.UV3 = (struct TArray<struct FVector2D>)UV3;
    Parms.VertexColors = (struct TArray<struct FLinearColor>)VertexColors;
    Parms.Tangents = (struct TArray<struct FProcMeshTangent>)Tangents;
    Parms.bCreateCollision = (bool)bCreateCollision;
    this->ProcessEvent(Func, &Parms);
}

void UProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector>& Normals, const struct TArray<struct FVector2D>& UV0, const struct TArray<struct FColor>& VertexColors, const struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "CreateMeshSection");
    struct
    {
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector> Normals;
        struct TArray<struct FVector2D> UV0;
        struct TArray<struct FColor> VertexColors;
        struct TArray<struct FProcMeshTangent> Tangents;
        bool bCreateCollision;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Triangles = (struct TArray<int32_t>)Triangles;
    Parms.Normals = (struct TArray<struct FVector>)Normals;
    Parms.UV0 = (struct TArray<struct FVector2D>)UV0;
    Parms.VertexColors = (struct TArray<struct FColor>)VertexColors;
    Parms.Tangents = (struct TArray<struct FProcMeshTangent>)Tangents;
    Parms.bCreateCollision = (bool)bCreateCollision;
    this->ProcessEvent(Func, &Parms);
}

void UProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "ClearMeshSection");
    struct
    {
        int32_t SectionIndex;
    } Parms{};
    Parms.SectionIndex = (int32_t)SectionIndex;
    this->ProcessEvent(Func, &Parms);
}

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "ClearCollisionConvexMeshes");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UProceduralMeshComponent::ClearAllMeshSections()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "ClearAllMeshSections");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UProceduralMeshComponent::AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ProceduralMeshComponent", "AddCollisionConvexMesh");
    struct
    {
        struct TArray<struct FVector> ConvexVerts;
    } Parms{};
    Parms.ConvexVerts = (struct TArray<struct FVector>)ConvexVerts;
    this->ProcessEvent(Func, &Parms);
}

// UKismetProceduralMeshLibrary
void UKismetProceduralMeshLibrary::SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "SliceProceduralMesh");
    struct
    {
        struct UProceduralMeshComponent* InProcMesh;
        struct FVector PlanePosition;
        struct FVector PlaneNormal;
        bool bCreateOtherHalf;
        struct UProceduralMeshComponent* OutOtherHalfProcMesh;
        enum EProcMeshSliceCapOption CapOption;
        struct UMaterialInterface* CapMaterial;
    } Parms{};
    Parms.InProcMesh = (struct UProceduralMeshComponent*)InProcMesh;
    Parms.PlanePosition = (struct FVector)PlanePosition;
    Parms.PlaneNormal = (struct FVector)PlaneNormal;
    Parms.bCreateOtherHalf = (bool)bCreateOtherHalf;
    Parms.CapOption = (enum EProcMeshSliceCapOption)CapOption;
    Parms.CapMaterial = (struct UMaterialInterface*)CapMaterial;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutOtherHalfProcMesh = Parms.OutOtherHalfProcMesh;
}

void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(struct UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromStaticMesh");
    struct
    {
        struct UStaticMesh* InMesh;
        int32_t LODIndex;
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector> Normals;
        struct TArray<struct FVector2D> UVs;
        struct TArray<struct FProcMeshTangent> Tangents;
    } Parms{};
    Parms.InMesh = (struct UStaticMesh*)InMesh;
    Parms.LODIndex = (int32_t)LODIndex;
    Parms.SectionIndex = (int32_t)SectionIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Vertices = Parms.Vertices;
    Triangles = Parms.Triangles;
    Normals = Parms.Normals;
    UVs = Parms.UVs;
    Tangents = Parms.Tangents;
}

void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(struct UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromProceduralMesh");
    struct
    {
        struct UProceduralMeshComponent* InProcMesh;
        int32_t SectionIndex;
        struct TArray<struct FVector> Vertices;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector> Normals;
        struct TArray<struct FVector2D> UVs;
        struct TArray<struct FProcMeshTangent> Tangents;
    } Parms{};
    Parms.InProcMesh = (struct UProceduralMeshComponent*)InProcMesh;
    Parms.SectionIndex = (int32_t)SectionIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Vertices = Parms.Vertices;
    Triangles = Parms.Triangles;
    Normals = Parms.Normals;
    UVs = Parms.UVs;
    Tangents = Parms.Tangents;
}

void UKismetProceduralMeshLibrary::GenerateBoxMesh(struct FVector BoxRadius, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UVs, struct TArray<struct FProcMeshTangent>& Tangents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "GenerateBoxMesh");
    struct
    {
        struct FVector BoxRadius;
        struct TArray<struct FVector> Vertices;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector> Normals;
        struct TArray<struct FVector2D> UVs;
        struct TArray<struct FProcMeshTangent> Tangents;
    } Parms{};
    Parms.BoxRadius = (struct FVector)BoxRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Vertices = Parms.Vertices;
    Triangles = Parms.Triangles;
    Normals = Parms.Normals;
    UVs = Parms.UVs;
    Tangents = Parms.Tangents;
}

void UKismetProceduralMeshLibrary::CreateGridMeshWelded(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, float GridSpacing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshWelded");
    struct
    {
        int32_t NumX;
        int32_t NumY;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector> Vertices;
        struct TArray<struct FVector2D> UVs;
        float GridSpacing;
    } Parms{};
    Parms.NumX = (int32_t)NumX;
    Parms.NumY = (int32_t)NumY;
    Parms.GridSpacing = (float)GridSpacing;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Triangles = Parms.Triangles;
    Vertices = Parms.Vertices;
    UVs = Parms.UVs;
}

void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, struct TArray<int32_t>& Triangles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshTriangles");
    struct
    {
        int32_t NumX;
        int32_t NumY;
        bool bWinding;
        struct TArray<int32_t> Triangles;
    } Parms{};
    Parms.NumX = (int32_t)NumX;
    Parms.NumY = (int32_t)NumY;
    Parms.bWinding = (bool)bWinding;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Triangles = Parms.Triangles;
}

void UKismetProceduralMeshLibrary::CreateGridMeshSplit(int32_t NumX, int32_t NumY, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector2D>& UV1s, float GridSpacing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshSplit");
    struct
    {
        int32_t NumX;
        int32_t NumY;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector> Vertices;
        struct TArray<struct FVector2D> UVs;
        struct TArray<struct FVector2D> UV1s;
        float GridSpacing;
    } Parms{};
    Parms.NumX = (int32_t)NumX;
    Parms.NumY = (int32_t)NumY;
    Parms.GridSpacing = (float)GridSpacing;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Triangles = Parms.Triangles;
    Vertices = Parms.Vertices;
    UVs = Parms.UVs;
    UV1s = Parms.UV1s;
}

void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(struct UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, struct UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "CopyProceduralMeshFromStaticMeshComponent");
    struct
    {
        struct UStaticMeshComponent* StaticMeshComponent;
        int32_t LODIndex;
        struct UProceduralMeshComponent* ProcMeshComponent;
        bool bCreateCollision;
    } Parms{};
    Parms.StaticMeshComponent = (struct UStaticMeshComponent*)StaticMeshComponent;
    Parms.LODIndex = (int32_t)LODIndex;
    Parms.ProcMeshComponent = (struct UProceduralMeshComponent*)ProcMeshComponent;
    Parms.bCreateCollision = (bool)bCreateCollision;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(struct TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "ConvertQuadToTriangles");
    struct
    {
        struct TArray<int32_t> Triangles;
        int32_t Vert0;
        int32_t Vert1;
        int32_t Vert2;
        int32_t Vert3;
    } Parms{};
    Parms.Vert0 = (int32_t)Vert0;
    Parms.Vert1 = (int32_t)Vert1;
    Parms.Vert2 = (int32_t)Vert2;
    Parms.Vert3 = (int32_t)Vert3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Triangles = Parms.Triangles;
}

void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(const struct TArray<struct FVector>& Vertices, const struct TArray<int32_t>& Triangles, const struct TArray<struct FVector2D>& UVs, struct TArray<struct FVector>& Normals, struct TArray<struct FProcMeshTangent>& Tangents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetProceduralMeshLibrary", "CalculateTangentsForMesh");
    struct
    {
        struct TArray<struct FVector> Vertices;
        struct TArray<int32_t> Triangles;
        struct TArray<struct FVector2D> UVs;
        struct TArray<struct FVector> Normals;
        struct TArray<struct FProcMeshTangent> Tangents;
    } Parms{};
    Parms.Vertices = (struct TArray<struct FVector>)Vertices;
    Parms.Triangles = (struct TArray<int32_t>)Triangles;
    Parms.UVs = (struct TArray<struct FVector2D>)UVs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Normals = Parms.Normals;
    Tangents = Parms.Tangents;
}

} // namespace SDK
