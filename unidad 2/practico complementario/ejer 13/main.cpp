#include<iostream>

int main(){
    std::cout<<"Ingrese el tamaño del vector: ";
    size_t tam;
    std::cin>>tam;

    int *vector = new int[tam];

    for (int i = 0; i < tam; i++){
        std::cout<<"Ingrese el valor de la posicion ["<<i<<"]: ";
        std::cin>>vector[i];
    }

    std::cout<<"El vector es: "<<std::endl;
    for (int i = 0; i < tam; i++){
        std::cout<<vector[i]<<" ";
    }
}