#include<iostream>
#include"profesor.h"

Profesor::Profesor(std::string departamento): Persona(nombre, apellido, edad, dni, estado_civil){
    this->departamento = departamento; 
}

void Profesor::mostrar(){
    std::cout << "Nombre: " << nombre << std::endl; 
    std::cout << "Apellido: " << apellido << std::endl; 
    std::cout << "Edad: " << edad << std::endl; 
    std::cout << "Dni: " << dni << std::endl; 
    std::cout << "Estado civil: " << estado_civil << std::endl; 
    std::cout << "Departamento: " << departamento << std::endl; 
}

void Profesor::setNombre(std::string nombre){
    this->nombre = nombre; 
}

void Profesor::setApellido(std::string apellido){
    this->apellido = apellido; 
}

void Profesor::setEdad(int edad){
    this->edad = edad; 
}

void Profesor::setDni(std::string dni){
    this->dni = dni; 
}

void Profesor::cambioEstadocivil(std::string estado_civil){
    this->estado_civil = estado_civil; 
}

void Profesor::setDepartamento(std::string departamento){
    this->departamento = departamento; 
}

void Profesor::getDepartamento(){
    std::cout << departamento << std::endl; 
}

int Profesor::getEdad(){
    return edad; 
}


std::string Profesor::getNombre(){
    return nombre; 
}

std::string Profesor::getApellido(){
    return apellido; 
}

std::string Profesor::getDni(){
    return dni; 
}