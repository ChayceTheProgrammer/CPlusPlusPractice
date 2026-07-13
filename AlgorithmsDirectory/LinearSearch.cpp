#include<iostream>
using namespace std;

/*
Showcases a basic linear searching algorithm
*/

int linearSearch(int A[], int n, int v){
    for (int i = 0; i < n; i++)
    {
        if (A[i] == v)
        {
            return i; //return index where target is found
        }    
    }
    return -1; //element not found
}


int main(){
    // Define a sample array and its size
    int myArray[] = {12, 45, 7, 93, 21, 56};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    
    // Define the value we want to look for
    int target = 21;
    
    cout << "Searching for " << target << " in the array..." << endl;
    
    // Call the linearSearch function
    int resultIndex = linearSearch(myArray, size, target);
    
    // Check the result and print an appropriate message
    if (resultIndex != -1) {
        cout << "Element found at index: " << resultIndex << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }


    return 0;
}