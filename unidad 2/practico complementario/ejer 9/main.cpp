#include<iostream>


int main(){

    float *pointer = nullptr;
    float a = 5.5;
    float b = 3.14;

    pointer = &a;

    *pointer = 3.14;

    pointer = &b;

    *pointer = 5.5;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    

    

    return 0; 
}