// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a=5;
    auto b=12345678901;
    auto c=3.15f;
    auto d=3.15;
    auto e=true;
    auto f='d';
    auto g="C++ keks :)";
    //std::cout << "The type of a is " << typeid(a) << std::endl;
    std::cout <<"Type of a is "<<typeid(a).name()<<std::endl;
    std::cout <<"Type of b is "<<typeid(b).name()<<std::endl;
    std::cout <<"Type of c is "<<typeid(c).name()<<std::endl;
    std::cout <<"Type of d is "<<typeid(d).name()<<std::endl;
    std::cout <<"Type of e is "<<typeid(e).name()<<std::endl;
    std::cout <<"Type of f is "<<typeid(f).name()<<std::endl;
    std::cout <<"Type of g is "<<typeid(g).name()<<std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
