#include <jni.h>
#include <string>
#include "../log/Logger.h"

#ifndef JNIMANAGER_OBJECTSTATICFIELDLIB_H
#define JNIMANAGER_OBJECTSTATICFIELDLIB_H

jboolean getModelStaticBoolean(JNIEnv *env, jobject thiz);

jbyte getModelStaticByte(JNIEnv *env, jobject thiz);

jchar getModelStaticChar(JNIEnv *env, jobject thiz);

jshort getModelStaticShort(JNIEnv *env, jobject thiz);

jint getModelStaticInt(JNIEnv *env, jobject thiz);

jlong getModelStaticLong(JNIEnv *env, jobject thiz);

jfloat getModelStaticFloat(JNIEnv *env, jobject thiz);

jdouble getModelStaticDouble(JNIEnv *env, jobject thiz);

jstring getModelStaticString(JNIEnv *env, jobject thiz);

jbooleanArray getModelStaticBooleanArray(JNIEnv *env, jobject thiz);

jbyteArray getModelStaticByteArray(JNIEnv *env, jobject thiz);

jcharArray getModelStaticCharArray(JNIEnv *env, jobject thiz);

jshortArray getModelStaticShortArray(JNIEnv *env, jobject thiz);

jintArray getModelStaticIntArray(JNIEnv *env, jobject thiz);

jlongArray getModelStaticLongArray(JNIEnv *env, jobject thiz);

jfloatArray getModelStaticFloatArray(JNIEnv *env, jobject thiz);

jdoubleArray getModelStaticDoubleArray(JNIEnv *env, jobject thiz);

jobjectArray getModelStaticStringArray(JNIEnv *env, jobject thiz);

static JNINativeMethod objectMap[] = {
        {"getModelStaticBoolean", "()Z", (void *) getModelStaticBoolean},
        {"getModelStaticByte", "()B", (void *) getModelStaticByte},
        {"getModelStaticChar", "()C", (void *) getModelStaticChar},
        {"getModelStaticShort", "()S", (void *) getModelStaticShort},
        {"getModelStaticInt", "()I", (void *) getModelStaticInt},
        {"getModelStaticLong", "()J", (void *) getModelStaticLong},
        {"getModelStaticFloat", "()F", (void *) getModelStaticFloat},
        {"getModelStaticDouble", "()D", (void *) getModelStaticDouble},
        {"getModelStaticString", "()Ljava/lang/String;", (void *) getModelStaticString},
        {"getModelStaticBooleanArray", "()[Z", (void *) getModelStaticBooleanArray},
        {"getModelStaticByteArray", "()[B", (void *) getModelStaticByteArray},
        {"getModelStaticCharArray", "()[C", (void *) getModelStaticCharArray},
        {"getModelStaticShortArray", "()[S", (void *) getModelStaticShortArray},
        {"getModelStaticIntArray", "()[I", (void *) getModelStaticIntArray},
        {"getModelStaticLongArray", "()[J", (void *) getModelStaticLongArray},
        {"getModelStaticFloatArray", "()[F", (void *) getModelStaticFloatArray},
        {"getModelStaticDoubleArray", "()[D", (void *) getModelStaticDoubleArray},
        {"getModelStaticStringArray", "()[Ljava/lang/String;", (void *) getModelStaticStringArray},
};

#endif //JNIMANAGER_OBJECTSTATICFIELDLIB_H
