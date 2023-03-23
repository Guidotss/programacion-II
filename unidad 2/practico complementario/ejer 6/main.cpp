#include<iostream>

int main(){

    int *pointer_1 = nullptr; //se declara un puntero "pointer_1" entero y se le asigna el valor de null.
    float *pointer_2 = nullptr; //se declara un puntero "pointer_2" flotante y se le asigna el valor de null.

    int a = 5; //se declara una variable entera con un valor de 5.
    float b = 3.14; //se declara una variable flotante con un valor de 3.14.

    pointer_1 = &a; //se le asigna a pointer_1 la direccion de memoria de a.
    pointer_2 = &b; //se le asigna a pointer_2 la direccion de memoria de b.

    std::cout << "a = " << *pointer_1 << std::endl; //se imprime el valor de a.
    std::cout << "b = " << *pointer_2 << std::endl; //se imprime el valor de b.
    

    return 0; 
}