#include "sum.hpp"
#include <iostream>

int sum (int a, int b){
    std::cout << "From internal Bazel Library.";

    return a + b;
}