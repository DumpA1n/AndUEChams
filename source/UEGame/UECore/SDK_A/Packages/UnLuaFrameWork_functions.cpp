#include "UnLuaFrameWork.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UUnLuaTest
bool UUnLuaTest::TestHotfix()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestHotfix");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestFinishedDefferSpawnActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestFinishedDefferSpawnActor");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUnLuaTest::TestDynamicAddProperty2(struct UWorld* World, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDynamicAddProperty2");
    struct
    {
        struct UWorld* World;
        struct FVector Transform;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUnLuaTest::TestDynamicAddProperty1(struct UWorld* World, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDynamicAddProperty1");
    struct
    {
        struct UWorld* World;
        struct FVector Transform;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UUnLuaTest::TestDefferSpawnActor9(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor9");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestDefferSpawnActor8(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor8");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestDefferSpawnActor7(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor7");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestDefferSpawnActor6(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor6");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestDefferSpawnActor5(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor5");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestDefferSpawnActor4(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor4");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestDefferSpawnActor3(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor3");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestDefferSpawnActor2(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor2");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestDefferSpawnActor(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestDefferSpawnActor");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UUnLuaTest::TestAsyncGCForScriptStruct9(struct UWorld* World, struct UObject* ArcchClass, struct FVector Transform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "TestAsyncGCForScriptStruct9");
    struct
    {
        struct UWorld* World;
        struct UObject* ArcchClass;
        struct FVector Transform;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.ArcchClass = (struct UObject*)ArcchClass;
    Parms.Transform = (struct FVector)Transform;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UUnLuaTest::SetPackageGCMark(struct UObject* Obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "SetPackageGCMark");
    struct
    {
        struct UObject* Obj;
    } Parms{};
    Parms.Obj = (struct UObject*)Obj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UUnLuaTest::SetObjectGCMark(struct UObject* Obj)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaTest", "SetObjectGCMark");
    struct
    {
        struct UObject* Obj;
    } Parms{};
    Parms.Obj = (struct UObject*)Obj;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// AUnLuaTestActor
void AUnLuaTestActor::TestOverrideFunction(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaTestActor", "TestOverrideFunction");
    struct
    {
        struct AActor* InActor;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
