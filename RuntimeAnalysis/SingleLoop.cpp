#include<iostream>
using namespace std;

/*
Runtime analysis of a simple algorithm to find a max value in an array
Analysis:
- Outside Loop: Initialization () takes constant time O(1)
- Inside Loop:  In the worst-scenario (strictly increasing array where if-conditional is always met)
    the conditional and subsequent reassignment take a fixed 2 + 2 operations O(1) * n iterations
    
Total: O(1) + n * O(1) = O(n)
*/

//The Runtime of a statement inside a loop is at most:
// (# of iterations) * (# of basic operations within the statement)

int main(){
    //n is our 'input' size

    const int n = 10; // O(1)
    int nums[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // O(1)
    int maxVal = nums[0];   //set max value to first number in array for checking from index 0 O(1)

    for (size_t i = 0; i < n; i++) //loop runs 'n' times
    {
        if (nums[i] > maxVal) // comparison O(1)
        {
            maxVal = nums[i]; //update target Worst-case O(1)
        }
    }
    std::cout << "Max Value: " << maxVal << std::endl;
    return maxVal;
}