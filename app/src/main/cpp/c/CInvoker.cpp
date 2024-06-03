#include "CInvoker.h"

int CInvoker::invokeFun1(int arg1) {
    return fun1(arg1);
}

int CInvoker::invokeFun2(int arg1, int arg2) {
    return fun2(arg1, arg2);
}

int CInvoker::invokeFun3(int arg1, int arg2, int arg3) {
    return fun3(arg1, arg2, arg3);
}
