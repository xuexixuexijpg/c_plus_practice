//
// Created by asd on 2025/6/19.
//

#include "RefType.h"

void testRef() {

}

static void testRefType() {
    int a = 30;
    //引用
    int &b = a;
    std::cout << "a的地址为" << &a << std::endl;
    std::cout << "a的地址为" << &b << std::endl;
}