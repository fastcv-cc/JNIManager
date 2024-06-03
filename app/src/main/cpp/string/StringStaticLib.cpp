#include "StringStaticLib.h"
#include "../log/Logger.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_StringStaticNativeLib_stringFromJNI(JNIEnv *env, jobject thiz,
                                                                   jstring s) {
    jboolean isCopy = false;
    jsize utfLength = env->GetStringUTFLength(s);
    jsize length = env->GetStringLength(s);
    Logger::d("StaticLib", "stringFromJNI上层传入字符串UTF编码的长度为：%d", utfLength);
    Logger::d("StaticLib", "stringFromJNI上层传入字符串Unicode编码的长度为：%d", length);
    const char *str_input = env->GetStringUTFChars(s, &isCopy);
    Logger::d("StaticLib", "stringFromJNI上层传入值：%s", str_input);
    env->ReleaseStringUTFChars(s, str_input);
    return s;
}

extern "C"
JNIEXPORT jobjectArray JNICALL
Java_cc_fastcv_jnimanager_libs_StringStaticNativeLib_stringArrayFromJNI(JNIEnv *env, jobject thiz,
                                                                        jobjectArray array) {
    jclass strCls = env->FindClass("java/lang/String");
    jsize size = env->GetArrayLength(array);
    jobjectArray res = env->NewObjectArray(size, strCls, NULL);
    if (res == NULL) {
        return NULL;
    }
    char buf[40];
    jstring str;
    for (int i = 0; i < size; i++) {
        str = static_cast<jstring>(env->GetObjectArrayElement(array, i));
        const char *mStr = env->GetStringUTFChars(str, 0);
        snprintf(buf, sizeof(buf), "%s_%d", mStr, i);
        env->SetObjectArrayElement(res, i, env->NewStringUTF(buf));
        env->ReleaseStringUTFChars(str, mStr);
    }

    return res;
}

extern "C"
JNIEXPORT jboolean JNICALL
Java_cc_fastcv_jnimanager_libs_StringStaticNativeLib_nativeStrCompare(JNIEnv *env, jobject thiz,
                                                                      jstring str1, jstring str2) {
    const char* cStr1 = env->GetStringUTFChars(str1,0);
    const char* cStr2 = env->GetStringUTFChars(str2,0);
    int str1Length = strlen(cStr1);
    int str2Length = strlen(cStr2);
    if (str1Length != str2Length) {
        env->ReleaseStringUTFChars(str1,cStr1);
        env->ReleaseStringUTFChars(str2,cStr2);
        return false;
    }

    jboolean res = true;
    for (int i = 0; i < str1Length; ++i) {
        if (cStr1[i] != cStr2[i]) {
            res = false;
            break;
        }
    }
    env->ReleaseStringUTFChars(str1,cStr1);
    env->ReleaseStringUTFChars(str2,cStr2);
    return res;
}