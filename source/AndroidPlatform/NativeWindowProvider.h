#pragma once

#include <android/native_window.h>

// ---------------------------------------------------------------------------
// NativeWindowProvider —— host 进程的 ANativeWindow 句柄
//
// 通过 ActivityHost 拿到 Activity，然后走
//   Activity.getWindow().getDecorView().getViewRootImpl().mSurface
// → ANativeWindow_fromSurface
// 取得 ANativeWindow*。结果缓存到进程结束。
// ---------------------------------------------------------------------------
namespace AndroidPlatform
{

// 返回 host 进程的主 ANativeWindow*。缓存命中时直接返回。
// 找不到（没 Activity / Surface 无效）时返回 nullptr。
ANativeWindow* GetNativeWindow();

}
