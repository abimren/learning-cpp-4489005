// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;
    char arr_str1[LENGTH1]="Hey Keko";
    char arr_str2[]="Whats up";

    std::string std_str1 = "Standard kekko";
    std::string std_str2 = "What happened kekko";

    strncat(arr_str1,arr_str2,LENGTH1);
    std::cout << arr_str1 << std::endl;
    std::cout << std_str1 + std_str2 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
