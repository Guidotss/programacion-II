#include<iostream>
#include<vector>
#include<algorithm>
#include"buscar.h"

int main(){

    std::cout<<"Ingrese el tamaño del vector: ";
    size_t tam;
    std::cin>>tam;

    std::vector<int> v(tam);

    for(int i = 0; i < tam; i++){
        std::cout<<"Ingrese el elemento "<<i+1<<": ";
        std::cin>>v[i];
    }

    std::cout<<"Ingrese el elemento a buscar: ";
    int k;
    std::cin>>k;

    int index = buscarIndex(v, k);

    if(index == -1){
        std::cout<<"El elemento no se encuentra en el vector"<<std::endl;
    }else{
        std::cout<<"El elemento se encuentra en la posicion "<<index<<std::endl;
    }

  


    return 0; 
}