#include <jni.h>
#include <string>
#include "../log/Logger.h"

#ifndef JNIMANAGER_STRINGDYNAMICLIB_H
#define JNIMANAGER_STRINGDYNAMICLIB_H

jstring stringFromDynamicJNI(JNIEnv *env, jobject job, jstring s);

jobjectArray
stringArrayFromDynamicJNI(JNIEnv *env, jobject job, jobjectArray array);

static JNINativeMethod stringMap[] = {
        {"stringFromDynamicJNI",      "(Ljava/lang/String;)Ljava/lang/String;",
                                                                                  (void *) stringFromDynamicJNI},
        {"stringArrayFromDynamicJNI", "([Ljava/lang/String;)[Ljava/lang/String;", (void *) stringArrayFromDynamicJNI},
};

#endif //JNIMANAGER_STRINGDYNAMICLIB_H
