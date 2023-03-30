#include<iostream>
#include"numeroComplejo.h"

NumeroComplejo::NumeroComplejo(){
    real=0;
    imaginario=0;
}

NumeroComplejo::NumeroComplejo(float _real, float _imaginario){
    real=_real;
    imaginario=_imaginario;
}

NumeroComplejo NumeroComplejo::sumarNumeroComplejo(NumeroComplejo numeroComplejo){
    NumeroComplejo numeroComplejoResultado;
    numeroComplejoResultado.real=real+numeroComplejo.real;
    numeroComplejoResultado.imaginario=imaginario+numeroComplejo.imaginario;
    return numeroComplejoResultado;
}

NumeroComplejo NumeroComplejo::restarNumeroComplejo(NumeroComplejo numeroComplejo){
    NumeroComplejo numeroComplejoResultado;
    numeroComplejoResultado.real=real-numeroComplejo.real;
    numeroComplejoResultado.imaginario=imaginario-numeroComplejo.imaginario;
    return numeroComplejoResultado;
}

NumeroComplejo NumeroComplejo::multiplicarNumeroComplejo(NumeroComplejo numeroComplejo){
    NumeroComplejo numeroComplejoResultado;
    numeroComplejoResultado.real=(real*numeroComplejo.real)-(imaginario*numeroComplejo.imaginario);
    numeroComplejoResultado.imaginario=(real*numeroComplejo.imaginario)+(imaginario*numeroComplejo.real);
    return numeroComplejoResultado;
}

NumeroComplejo::~NumeroComplejo(){}

void NumeroComplejo::setReal(float _real){
    real=_real;
}

void NumeroComplejo::setImaginario(float _imaginario){
    imaginario=_imaginario;
}

float NumeroComplejo::getReal(){
    return real;
}

float NumeroComplejo::getImaginario(){
    return imaginario;
}

void NumeroComplejo::mostrarNumeroComplejo(){
    std::cout<<real<<" + "<<imaginario<<"i"<<std::endl;
}

