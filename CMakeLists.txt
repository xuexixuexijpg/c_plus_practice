# 设置CMake最小版本要求
cmake_minimum_required(VERSION 3.31)

# 设置项目名称和版本
project(c_plus_practice)

set(CMAKE_CXX_STANDARD 20)

# 添加一个可执行文件
# 语法：add_executable(目标名 源文件...)
add_executable(c_plus_practice
        main.cpp
        vector_p.cpp
        vector_p.h
        ref/RefType.cpp
        ref/RefType.h
        ptr/ptr.cpp
        ptr/ptr.h
)
