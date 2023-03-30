#include<iostream>
#include"racional.h"

Racional::Racional(){
    numerador = 0;
    denominador = 1;
}

Racional::Racional(int _numerador, int _denominador){
    numerador = _numerador;
    denominador = _denominador;
}

Racional::~Racional(){  }

Racional Racional::sumarRacional(Racional _racional){
    Racional resultado;
    resultado.numerador = numerador * _racional.denominador + denominador * _racional.numerador;
    resultado.denominador = denominador * _racional.denominador;
    return resultado;
}

Racional Racional::restarRacional(Racional _racional){
    Racional resultado;
    resultado.numerador = numerador * _racional.denominador - denominador * _racional.numerador;
    resultado.denominador = denominador * _racional.denominador;
    return resultado;
}

Racional Racional::incrementarEnUno(){
    numerador = numerador + denominador;
    return *this;
}

Racional Racional::decrementarEnUno(){
    numerador = numerador - denominador;
    return *this;
}

Racional Racional::simplificarRacional(){
    int mcd = 1;
    int menor = (numerador < denominador) ? numerador : denominador;
    for(int i = 1; i <= menor; i++){
        if(numerador % i == 0 && denominador % i == 0){
            mcd = i;
        }
    }
    numerador = numerador / mcd;
    denominador = denominador / mcd;
    return *this;
}

void Racional::setNumerador(int _numerador){
    numerador = _numerador;
}

void Racional::setDenominador(int _denominador){
    denominador = _denominador;
}

int Racional::getNumerador(){
    return numerador;
}

int Racional::getDenominador(){
    return denominador;
}

void Racional::mostrarRacional(){
    std::cout << numerador << "/" << denominador << std::endl;
}

