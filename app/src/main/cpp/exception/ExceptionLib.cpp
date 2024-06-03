#include "ExceptionLib.h"
#include "../log/Logger.h"

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_ExceptionNativeLib_exception1(JNIEnv *env, jobject thiz) {
    jclass j_class = env->GetObjectClass(thiz);
    //这行代码会报错!!!
    jfieldID j_id = env->GetFieldID(j_class, "name", "Ljava/lang/String;");
    //判断是否发生过异常
    if (env->ExceptionCheck()) {
        Logger::d("ExceptionLib","检测到异常");
        //清除异常
        env->ExceptionDescribe();
        env->ExceptionClear();
    }
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_ExceptionNativeLib_exception2(JNIEnv *env, jobject thiz) {
    jclass j_class = env->GetObjectClass(thiz);
    //这行代码会报错!!!
    jfieldID j_id = env->GetFieldID(j_class, "name", "Ljava/lang/String;");

    //判断是否发生过异常
    jthrowable j_thr = env->ExceptionOccurred();
    //非 0 级 true
    if (j_thr) {
        Logger::d("ExceptionLib","检测到异常");
        env->ExceptionDescribe();
        //清除异常
        env->ExceptionClear();

        //参数填写的是异常包名路径
        jclass null_class = env->FindClass("java/lang/NullPointerException");

        env->ThrowNew(null_class, "报错啦报错啦 NullPointerException!!");
    }
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_ExceptionNativeLib_exception3(JNIEnv *env, jobject thiz) {
    jclass clazz = env->GetObjectClass(thiz);

    jmethodID methodId = env->GetMethodID(clazz, "showException", "()V");
    //调用 java 层的异常方法 ,走到这里会崩溃
    env->CallVoidMethod(thiz, methodId);

    //检查是否会崩溃(可以理解为 判断 java 层是否抛出异常)
    if (env->ExceptionCheck()) {
        //输出描述错误信息
        env->ExceptionDescribe();
        //清除掉崩溃信息
        env->ExceptionClear();
    }
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_ExceptionNativeLib_exception4(JNIEnv *env, jobject thiz) {
    env->FatalError("哈哈哈  我自杀了！！！");
}