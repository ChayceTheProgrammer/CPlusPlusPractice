#include<iostream>
#include<cmath>
#include<cstdlib> // Required for rand()
using namespace std;

// Showcases how to populate an array passed by reference
void makeArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        // rand() % 100 limits the random numbers to a readable range (0-99)
        arr[i] = i + (rand() % 100); 
    }
}

// Showcases how to pass an array and its size to loop through it
void viewArray(int A[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Element at index " << i << ": " << A[i] << endl;
    }
}

int main(){
    const int SIZE = 15; // Defining a manageable size for the showcase
    int A[SIZE] = {}; // Creating the array in main memory
    
    // 1. Populate the array using our function
    makeArray(A, SIZE);
    
    // 2. Display the array contents
    viewArray(A, SIZE);
        
    return 0;
}