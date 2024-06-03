#include <jni.h>
#include <string>
#include "../log/Logger.h"

#ifndef JNIMANAGER_OBJECTSTATICLIB_H
#define JNIMANAGER_OBJECTSTATICLIB_H

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_initConfigInfo(JNIEnv *env, jobject thiz,
                                                                   jobject info);

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_createConfigInfo(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jboolean JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateBoolean(JNIEnv *env,
                                                                                jobject thiz,
                                                                                jobject info);

extern "C"
JNIEXPORT jbyte JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateByte(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject info);

extern "C"
JNIEXPORT jchar JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateChar(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject info);

extern "C"
JNIEXPORT jshort JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateShort(JNIEnv *env,
                                                                              jobject thiz,
                                                                              jobject info);

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateInt(JNIEnv *env,
                                                                            jobject thiz,
                                                                            jobject info);

extern "C"
JNIEXPORT jlong JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateLong(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject info);

extern "C"
JNIEXPORT jfloat JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateFloat(JNIEnv *env,
                                                                              jobject thiz,
                                                                              jobject info);

extern "C"
JNIEXPORT jdouble JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateDouble(JNIEnv *env,
                                                                               jobject thiz,
                                                                               jobject info);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateString(JNIEnv *env,
                                                                               jobject thiz,
                                                                               jobject info);

extern "C"
JNIEXPORT jbooleanArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateBooleanArray(JNIEnv *env,
                                                                                     jobject thiz,
                                                                                     jobject info);

extern "C"
JNIEXPORT jbyteArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateByteArray(JNIEnv *env,
                                                                                  jobject thiz,
                                                                                  jobject info);

extern "C"
JNIEXPORT jcharArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateCharArray(JNIEnv *env,
                                                                                  jobject thiz,
                                                                                  jobject info);

extern "C"
JNIEXPORT jshortArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateShortArray(JNIEnv *env,
                                                                                   jobject thiz,
                                                                                   jobject info);

extern "C"
JNIEXPORT jintArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateIntArray(JNIEnv *env,
                                                                                 jobject thiz,
                                                                                 jobject info);

extern "C"
JNIEXPORT jlongArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateLongArray(JNIEnv *env,
                                                                                  jobject thiz,
                                                                                  jobject info);

extern "C"
JNIEXPORT jfloatArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateFloatArray(JNIEnv *env,
                                                                                   jobject thiz,
                                                                                   jobject info);

extern "C"
JNIEXPORT jdoubleArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateDoubleArray(JNIEnv *env,
                                                                                    jobject thiz,
                                                                                    jobject info);

extern "C"
JNIEXPORT jobjectArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateStringArray(JNIEnv *env,
                                                                                    jobject thiz,
                                                                                    jobject info);

#endif //JNIMANAGER_OBJECTSTATICLIB_H