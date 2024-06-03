#include "StringDynamicLib.h"

jstring stringFromDynamicJNI(JNIEnv *env, jobject job, jstring s) {
    jboolean isCopy = false;
    jsize utfLength = env->GetStringUTFLength(s);
    jsize length = env->GetStringLength(s);
    Logger::d("DynamicLib", "stringFromJNI上层传入字符串UTF编码的长度为：%d", utfLength);
    Logger::d("DynamicLib", "stringFromJNI上层传入字符串Unicode编码的长度为：%d", length);
    const char *str_input = env->GetStringUTFChars(s, &isCopy);
    Logger::d("DynamicLib", "stringFromDynamicJNI上层传入值：%s", str_input);
    env->ReleaseStringUTFChars(s, str_input);
    return s;
}

jobjectArray
stringArrayFromDynamicJNI(JNIEnv *env, jobject job, jobjectArray array) {
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
