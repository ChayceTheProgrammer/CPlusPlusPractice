#include<iostream>
using namespace std;

//function counts how many times a specific target is found in an array
int main(){
    //init -> O(1)
    int count = 0;
    const int n = 100;
    int arr[n] = {};
    int target = 1;

    //iterates n times O(n) + index initialization O(1) + increments 'i' n times O(n)
    for (size_t i = 0; i < n; i++)
    {   //2 operations - array access and comparison O(1)
        if (arr[i] == target)
        {//worst-case: every element is target so O(1)
            count++;
        }
    }
    /*
    T_worst(n) = O(1) + n * O(1) = O(n) Runtime
    Why: Lower order O(1) gets dropped
    */

    return 0;
}