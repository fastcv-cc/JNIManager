//
// Created by user on 2024/5/30.
//

#ifndef JNIMANAGER_CINVOKER_H
#define JNIMANAGER_CINVOKER_H

extern "C" {
#include "cFile.h"
}


class CInvoker {

public:
    int invokeFun1(int arg1);
    int invokeFun2(int arg1, int arg2);
    int invokeFun3(int arg1, int arg2, int arg3);
};


#endif //JNIMANAGER_CINVOKER_H
