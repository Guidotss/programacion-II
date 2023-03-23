#include<iostream>
#include<string>
#include"mayus.h"

int main(){

    std::cout << "Ingrese una palabra: ";
    std::string palabra;
    std::cin >> palabra;

    std::string *pointer = &palabra;

    std::cout << "La palabra en mayusculas es: " << mayus(pointer) << std::endl;

    return 0; 
}