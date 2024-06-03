#include "ObjectStaticMethodLib.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getPackageName(JNIEnv *env, jobject thiz,
                                                                          jobject context) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getPackageName",
                                                "(Landroid/content/Context;)Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId, context));
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getLocaleLanguage(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject resources) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getLocaleLanguage",
                                                "(Landroid/content/res/Resources;)Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId, resources));
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getCountryZipCode(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject resources) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getCountryZipCode",
                                                "(Landroid/content/res/Resources;)Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId, resources));
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getVerName(JNIEnv *env, jobject thiz,
                                                                      jobject context) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getVerName",
                                                "(Landroid/content/Context;)Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId, context));
    return result;
}

extern "C"
JNIEXPORT jlong JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getVerCode(JNIEnv *env, jobject thiz,
                                                                      jobject context) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getVerCode",
                                                "(Landroid/content/Context;)J");
    jlong result = env->CallStaticLongMethod(clazz, methodId, context);
    return result;
}

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getPhoneVersion(JNIEnv *env,
                                                                           jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getPhoneVersion", "()I");
    jint result = env->CallStaticIntMethod(clazz, methodId);
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getManufacturer(JNIEnv *env,
                                                                           jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getManufacturer", "()Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId));
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getProduct(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getProduct", "()Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId));
    return result;
}

extern "C"
JNIEXPORT jobjectArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getSupportedAbis(JNIEnv *env,
                                                                            jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getSupportedAbis", "()[Ljava/lang/String;");
    jobjectArray result = (jobjectArray) (env->CallStaticObjectMethod(clazz, methodId));
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getDevice(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getDevice", "()Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId));
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getDisplayInfo(JNIEnv *env,
                                                                          jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getDisplayInfo", "()Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId));
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectStaticMethodNativeLib_getModel(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/utils/AppUtilsKt");
    jmethodID methodId = env->GetStaticMethodID(clazz, "getModel", "()Ljava/lang/String;");
    jstring result = (jstring) (env->CallStaticObjectMethod(clazz, methodId));
    return result;
}