#include "HairStrandsCore.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGroomBlueprintLibrary
struct UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(struct FString InDesiredPackagePath, struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAssetWithPath");
    struct
    {
        struct FString InDesiredPackagePath;
        struct UGroomAsset* InGroomAsset;
        struct USkeletalMesh* InSkeletalMesh;
        int32_t InNumInterpolationPoints;
        struct USkeletalMesh* InSourceSkeletalMeshForTransfer;
        int32_t InMatchingSection;
        struct UGroomBindingAsset* ReturnValue;
    } Parms{};
    Parms.InDesiredPackagePath = (struct FString)InDesiredPackagePath;
    Parms.InGroomAsset = (struct UGroomAsset*)InGroomAsset;
    Parms.InSkeletalMesh = (struct USkeletalMesh*)InSkeletalMesh;
    Parms.InNumInterpolationPoints = (int32_t)InNumInterpolationPoints;
    Parms.InSourceSkeletalMeshForTransfer = (struct USkeletalMesh*)InSourceSkeletalMeshForTransfer;
    Parms.InMatchingSection = (int32_t)InMatchingSection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(struct UGroomAsset* InGroomAsset, struct USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, struct USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GroomBlueprintLibrary", "CreateNewGroomBindingAsset");
    struct
    {
        struct UGroomAsset* InGroomAsset;
        struct USkeletalMesh* InSkeletalMesh;
        int32_t InNumInterpolationPoints;
        struct USkeletalMesh* InSourceSkeletalMeshForTransfer;
        int32_t InMatchingSection;
        struct UGroomBindingAsset* ReturnValue;
    } Parms{};
    Parms.InGroomAsset = (struct UGroomAsset*)InGroomAsset;
    Parms.InSkeletalMesh = (struct USkeletalMesh*)InSkeletalMesh;
    Parms.InNumInterpolationPoints = (int32_t)InNumInterpolationPoints;
    Parms.InSourceSkeletalMeshForTransfer = (struct USkeletalMesh*)InSourceSkeletalMeshForTransfer;
    Parms.InMatchingSection = (int32_t)InMatchingSection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGroomComponent
void UGroomComponent::SetGroomAsset(struct UGroomAsset* Asset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GroomComponent", "SetGroomAsset");
    struct
    {
        struct UGroomAsset* Asset;
    } Parms{};
    Parms.Asset = (struct UGroomAsset*)Asset;
    this->ProcessEvent(Func, &Parms);
}

void UGroomComponent::SetBindingAsset(struct UGroomBindingAsset* InBinding)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GroomComponent", "SetBindingAsset");
    struct
    {
        struct UGroomBindingAsset* InBinding;
    } Parms{};
    Parms.InBinding = (struct UGroomBindingAsset*)InBinding;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
