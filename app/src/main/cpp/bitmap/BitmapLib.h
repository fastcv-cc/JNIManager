#include "jni.h"
#include <string.h>
#include <android/bitmap.h>
#include "../log/Logger.h"

#define MAKE_ABGR(a, b, g, r) (((a&0xff)<<24) | ((b & 0xff) << 16) | ((g & 0xff) << 8 ) | (r & 0xff))
#define BGR_8888_A(p) ((p & (0xff<<24))   >> 24 )
#define BGR_8888_B(p) ((p & (0xff << 16)) >> 16 )
#define BGR_8888_G(p) ((p & (0xff << 8))  >> 8 )
#define BGR_8888_R(p) (p & (0xff) )

#ifndef JNIMANAGER_BITMAPLIB_H
#define JNIMANAGER_BITMAPLIB_H

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_BitmapNativeLib_handleBitmapForSinglePixel(JNIEnv *env, jobject thiz,
                                                                          jobject bitmap);

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_BitmapNativeLib_rotateBitmap(JNIEnv *env, jobject thiz,
                                                            jobject bitmap,
                                                            jint ops);

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_BitmapNativeLib_addBitmapFilter(JNIEnv *env, jobject thiz,
                                                               jobject bitmap,
                                                               jint ops);

#endif //JNIMANAGER_BITMAPLIB_H