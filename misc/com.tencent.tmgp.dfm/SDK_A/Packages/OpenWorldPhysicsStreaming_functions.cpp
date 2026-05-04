#include "OpenWorldPhysicsStreaming.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- APhysXDrawingNet::* ----
void APhysXDrawingNet::ServerDestroy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PhysXDrawingNet", "ServerDestroy");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void APhysXDrawingNet::ServerCreatePackets(struct FVector Position, float Distance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PhysXDrawingNet", "ServerCreatePackets");
    struct
    {
        struct FVector Position;
        float Distance;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.Distance = (float)Distance;
    this->ProcessEvent(Func, &Parms);
}

void APhysXDrawingNet::ClientReceivePacket(struct TArray<uint8_t> PacketData, int32_t NumPackets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PhysXDrawingNet", "ClientReceivePacket");
    struct
    {
        struct TArray<uint8_t> PacketData;
        int32_t NumPackets;
    } Parms{};
    Parms.PacketData = (struct TArray<uint8_t>)PacketData;
    Parms.NumPackets = (int32_t)NumPackets;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
