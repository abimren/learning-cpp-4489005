// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<int> primes;
    primes.push_back(2);
    primes.push_back(4);
    primes.push_back(6);
    primes.push_back(0);
    std::cout << "vector has " << primes.size() << " elements."<< std::endl;
    std::cout << "Index [2] is " << primes[2] << " ."<< std::endl;
    primes[2]=31;
    std::cout << "New index [2] is " << primes[2] << " ."<< std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
