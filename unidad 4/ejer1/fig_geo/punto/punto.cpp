#include"punto.h"

Punto::Punto(std::vector<std::pair<std::string,int>> centro){
    this->centro = centro;
}

float Punto::area(){
    return 0;
}

float Punto::perimetro(){
    return 0;
}

std::vector<std::pair<std::string,int>> Punto::get_centro(){
    return this->centro;
}

void Punto::set_centro(std::vector<std::pair<std::string,int>> centro){
    this->centro = centro;
}
