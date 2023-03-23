#include<iostream>
#include<vector>
#include "coordenadas_menor.h"

int main(){

    std::cout<<"Ingrese el tamaño del vector: ";
    size_t tam;
    std::cin>>tam;

    std::vector<std::vector<int>>matriz(tam, std::vector<int>(tam));

    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            std::cout<<"Ingrese el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            std::cin>>matriz[i][j];
        }
    }

    std::cout<<"La matriz es: "<<std::endl;
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    std::vector<int>menor = coordenadas_menor(matriz);

    std::cout<<"Las coordenadas del menor son: ["<<menor[0]<<"]["<<menor[1]<<"]"<<std::endl;

    return 0; 
}