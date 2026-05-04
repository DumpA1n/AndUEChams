#pragma once

#include "IGraphicsBackend.h"

#ifndef VK_USE_PLATFORM_ANDROID_KHR
#define VK_USE_PLATFORM_ANDROID_KHR
#endif
#include <vulkan/vulkan.h>

#include <vector>

/**
 * @brief Vulkan 渲染后端实现
 *
 * 实现 IGraphicsBackend 接口，使用 Vulkan API 在 Android 平台上进行渲染。
 * 主要用途是为 ImGui 覆盖层（Overlay）提供 GPU 加速渲染通道。
 *
 * 渲染管线流程：
 *   Init() → [BeginFrame() → ImGui绘制 → EndFrame()] × N → Shutdown()
 *
 * 内部采用双缓冲（MAX_FRAMES_IN_FLIGHT = 2）机制避免 CPU/GPU 同步等待，
 * 通过 Fence + Semaphore 实现帧间同步。
 */
class VulkanBackend : public IGraphicsBackend
{
public:
    /// 初始化整个 Vulkan 渲染管线（实例 → 交换链 → ImGui 后端）
    bool Init(ANativeWindow *window, int width, int height) override;
    /// 帧开始：等待 GPU 完成上一帧、获取交换链图像、调用 ImGui NewFrame
    void BeginFrame() override;
    /// 帧结束：录制命令缓冲、提交渲染命令、呈现到屏幕
    void EndFrame() override;
    /// 释放所有 Vulkan 资源并关闭 ImGui 后端
    void Shutdown() override;
    /// 返回后端是否已成功初始化且可用
    bool IsReady() const override;

private:
    /// 同时处于渲染中的最大帧数（双缓冲）
    static constexpr uint32_t MAX_FRAMES_IN_FLIGHT = 2;

    // -------- Vulkan 初始化各阶段 --------
    bool CreateInstance();                       ///< 1. 创建 Vulkan 实例（启用 Android Surface 扩展）
    bool CreateSurface(ANativeWindow *window);   ///< 2. 从 ANativeWindow 创建 VkSurfaceKHR
    bool SelectPhysicalDevice();                 ///< 3. 枚举 GPU 并选择支持图形 + 呈现的物理设备
    bool CreateLogicalDevice();                  ///< 4. 创建逻辑设备并获取图形队列
    bool CreateSwapchain(int width, int height); ///< 5. 创建交换链（格式、尺寸、呈现模式）
    bool CreateRenderPass();                     ///< 6. 创建渲染通道（单 color attachment）
    bool CreateFramebuffers();                   ///< 7. 为每张交换链图像创建帧缓冲
    bool CreateCommandPool();                    ///< 8. 创建命令池（可重置命令缓冲）
    bool CreateCommandBuffers();                 ///< 9. 分配主要命令缓冲
    bool CreateSyncObjects();                    ///< 10. 创建同步原语（Fence + Semaphore）
    bool CreateDescriptorPool();                 ///< 11. 创建描述符池（供 ImGui 纹理使用）
    bool InitImGuiVulkan();                      ///< 12. 初始化 ImGui Vulkan 渲染后端

    /// 销毁交换链相关资源（帧缓冲、图像视图、渲染通道、交换链本身）
    void CleanupSwapchain();

    // -------- Vulkan 核心对象 --------
    VkInstance       instance_       = VK_NULL_HANDLE; ///< Vulkan 实例
    VkPhysicalDevice physicalDevice_ = VK_NULL_HANDLE; ///< 选中的物理 GPU
    VkDevice         device_         = VK_NULL_HANDLE; ///< 逻辑设备
    VkQueue          graphicsQueue_  = VK_NULL_HANDLE; ///< 图形/呈现队列
    uint32_t         queueFamily_    = UINT32_MAX;     ///< 队列族索引
    VkSurfaceKHR     surface_        = VK_NULL_HANDLE; ///< Android 窗口表面
    VkSwapchainKHR   swapchain_      = VK_NULL_HANDLE; ///< 交换链
    VkRenderPass     renderPass_     = VK_NULL_HANDLE; ///< 渲染通道
    VkCommandPool    commandPool_    = VK_NULL_HANDLE; ///< 命令池
    VkDescriptorPool descriptorPool_ = VK_NULL_HANDLE; ///< 描述符池（ImGui 字体纹理等）

    // -------- 交换链关联资源 --------
    std::vector<VkImage>         swapchainImages_;      ///< 交换链图像句柄
    std::vector<VkImageView>     swapchainImageViews_;  ///< 交换链图像视图
    std::vector<VkFramebuffer>   framebuffers_;         ///< 每张图像对应的帧缓冲
    std::vector<VkCommandBuffer> commandBuffers_;       ///< 每帧对应的命令缓冲

    // -------- 同步原语（每帧一组） --------
    std::vector<VkFence>         inFlightFences_;           ///< CPU-GPU 同步栅栏
    std::vector<VkSemaphore>     imageAvailableSemaphores_; ///< 图像可用信号量
    std::vector<VkSemaphore>     renderFinishedSemaphores_; ///< 渲染完成信号量

    // -------- 交换链参数 --------
    VkFormat     swapchainFormat_ = VK_FORMAT_UNDEFINED; ///< 交换链图像格式
    VkExtent2D   swapchainExtent_ = {};                  ///< 交换链图像分辨率
    uint32_t     imageCount_      = 0;                   ///< 交换链图像数量

    // -------- 帧状态 --------
    uint32_t     currentFrame_       = 0;     ///< 当前帧索引（0 ~ MAX_FRAMES_IN_FLIGHT-1）
    uint32_t     acquiredImageIndex_ = 0;     ///< 本帧获取到的交换链图像索引
    int          width_  = 0;                 ///< 窗口宽度
    int          height_ = 0;                 ///< 窗口高度
    bool         initialized_  = false;       ///< 初始化是否完成
    bool         frameStarted_ = false;       ///< 当前帧是否已成功开始
};
