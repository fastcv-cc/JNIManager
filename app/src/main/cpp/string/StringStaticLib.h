#include <jni.h>
#include <string>

#ifndef JNIMANAGER_STRINGSTATICLIB_H
#define JNIMANAGER_STRINGSTATICLIB_H

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_StringStaticNativeLib_stringFromJNI(JNIEnv *env, jobject thiz,
                                                                   jstring s);

extern "C"
JNIEXPORT jobjectArray JNICALL
Java_cc_fastcv_jnimanager_libs_StringStaticNativeLib_stringArrayFromJNI(JNIEnv *env, jobject thiz,
                                                                        jobjectArray array);

extern "C"
JNIEXPORT jboolean JNICALL
Java_cc_fastcv_jnimanager_libs_StringStaticNativeLib_nativeStrCompare(JNIEnv *env, jobject thiz,
                                                                      jstring str1, jstring str2);

#endif //JNIMANAGER_STRINGSTATICLIB_H

