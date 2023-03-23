#include<iostream>

int main(){

    int *p = nullptr; 
    int a = 5;

    //Si se puede imprimir el contenido de un puntero.

    p = &a;

    std::cout << "a = " << *p << std::endl;


    return 0; 
}