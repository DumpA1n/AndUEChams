#include "DFMultiprocessingSocket.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFSocketClient::* ----
void UDFSocketClient::SendToServer(struct FString Message)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClient", "SendToServer");
    struct
    {
        struct FString Message;
    } Parms{};
    Parms.Message = (struct FString)Message;
    this->ProcessEvent(Func, &Parms);
}

void UDFSocketClient::ReconnectServer(struct FString ServerIP, int32_t ServerPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClient", "ReconnectServer");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    this->ProcessEvent(Func, &Parms);
}

void UDFSocketClient::OnServerDisconnect(struct USocketRSThread* pThread)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClient", "OnServerDisconnect");
    struct
    {
        struct USocketRSThread* pThread;
    } Parms{};
    Parms.pThread = (struct USocketRSThread*)pThread;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFSocketClient::IsConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClient", "IsConnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFSocketClient::Disconnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClient", "Disconnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFSocketClient::CreateClientAndConnect(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClient", "CreateClientAndConnect");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
        int32_t ReceiveBufferSize;
        int32_t SendBufferSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    Parms.ReceiveBufferSize = (int32_t)ReceiveBufferSize;
    Parms.SendBufferSize = (int32_t)SendBufferSize;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFSocketClient::ConnectServer(struct FString ServerIP, int32_t ServerPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClient", "ConnectServer");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFSocketClientV2::* ----
void UDFSocketClientV2::SendToServer(struct FString Message)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClientV2", "SendToServer");
    struct
    {
        struct FString Message;
    } Parms{};
    Parms.Message = (struct FString)Message;
    this->ProcessEvent(Func, &Parms);
}

void UDFSocketClientV2::ReconnectServer(struct FString ServerIP, int32_t ServerPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClientV2", "ReconnectServer");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    this->ProcessEvent(Func, &Parms);
}

void UDFSocketClientV2::OnServerDisconnect(struct USocketRSThreadV2* pThread)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClientV2", "OnServerDisconnect");
    struct
    {
        struct USocketRSThreadV2* pThread;
    } Parms{};
    Parms.pThread = (struct USocketRSThreadV2*)pThread;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFSocketClientV2::IsConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClientV2", "IsConnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFSocketClientV2::Disconnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClientV2", "Disconnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFSocketClientV2::CreateClientAndConnect(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClientV2", "CreateClientAndConnect");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
        int32_t ReceiveBufferSize;
        int32_t SendBufferSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    Parms.ReceiveBufferSize = (int32_t)ReceiveBufferSize;
    Parms.SendBufferSize = (int32_t)SendBufferSize;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFSocketClientV2::ConnectServer(struct FString ServerIP, int32_t ServerPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketClientV2", "ConnectServer");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UDFSocketServer::* ----
void UDFSocketServer::SendToClient(struct FString Message)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketServer", "SendToClient");
    struct
    {
        struct FString Message;
    } Parms{};
    Parms.Message = (struct FString)Message;
    this->ProcessEvent(Func, &Parms);
}

void UDFSocketServer::OnDisConnected(struct USocketRSThread* pThread)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketServer", "OnDisConnected");
    struct
    {
        struct USocketRSThread* pThread;
    } Parms{};
    Parms.pThread = (struct USocketRSThread*)pThread;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFSocketServer::CreateServer(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketServer", "CreateServer");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
        int32_t ReceiveBufferSize;
        int32_t SendBufferSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    Parms.ReceiveBufferSize = (int32_t)ReceiveBufferSize;
    Parms.SendBufferSize = (int32_t)SendBufferSize;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFSocketServer::CloseServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketServer", "CloseServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UDFSocketServerV2::* ----
void UDFSocketServerV2::SendToClient(struct FString Message)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketServerV2", "SendToClient");
    struct
    {
        struct FString Message;
    } Parms{};
    Parms.Message = (struct FString)Message;
    this->ProcessEvent(Func, &Parms);
}

void UDFSocketServerV2::OnDisConnected(struct USocketRSThreadV2* pThread)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketServerV2", "OnDisConnected");
    struct
    {
        struct USocketRSThreadV2* pThread;
    } Parms{};
    Parms.pThread = (struct USocketRSThreadV2*)pThread;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFSocketServerV2::CreateServer(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketServerV2", "CreateServer");
    struct
    {
        struct FString ServerIP;
        int32_t ServerPort;
        int32_t ReceiveBufferSize;
        int32_t SendBufferSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ServerIP = (struct FString)ServerIP;
    Parms.ServerPort = (int32_t)ServerPort;
    Parms.ReceiveBufferSize = (int32_t)ReceiveBufferSize;
    Parms.SendBufferSize = (int32_t)SendBufferSize;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFSocketServerV2::CloseServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFSocketServerV2", "CloseServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
