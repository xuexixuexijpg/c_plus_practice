//
// Created by asd on 2025/6/2.
//

#include "vector_p.h"

#include <iostream>
#include <vector>
//无参构造实现
VecPractice::VecPractice() {

}
//有参构造实现
VecPractice::VecPractice(const int x,const int y): x(x), y(y) {
}


//成员函数实现
void VecPractice::test() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    const auto mid = vec.begin() + vec.size() / 2;
    if (mid != vec.end()) {
        std::cout << "当前中间元素为" << *mid << std::endl;
    }else {
        std::cout << "当前为空" << std::endl;
    }
}

