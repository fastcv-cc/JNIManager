//
// Created by user on 2024/5/30.
//

#include "BaseStaticLib.h"
#include "../log/Logger.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_initTitle(JNIEnv *env, jobject job) {
    std::string hello = "Load Lib Success!!!";
    const char *str = hello.c_str();
    return env->NewStringUTF(str);
}

extern "C"
JNIEXPORT jboolean JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_booleanFromJNI(JNIEnv *env, jobject job,
                                                                  jboolean b) {
    Logger::d("StaticLib", "booleanFromJNI上层传入值：%d", b);
    return b;
}

extern "C"
JNIEXPORT jbyte JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_byteFromJNI(JNIEnv *env, jobject thiz, jbyte b) {
    Logger::d("StaticLib", "byteFromJNI上层传入值：%d", b);
    return b;
}


extern "C"
JNIEXPORT jbyte JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_uByteFromJNI(JNIEnv *env, jobject thiz) {
    uint8_t result = 250;
    jbyte b = result;
    return b;
}

extern "C"
JNIEXPORT jchar JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_charFromJNI(JNIEnv *env, jobject thiz, jchar c) {
    Logger::d("StaticLib", "charFromJNI上层传入值：%c", c);
    return c;
}

extern "C"
JNIEXPORT jshort JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_shortFromJNI(JNIEnv *env, jobject thiz,
                                                                jshort s) {
    Logger::d("StaticLib", "shortFromJNI上层传入值：%d", s);
    return s;
}

extern "C"
JNIEXPORT jshort JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_uShortFromJNI(JNIEnv *env, jobject thiz) {
    uint16_t result = 57586;
    jshort s = result;
    return s;
}

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_intFromJNI(JNIEnv *env, jobject thiz, jint i) {
    Logger::d("StaticLib", "intFromJNI上层传入值：%d", i);
    return i;
}

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_uIntFromJNI(JNIEnv *env, jobject thiz) {
    uint32_t result = 3147483647;
    jint i = result;
    return i;
}

extern "C"
JNIEXPORT jlong JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_longFromJNI(JNIEnv *env, jobject thiz, jlong l) {
    Logger::d("StaticLib", "longFromJNI上层传入值：%ld", l);
    return l;
}

extern "C"
JNIEXPORT jlong JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_uLongFromJNI(JNIEnv *env, jobject thiz) {
    uint64_t result = 13223372036854775807;
    jlong i = result;
    return i;
}

extern "C"
JNIEXPORT jfloat JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_floatFromJNI(JNIEnv *env, jobject thiz,
                                                                jfloat f) {
    Logger::d("StaticLib", "floatFromJNI上层传入值：%f", f);
    return f;
}

extern "C"
JNIEXPORT jdouble JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_doubleFromJNI(JNIEnv *env, jobject thiz,
                                                                 jdouble d) {
    Logger::d("StaticLib", "doubleFromJNI上层传入值：%lf", d);
    return d;
}

extern "C"
JNIEXPORT jbooleanArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_booleanArrayFromJNI(JNIEnv *env, jobject thiz,
                                                                       jbooleanArray array) {
    jsize arrayLength = env->GetArrayLength(array);
    Logger::d("StaticLib", "booleanArrayFromJNI上层传入数组的长度为：%d", arrayLength);
    jboolean *bArray = env->GetBooleanArrayElements(array, NULL);
    jbooleanArray newArray = env->NewBooleanArray(arrayLength);
    for (int i = 0; i < arrayLength; i++) {
        bArray[i] = !bArray[i];
    }
    env->ReleaseBooleanArrayElements(array, bArray, NULL);
    env->SetBooleanArrayRegion(newArray, 0, arrayLength, bArray);
    return newArray;
}

extern "C"
JNIEXPORT jbyteArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_byteArraySortFromJNI(JNIEnv *env,
                                                                        jobject thiz,
                                                                        jbyteArray array) {
    jbyte *byteArray = env->GetByteArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "byteArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jbyteArray res = env->NewByteArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jbyte temp = byteArray[j];
            if (byteArray[j] < byteArray[j + 1]) {
                byteArray[j] = byteArray[j + 1];
                byteArray[j + 1] = temp;
            }
        }
    }
    env->SetByteArrayRegion(res, 0, size, byteArray);
    env->ReleaseByteArrayElements(array, byteArray, 0);
    return res;
}

