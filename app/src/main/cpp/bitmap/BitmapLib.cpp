#include "BitmapLib.h"

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_BitmapNativeLib_handleBitmapForSinglePixel(JNIEnv *env, jobject thiz,
                                                                          jobject bitmap) {
    Logger::d("BitmapLib", "handleBitmapForSinglePixel---------------");
    AndroidBitmapInfo bitmapInfo;
//    memset(&bitmapInfo , 0 , sizeof(bitmapInfo));
    int ret = AndroidBitmap_getInfo(env, bitmap, &bitmapInfo);
    if (ANDROID_BITMAP_RESULT_SUCCESS != ret) {
        Logger::d("BitmapLib", "AndroidBitmap_getInfo() bitmap failed ! error=%d", ret);
    }
    // 获得 Bitmap 的像素缓存指针：遍历从 Bitmap 内存 addrPtr 中读取 BGRA 数据
    void *addrPtr;
    ret = AndroidBitmap_lockPixels(env, bitmap, &addrPtr);
    if (ANDROID_BITMAP_RESULT_SUCCESS != ret) {
        Logger::d("BitmapLib", "AndroidBitmap_lockPixels() bitmap failed ! error=%d", ret);
    }

    // 执行图片操作的逻辑
    // 获取宽高
    uint32_t mWidth = bitmapInfo.width;
    uint32_t mHeight = bitmapInfo.height;
    // 获取原生数据
    auto pixelArr = ((uint32_t *) addrPtr);

    Logger::d("BitmapLib", "bitmap width = %d", mWidth);
    Logger::d("BitmapLib", "bitmap height = %d", mHeight);
    Logger::d("BitmapLib", "bitmap format = %d", bitmapInfo.format);
    int a, r, g, b;
    for (int x = 0; x < mWidth; ++x) {

        for (int y = 0; y < mHeight; ++y) {
            Logger::d("BitmapLib", "handleBitmapForSinglePixel %d", pixelArr[0]);
            void *pixel = nullptr;
            // 移动像素指针
            pixel = pixelArr + y * mWidth + x;
            //按照ABGR存储序列取值  获取指针对应的值
            uint32_t v = *((uint32_t *) pixel);
            //
            a = BGR_8888_A(v);
            r = BGR_8888_R(v);
            g = BGR_8888_G(v);
            b = BGR_8888_B(v);
            //
            Logger::d("BitmapLib", "bitmapInfo a %d", a);
            Logger::d("BitmapLib", "bitmapInfo r %d", r);
            Logger::d("BitmapLib", "bitmapInfo g %d", g);
            Logger::d("BitmapLib", "bitmapInfo b %d", b);
        }
    }
    // 释放缓存指针
    AndroidBitmap_unlockPixels(env, bitmap);
}

jclass bitmapCls;
jmethodID createBitmapFunction;
jmethodID getBitmapFunction;

// 创建bitmap public static Bitmap createBitmap (int width,int height,  Bitmap.Config config)

