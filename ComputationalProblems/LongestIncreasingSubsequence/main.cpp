#include<iostream>
#include<random>

struct Sequence
{
    int size = 100;
    int array[100];
    std::random_device rd;

    void makeSequence(){
        std::uniform_int_distribution<int> distrib (1, 20);
        for (int i = 0; i < size; i++)
        {
            array[i] = distrib(rd);
        }
        return;
    }
    void printSequence(){
        for (int i = 0; i < size; i++)
        {
            std::cout << array[i] << std::endl;
        }
        
    }
    bool checkIncSequence(int i){
        
        return false;
    }
};



int main(){
    Sequence seq;
    seq.makeSequence();
    seq.printSequence();

    return 0;
}