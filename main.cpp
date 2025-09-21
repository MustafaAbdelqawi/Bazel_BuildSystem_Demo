#include <iostream>
#include "add.h"
#include "sum.hpp"
#include "lib.h"

int main(){
    std::cout << "3 + 4 = " << add(3,4) << std::endl;

    std::cout << "3 + 4 = " << sum(3,4) << std::endl;

    std::cout << "3 + 4 = " << extadd(3,4) << std::endl;
    return 0;
}