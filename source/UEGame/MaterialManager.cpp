#include "MaterialManager.h"

#include <chrono>
#include <thread>

#include "UEGame/Offsets.h"
#include "UEGame/UE_Hack.h"

#include "Utils/Logger.h"

void MaterialManager::UpdateMaterial()
{
    std::lock_guard<std::mutex> Lock(MatMtx);

    if (ShouldLoadMaterial())
    {
        LoadMaterialAsync();
    }
}

void MaterialManager::StartVelocityCheck()
{
    if (!LocalPlayer)
    {
        LOGI("[Mat] No local player, skipping velocity check");
        return;
    }

    bVelocityCheckRunning.store(true);

    std::thread([this]()
    {
        LOGI("[Mat] Starting velocity check thread");

        const int MaxAttempts = 60;
        int       Attempts    = 0;

        while (bVelocityCheckRunning.load() && Attempts < MaxAttempts)
        {
            if (!LocalPlayer)
            {
                LOGI("[Mat] Local player became null, stopping velocity check");
                break;
            }

            try
            {
                FVector Velocity = LocalPlayer->GetVelocity();
                LOGI("[Mat] Velocity check attempt %d: %s", Attempts + 1, Velocity.ToString().c_str());

                if (std::abs(Velocity.X) > 0.001f)
                {
                    LOGI("[Mat] Player movement detected");
                    bPlayerMoved.store(true);
                    break;
                }

                Attempts++;
                std::this_thread::sleep_for(std::chrono::milliseconds(500));
            }
            catch (const std::exception& e)
            {
                LOGI("[Mat] Exception in velocity check: %s", e.what());
                break;
            }
        }

        if (Attempts >= MaxAttempts)
        {
            LOGI("[Mat] Velocity check timeout.");
        }

        LOGI("[Mat] Velocity check thread ended");
        bVelocityCheckRunning.store(false);
    }).detach();
}

bool MaterialManager::ShouldLoadMaterial()
{
    return XrayMaterial == nullptr;
}

void MaterialManager::LoadMaterialAsync()
{
    bool bExpected = false;
    if (!bMaterialLoading.compare_exchange_strong(bExpected, true))
    {
        return;
    }

    const bool bCurIsBreakThroughMode = bIsBreakThroughMode;

    std::thread([this, bCurIsBreakThroughMode]()
    {
        std::string_view MaterialPath = bCurIsBreakThroughMode ? XRAY_MATERIAL_BREAKTHROUGH : XRAY_MATERIAL_NORMAL;

        LOGI("[Mat] Loading material: %s", MaterialPath.data());
        auto Mat = UObject::FindObject<UMaterial>(MaterialPath.data());

        if (Mat != nullptr)
        {
            *(uint8_t*)((uint64_t)Mat + o_bDisableDepthTest) |= 0b00000001;
            *(uint8_t*)((uint64_t)Mat + o_Wireframe)         |= 0b00001000;
            {
                std::lock_guard<std::mutex> Lock(MatMtx);
                XrayMaterial = Mat;
            }
            LOGI("[Mat] Material loaded successfully: %p", Mat);
        }
        else
        {
            LOGI("[Mat] Failed to load material: %s", MaterialPath.data());
        }
        LOGI("[Mat] Material loading thread completed");
        bMaterialLoading.store(false);
    }).detach();
}

UMaterial* MaterialManager::GetXrayMaterial()
{
    std::lock_guard<std::mutex> Lock(MatMtx);

    LocalPlayer         = UE_Hack::GetInstance().GetLocalPlayer();
    bIsBreakThroughMode = UE_Hack::GetInstance().GetIsBreakThroughMode();
    if (!bLastStateValid || LastLocalPlayer != LocalPlayer || bLastBreakThroughMode != bIsBreakThroughMode)
    {
        LOGI("[Mat] LocalPlayer changed from %p to %p", LastLocalPlayer, LocalPlayer);
        LastLocalPlayer       = LocalPlayer;
        bLastBreakThroughMode = bIsBreakThroughMode;
        bLastStateValid       = true;
        XrayMaterial          = nullptr;
    }

    return XrayMaterial;
}
