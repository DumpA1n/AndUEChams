#pragma once

// ---------------------------------------------------------------------------
// DisplayInfo —— host 进程的屏幕尺寸
//
// 通过 ActivityHost 拿到 Activity，反射
//   activity.getSystemService(WINDOW_SERVICE).getDefaultDisplay().getRealSize(point)
// 取得物理像素尺寸。结果按横屏方向规范化（width >= height）并缓存到进程结束。
// ---------------------------------------------------------------------------
namespace AndroidPlatform
{

struct DisplaySize
{
    int width;   // 横屏方向，物理像素
    int height;
};

// 返回 host 进程的物理屏幕尺寸（横屏归一化）。
// 失败（无 Activity / JNI 异常）时返回 {0, 0}。
DisplaySize GetDisplaySize();

}
