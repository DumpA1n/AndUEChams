#include "FieldSystemEngine.hpp"
#include "FieldSystemCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UFieldSystemComponent::* ----
void UFieldSystemComponent::ResetFieldSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "ResetFieldSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(uint8_t Enabled, struct FVector Position, struct FVector Direction, float radius, float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "ApplyUniformVectorFalloffForce");
    struct
    {
        uint8_t Enabled;
        struct FVector Position;
        struct FVector Direction;
        float radius;
        float Magnitude;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Position = (struct FVector)Position;
    Parms.Direction = (struct FVector)Direction;
    Parms.radius = (float)radius;
    Parms.Magnitude = (float)Magnitude;
    this->ProcessEvent(Func, &Parms);
}

void UFieldSystemComponent::ApplyStrainField(uint8_t Enabled, struct FVector Position, float radius, float Magnitude, int32_t Iterations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "ApplyStrainField");
    struct
    {
        uint8_t Enabled;
        struct FVector Position;
        float radius;
        float Magnitude;
        int32_t Iterations;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Position = (struct FVector)Position;
    Parms.radius = (float)radius;
    Parms.Magnitude = (float)Magnitude;
    Parms.Iterations = (int32_t)Iterations;
    this->ProcessEvent(Func, &Parms);
}

void UFieldSystemComponent::ApplyStayDynamicField(uint8_t Enabled, struct FVector Position, float radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "ApplyStayDynamicField");
    struct
    {
        uint8_t Enabled;
        struct FVector Position;
        float radius;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Position = (struct FVector)Position;
    Parms.radius = (float)radius;
    this->ProcessEvent(Func, &Parms);
}

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(uint8_t Enabled, struct FVector Position, float radius, float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "ApplyRadialVectorFalloffForce");
    struct
    {
        uint8_t Enabled;
        struct FVector Position;
        float radius;
        float Magnitude;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Position = (struct FVector)Position;
    Parms.radius = (float)radius;
    Parms.Magnitude = (float)Magnitude;
    this->ProcessEvent(Func, &Parms);
}

void UFieldSystemComponent::ApplyRadialForce(uint8_t Enabled, struct FVector Position, float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "ApplyRadialForce");
    struct
    {
        uint8_t Enabled;
        struct FVector Position;
        float Magnitude;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Position = (struct FVector)Position;
    Parms.Magnitude = (float)Magnitude;
    this->ProcessEvent(Func, &Parms);
}

void UFieldSystemComponent::ApplyPhysicsField(uint8_t Enabled, EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "ApplyPhysicsField");
    struct
    {
        uint8_t Enabled;
        enum EFieldPhysicsType Target;
        struct UFieldSystemMetaData* MetaData;
        struct UFieldNodeBase* Field;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Target = (enum EFieldPhysicsType)Target;
    Parms.MetaData = (struct UFieldSystemMetaData*)MetaData;
    Parms.Field = (struct UFieldNodeBase*)Field;
    this->ProcessEvent(Func, &Parms);
}

void UFieldSystemComponent::ApplyLinearForce(uint8_t Enabled, struct FVector Direction, float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "ApplyLinearForce");
    struct
    {
        uint8_t Enabled;
        struct FVector Direction;
        float Magnitude;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Direction = (struct FVector)Direction;
    Parms.Magnitude = (float)Magnitude;
    this->ProcessEvent(Func, &Parms);
}

void UFieldSystemComponent::AddFieldCommand(uint8_t Enabled, EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemComponent", "AddFieldCommand");
    struct
    {
        uint8_t Enabled;
        enum EFieldPhysicsType Target;
        struct UFieldSystemMetaData* MetaData;
        struct UFieldNodeBase* Field;
    } Parms{};
    Parms.Enabled = (uint8_t)Enabled;
    Parms.Target = (enum EFieldPhysicsType)Target;
    Parms.MetaData = (struct UFieldSystemMetaData*)MetaData;
    Parms.Field = (struct UFieldNodeBase*)Field;
    this->ProcessEvent(Func, &Parms);
}

