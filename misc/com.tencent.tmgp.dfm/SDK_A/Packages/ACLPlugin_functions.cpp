#include "ACLPlugin.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAnimationCompressionLibraryDatabase::* ----
void UAnimationCompressionLibraryDatabase::SetVisualFidelity(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UAnimationCompressionLibraryDatabase* DatabaseAsset, EACLVisualFidelityChangeResult& Result, EACLVisualFidelity VisualFidelity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimationCompressionLibraryDatabase", "SetVisualFidelity");
    struct
    {
        struct UObject* WorldContextObject;
        struct FLatentActionInfo LatentInfo;
        struct UAnimationCompressionLibraryDatabase* DatabaseAsset;
        enum EACLVisualFidelityChangeResult Result;
        enum EACLVisualFidelity VisualFidelity;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LatentInfo = (struct FLatentActionInfo)LatentInfo;
    Parms.DatabaseAsset = (struct UAnimationCompressionLibraryDatabase*)DatabaseAsset;
    Parms.VisualFidelity = (enum EACLVisualFidelity)VisualFidelity;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Result = Parms.Result;
}

EACLVisualFidelity UAnimationCompressionLibraryDatabase::GetVisualFidelity(struct UAnimationCompressionLibraryDatabase* DatabaseAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimationCompressionLibraryDatabase", "GetVisualFidelity");
    struct
    {
        struct UAnimationCompressionLibraryDatabase* DatabaseAsset;
        enum EACLVisualFidelity ReturnValue;
    } Parms{};
    Parms.DatabaseAsset = (struct UAnimationCompressionLibraryDatabase*)DatabaseAsset;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
