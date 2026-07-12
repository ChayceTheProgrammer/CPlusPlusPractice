//Task: Write a program that takes two integers and outputs their sum and difference

#include <iostream>

int main(){
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "Sum: " << (a + b) << std::endl;
    std::cout << "Difference: " << (a - b) << std::endl;

    return 0;
}