// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <string>

#define CAPA 5000
#define DEBUG

int main(){
    int32_t large = CAPA;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "[Dut dut we are gonna Dut]"<<std::endl;
#endif
    large += small; // large = large + small;
    std::cout << "The large is "<<large<<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
