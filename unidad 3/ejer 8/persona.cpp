#include <iostream>
#include "persona.h"

Persona::Persona()
{
    nombre = " ";
    fechaNacimiento = " ";
    sexo = " ";
    dni = 0;
    edad = 0;
    peso = 0;
    altura = 0;
}

Persona::Persona(std::string _nombre, int _edad, std::string _sexo){
    nombre = _nombre;
    edad = _edad;
    sexo = _sexo;
    fechaNacimiento = " ";
    dni = 0;
    peso = 0;
    altura = 0;
}

Persona::Persona(std::string _nombre, int _edad, std::string _sexo, int _dni, std::string _fechaNacimiento, float _peso, float _altura)
{
    nombre = _nombre;
    edad = _edad;
    sexo = _sexo;
    dni = _dni;
    fechaNacimiento = _fechaNacimiento;
    peso = _peso;
    altura = _altura;
}

Persona::~Persona() {}

void Persona::setNombre(std::string _nombre)
{
    nombre = _nombre;
}

void Persona::setFechaNacimiento(std::string _fechaNacimiento)
{
    fechaNacimiento = _fechaNacimiento;
}

void Persona::setSexo(std::string _sexo)
{
    sexo = _sexo;
}

void Persona::setDni(int _dni)
{
    dni = _dni;
}

void Persona::setEdad(int _edad)
{
    edad = _edad;
}

void Persona::setPeso(float _peso)
{
    peso = _peso;
}

void Persona::setAltura(float _altura)
{
    altura = _altura;
}

void Persona::mostrar()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Fecha de nacimiento: " << fechaNacimiento << std::endl;
    std::cout << "Sexo: " << sexo << std::endl;
    std::cout << "DNI: " << dni << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Peso: " << peso << std::endl;
    std::cout << "Altura: " << altura << std::endl;
}

void Persona::calcularIMC()
{
    float imc = peso / (altura * altura);
    if (imc < 20)
    {
        std::cout << "El IMC es: " << imc << " y esta por debajo del peso ideal" << std::endl;
    }
    else if (imc >= 20 && imc <= 25)
    {
        std::cout << "El IMC es: " << imc << " y esta en el peso ideal" << std::endl;
    }
    else
    {
        std::cout << "El IMC es: " << imc << " y esta por encima del peso ideal" << std::endl;
    }
}

int Persona::getDni()
{
    return dni;
}

int Persona::getEdad()
{
    return edad;
}

float Persona::getPeso()
{
    return peso;
}

float Persona::getAltura()
{
    return altura;
}

bool Persona::esMayorDeEdad()
{
    if (edad >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string Persona::getNombre()
{
    return nombre;
}

std::string Persona::getFechaNacimiento()
{
    return fechaNacimiento;
}

std::string Persona::getSexo()
{
    return sexo;
}
