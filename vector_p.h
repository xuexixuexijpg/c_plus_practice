//
// Created by asd on 2025/6/2.
//

#ifndef VECTOR_P_H
#define VECTOR_P_H
#include <string>

class VecPractice {
private:
    int x;
    int y;

public:
    VecPractice();

    VecPractice(int x, int y);

    void test(); //成员函数声明
};

#endif //VECTOR_P_H

/*
 *尽管 #pragma once 和 宏定义在功能上相似，但它们在实现方式和使用场景上有所不同。
 *在大多数现代 C++ 项目中，推荐使用 #pragma once，因为它更简单、更直观，并且大多数现代编译器都支持它。
 *然而，在需要确保与所有 C++ 编译器兼容的情况下，或者在不支持 #pragma once 的环境中，仍然需要使用宏定义来防止头文件被重复包含。
 */
#pragma once

class PragmaOnce {
public:
    PragmaOnce();
};

/*
*● 头文件只做变量的声明，不能做变量的定义
● 头文件声明变量可以采用extern的方式
 */
#ifndef GLOBAL_VARIABLES
#define GLOBAL_VARIABLES
extern const int global_age ;
extern std::string global_name ;
#endif