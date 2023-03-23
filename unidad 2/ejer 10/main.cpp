#include<iostream>
#include"ordenar.h"

int main(){

    std::cout<<"Ingrese el tamaño del vector: ";
    size_t n;
    std::cin>>n;

    int *vector = new int[n];


    for(int i = 0; i < n; i++){
        std::cout<<"Ingrese el valor del vector en la posicion "<<i<<": ";
        std::cin>>vector[i];
    }


    ordenar_mayo_menor(vector, n); 

    for(int i = 0; i < n; i++){
        std::cout<<vector[i]; 
    }



    return 0; 
}