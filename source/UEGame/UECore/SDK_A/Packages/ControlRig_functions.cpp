#include "ControlRig.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UControlRig
void UControlRig::SetInteractionRigClass(struct UControlRig* InInteractionRigClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRig", "SetInteractionRigClass");
    struct
    {
        struct UControlRig* InInteractionRigClass;
    } Parms{};
    Parms.InInteractionRigClass = (struct UControlRig*)InInteractionRigClass;
    this->ProcessEvent(Func, &Parms);
}

void UControlRig::SetInteractionRig(struct UControlRig* InInteractionRig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRig", "SetInteractionRig");
    struct
    {
        struct UControlRig* InInteractionRig;
    } Parms{};
    Parms.InInteractionRig = (struct UControlRig*)InInteractionRig;
    this->ProcessEvent(Func, &Parms);
}

struct UControlRig* UControlRig::GetInteractionRigClass()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRig", "GetInteractionRigClass");
    struct
    {
        struct UControlRig* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UControlRig* UControlRig::GetInteractionRig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRig", "GetInteractionRig");
    struct
    {
        struct UControlRig* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UControlRigComponent
void UControlRigComponent::Update(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "Update");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetMappedElements");
    struct
    {
        struct TArray<struct FControlRigComponentMappedElement> NewMappedElements;
    } Parms{};
    Parms.NewMappedElements = (struct TArray<struct FControlRigComponentMappedElement>)NewMappedElements;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetInitialSpaceTransform(struct FName SpaceName, struct FTransform InitialTransform, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetInitialSpaceTransform");
    struct
    {
        struct FName SpaceName;
        struct FTransform InitialTransform;
        enum EControlRigComponentSpace Space;
    } Parms{};
    Parms.SpaceName = (struct FName)SpaceName;
    Parms.InitialTransform = (struct FTransform)InitialTransform;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetInitialBoneTransform(struct FName BoneName, struct FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetInitialBoneTransform");
    struct
    {
        struct FName BoneName;
        struct FTransform InitialTransform;
        enum EControlRigComponentSpace Space;
        bool bPropagateToChildren;
    } Parms{};
    Parms.BoneName = (struct FName)BoneName;
    Parms.InitialTransform = (struct FTransform)InitialTransform;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    Parms.bPropagateToChildren = (bool)bPropagateToChildren;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlVector2D(struct FName ControlName, struct FVector2D Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlVector2D");
    struct
    {
        struct FName ControlName;
        struct FVector2D Value;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Value = (struct FVector2D)Value;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlTransform(struct FName ControlName, struct FTransform Value, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlTransform");
    struct
    {
        struct FName ControlName;
        struct FTransform Value;
        enum EControlRigComponentSpace Space;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Value = (struct FTransform)Value;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlScale(struct FName ControlName, struct FVector Value, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlScale");
    struct
    {
        struct FName ControlName;
        struct FVector Value;
        enum EControlRigComponentSpace Space;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Value = (struct FVector)Value;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlRotator(struct FName ControlName, struct FRotator Value, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlRotator");
    struct
    {
        struct FName ControlName;
        struct FRotator Value;
        enum EControlRigComponentSpace Space;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Value = (struct FRotator)Value;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlPosition(struct FName ControlName, struct FVector Value, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlPosition");
    struct
    {
        struct FName ControlName;
        struct FVector Value;
        enum EControlRigComponentSpace Space;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Value = (struct FVector)Value;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlOffset(struct FName ControlName, struct FTransform OffsetTransform, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlOffset");
    struct
    {
        struct FName ControlName;
        struct FTransform OffsetTransform;
        enum EControlRigComponentSpace Space;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.OffsetTransform = (struct FTransform)OffsetTransform;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlInt(struct FName ControlName, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlInt");
    struct
    {
        struct FName ControlName;
        int32_t Value;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Value = (int32_t)Value;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlFloat(struct FName ControlName, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlFloat");
    struct
    {
        struct FName ControlName;
        float Value;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetControlBool(struct FName ControlName, bool Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetControlBool");
    struct
    {
        struct FName ControlName;
        bool Value;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Value = (bool)Value;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetBoneTransform(struct FName BoneName, struct FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetBoneTransform");
    struct
    {
        struct FName BoneName;
        struct FTransform Transform;
        enum EControlRigComponentSpace Space;
        float Weight;
        bool bPropagateToChildren;
    } Parms{};
    Parms.BoneName = (struct FName)BoneName;
    Parms.Transform = (struct FTransform)Transform;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    Parms.Weight = (float)Weight;
    Parms.bPropagateToChildren = (bool)bPropagateToChildren;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(struct USkeletalMesh* InSkeletalMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "SetBoneInitialTransformsFromSkeletalMesh");
    struct
    {
        struct USkeletalMesh* InSkeletalMesh;
    } Parms{};
    Parms.InSkeletalMesh = (struct USkeletalMesh*)InSkeletalMesh;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::OnPreUpdate(struct UControlRigComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "OnPreUpdate");
    struct
    {
        struct UControlRigComponent* Component;
    } Parms{};
    Parms.Component = (struct UControlRigComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::OnPreSetup(struct UControlRigComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "OnPreSetup");
    struct
    {
        struct UControlRigComponent* Component;
    } Parms{};
    Parms.Component = (struct UControlRigComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::OnPostUpdate(struct UControlRigComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "OnPostUpdate");
    struct
    {
        struct UControlRigComponent* Component;
    } Parms{};
    Parms.Component = (struct UControlRigComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::OnPostSetup(struct UControlRigComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "OnPostSetup");
    struct
    {
        struct UControlRigComponent* Component;
    } Parms{};
    Parms.Component = (struct UControlRigComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::OnPostInitialize(struct UControlRigComponent* Component)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "OnPostInitialize");
    struct
    {
        struct UControlRigComponent* Component;
    } Parms{};
    Parms.Component = (struct UControlRigComponent*)Component;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::Initialize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "Initialize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FTransform UControlRigComponent::GetSpaceTransform(struct FName SpaceName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetSpaceTransform");
    struct
    {
        struct FName SpaceName;
        enum EControlRigComponentSpace Space;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.SpaceName = (struct FName)SpaceName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetInitialSpaceTransform(struct FName SpaceName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetInitialSpaceTransform");
    struct
    {
        struct FName SpaceName;
        enum EControlRigComponentSpace Space;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.SpaceName = (struct FName)SpaceName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetInitialBoneTransform(struct FName BoneName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetInitialBoneTransform");
    struct
    {
        struct FName BoneName;
        enum EControlRigComponentSpace Space;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.BoneName = (struct FName)BoneName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UControlRigComponent::GetElementNames(ERigElementType ElementType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetElementNames");
    struct
    {
        enum ERigElementType ElementType;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.ElementType = (enum ERigElementType)ElementType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UControlRigComponent::GetControlVector2D(struct FName ControlName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlVector2D");
    struct
    {
        struct FName ControlName;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetControlTransform(struct FName ControlName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlTransform");
    struct
    {
        struct FName ControlName;
        enum EControlRigComponentSpace Space;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UControlRigComponent::GetControlScale(struct FName ControlName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlScale");
    struct
    {
        struct FName ControlName;
        enum EControlRigComponentSpace Space;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UControlRigComponent::GetControlRotator(struct FName ControlName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlRotator");
    struct
    {
        struct FName ControlName;
        enum EControlRigComponentSpace Space;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UControlRig* UControlRigComponent::GetControlRig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlRig");
    struct
    {
        struct UControlRig* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UControlRigComponent::GetControlPosition(struct FName ControlName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlPosition");
    struct
    {
        struct FName ControlName;
        enum EControlRigComponentSpace Space;
        struct FVector ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetControlOffset(struct FName ControlName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlOffset");
    struct
    {
        struct FName ControlName;
        enum EControlRigComponentSpace Space;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UControlRigComponent::GetControlInt(struct FName ControlName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlInt");
    struct
    {
        struct FName ControlName;
        int32_t ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UControlRigComponent::GetControlFloat(struct FName ControlName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlFloat");
    struct
    {
        struct FName ControlName;
        float ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UControlRigComponent::GetControlBool(struct FName ControlName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetControlBool");
    struct
    {
        struct FName ControlName;
        bool ReturnValue;
    } Parms{};
    Parms.ControlName = (struct FName)ControlName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform UControlRigComponent::GetBoneTransform(struct FName BoneName, EControlRigComponentSpace Space)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetBoneTransform");
    struct
    {
        struct FName BoneName;
        enum EControlRigComponentSpace Space;
        struct FTransform ReturnValue;
    } Parms{};
    Parms.BoneName = (struct FName)BoneName;
    Parms.Space = (enum EControlRigComponentSpace)Space;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UControlRigComponent::GetAbsoluteTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "GetAbsoluteTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UControlRigComponent::DoesElementExist(struct FName Name, ERigElementType ElementType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "DoesElementExist");
    struct
    {
        struct FName Name;
        enum ERigElementType ElementType;
        bool ReturnValue;
    } Parms{};
    Parms.Name = (struct FName)Name;
    Parms.ElementType = (enum ERigElementType)ElementType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UControlRigComponent::ClearMappedElements()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "ClearMappedElements");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::AddMappedSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent, struct TArray<struct FControlRigComponentMappedBone> Bones, struct TArray<struct FControlRigComponentMappedCurve> Curves)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "AddMappedSkeletalMesh");
    struct
    {
        struct USkeletalMeshComponent* SkeletalMeshComponent;
        struct TArray<struct FControlRigComponentMappedBone> Bones;
        struct TArray<struct FControlRigComponentMappedCurve> Curves;
    } Parms{};
    Parms.SkeletalMeshComponent = (struct USkeletalMeshComponent*)SkeletalMeshComponent;
    Parms.Bones = (struct TArray<struct FControlRigComponentMappedBone>)Bones;
    Parms.Curves = (struct TArray<struct FControlRigComponentMappedCurve>)Curves;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::AddMappedElements(struct TArray<struct FControlRigComponentMappedElement> NewMappedElements)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "AddMappedElements");
    struct
    {
        struct TArray<struct FControlRigComponentMappedElement> NewMappedElements;
    } Parms{};
    Parms.NewMappedElements = (struct TArray<struct FControlRigComponentMappedElement>)NewMappedElements;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::AddMappedComponents(struct TArray<struct FControlRigComponentMappedComponent> Components)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "AddMappedComponents");
    struct
    {
        struct TArray<struct FControlRigComponentMappedComponent> Components;
    } Parms{};
    Parms.Components = (struct TArray<struct FControlRigComponentMappedComponent>)Components;
    this->ProcessEvent(Func, &Parms);
}

void UControlRigComponent::AddMappedCompleteSkeletalMesh(struct USkeletalMeshComponent* SkeletalMeshComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigComponent", "AddMappedCompleteSkeletalMesh");
    struct
    {
        struct USkeletalMeshComponent* SkeletalMeshComponent;
    } Parms{};
    Parms.SkeletalMeshComponent = (struct USkeletalMeshComponent*)SkeletalMeshComponent;
    this->ProcessEvent(Func, &Parms);
}

// AControlRigControlActor
void AControlRigControlActor::Refresh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigControlActor", "Refresh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AControlRigControlActor::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigControlActor", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AControlRigGizmoActor
void AControlRigGizmoActor::SetSelected(bool bInSelected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "SetSelected");
    struct
    {
        bool bInSelected;
    } Parms{};
    Parms.bInSelected = (bool)bInSelected;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::SetSelectable(bool bInSelectable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "SetSelectable");
    struct
    {
        bool bInSelectable;
    } Parms{};
    Parms.bInSelectable = (bool)bInSelectable;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::SetHovered(bool bInHovered)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "SetHovered");
    struct
    {
        bool bInHovered;
    } Parms{};
    Parms.bInHovered = (bool)bInHovered;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::SetGlobalTransform(const struct FTransform& InTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "SetGlobalTransform");
    struct
    {
        struct FTransform InTransform;
    } Parms{};
    Parms.InTransform = (struct FTransform)InTransform;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::SetEnabled(bool bInEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "SetEnabled");
    struct
    {
        bool bInEnabled;
    } Parms{};
    Parms.bInEnabled = (bool)bInEnabled;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::OnTransformChanged(const struct FTransform& NewTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "OnTransformChanged");
    struct
    {
        struct FTransform NewTransform;
    } Parms{};
    Parms.NewTransform = (struct FTransform)NewTransform;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::OnSelectionChanged(bool bIsSelected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "OnSelectionChanged");
    struct
    {
        bool bIsSelected;
    } Parms{};
    Parms.bIsSelected = (bool)bIsSelected;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::OnManipulatingChanged(bool bIsManipulating)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "OnManipulatingChanged");
    struct
    {
        bool bIsManipulating;
    } Parms{};
    Parms.bIsManipulating = (bool)bIsManipulating;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::OnHoveredChanged(bool bIsSelected)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "OnHoveredChanged");
    struct
    {
        bool bIsSelected;
    } Parms{};
    Parms.bIsSelected = (bool)bIsSelected;
    this->ProcessEvent(Func, &Parms);
}

void AControlRigGizmoActor::OnEnabledChanged(bool bIsEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "OnEnabledChanged");
    struct
    {
        bool bIsEnabled;
    } Parms{};
    Parms.bIsEnabled = (bool)bIsEnabled;
    this->ProcessEvent(Func, &Parms);
}

bool AControlRigGizmoActor::IsSelectedInEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "IsSelectedInEditor");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AControlRigGizmoActor::IsHovered()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "IsHovered");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AControlRigGizmoActor::IsEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "IsEnabled");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTransform AControlRigGizmoActor::GetGlobalTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ControlRigGizmoActor", "GetGlobalTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
