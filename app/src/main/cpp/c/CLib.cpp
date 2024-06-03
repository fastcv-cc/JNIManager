#include "CLib.h"

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_CNativeLib_callCMethod1(JNIEnv *env, jobject thiz, jint arg1) {
    CInvoker *invoker = new CInvoker();
    Logger::d("CLib","callCMethod1");
    return invoker->invokeFun1(arg1);
}

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_CNativeLib_callCMethod2(JNIEnv *env, jobject thiz, jint arg1,
                                                       jint arg2) {
    CInvoker *invoker = new CInvoker();
    Logger::d("CLib","callCMethod2");
    return invoker->invokeFun2(arg1, arg2);
}

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_CNativeLib_callCMethod3(JNIEnv *env, jobject thiz, jint arg1,
                                                       jint arg2, jint arg3) {
    CInvoker *invoker = new CInvoker();
    Logger::d("CLib","callCMethod3");
    return invoker->invokeFun3(arg1, arg2, arg3);
}