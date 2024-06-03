cmake_minimum_required(VERSION 3.18.1)

project("mmap")

add_library(${CMAKE_PROJECT_NAME} SHARED
        mmap.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME}
        android
        log)