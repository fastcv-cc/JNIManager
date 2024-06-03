#include "ObjectFieldLib.h"

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_initConfigInfo(JNIEnv *env, jobject thiz,
                                                                   jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jmethodID setKey = env->GetMethodID(clazz, "setKey", "(Ljava/lang/String;)V");
    jstring key = env->NewStringUTF("this is key");
    env->CallVoidMethod(info, setKey, key);
}

extern "C"
JNIEXPORT jobject JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_createConfigInfo(JNIEnv *env, jobject thiz) {
    jclass cls = env->FindClass("cc/fastcv/jnimanager/libs/model/ConfigInfo");
    if (cls == NULL) {
        return NULL;
    }
    jmethodID init = env->GetMethodID(cls, "<init>", "()V");
    if (init == NULL) {
        return NULL;
    }
    //创建该类的实例，生成的新对象为obj
    jobject obj = env->NewObject(cls, init);
    return obj;
}

/**
 *     jobject     (*GetStaticObjectField)(JNIEnv*, jclass, jfieldID);
 *     jboolean    (*GetStaticBooleanField)(JNIEnv*, jclass, jfieldID);
 *     jbyte       (*GetStaticByteField)(JNIEnv*, jclass, jfieldID);
 *     jchar       (*GetStaticCharField)(JNIEnv*, jclass, jfieldID);
 *     jshort      (*GetStaticShortField)(JNIEnv*, jclass, jfieldID);
 *     jint        (*GetStaticIntField)(JNIEnv*, jclass, jfieldID);
 *     jlong       (*GetStaticLongField)(JNIEnv*, jclass, jfieldID);
 *     jfloat      (*GetStaticFloatField)(JNIEnv*, jclass, jfieldID) __NDK_FPABI__;
 *     jdouble     (*GetStaticDoubleField)(JNIEnv*, jclass, jfieldID) __NDK_FPABI__;
 *     void        (*SetStaticObjectField)(JNIEnv*, jclass, jfieldID, jobject);
 *     void        (*SetStaticBooleanField)(JNIEnv*, jclass, jfieldID, jboolean);
 *     void        (*SetStaticByteField)(JNIEnv*, jclass, jfieldID, jbyte);
 *     void        (*SetStaticCharField)(JNIEnv*, jclass, jfieldID, jchar);
 *     void        (*SetStaticShortField)(JNIEnv*, jclass, jfieldID, jshort);
 *     void        (*SetStaticIntField)(JNIEnv*, jclass, jfieldID, jint);
 *     void        (*SetStaticLongField)(JNIEnv*, jclass, jfieldID, jlong);
 *     void        (*SetStaticFloatField)(JNIEnv*, jclass, jfieldID, jfloat) __NDK_FPABI__;
 *     void        (*SetStaticDoubleField)(JNIEnv*, jclass, jfieldID, jdouble) __NDK_FPABI__;
 *
 *
 *     获得java层的类：
 *     jclass cls = (*env)->GetObjectClass(env, obj);
 *     获得字段的ID:
 *     jfieldID fid = (*env)->GetStaticFieldID(env, cls, “s”, “Ljava/lang/String;”);获得字段的值：jstring jstr = (*env)->GetStaticObjectField(env, cls, fid);设置字段的值：(*env)->SetStaticObjectField(env, cls, fid, jstr);
 */


extern "C"
JNIEXPORT jboolean JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateBoolean(JNIEnv *env,
                                                                                jobject thiz,
                                                                                jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldId = env->GetFieldID(clazz, "priBoolean", "Z");
    jboolean result = env->GetBooleanField(info, fieldId);
    return result;
}

extern "C"
JNIEXPORT jbyte JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateByte(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldId = env->GetFieldID(clazz, "priByte", "B");
    jbyte result = env->GetByteField(info, fieldId);
    return result;
}

extern "C"
JNIEXPORT jchar JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateChar(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldId = env->GetFieldID(clazz, "priChar", "C");
    jchar result = env->GetCharField(info, fieldId);
    return result;
}

extern "C"
JNIEXPORT jshort JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateShort(JNIEnv *env,
                                                                              jobject thiz,
                                                                              jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldId = env->GetFieldID(clazz, "priShort", "S");
    jshort result = env->GetShortField(info, fieldId);
    return result;
}

