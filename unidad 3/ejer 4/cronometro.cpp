#include<iostream>
#include"cronometro.h"

Cronometro::Cronometro(){
    hora = 0;
    minuto = 0;
    segundo = 0;
}


Cronometro::Cronometro(int _hora, int _minuto, int _segundo){
    hora = _hora;
    minuto = _minuto;
    segundo = _segundo;
}

Cronometro::~Cronometro(){}

void Cronometro::setHora(int _hora){
    hora = _hora;
}

void Cronometro::setMinuto(int _minuto){
    minuto = _minuto;
}

void Cronometro::setSegundo(int _segundo){
    segundo = _segundo;
}

int Cronometro::getHora(){
    return hora;
}

int Cronometro::getMinuto(){
    return minuto;
}

int Cronometro::getSegundo(){
    return segundo;
}

void Cronometro::avanzarSegundo(){
    segundo++;
    if(segundo == 60){
        segundo = 0;
        minuto++;
        if(minuto == 60){
            minuto = 0;
            hora++;
            if(hora == 24){
                hora = 0;
            }
        }
    }
}

void Cronometro::mostrarHora(){
    std::cout << hora << ":" << minuto << ":" << segundo << std::endl;
}

