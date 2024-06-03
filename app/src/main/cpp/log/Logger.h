//
// Created by user on 2024/5/30.
//
#ifndef JNIMANAGER_LOGGER_H
#define JNIMANAGER_LOGGER_H

class Logger {
public:
    static void i(const char *tag, const char *message, ...);

    static void d(const char *tag, const char *message, ...);
};

#endif //JNIMANAGER_LOGGER_H
