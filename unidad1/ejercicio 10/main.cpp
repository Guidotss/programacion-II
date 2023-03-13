#include <iostream>
#include <vector>
#include "paresImpares.h"

int main(){

    std::cout<<"Ingrese el tamaño del vector: ";
    size_t tam;
    std::cin>>tam;

    std::vector<int> v1(tam);

    for (int i = 0; i < v1.size(); i++){
        std::cout<<"Ingrese el valor " << i + 1 << ": ";
        std::cin>>v1[i];
    }

    paresImpares(v1);

    for(auto &i : v1){ 
        std::cout<<i<<" ";
    }

    return 0;
}