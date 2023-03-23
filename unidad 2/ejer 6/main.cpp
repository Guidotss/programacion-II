#include<iostream>
#include<string>
#include"invertir.h"


int main(){

    std::cout<<"Ingrese una palabra: "; 
    std::string palabra; 
    std::cin>>palabra; 

    std::string *pointer = &palabra;

    std::cout<<"La palabra invertida es: "<<Invertir(pointer);


    return 0; 
}