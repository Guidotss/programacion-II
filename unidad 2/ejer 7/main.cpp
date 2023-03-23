#include<iostream>
#include<string>
#include"copiar_cadena.h"


int main(){

    std::cout<<"Ingrese una palabra: "; 
    std::string palabra1; 
    std::cin>>palabra1; 

    std::string palabra2;

    copiar_cadena(&palabra1, &palabra2);

    std::cout<<"La palabra 2 es: "<<palabra2<<std::endl;
}