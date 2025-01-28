// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t usgn;

    flt = -3.25;
    sgn = flt;
    usgn = sgn; 

    std::cout << "float " << flt << std::endl;
    std::cout << "sgn " << sgn << std::endl;
    std::cout << "usgn " << usgn << std::endl; //2^32+sgn
    std::cout << "usgn (int32_t) " << (int32_t) usgn << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
