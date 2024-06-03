//
// Created by user on 2024/5/30.
//

#include "Logger.h"
#include <android/log.h>

void Logger::i(const char *tag, const char *message, ...) {
    va_list vaList;
    va_start(vaList, message);
    __android_log_vprint(ANDROID_LOG_INFO, tag, message, vaList);
}


void Logger::d(const char *tag, const char *message, ...) {
    va_list vaList;
    va_start(vaList, message);
    __android_log_vprint(ANDROID_LOG_DEBUG, tag, message, vaList);
}