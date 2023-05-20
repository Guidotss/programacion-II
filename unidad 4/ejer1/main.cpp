#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include"./fig_geo/fig_geo.h"
#include"./fig_geo/circulo/circulo.h"
#include"./fig_geo/p-regular/p_regular.h"
#include"./fig_geo/punto/punto.h"

int main(){
    std::vector<std::pair<std::string,int>> centro;
    centro.push_back(std::make_pair("x", 2));
    centro.push_back(std::make_pair("y", 6));

    std::unique_ptr<Fig_geo> circulo = std::make_unique<Circulo>(centro);

    std::cout << "Area del circulo: " << circulo->area() << std::endl;
    std::cout << "Perimetro del circulo: " << circulo->perimetro() << std::endl;

    std::vector<std::pair<std::string,int>> centro2;
    centro2.push_back(std::make_pair("x", 2));
    centro2.push_back(std::make_pair("y", 6));

    std::unique_ptr<Fig_geo> p_regular = std::make_unique<P_regular>(centro2, 5, 2);

    std::cout << "Area del poligono regular: " << p_regular->area() << std::endl;
    std::cout << "Perimetro del poligono regular: " << p_regular->perimetro() << std::endl;

    std::vector<std::pair<std::string,int>> centro3;
    centro3.push_back(std::make_pair("x", 2));
    centro3.push_back(std::make_pair("y", 6));


    std::unique_ptr<Fig_geo>punto = std::make_unique<Punto>(centro3);

    std::cout << "Area del punto: " << punto->area() << std::endl;
    std::cout << "Perimetro del punto: " << punto->perimetro() << std::endl;
    


    return 0; 
}