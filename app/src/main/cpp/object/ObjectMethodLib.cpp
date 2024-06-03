#include "ObjectMethodLib.h"

void callMethod1(JNIEnv *env,jobject job) {
    jclass clazz = env->GetObjectClass(job);
    jmethodID methodID = env->GetMethodID(clazz,"method01","()V");
    env->CallVoidMethod(job,methodID);
}

void callMethod2(JNIEnv *env,jobject job) {
    jclass clazz = env->GetObjectClass(job);
    jmethodID methodID = env->GetMethodID(clazz,"method02","()V");
    env->CallVoidMethod(job,methodID);
}

void callMethod3(JNIEnv *env,jobject job) {
    jclass clazz = env->GetObjectClass(job);
    jmethodID methodID = env->GetMethodID(clazz,"method03","()V");
    env->CallVoidMethod(job,methodID);
}

void callMethod4(JNIEnv *env,jobject job) {
    jclass clazz = env->GetObjectClass(job);
    jmethodID methodID = env->GetMethodID(clazz,"method04","()V");
    env->CallVoidMethod(job,methodID);
}

void callMethod5(JNIEnv *env,jobject job) {
    jclass clazz = env->GetObjectClass(job);
    jmethodID methodID = env->GetMethodID(clazz,"method05","()V");
    env->CallVoidMethod(job,methodID);
}