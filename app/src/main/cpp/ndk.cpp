#include <jni.h>
#include <string>
#include "log/Logger.h"
#include "c/CInvoker.h"
#include "base/BaseDynamicLib.h"
#include "string/StringDynamicLib.h"
#include "object/ObjectStaticFieldLib.h"
#include "object/ObjectMethodLib.h"

void registerBaseLib(JNIEnv *env) {
    jclass dynamicProxyCls;
    static const char *const dynamicProxyClassName = "cc/fastcv/jnimanager/libs/BaseDynamicNativeLib";
    //这里可以找到要注册的类，前提是这个类已经加载到java虚拟机中。 这里说明，动态库和有native方法的类之间，没有任何对应关系。
    dynamicProxyCls = env->FindClass(dynamicProxyClassName);
    if (dynamicProxyCls == NULL) {
        Logger::d("native_log",
                  "JNI_OnLoad: cannot get class: cc/fastcv/jnimanager/libs/BaseDynamicNativeLib");
        return;
    }

    //注册Java Native方法与Jni方法的对应表
    if (env->RegisterNatives(dynamicProxyCls, baseMap,
                             sizeof(baseMap) / sizeof(baseMap[0])) != JNI_OK) {
        Logger::i("native_log", "JNI_OnLoad: register native method failed! for dynamicProxyCls");
        return;
    }
}

void registerStringLib(JNIEnv *env) {
    jclass dynamicProxyCls;
    static const char *const dynamicProxyClassName = "cc/fastcv/jnimanager/libs/StringDynamicNativeLib";
    //这里可以找到要注册的类，前提是这个类已经加载到java虚拟机中。 这里说明，动态库和有native方法的类之间，没有任何对应关系。
    dynamicProxyCls = env->FindClass(dynamicProxyClassName);
    if (dynamicProxyCls == NULL) {
        Logger::d("native_log",
                  "JNI_OnLoad: cannot get class: cc/fastcv/jnimanager/libs/StringDynamicNativeLib");
        return;
    }

    //注册Java Native方法与Jni方法的对应表
    if (env->RegisterNatives(dynamicProxyCls, stringMap,
                             sizeof(stringMap) / sizeof(stringMap[0])) != JNI_OK) {
        Logger::i("native_log", "JNI_OnLoad: register native method failed! for dynamicProxyCls");
        return;
    }
}

void registerObjectLib(JNIEnv *env) {
    jclass dynamicProxyCls;
    static const char *const dynamicProxyClassName = "cc/fastcv/jnimanager/libs/ObjectStaticFieldNativeLib";
    //这里可以找到要注册的类，前提是这个类已经加载到java虚拟机中。 这里说明，动态库和有native方法的类之间，没有任何对应关系。
    dynamicProxyCls = env->FindClass(dynamicProxyClassName);
    if (dynamicProxyCls == NULL) {
        Logger::d("native_log",
                  "JNI_OnLoad: cannot get class: cc/fastcv/jnimanager/libs/ObjectStaticFieldNativeLib");
        return;
    }

    //注册Java Native方法与Jni方法的对应表
    if (env->RegisterNatives(dynamicProxyCls, objectMap,
                             sizeof(objectMap) / sizeof(objectMap[0])) != JNI_OK) {
        Logger::i("native_log", "JNI_OnLoad: register native method failed! for dynamicProxyCls");
        return;
    }
}

void registerObjectMethodLib(JNIEnv *env) {
    jclass dynamicProxyCls;
    static const char *const dynamicProxyClassName = "cc/fastcv/jnimanager/libs/ObjectMethodNativeLib";
    //这里可以找到要注册的类，前提是这个类已经加载到java虚拟机中。 这里说明，动态库和有native方法的类之间，没有任何对应关系。
    dynamicProxyCls = env->FindClass(dynamicProxyClassName);
    if (dynamicProxyCls == NULL) {
        Logger::d("native_log",
                  "JNI_OnLoad: cannot get class: cc/fastcv/jnimanager/libs/ObjectMethodNativeLib");
        return;
    }

    //注册Java Native方法与Jni方法的对应表
    if (env->RegisterNatives(dynamicProxyCls, objectMethodMap,
                             sizeof(objectMethodMap) / sizeof(objectMethodMap[0])) != JNI_OK) {
        Logger::i("native_log", "JNI_OnLoad: register native method failed! for dynamicProxyCls");
        return;
    }
}

jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    Logger::i("native_log", "JNI_OnLoad: start ------------");
    //注册时在JNIEnv中实现的，所以必须先获取它
    JNIEnv *env = NULL;
    //从Java中获取JNIEnv, 一般使用 1.4版本
    if ((*vm).GetEnv((void **) &env, JNI_VERSION_1_4) != JNI_OK) {
        return -1;
    }

    registerBaseLib(env);
    registerStringLib(env);
    registerObjectLib(env);
    registerObjectMethodLib(env);

    Logger::i("native_log", "JNI_OnLoad: end ------------");
    return JNI_VERSION_1_4;
}