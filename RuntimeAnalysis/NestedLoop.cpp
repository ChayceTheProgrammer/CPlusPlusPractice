#include<iostream>
using namespace std;

/*
This file showcases a runtime analysis of a nested loop 
    with the inner loop bound is independent of the outer loop variable
Learn: Total runtime is nested statements is calculated by multiplying 
    the # of basic ops in the inner statement * total product of loop iterations
Total Calculation:
    O(1) + O(1) * n + O(1) * n = O(n^2)
*/

//Perfect Square Grid Example 
int main(){
    
    // Initialization == O(1)
    int sum = 0;
    int n = 10;

    //Runs n times O(n)
    for (size_t i = 1; i <= n; i++)
    {
        //Runs n times O(n)
        for (size_t j = 1; j <= n; j++)
        {   
            //Basic operation O(1)
            sum = sum + 1;
        }
    }
    cout << "Sum: " << sum << endl;
    return sum;
}