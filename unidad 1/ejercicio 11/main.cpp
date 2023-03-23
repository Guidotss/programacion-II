#include<iostream>
#include<vector>
#include<set>
#include"distintos.h"


int main(){

    std::cout<<"Ingrese el tamaño del vector: ";
    size_t tam;
    std::cin>>tam;

    std::vector<int>v(tam); 

    for(size_t i = 0; i < v.size(); i++){
        std::cout<<"Ingrese el valor de la posicion "<<i<<": ";
        std::cin>>v[i];
    }

    std::cout<<"La cantidad de elementos distintos es: "<<contarDistintos(v)<<std::endl;


    return 0; 
}