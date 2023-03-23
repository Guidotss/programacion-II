#include<iostream>


int main(){

    std::cout<<"Ingrese el numero de filas: "; 
    size_t filas; 
    std::cin>>filas;

    std::cout<<"Ingrese el numero de columnas: ";
    size_t columnas;
    std::cin>>columnas;

    int **matriz = new int*[filas];

    for(size_t i = 0; i < filas; i++){
        matriz[i] = new int[columnas];
    }

    for(size_t i = 0; i < filas; i++){
        for(size_t j = 0; j < columnas; j++){
            std::cout<<"Ingrese el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            std::cin>>matriz[i][j];
        }
    }

    for(size_t i = 0; i < filas; i++){
        for(size_t j = 0; j < columnas; j++){
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    for(size_t i = 0; i < filas; i++){
        delete[] matriz[i];
    }

    delete[] matriz;

    


    return 0; 
}