extern "C"
JNIEXPORT jint JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateInt(JNIEnv *env,
                                                                            jobject thiz,
                                                                            jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldId = env->GetFieldID(clazz, "priInt", "I");
    jint result = env->GetIntField(info, fieldId);
    return result;
}

extern "C"
JNIEXPORT jlong JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateLong(JNIEnv *env,
                                                                             jobject thiz,
                                                                             jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldId = env->GetFieldID(clazz, "priLong", "J");
    jlong result = env->GetLongField(info, fieldId);
    return result;
}

extern "C"
JNIEXPORT jfloat JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateFloat(JNIEnv *env,
                                                                              jobject thiz,
                                                                              jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldId = env->GetFieldID(clazz, "priFloat", "F");
    jfloat result = env->GetFloatField(info, fieldId);
    return result;
}

extern "C"
JNIEXPORT jdouble JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateDouble(JNIEnv *env,
                                                                               jobject thiz,
                                                                               jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldId = env->GetFieldID(clazz, "priDouble", "D");
    jdouble result = env->GetDoubleField(info, fieldId);
    return result;
}

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateString(JNIEnv *env,
                                                                               jobject thiz,
                                                                               jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID fieldID = env->GetFieldID(clazz, "priString", "Ljava/lang/String;");
    jobject keyValue = env->GetObjectField(info, fieldID);
    jstring result = (jstring) keyValue;
    return result;
}

extern "C"
JNIEXPORT jbooleanArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateBooleanArray(JNIEnv *env,
                                                                                     jobject thiz,
                                                                                     jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priBooleanArray", "[Z");
    jbooleanArray result = (jbooleanArray) (env->GetObjectField(info, field));
    return result;
}

extern "C"
JNIEXPORT jbyteArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateByteArray(JNIEnv *env,
                                                                                  jobject thiz,
                                                                                  jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priByteArray", "[B");
    jbyteArray result = (jbyteArray) (env->GetObjectField(info, field));
    return result;
}

extern "C"
JNIEXPORT jcharArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateCharArray(JNIEnv *env,
                                                                                  jobject thiz,
                                                                                  jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priCharArray", "[C");
    jcharArray result = (jcharArray) (env->GetObjectField(info, field));
    return result;
}

extern "C"
JNIEXPORT jshortArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateShortArray(JNIEnv *env,
                                                                                   jobject thiz,
                                                                                   jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priShortArray", "[S");
    jshortArray result = (jshortArray) (env->GetObjectField(info, field));
    return result;
}

extern "C"
JNIEXPORT jintArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateIntArray(JNIEnv *env,
                                                                                 jobject thiz,
                                                                                 jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priIntArray", "[I");
    jintArray result = (jintArray) (env->GetObjectField(info, field));
    return result;
}

extern "C"
JNIEXPORT jlongArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateLongArray(JNIEnv *env,
                                                                                  jobject thiz,
                                                                                  jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priLongArray", "[J");
    jlongArray result = (jlongArray) (env->GetObjectField(info, field));
    return result;
}

extern "C"
JNIEXPORT jfloatArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateFloatArray(JNIEnv *env,
                                                                                   jobject thiz,
                                                                                   jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priFloatArray", "[F");
    jfloatArray result = (jfloatArray) (env->GetObjectField(info, field));
    return result;
}

extern "C"
JNIEXPORT jdoubleArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateDoubleArray(JNIEnv *env,
                                                                                    jobject thiz,
                                                                                    jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priDoubleArray", "[D");
    jdoubleArray result = (jdoubleArray) (env->GetObjectField(info, field));
    return result;
}

extern "C"
JNIEXPORT jobjectArray JNICALL
Java_cc_fastcv_jnimanager_libs_ObjectFieldNativeLib_getConfigInfoPrivateStringArray(JNIEnv *env,
                                                                                    jobject thiz,
                                                                                    jobject info) {
    jclass clazz = env->GetObjectClass(info);
    jfieldID field = env->GetFieldID(clazz, "priStringArray", "[Ljava/lang/String;");
    jobjectArray result = (jobjectArray) (env->GetObjectField(info, field));
    return result;
}