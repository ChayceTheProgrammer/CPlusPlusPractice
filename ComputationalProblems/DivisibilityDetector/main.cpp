#include <iostream>
//Divisibility Checker
//Task: Check if a number is divisible by 3, 5, or 7.

bool test(int num){
    if(num % 3 == 0 || num % 5 == 0 || num % 7 == 0){
        return true; //1
    }

    return false;  //0
}

int main(){
    //turns off boolean literal
    std::cout << std::boolalpha;
    std::cout << test(3) << std::endl;
    std::cout << test(10) << std::endl;
    std::cout << test(21) << std::endl;

    std::cout << test(31) << std::endl;
    std::cout << test(192) << std::endl;
    std::cout << test(2192) << std::endl;

    return 0;
}