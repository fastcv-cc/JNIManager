#include "jni.h"
#include "../log/Logger.h"

#ifndef JNIMANAGER_REFLIB_H
#define JNIMANAGER_REFLIB_H

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_createLocalRef(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_getLocalRef(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_createGlobalRef(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_deleteGlobalRef(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_getGlobalRef(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_createWeakGlobalRef(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_deleteWeakGlobalRef(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_getWeakGlobalRef(JNIEnv *env, jobject thiz);

#endif //JNIMANAGER_REFLIB_H