#include<iostream>

int main(){
    int x1 = 50; //se declara una variable entera con un valor de 50.
    int x2 = 100; //se declara una variable entera con un valor de 100.
    int *pun1, *pun2; //se declaran dos punteros a entero.
    pun1 = &x1; //se le asigna a pun1 la direccion de memoria de x1.
    pun2 = pun1; //se le asigna a pun2 la direccion de memoria de pun1.
    *pun1 = 2000; //se le asigna a la direccion de memoria de x1 el valor de 2000.
    pun2 = &x2; //se le asigna a pun2 la direccion de memoria de x2.
    x1 = 1; //se le asigna a x1 el valor de 1.
    x2 = 2; //se le asigna a x2 el valor de 2. 
    *pun1 = 500; //se le asigna a la direccion de memoria de x1 el valor de 500.
    *pun2 = 600; //se le asigna a la direccion de memoria de x2 el valor de 600.
    
    return 0;
}
