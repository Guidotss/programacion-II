#include<iostream>
#include"media.h"
#include<unordered_map>

int main(){

    std::cout<<"Ingrese el tamaño del vector: ";
    size_t n;
    std::cin>>n;

    float *vector = new float[n];

    for(int i = 0; i < n; i++){
        std::cout<<"Ingrese el valor del vector en la posicion "<<i<<": ";
        std::cin>>vector[i];
    }


    std::unordered_map<std::string, float> mapa = media_mayo_menor(vector, n);

    for(auto i = mapa.begin(); i != mapa.end(); i++){
        std::cout<<i->first<<": "<<i->second<<std::endl;
    }
    

    return 0; 
}