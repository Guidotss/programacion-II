#include<iostream>
#include<vector>
#include "matriz.h"

int main(){

    Matriz m1(3, 3);
    Matriz m2(3, 3);

    m1.set(0, 0, 1);
    m1.set(0, 1, 2);
    m1.set(0, 2, 3);
    m1.set(1, 0, 4);
    m1.set(1, 1, 5);
    m1.set(1, 2, 6);
    m1.set(2, 0, 7);
    m1.set(2, 1, 8);
    m1.set(2, 2, 9);

    m2.set(0, 0, 1);
    m2.set(0, 1, 2);
    m2.set(0, 2, 3);
    m2.set(1, 0, 4);
    m2.set(1, 1, 5);
    m2.set(1, 2, 6);
    m2.set(2, 0, 7);
    m2.set(2, 1, 8);
    m2.set(2, 2, 9);

    m1.mostrar();
    std::cout << std::endl;
    m2.mostrar();
    std::cout << std::endl;

    m1 + m2;
    m1.mostrar();
    std::cout << std::endl;
    m2.mostrar();
    std::cout << std::endl;

    m1 - m2;
    m1.mostrar();


    return 0; 
}