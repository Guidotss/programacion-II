#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include"sumarAdyacentes.h"

int main(){

    std::cout<<"Ingrese el numero de filas: ";
    size_t filas; 
    std::cin>>filas;
    
    std::cout<<"Ingrese el numero de columnas: ";
    size_t columnas;
    std::cin>>columnas;

    std::vector<std::vector<int>>matriz(filas, std::vector<int>(columnas)); 

    for(size_t i=0; i<filas; i++){
        for(size_t j=0; j<columnas; j++){
            std::cout<<"Ingrese el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            int valor;
            std::cin>>valor;
            matriz[i][j]=valor;
        }
    }

    std::cout<<"Ingrese la coordenada i: ";
    int i;
    std::cin>>i;

    std::cout<<"Ingrese la coordenada j: ";
    int j;
    std::cin>>j;


    std::unordered_map<std::string, int> map;

    sumarAdyacentes(matriz, map, i, j);

    for(size_t i = 0; i<matriz.size(); i++){
        for(size_t j = 0; j<matriz[i].size(); j++){
            std::cout<<matriz[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    for(auto i:map){
        std::cout<<i.first<<" : "<<i.second<<std::endl;
    }


    return 0; 
}