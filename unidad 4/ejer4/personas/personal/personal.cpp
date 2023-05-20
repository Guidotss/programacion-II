#include<iostream>
#include"personal.h"

Personal::Personal(std::string seccion): Persona(nombre, apellido, edad, dni, estado_civil){
    this->seccion = seccion; 
}

void Personal::mostrar(){
    std::cout << "Nombre: " << nombre << std::endl; 
    std::cout << "Apellido: " << apellido << std::endl; 
    std::cout << "Edad: " << edad << std::endl; 
    std::cout << "Dni: " << dni << std::endl; 
    std::cout << "Estado civil: " << estado_civil << std::endl; 
    std::cout << "Seccion: " << seccion << std::endl; 
}

void Personal::setNombre(std::string nombre){
    this->nombre = nombre; 
}

void Personal::setApellido(std::string apellido){
    this->apellido = apellido; 
}

void Personal::setEdad(int edad){
    this->edad = edad; 
}

void Personal::setDni(std::string dni){
    this->dni = dni; 
}

void Personal::cambioEstadocivil(std::string estado_civil){
    this->estado_civil = estado_civil; 
}

void Personal::setSeccion(std::string seccion){
    this->seccion = seccion; 
}

int Personal::getEdad(){
    return edad;
}

std::string Personal::getNombre(){
    return nombre; 
}

std::string Personal::getApellido(){
    return apellido; 
}


std::string Personal::getDni(){
    return dni; 
}

std::string Personal::getSeccion(){
    return seccion; 
}


