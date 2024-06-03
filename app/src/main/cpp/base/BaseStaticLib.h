#include <jni.h>
#include <string>

#ifndef JNIMANAGER_STATICLIB_H
#define JNIMANAGER_STATICLIB_H

/**
 * 静态方式
 * 按照JNI规范的命名规则
 */

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_initTitle(JNIEnv *env, jobject job);

extern "C"
JNIEXPORT jboolean JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_booleanFromJNI(JNIEnv *env, jobject job,
                                                                  jboolean b);

extern "C"
JNIEXPORT jbyte JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_byteFromJNI(JNIEnv *env, jobject thiz,
                                                               jbyte byte);

extern "C"
JNIEXPORT jbyte JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_uByteFromJNI(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jchar JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_charFromJNI(JNIEnv *env, jobject thiz, jchar c);

extern "C"
JNIEXPORT jshort JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_shortFromJNI(JNIEnv *env, jobject thiz,
                                                                jshort s);

extern "C"
JNIEXPORT jshort JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_uShortFromJNI(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_intFromJNI(JNIEnv *env, jobject thiz, jint i);

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_uIntFromJNI(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jlong JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_longFromJNI(JNIEnv *env, jobject thiz, jlong l);

extern "C"
JNIEXPORT jlong JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_uLongFromJNI(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT jfloat JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_floatFromJNI(JNIEnv *env, jobject thiz,
                                                                jfloat f);

extern "C"
JNIEXPORT jdouble JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_doubleFromJNI(JNIEnv *env, jobject thiz,
                                                                 jdouble d);

extern "C"
JNIEXPORT jbooleanArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_booleanArrayFromJNI(JNIEnv *env, jobject thiz,
                                                                       jbooleanArray array);

extern "C"
JNIEXPORT jbyteArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_byteArraySortFromJNI(JNIEnv *env,
                                                                        jobject thiz,
                                                                        jbyteArray array);

extern "C"
JNIEXPORT jcharArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_charArrayFromJNI(JNIEnv *env,
                                                                    jobject thiz,
                                                                    jstring s);

extern "C"
JNIEXPORT jshortArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_shortArraySortFromJNI(JNIEnv *env,
                                                                         jobject thiz,
                                                                         jshortArray array);

extern "C"
JNIEXPORT jintArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_intArraySortFromJNI(JNIEnv *env,
                                                                       jobject thiz,
                                                                       jintArray array);

extern "C"
JNIEXPORT jlongArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_longArraySortFromJNI(JNIEnv *env,
                                                                        jobject thiz,
                                                                        jlongArray array);

extern "C"
JNIEXPORT jfloatArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_floatArraySortFromJNI(JNIEnv *env,
                                                                         jobject thiz,
                                                                         jfloatArray array);

extern "C"
JNIEXPORT jdoubleArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_doubleArraySortFromJNI(JNIEnv *env,
                                                                          jobject thiz,
                                                                          jdoubleArray array);

#endif //JNIMANAGER_STATICLIB_H
