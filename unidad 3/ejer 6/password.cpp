#include <iostream>
#include "password.h"

Password::Password()
{
    longitud = 8;
    contrasenia = "12345678";
}

Password::Password(int _longitud, std::string _contrasenia)
{
    longitud = _longitud;
    contrasenia = _contrasenia;
}

void Password::generarPassword()
{
    std::string caracteres = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    std::string contraseniaGenerada = "";

    for (int i = 0; i < longitud; i++){
        int indice = rand() % caracteres.length();
        contraseniaGenerada += caracteres[indice];
    }

    contrasenia = contraseniaGenerada;
}

Password::~Password() {}

void Password::mostrarPassword()
{
    std::cout << "La contraseña es: " << contrasenia << std::endl;
}

void Password::setLongitud(int _longitud)
{
    longitud = _longitud;
}

int Password::getLongitud()
{
    return longitud;
}

void Password::setContrasenia(std::string _contrasenia)
{
    contrasenia = _contrasenia;
}

std::string Password::getContrasenia()
{
    return contrasenia;
}

bool Password::esFuerte()
{
    int mayusculas = 0;
    int minusculas = 0;
    int numeros = 0;

    for (int i = 0; i < contrasenia.length(); i++){
        if (contrasenia[i] >= 65 && contrasenia[i] <= 90){
            mayusculas++;
        }
        else if (contrasenia[i] >= 97 && contrasenia[i] <= 122){
            minusculas++;
        }
        else if (contrasenia[i] >= 48 && contrasenia[i] <= 57){
            numeros++;
        }
    }

    if (mayusculas >= 2 && minusculas >= 1 && numeros >= 5){
        return true;
    }
    else{
        return false;
    }
}