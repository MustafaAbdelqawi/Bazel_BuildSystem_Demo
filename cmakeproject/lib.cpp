#include "lib.h"
#include <iostream>

int extadd(int a, int b){
    std::cout << "CMake build inside Bazel.";
    return a + b;
}