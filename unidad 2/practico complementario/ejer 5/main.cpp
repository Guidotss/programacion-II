#include<iostream>


int main(){

    int a = 501; //se declara una variable entera con un valor de 501.
    int *p = nullptr; //se declara un puntero a entero y se le asigna el valor de null.
    p = &a; //se le asigna a p la direccion de memoria de a.
    *p = 502; //se le asigna a la direccion de memoria de a el valor de 502.

    std::cout << "a = " << *p << std::endl; //se imprime el valor de a.
    

    return 0; 
}