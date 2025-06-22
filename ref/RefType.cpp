//
// Created by asd on 2025/6/19.
//

#include "RefType.h"
#include <iostream>

std::string foo(const std::string &s) {
    return std::string("Hello, World!") + s;
}

static void testRefType() {
    int a = 30;
    //左值引用
    int &b = a;
    b = 400;
    std::cout << "a的地址为" << &a << std::endl;
    std::cout << "a的地址为" << &b << std::endl;

    //右值引用
    int &&c = 20; // c是整数字面量20的右值引用（但这种情况不常见，通常用于函数参数或返回值）

    std::string &&d = foo("第一个&&"); // d是foo()返回的临时字符串的右值引用

    std::cout << d << std::endl;

    auto &&e = foo;  // e 是函数左值引用
    std::cout << e("第二个&&") << std::endl;
}

void testRef() {
    testRefType();
}


