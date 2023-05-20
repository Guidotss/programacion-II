#include<iostream>
#include<memory>
#include"./producto/producto.h"
#include"./producto/perecedero/perecedero.h"
#include"./producto/no-perecedero/no_perecedero.h"

int main() {
      
    std::unique_ptr<Perecedero> perecedero = std::make_unique<Perecedero>();
  
    std::cout<<"Ingrese el nombre del producto: ";
    std::string nombre;
    std::cin>>nombre;

    std::cout<<"Ingrese el precio del producto: ";
    float precio;
    std::cin>>precio;

    std::cout<<"Ingrese los dias a caducar del producto: ";
    int diasACaducar;
    std::cin>>diasACaducar;

    perecedero->setNombre(nombre);
    perecedero->setPrecio(precio);
    perecedero->setDiasACaducar(diasACaducar);


    std::cout<<"Ingrese la cantidad de productos a comprar: ";
    int cantidad;
    std::cin>>cantidad;
    

    std::cout<<"El producto es: "<<std::endl;
    perecedero->mostrar();
    perecedero->calcularMonto(cantidad);
    std::cout<<"El monto es: "<<perecedero->getPrecio()<<std::endl;


    //----------------- No perecedero ------------------//

    std::unique_ptr<NoPerecedero> noPerecedero = std::make_unique<NoPerecedero>();

    std::cout<<"Ingrese el nombre del producto: ";
    std::cin>>nombre;

    std::cout<<"Ingrese el precio del producto: ";
    std::cin>>precio;

    std::cout<<"Ingrese el tipo de producto: ";
    std::string tipo;
    std::cin>>tipo;

    noPerecedero->setNombre(nombre);
    noPerecedero->setPrecio(precio);
    noPerecedero->setTipo(tipo);

    std::cout<<"Ingrese la cantidad de productos a comprar: ";
    std::cin>>cantidad;

    std::cout<<"El producto es: "<<std::endl;
    noPerecedero->mostrar();

    noPerecedero->calcularMonto(2);
    std::cout<<"El monto es: "<<noPerecedero->getPrecio()<<std::endl;

    return 0;
}