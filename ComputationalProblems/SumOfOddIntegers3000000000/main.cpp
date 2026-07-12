#include<iostream>

//Ans: 9000000000000000000
using namespace std;

int main()
{
    long long sum = 0;
    long long n = 3000000000; // 3 billion

    for (size_t i = 1; i <= n; i++)
    {
        sum = sum + (2 * i -1);
    }
    cout << sum << endl;
    
    /*
    long long n = 3000000000;
    long long sum = n * n;
    cout << sum << endl;
    */


    return 0;
}