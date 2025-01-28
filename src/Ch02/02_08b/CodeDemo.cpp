// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4;
    int age[AGE_LENGTH];
    float temper[]={31.5,23.5,4};

    age[0]=2;
    age[1]=23;
    age[2]=24;
    age[3]=233;

    std::cout << "Age length "<< AGE_LENGTH <<std::endl;
    std::cout << "age[0]= "<< age[0] <<std::endl;
    std::cout << "age[1]= "<< age[1] <<std::endl;
    std::cout << "age[2]= "<< age[2] <<std::endl;
    std::cout << "age[3]= "<< age[3] <<std::endl;
    std::cout << std::endl;
    std::cout << "temper[0]= "<< temper[0] <<std::endl;
    std::cout << "temper[1]= "<< temper[1] <<std::endl;
    std::cout << "temper[2]= "<< temper[2] <<std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
