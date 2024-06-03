#include <jni.h>
#include <string>
#include "../log/Logger.h"

#ifndef JNIMANAGER_DYNAMICLIB_H
#define JNIMANAGER_DYNAMICLIB_H

/**
 * 动态方式
 * 调用JNI提供的RegisterNatives函数，将本地函数注册到JVM中
 */

/**
 * JNIEnv是一个线程相关的结构体, 该结构体代表了 Java 在本线程的运行环境 。
 * 这意味不同的线程各自拥有各一个JNIEnv结构体，且彼此之间互相独立，互不干扰。
 * JNIEnv结构包括了JNI函数表，这个函数表中存放了大量的函数指针，每一个函数指针又指向了具体的函数实现，比如，例子中的NewStringUTF函数就是这个函数表中的一员。
 *
 * jobject
 * 这个参数的意义取决于该方法是静态还是实例方法。
 * 当本地方法作为一个实例方法时，第二个参数相当于对象本身，即this.
 * 当本地方法作为 一个静态方法时，指向所在类。
 */

jboolean booleanFromDynamicJNI(JNIEnv *env, jobject job, jboolean b);

jbyte byteFromDynamicJNI(JNIEnv *env, jobject job, jbyte b);

jbyte uByteFromDynamicJNI(JNIEnv *env, jobject job);

jchar charFromDynamicJNI(JNIEnv *env, jobject job, jchar c);

jshort shortFromDynamicJNI(JNIEnv *env, jobject job, jshort s);

jshort uShortFromDynamicJNI(JNIEnv *env, jobject job);

jint intFromDynamicJNI(JNIEnv *env, jobject job, jint i);

jint uIntFromDynamicJNI(JNIEnv *env, jobject job);

jlong longFromDynamicJNI(JNIEnv *env, jobject job, jlong l);

jlong uLongFromDynamicJNI(JNIEnv *env, jobject job);

jfloat floatFromDynamicJNI(JNIEnv *env, jobject job, jfloat f);

jdouble doubleFromDynamicJNI(JNIEnv *env, jobject job, jdouble d);

jbooleanArray booleanArrayFromDynamicJNI(JNIEnv *env, jobject job, jbooleanArray array);

jbyteArray byteArraySortFromDynamicJNI(JNIEnv *env, jobject job, jbyteArray array);

jcharArray charArrayFromDynamicJNI(JNIEnv *env, jobject job, jstring s);

jshortArray shortArraySortFromDynamicJNI(JNIEnv *env, jobject job, jshortArray array);

jintArray intArraySortFromDynamicJNI(JNIEnv *env, jobject job, jintArray array);

jlongArray longArraySortFromDynamicJNI(JNIEnv *env, jobject job, jlongArray array);

jfloatArray floatArraySortFromDynamicJNI(JNIEnv *env, jobject job, jfloatArray array);

jdoubleArray doubleArraySortFromDynamicJNI(JNIEnv *env, jobject job, jdoubleArray array);

/**
 * 映射表： 这其中用到一个结构体 JNINativeMethod ，它的定义如下：
typedef struct {
    const char* name;
    const char* signature;
    void* fnPtr;
} JNINativeMethod;

- name是java层使用的函数名，后边是native层使用的函数名，中间是函数签名。 签名是一种用参数个数和类型区分同名方法的手段，即解决方法重载问题。
- signature 是函数签名; 签名是一种用参数个数和类型区分同名方法的手段，即解决方法重载问题。
- fnPtr是native层使用的函数名

 eg: java方法long f (int n, String s, int[] arr)#签名(ILjava/lang/String;[I)J
 */
static JNINativeMethod baseMap[] = {
        {"booleanFromDynamicJNI",         "(Z)Z",                                 (void *) booleanFromDynamicJNI},
        {"byteFromDynamicJNI",            "(B)B",                                 (void *) byteFromDynamicJNI},
        {"uByteFromDynamicJNI",            "()B",                                 (void *) uByteFromDynamicJNI},
        {"charFromDynamicJNI",            "(C)C",                                 (void *) charFromDynamicJNI},
        {"shortFromDynamicJNI",           "(S)S",                                 (void *) shortFromDynamicJNI},
        {"uShortFromDynamicJNI",           "()S",                                 (void *) uShortFromDynamicJNI},
        {"intFromDynamicJNI",             "(I)I",                                 (void *) intFromDynamicJNI},
        {"uIntFromDynamicJNI",             "()I",                                 (void *) uIntFromDynamicJNI},
        {"longFromDynamicJNI",            "(J)J",                                 (void *) longFromDynamicJNI},
        {"uLongFromDynamicJNI",            "()J",                                 (void *) uLongFromDynamicJNI},
        {"floatFromDynamicJNI",           "(F)F",                                 (void *) floatFromDynamicJNI},
        {"doubleFromDynamicJNI",          "(D)D",                                 (void *) doubleFromDynamicJNI},
        {"booleanArrayFromDynamicJNI",    "([Z)[Z",                               (void *) booleanArrayFromDynamicJNI},
        {"byteArraySortFromDynamicJNI",   "([B)[B",                               (void *) byteArraySortFromDynamicJNI},
        {"charArrayFromDynamicJNI",       "(Ljava/lang/String;)[C",               (void *) charArrayFromDynamicJNI},
        {"shortArraySortFromDynamicJNI",  "([S)[S",                               (void *) shortArraySortFromDynamicJNI},
        {"intArraySortFromDynamicJNI",    "([I)[I",                               (void *) intArraySortFromDynamicJNI},
        {"longArraySortFromDynamicJNI",   "([J)[J",                               (void *) longArraySortFromDynamicJNI},
        {"floatArraySortFromDynamicJNI",  "([F)[F",                               (void *) floatArraySortFromDynamicJNI},
        {"doubleArraySortFromDynamicJNI", "([D)[D",                               (void *) doubleArraySortFromDynamicJNI},
};

#endif //JNIMANAGER_DYNAMICLIB_H
