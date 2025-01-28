// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b=5; // define globally and b initialization
/*
Code describe
multi line*/
int main(){
    bool kekos_flag;
    a=7;
    kekos_flag=false;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;
    std::cout << "kekos= " << kekos_flag << std::endl;
    kekos_flag=true;

    std::cout << "kekos= " << kekos_flag << std::endl;
    std::cout << "a+b= " << a + b << std::endl;
    std::cout << "b-a= " << b - a << std::endl;
    unsigned int posit;
    posit = b-a;
    std::cout << "b-a (posit)= " << posit << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
