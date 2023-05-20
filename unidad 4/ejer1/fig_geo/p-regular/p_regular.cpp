#include<cmath>
#include"p_regular.h"


const double PI = M_PI;

P_regular::P_regular(std::vector<std::pair<std::string,int>> centro, int lados, int longitud){
    this->centro = centro;
    this->lados = lados;
    this->longitud = longitud;
};

float P_regular::area(){
    return (lados * longitud * longitud) / (4 * tan(PI / lados));
}

float P_regular::perimetro(){
    return lados * longitud;
}

void P_regular::set_centro(std::vector<std::pair<std::string,int>> centro){
    this->centro = centro;
}

std::vector<std::pair<std::string,int>> P_regular::get_centro(){
    return centro;
}

