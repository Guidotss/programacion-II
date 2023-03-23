#include<iostream>

int main(){

    std::cout<<"Ingrese el tamaño del vector: "; 
    size_t n; 
    std::cin>>n; 

    int *vector = new int[n];

    

    for(int i = 0; i < n; i++){
        std::cout<<"Ingrese el valor del vector en la posicion "<<i<<": "; 
        std::cin>>vector[i]; 
    }

    std::cout<<"Notacion de vector: "<<std::endl;
    for(int i = 0; i < n; i++){
        std::cout<<"El valor del vector en la posicion "<<i<<" es: "<<vector[i]<<std::endl; 
    }

    std::cout<<"\n"; 

    std::cout<<"Notacion de punteros: "<<std::endl;
    for(int i = 0; i < n; i++){
        std::cout<<"El valor del vector en la posicion "<<i<<" es: "<< *(vector + i) <<std::endl; 
    }

    delete[] vector;


    return 0; 
}