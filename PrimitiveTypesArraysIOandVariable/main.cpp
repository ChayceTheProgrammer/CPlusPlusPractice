#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "C++ has many types for general usage, these are called Primatives" << endl;
    int number1 = 1;
    char character = 'a';
    float numberFloat= 7.0f;
    double numberDouble = 199.829f;
    bool someBool = false;
    
    auto number2 = 9; 

    cout << "There are some compound Data Types as well" << endl;
    int array1[100] = {};
    int* aPointerToInteger = &number1;
    cout << aPointerToInteger << endl; //references
    cout << *aPointerToInteger << endl; //dereferences
    //string word = "Some Words";

    short int a = 2;
    signed char b = 'a';
    signed short int c = 2120;
    signed long int d = -123123131;
    signed long long int e = 19102;

    unsigned int f = 212;
    long double g = 321.123;
    
    char16_t s = '1'; //At least 16 bits
    char32_t u = '21'; //At least 32 bits
    wchar_t t = 'sa'; //can represent the largest supported character set

    return 0;
}