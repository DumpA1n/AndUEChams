#include "InteractiveToolsFramework.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGizmoBaseComponent
void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoBaseComponent", "UpdateWorldLocalState");
    struct
    {
        bool bWorldIn;
    } Parms{};
    Parms.bWorldIn = (bool)bWorldIn;
    this->ProcessEvent(Func, &Parms);
}

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoBaseComponent", "UpdateHoverState");
    struct
    {
        bool bHoveringIn;
    } Parms{};
    Parms.bHoveringIn = (bool)bHoveringIn;
    this->ProcessEvent(Func, &Parms);
}

// IGizmoTransformSource
void IGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoTransformSource", "SetTransform");
    struct
    {
        struct FTransform NewTransform;
    } Parms{};
    Parms.NewTransform = (struct FTransform)NewTransform;
    this->ProcessEvent(Func, &Parms);
}

struct FTransform IGizmoTransformSource::GetTransform()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoTransformSource", "GetTransform");
    struct
    {
        struct FTransform ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IGizmoAxisSource
bool IGizmoAxisSource::HasTangentVectors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoAxisSource", "HasTangentVectors");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGizmoAxisSource::GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoAxisSource", "GetTangentVectors");
    struct
    {
        struct FVector TangentXOut;
        struct FVector TangentYOut;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    TangentXOut = Parms.TangentXOut;
    TangentYOut = Parms.TangentYOut;
}

struct FVector IGizmoAxisSource::GetOrigin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoAxisSource", "GetOrigin");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IGizmoAxisSource::GetDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoAxisSource", "GetDirection");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IGizmoClickTarget
void IGizmoClickTarget::UpdateHoverState(bool bHovering)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoClickTarget", "UpdateHoverState");
    struct
    {
        bool bHovering;
    } Parms{};
    Parms.bHovering = (bool)bHovering;
    this->ProcessEvent(Func, &Parms);
}

// IGizmoStateTarget
void IGizmoStateTarget::EndUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoStateTarget", "EndUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGizmoStateTarget::BeginUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoStateTarget", "BeginUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// IGizmoFloatParameterSource
void IGizmoFloatParameterSource::SetParameter(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoFloatParameterSource", "SetParameter");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

float IGizmoFloatParameterSource::GetParameter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoFloatParameterSource", "GetParameter");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGizmoFloatParameterSource::EndModify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoFloatParameterSource", "EndModify");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGizmoFloatParameterSource::BeginModify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoFloatParameterSource", "BeginModify");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// IGizmoVec2ParameterSource
void IGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoVec2ParameterSource", "SetParameter");
    struct
    {
        struct FVector2D NewValue;
    } Parms{};
    Parms.NewValue = (struct FVector2D)NewValue;
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D IGizmoVec2ParameterSource::GetParameter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoVec2ParameterSource", "GetParameter");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGizmoVec2ParameterSource::EndModify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoVec2ParameterSource", "EndModify");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void IGizmoVec2ParameterSource::BeginModify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GizmoVec2ParameterSource", "BeginModify");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
