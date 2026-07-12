#include <iostream>
/*
Write a C++ program to find the absolute difference between n and 51. 
If n is greater than 51 return triple the absolute difference.
Sample Input:
53
30
51
Sample Output:
6
21
0
*/
int test(int n){
    int const x = 51;

    if(n > x){
        return 3 * (n - x);
    }

    return x - n;
}


int main() {
    std::cout << test(31) << std::endl;
    std::cout << test(13) << std::endl;
    std::cout << test(50) << std::endl;
    std::cout << test(52) << std::endl;
    return 0;
}