#include<iostream>
#include<string>
#include"vocales.h"

int main(){

    std::cout<<"Ingrese una palabra: ";
    std::string palabra1;
    std::cin>>palabra1;

    std::string *pointer = &palabra1;

    std::cout<<"La palabra tiene "<<vocales(pointer)<<" vocales"<<std::endl;

    return 0; 
}