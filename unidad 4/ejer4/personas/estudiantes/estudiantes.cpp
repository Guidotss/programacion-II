#include"estudiantes.h"
#include<iostream>



Estudiante::Estudiante(std::string curso):Persona(nombre, apellido, edad, dni, estado_civil){
    this->curso = curso; 
}

void Estudiante::mostrar() {
    std::cout << "Nombre: " << nombre << std::endl; 
    std::cout << "Apellido: " << apellido << std::endl; 
    std::cout << "Edad: " << edad << std::endl; 
    std::cout << "Dni: " << dni << std::endl; 
    std::cout << "Estado civil: " << estado_civil << std::endl; 
    std::cout << "Curso: " << curso << std::endl; 
}


void Estudiante::setNombre(std::string nombre) {
    this->nombre = nombre; 
}

void Estudiante::setApellido(std::string apellido) {
    this->apellido = apellido; 
}

void Estudiante::setEdad(int edad) {
    this->edad = edad; 
}

void Estudiante::setDni(std::string dni) {
    this->dni = dni; 
}

void Estudiante::cambioEstadocivil(std::string estado_civil) {
    this->estado_civil = estado_civil; 
}

void Estudiante::matricularse(std::string curso) {
    this->curso = curso; 
}   

int Estudiante::getEdad() {
    return edad; 
}

std::string Estudiante::getNombre() {
    return nombre; 
}

std::string Estudiante::getApellido() {
    return apellido; 
}

std::string Estudiante::getDni() {
    return dni; 
}
