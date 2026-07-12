#include<iostream>
#include<random>
//Task: Rearrange an array so all zeros are at the end, preserving the order of non-zero elements.

int const ArrSize = 10;

struct RandomArray{
    int const size = ArrSize;
    int arr[ArrSize];

    int const getSize(){
       return size; 
    }
    void swapElement(int initPos, int finPos){
        //::cout << "Swapping elements at indices: " << initPos << " and " << finPos << std::endl;
        int temp = arr[initPos];    //value to move as a temporary value
        arr[initPos] = arr[finPos]; //change initial value to final value
        arr[finPos] = temp;         //change final value to initial value
        return;
    }
    void const viewArray(){
        for (int i = 0; i < size; i++)
        {
            std::cout << "Element: " << arr[i] << " at index - " << i << std::endl;
        }
        return;
    }
    void fillArray(){
        //generator of random numbers (makes the seed)
        std::random_device rd;
        std::uniform_int_distribution<int> distrib(0, 9);
        for(int i = 0; i < size; i++){
            arr[i] = distrib( rd );
        }
        return;
    }
    // O(n^2) as it loops through the array twice at most
    void moveZeros(){
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                pushBack(i);
            }
        }
        return;
    }
    //only moves through the array at most once => O(n)
    void moveZeros2(){
        int insertPos = 0;
        // Move all non-zero elements to the front
        for (int i = 0; i < size; i++) {
            if (arr[i] != 0) {
                arr[insertPos++] = arr[i];
            }
        }
        // Fill the rest with zeros
        while (insertPos < size) {
            arr[insertPos++] = 0;
        }
    }
    void pushBack(int i){
        for (int start = i; start < size; i++)
        {
            if (i+1 >= size)
            {
                break;
            } 
            else
            {
                swapElement(i+1, i);
            }
        }
        return;
    }
};

int main(){
    RandomArray arr1;
    
    arr1.fillArray();
    arr1.viewArray();

    std::cout << "moving zeros" << std::endl;
    
    //arr1.moveZeros();
    arr1.moveZeros2();
    
    std::cout << "result: " << std::endl;
    arr1.viewArray();
    
    return 0;
}