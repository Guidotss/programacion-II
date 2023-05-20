#include<iostream>
#include"./no_perecedero.h"


NoPerecedero::NoPerecedero() : Producto() {
    this->tipo = "No definido";
    this->monto = 0.0;
}

NoPerecedero::NoPerecedero(std::string nombre, std::string tipo) : Producto(nombre, precio) {
    this->tipo = tipo;
    this->monto = 0.0;
}

void NoPerecedero::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void NoPerecedero::setPrecio(float precio) {
    this->precio = precio;
}

void NoPerecedero::mostrar() {
    std::cout<<"Nombre: "<<this->nombre<<std::endl;
    std::cout<<"Precio: "<<this->precio<<std::endl;
    std::cout<<"Tipo: "<<this->tipo<<std::endl;
}


void NoPerecedero::setTipo(std::string tipo) {
    this->tipo = tipo;
}

std::string NoPerecedero::getTipo() {
    return this->tipo;
}

float NoPerecedero::getPrecio() {
    return this->monto;
}

std::string NoPerecedero::getNombre() {
    return this->nombre;
}

void NoPerecedero::calcularMonto(int cantidad){ 
    monto = precio * cantidad;
};

