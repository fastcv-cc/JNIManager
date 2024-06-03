cmake_minimum_required(VERSION 3.18.1)

project("ndk")

add_library(${CMAKE_PROJECT_NAME} SHARED
        c/cFile.c
        c/CInvoker.cpp
        c/CLib.cpp
        log/Logger.cpp
        base/BaseStaticLib.cpp
        base/BaseDynamicLib.cpp
        string/StringStaticLib.cpp
        string/StringDynamicLib.cpp
        object/ObjectFieldLib.cpp
        object/ObjectStaticFieldLib.cpp
        object/ObjectStaticMethodLib.cpp
        object/ObjectMethodLib.cpp
        object/ObjectSuperLib.cpp
        ref/RefLib.cpp
        exception/ExceptionLib.cpp
        bitmap/BitmapLib.cpp
        ndk.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME}
        jnigraphics
        android
        log)