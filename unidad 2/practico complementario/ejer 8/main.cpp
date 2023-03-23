#include<iostream>


int main(){
    int a = 5; 
    int b = 10; 
    int c = 15;

    int *pointer = nullptr; 

    pointer = &a;

    std::cout << "a = " << *pointer << std::endl;

    pointer = &b;

    std::cout << "b = " << *pointer << std::endl;

    pointer = &c;

    std::cout << "c = " << *pointer << std::endl;

    return 0; 
}

