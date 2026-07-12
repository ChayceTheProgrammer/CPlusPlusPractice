#include <iostream>
/*
Write a C++ program to compute the sum of two given integer values. 
If the two values are the same, then return triple their sum.
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12
*/

int main(){
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    if(a == b){
        std::cout << "Result: " << 3 * (a + b) << std::endl;
    } else {
        std::cout << "Result: " << (a + b) << std::endl;
    }
    return 0;
}