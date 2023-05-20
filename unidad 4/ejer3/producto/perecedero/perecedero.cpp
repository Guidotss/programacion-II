#include<iostream>
#include"perecedero.h"


Perecedero::Perecedero() {
    this->diasACaducar = 0; 
    this->monto = 0; 
}

Perecedero::Perecedero(std::string nombre, int diasACaducar) : Producto(nombre, precio) {
    this->diasACaducar = diasACaducar; 
    this->monto = 0;
}

void Perecedero::setNombre(std::string nombre) {
    this->nombre = nombre; 
}

void Perecedero::setDiasACaducar(int diasACaducar) {
    this->diasACaducar = diasACaducar; 
}

int Perecedero::getDiasACaducar() {
    return this->diasACaducar; 
}

float Perecedero::getPrecio() {
    return this->monto; 
}

void Perecedero::mostrar(){
    std::cout<<"Nombre: "<<this->getNombre()<<std::endl;
    std::cout<<"Precio: "<<this->getPrecio()<<std::endl;
    std::cout<<"Dias a caducar: "<<diasACaducar<<std::endl;
    std::cout<<"Monto: "<<monto<<std::endl;
}

void Perecedero::calcularMonto(int cantidad) { 
    switch(diasACaducar){ 
        case 1: 
            monto = (cantidad * ( monto/4 ));
            break;
        case 2: 
            monto = (cantidad * (monto/3));
            break;
        case 3: 
            monto = (cantidad * (monto/2));
            break; 
        default: 
            monto = monto * cantidad;  
    };
}; 

void Perecedero::setPrecio(float precio) {
    this->precio = precio; 
    this->monto = precio; 
}

std::string Perecedero::getNombre() {
    return this->nombre; 
}

