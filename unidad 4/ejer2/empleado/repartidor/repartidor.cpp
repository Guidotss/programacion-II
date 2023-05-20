#include"repartidor.h" 
#include<iostream>

Repartidor::Repartidor(std::string nombre, int edad, float salario, int zona){
    this->nombre = nombre; 
    this->edad = edad; 
    this->salario = salario; 
    this->zona = zona; 
}; 

void Repartidor::Set_nombre(std::string nombre) {
    this->nombre = nombre;
}; 

void Repartidor::Set_edad(int edad) {
    this->edad = edad;
}

void Repartidor::Set_salario(float salario) {
    this->salario = salario; 
}

void Repartidor::Set_zona(int zona) {
    this->zona = zona; 
}

std::string Repartidor::Get_nombre(){ 
    return nombre; 
}


void Repartidor::Get_info(){
    std::unordered_map<std::string, std::string>info;
    
    info["zona"] = std::to_string(zona); 
    info["salario"] = std::to_string(salario); 
    info["edad"] = std::to_string(edad); 
    info["nombre"] = nombre; 

    for(auto &itr : info){ 
        std::cout<<itr.first<<": "<<itr.second<<std::endl; 
    }
    
}

int Repartidor::Get_edad(){ 
    return edad; 
}

float Repartidor::Get_salario(){
    return salario; 
}

void Repartidor::Plus() {
    if(zona == 3 && edad < 25) {
        salario+=30000;
    }
}