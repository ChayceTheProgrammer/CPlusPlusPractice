#include <iostream>
//Is Pass or Fail?
//Task: Given a score, determine if it is passing (e.g., >= 50).

bool isPassing(int score){
    int passingThreshold = 50;

    if(score >= passingThreshold){
        return true;
    }

    return false;
}

int main(){

    std::cout << std::boolalpha;
    std::cout << isPassing(15) << std::endl;
    std::cout << isPassing(51) << std::endl;
    
    std::cout << isPassing(91) << std::endl;
    std::cout << isPassing(11) << std::endl;

    
    std::cout << isPassing(41) << std::endl;
    std::cout << isPassing(100) << std::endl;


    return 0;
}