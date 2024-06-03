#include "ObjectSuperLib.h"

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_initCat(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/Cat");
    if (clazz == NULL) {
        return NULL;
    }
    jmethodID initMethodId = env->GetMethodID(clazz, "<init>", "()V");
    if (initMethodId == NULL) {
        return NULL;
    }
    //创建该类的实例，生成的新对象为obj
    jobject cat = env->NewObject(clazz, initMethodId);
    return cat;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatDes(JNIEnv *env, jobject thiz,
                                                                    jobject cat) {
    jclass clazz = env->GetObjectClass(cat);
    jmethodID methodId = env->GetMethodID(clazz, "getDescription", "()Ljava/lang/String;");
    jstring desc = (jstring) (env->CallObjectMethod(cat, methodId));
    return desc;
}

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatPrice(JNIEnv *env, jobject thiz,
                                                                      jobject cat) {
    jclass clazz = env->GetObjectClass(cat);
    jmethodID methodId = env->GetMethodID(clazz, "getPrice", "()I");
    jint price = env->CallIntMethod(cat, methodId);
    return price;
}

extern "C"
JNIEXPORT jclass JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatSuperCls(JNIEnv *env, jobject thiz,
                                                                         jobject cat) {
    jclass clazz = env->GetObjectClass(cat);
    jclass superCls = env->GetSuperclass(clazz);
    return superCls;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatSuperDes(JNIEnv *env, jobject thiz,
                                                                         jobject cat) {
    jclass clazz = env->GetObjectClass(cat);
    jclass superCls = env->GetSuperclass(clazz);
    jmethodID methodId = env->GetMethodID(superCls, "getDescription", "()Ljava/lang/String;");
    jstring desc = (jstring) (env->CallNonvirtualObjectMethod(cat, superCls, methodId));
    return desc;
}

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectSuperMethodNativeLib_getCatSuperPrice(JNIEnv *env,
                                                                           jobject thiz,
                                                                           jobject cat) {
    jclass clazz = env->GetObjectClass(cat);
    jclass superCls = env->GetSuperclass(clazz);
    jmethodID methodId = env->GetMethodID(superCls, "getPrice", "()I");
    jint price = env->CallNonvirtualIntMethod(cat, superCls, methodId);
    return price;
}