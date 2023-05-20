
#include<cmath>
#include"circulo.h"
const double PI = M_PI;

Circulo::Circulo(std::vector<std::pair<std::string,int>> centro){
    this->centro = centro; 
};

float Circulo::area(){
    return PI * centro[0].second * centro[0].second;
}

float Circulo::perimetro(){
    return 2 * PI * centro[0].second;
}

void Circulo::set_centro(std::vector<std::pair<std::string,int>> centro){
    this->centro = centro;
}

std::vector<std::pair<std::string,int>> Circulo::get_centro(){
    return centro;
}





