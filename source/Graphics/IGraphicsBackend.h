#pragma once

#include <android/native_window.h>

// 图形后端抽象接口
// OpenGL ES / Vulkan 渲染后端共用接口
class IGraphicsBackend
{
public:
    virtual ~IGraphicsBackend() = default;

    // 初始化 GPU 上下文 + ImGui 渲染后端
    // 调用前需确保 ImGui::CreateContext() 已完成
    virtual bool Init(ANativeWindow *window, int width, int height) = 0;

    // 每帧开始：同步 + 渲染后端 NewFrame
    virtual void BeginFrame() = 0;

    // 每帧结束：提交绘制数据 + 呈现
    virtual void EndFrame() = 0;

    // 关闭渲染后端 + 释放 GPU 资源
    virtual void Shutdown() = 0;

    // 后端是否就绪
    virtual bool IsReady() const = 0;
};
