#include <jni.h>
#include <string>
#include <android/log.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

extern "C"{
char * ptr = NULL;
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_libs_MmapUtil_mmapOpen(JNIEnv *env, jobject thiz, jstring path) {
    __android_log_print(ANDROID_LOG_DEBUG, "mmap", "mmapOpen----------");
    const char *file_path = env->GetStringUTFChars(path,0);
    int fd = open(file_path, O_RDWR|O_CREAT|O_TRUNC,0644); //打开本地磁盘中的文件(如果没有就创建一个), 获取fd,0644是可读写的意思
    if(fd == -1) {
        __android_log_print(ANDROID_LOG_DEBUG, "mmap", "open error");
        perror("open error");
        return;
    }
    //改变文件的大小（否则大小对应不起来就报错）
    ftruncate(fd,100);
    ptr = (char*)mmap(NULL, 100, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if(ptr == MAP_FAILED) {
        __android_log_print(ANDROID_LOG_DEBUG, "mmap", "mmap error");
        perror("mmap error");
        return;
    }
    __android_log_print(ANDROID_LOG_DEBUG, "mmap", "开启成功");
    //关闭文件句柄
    close(fd);
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_libs_MmapUtil_mmapClose(JNIEnv *env, jobject thiz) {
    if(ptr != NULL){
        // 释放内存映射区
        int ret = munmap(ptr, 100);
        if(ret == -1) {
            perror("munmap error");
        }
    }
}

extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_libs_MmapUtil_mmapWrite(JNIEnv *env, jobject thiz, jstring content) {
    if(ptr != NULL){
        const char *c_content = env->GetStringUTFChars(content,0);
        // 修改映射区数据
        strcpy(ptr, c_content);
    }
}
extern "C"
JNIEXPORT void JNICALL
Java_cc_fastcv_libs_MmapUtil_mmapSetEmpty(JNIEnv *env, jobject thiz) {
    if(ptr != NULL){
        // 将共享映射区置空
        memset(ptr, 0, 100);
    }
}
extern "C"
JNIEXPORT jstring JNICALL
Java_cc_fastcv_libs_MmapUtil_observe(JNIEnv *env, jobject thiz, jstring defaultVal) {
    if(ptr != NULL){
        return env->NewStringUTF(ptr);
    }
    return defaultVal;
}