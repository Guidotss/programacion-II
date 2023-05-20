#include<iomanip>
#include<iostream>
#include"comercial.h"


Comercial::Comercial(std::string nombre, int edad, float salario, float comicion){ 
    this-> nombre = nombre; 
    this-> edad = edad; 
    this-> salario = salario;
    this-> comicion = comicion;
}; 

void Comercial::Set_nombre(std::string nombre){
    this->nombre = nombre;
}; 


void Comercial::Set_salario(float salario){ 
    this-> salario = salario; 
}; 


void Comercial::Set_edad(int edad){ 
    this-> edad = edad; 
}; 

void Comercial::Set_comicion(float comicion) {
    this-> comicion = comicion; 
}; 

std::string Comercial::Get_nombre() {
    return nombre;
}; 

void Comercial::Get_info(){
    std::unordered_map<std::string, std::string>info; 
    
    info["comicion"] = std::to_string(comicion);
    info["salario"] = std::to_string(salario); 
    info["edad"] = std::to_string(edad);
    info["nombre"] = nombre; 

    for(auto &itr : info){ 
        std::cout<<itr.first<<": "<<itr.second<<std::endl; 
    }
}; 

int Comercial::Get_edad() { 
    return edad; 
};

float Comercial::Get_salario(){
    return salario; 
}

float Comercial::Get_comicion(){ 
    return comicion; 
}

void Comercial::Plus() {
    if(edad > 30 && comicion > 12){ 
        salario+=3000;
    }
}; 