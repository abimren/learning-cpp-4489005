// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

//enum cow_purpose {dairy, meat, hide, pet};
enum class cow_purpose {dairy, meat, hide, pet}; // define as class to resolve duplicate names
enum class grocery {canned, frozen, meat, laundry, dairy};

int main(){
    int meat = 8;
    //int a;
    cow_purpose a;

    //a = (int) cow_purpose::meat;
    a = cow_purpose::meat;

    //std::cout << "a = " << a << std::endl;
    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
