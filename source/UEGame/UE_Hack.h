#pragma once

#include <map>
#include <unordered_map>

#include "UEGame/UECore/SDK_A/SDK.hpp"

class UE_Hack
{
public:
    UE_Hack(const UE_Hack&)            = delete;
    UE_Hack& operator=(const UE_Hack&) = delete;

protected:
    UE_Hack()  = default;
    ~UE_Hack() = default;

public:
    static UE_Hack& GetInstance()
    {
        static UE_Hack Instance;
        return Instance;
    }

    void Init();
    void Tick();
    void RenderMenu();

    APawn*             GetLocalPlayer() const { return LocalPlayer; }
    APlayerController* GetLocalController() const { return LocalPlayerController; }
    bool               GetIsBreakThroughMode() const { return bIsBreakThroughMode; }

    UWorld*  GetWorld() const { return World ? *World : nullptr; }
    UEngine* GetEngine() const { return Engine ? *Engine : nullptr; }

    void SetCanvas(UCanvas* InCanvas) { Canvas = InCanvas; }
    void SetWorld(UWorld** InWorld) { World = InWorld; }
    void SetEngine(UEngine** InEngine) { Engine = InEngine; }

private:
    void ProcessMaterialHack(AActor* Actor);
    void ProcessItemMaterialHack(AActor* Actor);
    void ApplyChamsColor(AActor* Actor, UMeshComponent* Mesh, int Slot,
                         UMaterialInterface* CurMaterialInterface,
                         const FLinearColor& Color, bool bForceColorUpdate);
    bool IsValidActor(AActor* Actor);
    bool Visible(AActor* Other);
	bool Visible(AActor* Other, const FVector& ViewPoint, const FVector& GoalLocation);
	bool Visible(const FVector& Start, const FVector& End);

    UCanvas*           Canvas                = nullptr;
    UWorld**           World                 = nullptr;
    UEngine**          Engine                = nullptr;
    APlayerController* LocalPlayerController = nullptr;
    APawn*             LocalPlayer           = nullptr;

    bool    bIsBreakThroughMode = false;
    int32_t LocalCampID         = -1; // 0 是合法值，-1 当 sentinel
    int32_t LocalTeamID         = -1;

    std::unordered_map<AActor*, std::map<int, UMaterialInstanceDynamic*>> MIDCache;
    std::unordered_map<AActor*, bool>                                     VisibleState;
};
