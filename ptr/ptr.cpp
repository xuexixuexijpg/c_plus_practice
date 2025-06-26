//
// Created by asd on 2025/6/26.
//

#include "ptr.h"

#include <iostream>


void testPtr() {
    //定义ptr2并且赋值，指向var地址
    int var = 10;
    int *ptr2 = &var;
    //ptr_address 存储ptr2的地址
    int** ptr_address = &ptr2;
    std::cout << "var 的地址为: " << &var << std::endl;
    std::cout << "ptr2 存储的值为: " << ptr2 << std::endl;
    std::cout << "ptr2 地址为: " << &ptr2 << std::endl;
    std::cout << "ptr_address 的值为: " << ptr_address << std::endl;


    //指针可以进行算术运算，如递增（++）和递减（--），
    // 这些操作会改变指针所指向的内存地址。但是，这种操作仅限于指向数组元素的指针。
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr_arr = arr;
    std::cout << "ptr_arr is : " << ptr_arr << std::endl;
    int firstElement = *ptr_arr;
    std::cout << "firstElement is " << firstElement << std::endl;
    // 递增指针
    ++ptr_arr; // ptr 现在指向 arr[1]
    std::cout << "ptr_arr is : " << ptr_arr << std::endl;
    // 访问新位置的值
    const int& secondElement = *ptr_arr; // secondElement 等于 2
    std::cout << "secondElement is " << secondElement;
}
