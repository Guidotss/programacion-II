#include<iostream>
#include<memory>
#include"./personas/persona.h"
#include"./personas/estudiantes/estudiantes.h"
#include"./personas/profesor/profesor.h"
#include"./personas/personal/personal.h"



int main(){

    system("cls");

    std::cout<<"-------------------------------------------------------------"<<std::endl;

    std::unique_ptr<Persona> estudiante = std::make_unique<Estudiante>();
    estudiante->setNombre("Juan");
    estudiante->setApellido("Perez");
    estudiante->setEdad(20);
    estudiante->setDni("12345678");
    estudiante->cambioEstadocivil("Soltero"); 
    dynamic_cast<Estudiante*>(estudiante.get())->matricularse("Programacion");
    estudiante->mostrar();

    std::cout<<"-------------------------------------------------------------"<<std::endl;

    std::unique_ptr<Persona>profeso = std::make_unique<Profesor>();    

    profeso->setNombre("Guido");
    profeso->setApellido("Olguin");
    profeso->setEdad(20);
    profeso->setDni("12345678");
    profeso->cambioEstadocivil("Soltero");
    dynamic_cast<Profesor*>(profeso.get())->setDepartamento("Programacion");
    profeso->mostrar();

    std::cout<<"--------------------------------------------------------------"<<std::endl;

    std::unique_ptr<Persona>personal = std::make_unique<Personal>();

    personal->setNombre("Carlos");
    personal->setApellido("Perez");
    personal->setEdad(20);
    personal->setDni("12345678");
    personal->cambioEstadocivil("Soltero");
    dynamic_cast<Personal*>(personal.get())->setSeccion("Decanato");
    personal->mostrar();



    return 0; 
}