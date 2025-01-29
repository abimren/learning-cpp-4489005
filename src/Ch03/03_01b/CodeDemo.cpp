// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};
struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_beef;
    my_beef.age=3;
    my_beef.name="steak";
    my_beef.purpose=cow_purpose::meat;

    std::cout << my_beef.name << " is a type "<< (int) my_beef.purpose <<" beef."<<std::endl;
    std::cout << my_beef.name << " is "<< my_beef.age <<" years old."<<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