// ---- UFieldSystemMetaDataIteration::* ----
struct UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int32_t Iterations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemMetaDataIteration", "SetMetaDataIteration");
    struct
    {
        int32_t Iterations;
        struct UFieldSystemMetaDataIteration* ReturnValue;
    } Parms{};
    Parms.Iterations = (int32_t)Iterations;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UFieldSystemMetaDataProcessingResolution::* ----
struct UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(EFieldResolutionType ResolutionType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FieldSystemMetaDataProcessingResolution", "SetMetaDataaProcessingResolutionType");
    struct
    {
        enum EFieldResolutionType ResolutionType;
        struct UFieldSystemMetaDataProcessingResolution* ReturnValue;
    } Parms{};
    Parms.ResolutionType = (enum EFieldResolutionType)ResolutionType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UUniformInteger::* ----
struct UUniformInteger* UUniformInteger::SetUniformInteger(int32_t Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformInteger", "SetUniformInteger");
    struct
    {
        int32_t Magnitude;
        struct UUniformInteger* ReturnValue;
    } Parms{};
    Parms.Magnitude = (int32_t)Magnitude;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URadialIntMask::* ----
struct URadialIntMask* URadialIntMask::SetRadialIntMask(float radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, ESetMaskConditionType SetMaskConditionIn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialIntMask", "SetRadialIntMask");
    struct
    {
        float radius;
        struct FVector Position;
        int32_t InteriorValue;
        int32_t ExteriorValue;
        enum ESetMaskConditionType SetMaskConditionIn;
        struct URadialIntMask* ReturnValue;
    } Parms{};
    Parms.radius = (float)radius;
    Parms.Position = (struct FVector)Position;
    Parms.InteriorValue = (int32_t)InteriorValue;
    Parms.ExteriorValue = (int32_t)ExteriorValue;
    Parms.SetMaskConditionIn = (enum ESetMaskConditionType)SetMaskConditionIn;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UUniformScalar::* ----
struct UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformScalar", "SetUniformScalar");
    struct
    {
        float Magnitude;
        struct UUniformScalar* ReturnValue;
    } Parms{};
    Parms.Magnitude = (float)Magnitude;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URadialFalloff::* ----
struct URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float radius, struct FVector Position, EFieldFalloffType Falloff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialFalloff", "SetRadialFalloff");
    struct
    {
        float Magnitude;
        float MinRange;
        float MaxRange;
        float Default;
        float radius;
        struct FVector Position;
        enum EFieldFalloffType Falloff;
        struct URadialFalloff* ReturnValue;
    } Parms{};
    Parms.Magnitude = (float)Magnitude;
    Parms.MinRange = (float)MinRange;
    Parms.MaxRange = (float)MaxRange;
    Parms.Default = (float)Default;
    Parms.radius = (float)radius;
    Parms.Position = (struct FVector)Position;
    Parms.Falloff = (enum EFieldFalloffType)Falloff;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UPlaneFalloff::* ----
struct UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, EFieldFalloffType Falloff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PlaneFalloff", "SetPlaneFalloff");
    struct
    {
        float Magnitude;
        float MinRange;
        float MaxRange;
        float Default;
        float Distance;
        struct FVector Position;
        struct FVector Normal;
        enum EFieldFalloffType Falloff;
        struct UPlaneFalloff* ReturnValue;
    } Parms{};
    Parms.Magnitude = (float)Magnitude;
    Parms.MinRange = (float)MinRange;
    Parms.MaxRange = (float)MaxRange;
    Parms.Default = (float)Default;
    Parms.Distance = (float)Distance;
    Parms.Position = (struct FVector)Position;
    Parms.Normal = (struct FVector)Normal;
    Parms.Falloff = (enum EFieldFalloffType)Falloff;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UBoxFalloff::* ----
struct UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, EFieldFalloffType Falloff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BoxFalloff", "SetBoxFalloff");
    struct
    {
        float Magnitude;
        float MinRange;
        float MaxRange;
        float Default;
        struct FTransform Transform;
        enum EFieldFalloffType Falloff;
        struct UBoxFalloff* ReturnValue;
    } Parms{};
    Parms.Magnitude = (float)Magnitude;
    Parms.MinRange = (float)MinRange;
    Parms.MaxRange = (float)MaxRange;
    Parms.Default = (float)Default;
    Parms.Transform = (struct FTransform)Transform;
    Parms.Falloff = (enum EFieldFalloffType)Falloff;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UNoiseField::* ----
struct UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NoiseField", "SetNoiseField");
    struct
    {
        float MinRange;
        float MaxRange;
        struct FTransform Transform;
        struct UNoiseField* ReturnValue;
    } Parms{};
    Parms.MinRange = (float)MinRange;
    Parms.MaxRange = (float)MaxRange;
    Parms.Transform = (struct FTransform)Transform;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UUniformVector::* ----
struct UUniformVector* UUniformVector::SetUniformVector(float Magnitude, struct FVector Direction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UniformVector", "SetUniformVector");
    struct
    {
        float Magnitude;
        struct FVector Direction;
        struct UUniformVector* ReturnValue;
    } Parms{};
    Parms.Magnitude = (float)Magnitude;
    Parms.Direction = (struct FVector)Direction;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URadialVector::* ----
struct URadialVector* URadialVector::SetRadialVector(float Magnitude, struct FVector Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RadialVector", "SetRadialVector");
    struct
    {
        float Magnitude;
        struct FVector Position;
        struct URadialVector* ReturnValue;
    } Parms{};
    Parms.Magnitude = (float)Magnitude;
    Parms.Position = (struct FVector)Position;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- URandomVector::* ----
struct URandomVector* URandomVector::SetRandomVector(float Magnitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RandomVector", "SetRandomVector");
    struct
    {
        float Magnitude;
        struct URandomVector* ReturnValue;
    } Parms{};
    Parms.Magnitude = (float)Magnitude;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UOperatorField::* ----
struct UOperatorField* UOperatorField::SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, EFieldOperationType Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OperatorField", "SetOperatorField");
    struct
    {
        float Magnitude;
        struct UFieldNodeBase* RightField;
        struct UFieldNodeBase* LeftField;
        enum EFieldOperationType Operation;
        struct UOperatorField* ReturnValue;
    } Parms{};
    Parms.Magnitude = (float)Magnitude;
    Parms.RightField = (struct UFieldNodeBase*)RightField;
    Parms.LeftField = (struct UFieldNodeBase*)LeftField;
    Parms.Operation = (enum EFieldOperationType)Operation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UToIntegerField::* ----
struct UToIntegerField* UToIntegerField::SetToIntegerField(struct UFieldNodeFloat* FloatField)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ToIntegerField", "SetToIntegerField");
    struct
    {
        struct UFieldNodeFloat* FloatField;
        struct UToIntegerField* ReturnValue;
    } Parms{};
    Parms.FloatField = (struct UFieldNodeFloat*)FloatField;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UToFloatField::* ----
struct UToFloatField* UToFloatField::SetToFloatField(struct UFieldNodeInt* IntegerField)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ToFloatField", "SetToFloatField");
    struct
    {
        struct UFieldNodeInt* IntegerField;
        struct UToFloatField* ReturnValue;
    } Parms{};
    Parms.IntegerField = (struct UFieldNodeInt*)IntegerField;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCullingField::* ----
struct UCullingField* UCullingField::SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, EFieldCullingOperationType Operation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CullingField", "SetCullingField");
    struct
    {
        struct UFieldNodeBase* Culling;
        struct UFieldNodeBase* Field;
        enum EFieldCullingOperationType Operation;
        struct UCullingField* ReturnValue;
    } Parms{};
    Parms.Culling = (struct UFieldNodeBase*)Culling;
    Parms.Field = (struct UFieldNodeBase*)Field;
    Parms.Operation = (enum EFieldCullingOperationType)Operation;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UReturnResultsTerminal::* ----
struct UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ReturnResultsTerminal", "SetReturnResultsTerminal");
    struct
    {
        struct UReturnResultsTerminal* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
