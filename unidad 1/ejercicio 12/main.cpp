#include<iostream>
#include<vector>
#include"ordenar.h"
#include<algorithm>
#include<functional>

int main(){

    std::cout<<"Ingrese el tamaño del vector: ";
    size_t tam; 
    std::cin>>tam;

    std::vector<int> v(tam);

    for(size_t i = 0; i < tam; i++){
        std::cout<<"Ingrese el elemento "<<i+1<<": ";
        std::cin>>v[i];
    }

    

    ordenar(v);

    for(auto &i : v){
        std::cout<<i<<" ";
    }

    

    return 0; 
}