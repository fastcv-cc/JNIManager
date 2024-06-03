#include "RefLib.h"
#include <signal.h>
#include <setjmp.h>
#include <pthread.h>

static jobject localRef = NULL;
static jobject globalRef = NULL;
static jobject weakGlobalRef = NULL;

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_createLocalRef(JNIEnv *env, jobject thiz) {
    Logger::d("RefLib", "createLocalRef");
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/RefModel");
    jmethodID initMethod = env->GetMethodID(clazz, "<init>", "()V");
    localRef = env->NewLocalRef(env->NewObject(clazz, initMethod));
    jmethodID setMethod = env->GetMethodID(clazz, "setKey", "(Ljava/lang/String;)V");
    jstring key = env->NewStringUTF("LocalRef");
    env->CallVoidMethod(localRef, setMethod, key);
    env->DeleteLocalRef(localRef);
    localRef = NULL;
}

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_getLocalRef(JNIEnv *env, jobject thiz) {
    Logger::d("RefLib", "getLocalRef");
    return localRef;
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_createGlobalRef(JNIEnv *env, jobject thiz) {
    Logger::d("RefLib", "createGlobalRef");
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/RefModel");
    jmethodID initMethod = env->GetMethodID(clazz, "<init>", "()V");
    globalRef = env->NewGlobalRef(env->NewObject(clazz, initMethod));
    jmethodID setMethod = env->GetMethodID(clazz, "setKey", "(Ljava/lang/String;)V");
    jstring key = env->NewStringUTF("GlobalRef");
    env->CallVoidMethod(globalRef, setMethod, key);
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_deleteGlobalRef(JNIEnv *env, jobject thiz) {
    Logger::d("RefLib", "deleteGlobalRef");
    if (globalRef != NULL) {
        env->DeleteGlobalRef(globalRef);
        globalRef = NULL;
    }
}

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_getGlobalRef(JNIEnv *env, jobject thiz) {
    Logger::d("RefLib", "getGlobalRef");
    return globalRef;
}

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_createWeakGlobalRef(JNIEnv *env, jobject thiz) {
    Logger::d("RefLib", "createWeakGlobalRef");
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/RefModel");
    jmethodID initMethod = env->GetMethodID(clazz, "<init>", "()V");
    weakGlobalRef = env->NewWeakGlobalRef(env->NewObject(clazz, initMethod));
    jmethodID setMethod = env->GetMethodID(clazz, "setKey", "(Ljava/lang/String;)V");
    jstring key = env->NewStringUTF("WeakGlobalRef");
    env->CallVoidMethod(weakGlobalRef, setMethod, key);
    return weakGlobalRef;
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_deleteWeakGlobalRef(JNIEnv *env, jobject thiz) {
    Logger::d("RefLib", "deleteWeakGlobalRef");
    if (weakGlobalRef != NULL) {
        env->DeleteGlobalRef(weakGlobalRef);
        weakGlobalRef = NULL;
    }
}

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_RefNativeLib_getWeakGlobalRef(JNIEnv *env, jobject thiz) {
    Logger::d("RefLib", "getWeakGlobalRef");
    return weakGlobalRef;
}
