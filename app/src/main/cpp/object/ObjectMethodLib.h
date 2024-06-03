#include "jni.h"

#ifndef JNIMANAGER_OBJECTMETHODLIB_H
#define JNIMANAGER_OBJECTMETHODLIB_H

void callMethod1(JNIEnv *env,jobject job);

void callMethod2(JNIEnv *env,jobject job);

void callMethod3(JNIEnv *env,jobject job);

void callMethod4(JNIEnv *env,jobject job);

void callMethod5(JNIEnv *env,jobject job);

static JNINativeMethod objectMethodMap[] = {
        {"callMethod1", "()V", (void *) callMethod1},
        {"callMethod2", "()V", (void *) callMethod2},
        {"callMethod3", "()V", (void *) callMethod3},
        {"callMethod4", "()V", (void *) callMethod4},
        {"callMethod5", "()V", (void *) callMethod5},
};

#endif //JNIMANAGER_OBJECTMETHODLIB_H
