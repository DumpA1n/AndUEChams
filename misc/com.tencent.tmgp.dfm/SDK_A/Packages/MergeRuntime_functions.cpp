#include "MergeRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UCompositeSkeletalMeshComponent::* ----
void UCompositeSkeletalMeshComponent::Merge()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CompositeSkeletalMeshComponent", "Merge");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCompositeSkeletalMeshComponent::AddSubSkeletalMesh(struct USkeletalMesh* SubMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CompositeSkeletalMeshComponent", "AddSubSkeletalMesh");
    struct
    {
        struct USkeletalMesh* SubMesh;
    } Parms{};
    Parms.SubMesh = (struct USkeletalMesh*)SubMesh;
    this->ProcessEvent(Func, &Parms);
}

// ---- UMergeLibrary::* ----
struct USkeletalMesh* UMergeLibrary::MergeSkeletalMeshs(struct TArray<struct USkeletalMesh*> SrcMeshList, struct UCompositeSkeletalMeshComponent* Outer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MergeLibrary", "MergeSkeletalMeshs");
    struct
    {
        struct TArray<struct USkeletalMesh*> SrcMeshList;
        struct UCompositeSkeletalMeshComponent* Outer;
        struct USkeletalMesh* ReturnValue;
    } Parms{};
    Parms.SrcMeshList = (struct TArray<struct USkeletalMesh*>)SrcMeshList;
    Parms.Outer = (struct UCompositeSkeletalMeshComponent*)Outer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