jobject createBitmap(JNIEnv *env, jint width, jint height) {
    bitmapCls = env->FindClass("android/graphics/Bitmap");
    createBitmapFunction = env->GetStaticMethodID(bitmapCls,
                                                  "createBitmap",
                                                  "(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;");
    // 声明 格式
    jstring configName = env->NewStringUTF("ARGB_8888");
    jclass bitmapConfigClass = env->FindClass("android/graphics/Bitmap$Config");
    getBitmapFunction = env->GetStaticMethodID(
            bitmapConfigClass, "valueOf",
            "(Ljava/lang/String;)Landroid/graphics/Bitmap$Config;");

    jobject bitmapConfig = env->CallStaticObjectMethod(bitmapConfigClass,
                                                       getBitmapFunction, configName);

    jobject newBitmap = env->CallStaticObjectMethod(bitmapCls, createBitmapFunction,
                                                    width, height, bitmapConfig);
    return newBitmap;
}

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_BitmapNativeLib_rotateBitmap(JNIEnv *env, jobject thiz,
                                                            jobject bitmap,
                                                            jint ops) {
    if (bitmap == nullptr) {
        Logger::d("BitmapLib", "rotateBitmap - the  bitmap is null ");
        return NULL;
    }

    // 检索获取bitmap信息
    AndroidBitmapInfo bitmapInfo;
    int ret = AndroidBitmap_getInfo(env, bitmap, &bitmapInfo);
    if (ANDROID_BITMAP_RESULT_SUCCESS != ret) {
        Logger::d("BitmapLib", "AndroidBitmap_getInfo() bitmap failed ! error=%d", ret);
        return NULL;
    }
    // 获得 Bitmap 的像素缓存指针：遍历从 Bitmap 内存 addrPtr 中读取像素数据
    void *addrPtr;
    ret = AndroidBitmap_lockPixels(env, bitmap, &addrPtr);
    if (ANDROID_BITMAP_RESULT_SUCCESS != ret) {
        Logger::d("BitmapLib", "AndroidBitmap_lockPixels() bitmap failed ! error=%d", ret);
        return NULL;
    }

    // 执行图片操作的逻辑
    // 获取宽高
    int mWidth = bitmapInfo.width;
    int mHeight = bitmapInfo.height;
    // 获取原生数据
    auto pixelArr = ((uint32_t *) addrPtr);
    // 矩阵 创建一个新的数组指针填充像素值
    auto *newBitmapPixels = new uint32_t[mWidth * mHeight];
    Logger::d("BitmapLib", "bitmap width = %d", mWidth);
    Logger::d("BitmapLib", "bitmap height = %d", mHeight);
    Logger::d("BitmapLib", "bitmap format = %d", bitmapInfo.format);
    int temp = 0;
    switch (ops) {
        case 0:
            // 遍历矩阵，按照顺时针90度顺序扫描
            for (int x = 0; x < mWidth; x++) {
                for (int y = mHeight - 1; y >= 0; --y) {
                    newBitmapPixels[temp++] = pixelArr[mWidth * y + x];
                }
            }

            break;
        case 1:
            // 上下翻转
            for (int y = 0; y < mHeight; ++y) {
                for (int x = 0; x < mWidth; x++) {
                    uint32_t pixel = pixelArr[temp++];
                    newBitmapPixels[mWidth * (mHeight - 1 - y) + x] = pixel;
                }
            }
            break;
        case 2:
            // 镜像
            for (int y = 0; y < mHeight; ++y) {
                for (int x = mWidth - 1; x >= 0; x--) {
                    uint32_t pixel = pixelArr[temp++];
                    newBitmapPixels[mWidth * y + x] = pixel;
                }
            }
            break;
        default:
            break;
    }


    // 新建bitmap 注意这里 因为翻转90度后，矩阵即bitmap的宽高也要改变
    jobject newBitmap;
    int size = mWidth * mHeight;
    if (ops == 0) {
        newBitmap = createBitmap(env, mWidth, mHeight);
        void *resultBitmapPixels;
        //
        ret = AndroidBitmap_lockPixels(env, newBitmap, &resultBitmapPixels);
        if (ANDROID_BITMAP_RESULT_SUCCESS != ret) {
            Logger::d("BitmapLib", "AndroidBitmap_lockPixels() newBitmap failed ! error=%d", ret);
            return nullptr;
        }

        // 写入新值
        memcpy((uint32_t *) resultBitmapPixels, newBitmapPixels, sizeof(uint32_t) * size);
        // 释放缓存指针
        AndroidBitmap_unlockPixels(env, newBitmap);
        // 释放内存
        delete[] newBitmapPixels;

        return newBitmap;
    } else {
        memcpy((uint32_t *) addrPtr, newBitmapPixels, sizeof(uint32_t) * size);
        delete[] newBitmapPixels;
        // 释放缓存指针
        AndroidBitmap_unlockPixels(env, bitmap);
        return bitmap;
    }
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_BitmapNativeLib_addBitmapFilter(JNIEnv *env, jobject thiz,
                                                               jobject bitmap,
                                                               jint ops) {
    if (bitmap == nullptr) {
        Logger::d("BitmapLib", "addBitmapFilter - the  bitmap is null ");
    }

    // 检索获取bitmap信息
    AndroidBitmapInfo bitmapInfo;
//    memset(&bitmapInfo , 0 , sizeof(bitmapInfo));
    int ret = AndroidBitmap_getInfo(env, bitmap, &bitmapInfo);
    if (ANDROID_BITMAP_RESULT_SUCCESS != ret) {
        Logger::d("BitmapLib", "AndroidBitmap_getInfo() bitmap failed ! error=%d", ret);
    }
    // 获得 Bitmap 的像素缓存指针：遍历从 Bitmap 内存 addrPtr 中读取 BGRA 数据
    void *addrPtr;
    ret = AndroidBitmap_lockPixels(env, bitmap, &addrPtr);
    if (ANDROID_BITMAP_RESULT_SUCCESS != ret) {
        Logger::d("BitmapLib", "AndroidBitmap_lockPixels() bitmap failed ! error=%d", ret);
    }

    // 执行图片操作的逻辑
    // 获取宽高
    uint32_t mWidth = bitmapInfo.width;
    uint32_t mHeight = bitmapInfo.height;
    // 矩阵 创建一个新的数组指针填充像素值
    // auto *newBitmapPixels = new uint32_t[mWidth * mHeight];
    Logger::d("BitmapLib", "bitmap width = %d", mWidth);
    Logger::d("BitmapLib", "bitmap height = %d", mHeight);
    Logger::d("BitmapLib", "bitmap format = %d", bitmapInfo.format);

    // 获取原生数据
    auto pixelArr = ((uint32_t *) addrPtr);

    int a, r, g, b;
    // 不操作A
    // 遍历从 Bitmap 内存 addrPtr 中读取 BGRA 数据, 然后向 data 内存存储 BGR 数据


    switch (ops) {
        // 灰度图
        case 1: {
            for (int y = 0; y < mHeight; ++y) {
                for (int x = 0; x < mWidth; ++x) {
                    // 这里定义成void,方便后续操作
                    void *pixel = nullptr;
                    // 24位
                    if (bitmapInfo.format == ANDROID_BITMAP_FORMAT_RGBA_8888) {
                        // 移动像素指针
                        pixel = pixelArr + y * mWidth + x;
                        //按照ABGR存储序列取值  获取指针对应的值
                        uint32_t v = *((uint32_t *) pixel);
                        a = BGR_8888_A(v);
                        r = BGR_8888_R(v);
                        g = BGR_8888_G(v);
                        b = BGR_8888_B(v);
                        // 平均值法
                        // int sum = (r + g + b) / 3;
                        //或者加权平均值法
                        int sum = (int) (r * 0.3 + g * 0.59 + b * 0.11);
                        *((uint32_t *) pixel) = MAKE_ABGR(a, sum, sum, sum);
                    }
                }
            }
            break;
        }
            // 浮雕图
        case 2: {
            //
            // 用当前点的RGB值减去相邻点的RGB值并加上128作为新的RGB值
            void *pixel = nullptr;
            void *pixelBefore = nullptr;
            int r1, g1, b1;
            for (int i = 1; i < mWidth * mHeight; ++i) {
                uint32_t color, colorBefore;

                pixel = pixelArr + i;
                pixelBefore = pixelArr + i - 1;
                color = *((uint32_t *) pixel);
                colorBefore = *((uint32_t *) pixelBefore);
                a = BGR_8888_A(color);
                r = BGR_8888_R(color);
                g = BGR_8888_G(color);
                b = BGR_8888_B(color);

                r1 = BGR_8888_R(colorBefore);
                g1 = BGR_8888_G(colorBefore);
                b1 = BGR_8888_B(colorBefore);


                r = r - r1 + 128;
                g = g - g1 + 128;
                b = b - b1 + 128;
                // 再一次灰度处理
                int sum = (int) (r * 0.3 + g * 0.59 + b * 0.11);
                *((uint32_t *) pixelBefore) = MAKE_ABGR(a, sum, sum, sum);
            }
            break;
        }

        default:
            break;
    }

    // 释放缓存指针
    AndroidBitmap_unlockPixels(env, bitmap);
}
