// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    
    //std::vector<int>::iterator ptr = numbers.begin();
    auto ptr = numbers.begin();
    
    while(ptr != numbers.end()){
        std::cout<<"Num: "<<*ptr<<" ";
        ptr=next(ptr,1); //to move iterator by 1 position
    }
    std::cout << std::endl;
    int i=0;
    do
    {
        std::cout<<"Num: "<<numbers[i]<<" ";
        i++;
    } while (i<numbers.size());
    

    std::cout << std::endl << std::endl;
    return (0);
}
