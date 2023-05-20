#pragma once
#include<string>


class Producto {
    protected: 
        std::string nombre; 
        float precio;
    
    public: 
        Producto() = default;
        Producto(std::string nombre, float precio){
            this->nombre = nombre; 
            this->precio = precio;
        }
        virtual void setNombre(std::string) = 0;
        virtual void setPrecio(float) = 0;
        virtual void mostrar() = 0; 
        virtual void calcularMonto(int ) = 0;
        virtual std::string getNombre() = 0;
        virtual float getPrecio() = 0;
        ~Producto() = default;


}; 