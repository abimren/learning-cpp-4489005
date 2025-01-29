// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a=31;
    int *ptr;
    ptr=&a;
    std::cout<<"Content of a is "<<a<<std::endl;
    std::cout<<"ptr is pointing address "<<ptr<<std::endl;
    std::cout<<"address of a is "<<&a<<std::endl;
    std::cout<<"ptr points to "<<*ptr<<std::endl;
    std::cout<<"address of ptr is "<<&ptr<<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
