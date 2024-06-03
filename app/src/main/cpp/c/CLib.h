#include "jni.h"
#include "CInvoker.h"
#include "../log/Logger.h"

#ifndef JNIMANAGER_CLIB_H
#define JNIMANAGER_CLIB_H

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_CNativeLib_callCMethod1(JNIEnv *env, jobject thiz, jint arg1);

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_CNativeLib_callCMethod2(JNIEnv *env, jobject thiz, jint arg1,
                                                       jint arg2);

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_CNativeLib_callCMethod3(JNIEnv *env, jobject thiz, jint arg1,
                                                       jint arg2, jint arg3);

#endif //JNIMANAGER_CLIB_H
