#include<iostream>
using namespace std;

/*
Showcase of Insertion Sort
Time Complexity:
- Best Case: O(n) 
  Occurs when the array is already sorted. The inner while loop never executes.
- Average Case: O(n^2)
  Occurs when the elements are in random order.
- Worst Case: O(n^2)
  Occurs when the array is sorted in reverse order. The inner loop performs maximum comparisons.

Space Complexity:
- Auxiliary Space: O(1)
  It is an in-place sorting algorithm; it only requires a constant amount of extra memory 
    (for variables like tmp, i, and j).
*/

void insertionSort(int A[], int n){
    /*
    index j is the 'current card' being inserted at the start of each iteration for the loop, 
    the subarray consisting of elements A[0,...,j-1] are the currently sorted array in hand
    the remaining array A[j,...,n-1] correspond to the unsorted cards pile
 
    */
    
    for (int j = 1; j < n; j++)
    {
        int tmp = A[j];
        int i = j - 1;
        /*
        compares the current card (tmp) with each of the cards already in hand, from right to left
        move A[i+1] by one position to the right until the proper position for tmp
        the while loop terminates when:
            a. A[i] <= tmp
            b. i < 0, i.e i = -1
        A[i+1] is the right position to store tmp (the current card)
        */
        while (i >= 0 && A[i] >= tmp)
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = tmp;
    }
}

int main(){
    // Sample unsorted array
    int myArray[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Execute insertion sort
    insertionSort(myArray, size);

    cout << "Sorted array:   ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}