//
// Created by user on 2024/5/30.
//

#include "BaseDynamicLib.h"

__attribute__((visibility ("hidden"))) jboolean booleanFromDynamicJNI(JNIEnv *env, jobject job, jboolean b) {
    Logger::d("DynamicLib", "booleanFromDynamicJNI上层传入值：%d", b);
    return b;
}

__attribute__((visibility ("hidden"))) jbyte byteFromDynamicJNI(JNIEnv *env, jobject job, jbyte b) {
    Logger::d("DynamicLib", "byteFromDynamicJNI上层传入值：%d", b);
    return b;
}

jbyte uByteFromDynamicJNI(JNIEnv *env, jobject job) {
    uint8_t result = 230;
    jbyte b = result;
    return b;
}

jchar charFromDynamicJNI(JNIEnv *env, jobject job, jchar c) {
    Logger::d("DynamicLib", "charFromDynamicJNI上层传入值：%c", c);
    return c;
}

jshort shortFromDynamicJNI(JNIEnv *env, jobject job, jshort s) {
    Logger::d("DynamicLib", "shortFromDynamicJNI上层传入值：%d", s);
    return s;
}

jshort uShortFromDynamicJNI(JNIEnv *env, jobject job) {
    uint16_t result = 56586;
    jshort s = result;
    return s;
}

jint intFromDynamicJNI(JNIEnv *env, jobject job, jint i) {
    Logger::d("DynamicLib", "intFromDynamicJNI上层传入值：%d", i);
    return i;
}

jint uIntFromDynamicJNI(JNIEnv *env, jobject job) {
    uint32_t result = 3147483647;
    jint i = result;
    return i;
}

jlong longFromDynamicJNI(JNIEnv *env, jobject job, jlong l) {
    Logger::d("DynamicLib", "longFromDynamicJNI上层传入值：%ld", l);
    return l;
}

jlong uLongFromDynamicJNI(JNIEnv *env, jobject job) {
    uint64_t result = 13223372036854775807;
    jlong i = result;
    return i;
}

jfloat floatFromDynamicJNI(JNIEnv *env, jobject job, jfloat f) {
    Logger::d("DynamicLib", "floatFromDynamicJNI上层传入值：%f", f);
    return f;
}

jdouble doubleFromDynamicJNI(JNIEnv *env, jobject job, jdouble d) {
    Logger::d("DynamicLib", "doubleFromDynamicJNI上层传入值：%lf", d);
    return d;
}

jbooleanArray booleanArrayFromDynamicJNI(JNIEnv *env, jobject job, jbooleanArray array) {
    jsize arrayLength = env->GetArrayLength(array);
    Logger::d("DynamicLib", "booleanArrayFromDynamicJNI上层传入数组的长度为：%d", arrayLength);
    jboolean *bArray = env->GetBooleanArrayElements(array, NULL);
    jbooleanArray newArray = env->NewBooleanArray(arrayLength);
    for (int i = 0; i < arrayLength; i++) {
        bArray[i] = !bArray[i];
    }
    env->ReleaseBooleanArrayElements(array, bArray, NULL);
    env->SetBooleanArrayRegion(newArray, 0, arrayLength, bArray);
    return newArray;
}

// Byte数组排序
jbyteArray byteArraySortFromDynamicJNI(JNIEnv *env, jobject job, jbyteArray array) {
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

jcharArray charArrayFromDynamicJNI(JNIEnv *env, jobject job, jstring s) {
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

jshortArray shortArraySortFromDynamicJNI(JNIEnv *env, jobject job, jshortArray array) {
    jshort * shortArray = env->GetShortArrayElements(array,0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "shortArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jshortArray res = env->NewShortArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jshort temp = shortArray[j];
            if (shortArray[j] < shortArray[j+1]) {
                shortArray[j] = shortArray[j+1];
                shortArray[j+1] = temp;
            }
        }
    }
    env->SetShortArrayRegion(res,0,size,shortArray);
    env->ReleaseShortArrayElements(array,shortArray,0);
    return res;
}

jintArray intArraySortFromDynamicJNI(JNIEnv *env, jobject job, jintArray array) {
    jint * intArray = env->GetIntArrayElements(array,0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "intArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jintArray res = env->NewIntArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jint temp = intArray[j];
            if (intArray[j] < intArray[j+1]) {
                intArray[j] = intArray[j+1];
                intArray[j+1] = temp;
            }
        }
    }
    env->SetIntArrayRegion(res,0,size,intArray);
    env->ReleaseIntArrayElements(array,intArray,0);
    return res;
}

jlongArray longArraySortFromDynamicJNI(JNIEnv *env, jobject job, jlongArray array) {
    jlong * longArray = env->GetLongArrayElements(array,0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "longArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jlongArray res = env->NewLongArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jlong temp = longArray[j];
            if (longArray[j] < longArray[j+1]) {
                longArray[j] = longArray[j+1];
                longArray[j+1] = temp;
            }
        }
    }
    env->SetLongArrayRegion(res,0,size,longArray);
    env->ReleaseLongArrayElements(array,longArray,0);
    return res;
}

jfloatArray floatArraySortFromDynamicJNI(JNIEnv *env, jobject job, jfloatArray array) {
    jfloat  * floatArray = env->GetFloatArrayElements(array,0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "floatArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jfloatArray res = env->NewFloatArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jfloat temp = floatArray[j];
            if (floatArray[j] < floatArray[j+1]) {
                floatArray[j] = floatArray[j+1];
                floatArray[j+1] = temp;
            }
        }
    }
    env->SetFloatArrayRegion(res,0,size,floatArray);
    env->ReleaseFloatArrayElements(array,floatArray,0);
    return res;
}

jdoubleArray doubleArraySortFromDynamicJNI(JNIEnv *env, jobject job, jdoubleArray array) {
    jdouble * doubleArray = env->GetDoubleArrayElements(array,0);
    jsize size = env->GetArrayLength(array);
    Logger::d("DynamicLib", "doubleArraySortFromDynamicJNI上层传入数组的长度为：%d", size);
    jdoubleArray res = env->NewDoubleArray(size);
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            jdouble temp = doubleArray[j];
            if (doubleArray[j] < doubleArray[j+1]) {
                doubleArray[j] = doubleArray[j+1];
                doubleArray[j+1] = temp;
            }
        }
    }
    env->SetDoubleArrayRegion(res,0,size,doubleArray);
    env->ReleaseDoubleArrayElements(array,doubleArray,0);
    return res;
}



