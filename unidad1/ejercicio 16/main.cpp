#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include"sumaAdyacentes.h"

int main(){

    std::cout<<"Ingrese la cantidad de filas: "; 
    size_t filas;
    std::cin>>filas;

    std::cout<<"Ingrese la cantidad de columnas: ";
    size_t columnas;
    std::cin>>columnas;

    std::vector<std::vector<int>>matriz(filas, std::vector<int>(columnas));

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            std::cout<<"Ingrese el valor de la fila "<<i+1<<" y columna "<<j+1<<": ";
            std::cin>>matriz[i][j];
        }
    }

    std::cout<<"Ingrese la coordenada i: ";
    int i; 
    std::cin>>i;

    std::cout<<"Ingrese la coordenada j: ";
    int j;
    std::cin>>j;

    std::unordered_map<std::string,int>m; 
    

    sumarAdyascentes(matriz, m,i,j); 

    for(auto i:m){
        std::cout<<i.first<<" : "<<i.second<<std::endl;
    }

    return 0; 
}