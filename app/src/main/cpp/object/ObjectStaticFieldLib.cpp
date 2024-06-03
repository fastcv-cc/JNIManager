#include "ObjectStaticFieldLib.h"

jboolean getModelStaticBoolean(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priBoolean", "Z");
    jboolean result = env->GetStaticBooleanField(clazz, field);
    return result;
}

jbyte getModelStaticByte(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priByte", "B");
    jbyte result = env->GetStaticByteField(clazz, field);
    return result;
}

jchar getModelStaticChar(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priChar", "C");
    jchar result = env->GetStaticCharField(clazz, field);
    return result;
}

jshort getModelStaticShort(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priShort", "S");
    jshort result = env->GetStaticShortField(clazz, field);
    return result;
}

jint getModelStaticInt(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priInt", "I");
    jint result = env->GetStaticIntField(clazz, field);
    return result;
}

jlong getModelStaticLong(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priLong", "J");
    jlong result = env->GetStaticLongField(clazz, field);
    return result;
}

jfloat getModelStaticFloat(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priFloat", "F");
    jfloat result = env->GetStaticFloatField(clazz, field);
    return result;
}

jdouble getModelStaticDouble(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priDouble", "D");
    jdouble result = env->GetStaticDoubleField(clazz, field);
    return result;
}

jstring getModelStaticString(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priString", "Ljava/lang/String;");
    jstring result = (jstring) (env->GetStaticObjectField(clazz, field));
    return result;
}

jbooleanArray getModelStaticBooleanArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priBooleanArray", "[Z");
    jbooleanArray result = (jbooleanArray) (env->GetStaticObjectField(clazz, field));
    return result;
}

jbyteArray getModelStaticByteArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priByteArray", "[B");
    jbyteArray result = (jbyteArray) (env->GetStaticObjectField(clazz, field));
    return result;
}

jcharArray getModelStaticCharArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priCharArray", "[C");
    jcharArray result = (jcharArray) (env->GetStaticObjectField(clazz, field));
    return result;
}

jshortArray getModelStaticShortArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priShortArray", "[S");
    jshortArray result = (jshortArray) (env->GetStaticObjectField(clazz, field));
    return result;
}

jintArray getModelStaticIntArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priIntArray", "[I");
    jintArray result = (jintArray) (env->GetStaticObjectField(clazz, field));
    return result;
}

jlongArray getModelStaticLongArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priLongArray", "[J");
    jlongArray result = (jlongArray) (env->GetStaticObjectField(clazz, field));
    return result;
}

jfloatArray getModelStaticFloatArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priFloatArray", "[F");
    jfloatArray result = (jfloatArray) (env->GetStaticObjectField(clazz, field));
    return result;
}

jdoubleArray getModelStaticDoubleArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priDoubleArray", "[D");
    jdoubleArray result = (jdoubleArray) (env->GetStaticObjectField(clazz, field));
    return result;
}

jobjectArray getModelStaticStringArray(JNIEnv *env, jobject thiz) {
    jclass clazz = env->FindClass("cc/fastcv/jnimanager/libs/model/StaticFieldModel");
    jfieldID field = env->GetStaticFieldID(clazz, "priStringArray", "[Ljava/lang/String;");
    jobjectArray result = (jobjectArray) (env->GetStaticObjectField(clazz, field));
    return result;
}