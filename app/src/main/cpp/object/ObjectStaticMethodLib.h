#include <jni.h>
#include <string>
#include "../log/Logger.h"

#ifndef JNIMANAGER_OBJECTSTATICMETHODLIB_H
#define JNIMANAGER_OBJECTSTATICMETHODLIB_H

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getPackageName(JNIEnv *env, jobject thiz,
                                                                          jobject context);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getLocaleLanguage(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject resources);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getCountryZipCode(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject resources);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getVerName(JNIEnv *env, jobject thiz,
                                                                      jobject context);

extern "C"
JNIEXPORT jlong JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getVerCode(JNIEnv *env, jobject thiz,
                                                                      jobject context);

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getPhoneVersion(JNIEnv *env,
                                                                           jobject thiz);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getManufacturer(JNIEnv *env,
                                                                           jobject thiz);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getProduct(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jobjectArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getSupportedAbis(JNIEnv *env,
                                                                            jobject thiz);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getDevice(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getDisplayInfo(JNIEnv *env,
                                                                          jobject thiz);

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getModel(JNIEnv *env, jobject thiz);

#endif //JNIMANAGER_OBJECTSTATICMETHODLIB_H