#include<iostream>

int main(){

    int *p = nullptr;
    int a; 

    p = &a;
    *p = 2;

    std::cout << "a = " << *p << std::endl;

    return 0; 
}