extern "C"
JNIEXPORT jcharArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_charArrayFromJNI(JNIEnv *env,
                                                                    jobject thiz,
                                                                    jstring s) {
    const jchar *text = env->GetStringChars(s, NULL);
    jsize size = env->GetStringLength(s);
    jchar *chars = new jchar[size];
    for (int i = 0; i < size; ++i) {
        chars[i] = text[i];
    }
    Logger::d("DynamicLib", "charArrayFromDynamicJNI上层传入字符串的长度为：%d", size);
    jcharArray array = env->NewCharArray(size);
    env->SetCharArrayRegion(array, 0, size, chars);
    env->ReleaseStringChars(s, text);
    return array;
}

extern "C"
JNIEXPORT jshortArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_shortArraySortFromJNI(JNIEnv *env,
                                                                         jobject thiz,
                                                                         jshortArray array) {
    jshort *shortArray = env->GetShortArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "shortArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jshortArray res = env->NewShortArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jshort temp = shortArray[j];
            if (shortArray[j] < shortArray[j + 1]) {
                shortArray[j] = shortArray[j + 1];
                shortArray[j + 1] = temp;
            }
        }
    }
    env->SetShortArrayRegion(res, 0, size, shortArray);
    env->ReleaseShortArrayElements(array, shortArray, 0);
    return res;
}

extern "C"
JNIEXPORT jintArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_intArraySortFromJNI(JNIEnv *env,
                                                                       jobject thiz,
                                                                       jintArray array) {
    jint *intArray = env->GetIntArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "intArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jintArray res = env->NewIntArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jint temp = intArray[j];
            if (intArray[j] < intArray[j + 1]) {
                intArray[j] = intArray[j + 1];
                intArray[j + 1] = temp;
            }
        }
    }
    env->SetIntArrayRegion(res, 0, size, intArray);
    env->ReleaseIntArrayElements(array, intArray, 0);
    return res;
}

extern "C"
JNIEXPORT jlongArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_longArraySortFromJNI(JNIEnv *env,
                                                                        jobject thiz,
                                                                        jlongArray array) {
    jlong *longArray = env->GetLongArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "longArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jlongArray res = env->NewLongArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jlong temp = longArray[j];
            if (longArray[j] < longArray[j + 1]) {
                longArray[j] = longArray[j + 1];
                longArray[j + 1] = temp;
            }
        }
    }
    env->SetLongArrayRegion(res, 0, size, longArray);
    env->ReleaseLongArrayElements(array, longArray, 0);
    return res;
}

extern "C"
JNIEXPORT jfloatArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_floatArraySortFromJNI(JNIEnv *env,
                                                                         jobject thiz,
                                                                         jfloatArray array) {
    jfloat *floatArray = env->GetFloatArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "floatArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jfloatArray res = env->NewFloatArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jfloat temp = floatArray[j];
            if (floatArray[j] < floatArray[j + 1]) {
                floatArray[j] = floatArray[j + 1];
                floatArray[j + 1] = temp;
            }
        }
    }
    env->SetFloatArrayRegion(res, 0, size, floatArray);
    env->ReleaseFloatArrayElements(array, floatArray, 0);
    return res;
}

extern "C"
JNIEXPORT jdoubleArray JNICALL
Java_cc_fastcv_jnimanager_libs_BaseStaticNativeLib_doubleArraySortFromJNI(JNIEnv *env,
                                                                          jobject thiz,
                                                                          jdoubleArray array) {
    jdouble *doubleArray = env->GetDoubleArrayElements(array, 0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "doubleArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jdoubleArray res = env->NewDoubleArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jdouble temp = doubleArray[j];
            if (doubleArray[j] < doubleArray[j + 1]) {
                doubleArray[j] = doubleArray[j + 1];
                doubleArray[j + 1] = temp;
            }
        }
    }
    env->SetDoubleArrayRegion(res, 0, size, doubleArray);
    env->ReleaseDoubleArrayElements(array, doubleArray, 0);
    return res;
}
