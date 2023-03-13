#include<iostream>
#include<vector>
#include"permutacion.h"






int main(){

    std::cout<<"Ingrese el tamaño del vector: ";
    size_t tam;
    std::cin>>tam; 

    std::vector<int>v1(tam);

    for(int i = 0; i < v1.size(); i++){
        std::cout<<"Ingrese el valor "<<i+1<<": ";
        std::cin>>v1[i]; 
    }


    if(!permutacion(v1)){
        std::cout<<"El vector no es una permutacion"<<std::endl;
    }else{
        std::cout<<"El vector es una permutacion"<<std::endl;
    }



    return 0; 
}



