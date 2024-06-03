#include "jni.h"

#ifndef JNIMANAGER_OBJECTSUPERLIB_H
#define JNIMANAGER_OBJECTSUPERLIB_H

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_initCat(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatDes(JNIEnv *env, jobject thiz,
                                                                    jobject cat);

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatPrice(JNIEnv *env, jobject thiz,
                                                                      jobject cat);

extern "C"
JNIEXPORT jclass JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatSuperCls(JNIEnv *env, jobject thiz,
                                                                         jobject cat);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatSuperDes(JNIEnv *env, jobject thiz,
                                                                         jobject cat);

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatSuperPrice(JNIEnv *env,
                                                                           jobject thiz,
                                                                           jobject cat);

#endif //JNIMANAGER_OBJECTSUPERLIB_H