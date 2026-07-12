#include<iostream>
using namespace std;

/*
This will showcase a nested loop runtime with a triangle dependent (j <= i)
Analysis: Unlike the flat grid pattern, the inner loop workload expands dynamically as the outer loop index increases
    - When i = 1, inner loop runs 1 time
    - When i = 2, inner loop runs 2 times
    - When i = n, inner loop runs n times
Proof:
    Max number of tracking ops inside each cycle evaluates to an upper bound of about 4i ops per pass
    Thus runtime at Most:
        O(1) + O(n) + Σ [i = 1, n] 4i
        Factor out the constant 4 leaves the summation formula for the sum of the first n natural numbers
        Σi = n(n+1)/2
        Sub this back to our original runtime/operational bound calculation results:
            O(n) + 4 * [n(n+1)/2] = O(n) + 2(n^2 + n) = 2n^2 + 3n 
        Drop the lower order term: 3n
        This leaves: the order to be O(n^2)
*/

int main(){
    // O(1) constant time, 2 ops
    int sum = 0;
    int n = 10;

    for (int i = 1; i <= n; i++) // O(n), runs n times 
    {
        for (int j = 1; j <= i; j++) //dependent bound -> runs 'i' times; 2 ops comparison and increment
        {
            sum = sum + 1;              // O(1), basic operation and assignment: 2 ops
        } // total 4i ops in worst-case
    }
    
    cout << "sum: " << sum << endl;
    return 0;
}