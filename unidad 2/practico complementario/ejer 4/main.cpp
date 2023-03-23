#include<iostream>

int main(){

    int *pointer_1 = nullptr;
    float *pointer_2 = nullptr;

    int a = 5;
    float b = 3.14;

    pointer_1 = &a;
    pointer_2 = &b;

    std::cout << "a = " << *pointer_1 << std::endl;
    std::cout << "b = " << *pointer_2 << std::endl;
    

    return 0; 
}