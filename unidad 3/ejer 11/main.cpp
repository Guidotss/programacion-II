#include<iostream>
#include"conjunto.h"


int main(){

    Conjunto c1;
    c1.agregarElemento(1);
    c1.agregarElemento(2);
    c1.agregarElemento(3);
    

    Conjunto c2;
    c2.agregarElemento(4);
    c2.agregarElemento(5);
    c2.agregarElemento(6);
    

    Conjunto c3;
    c3.agregarElemento(7);
    c3.agregarElemento(8);
    c3.agregarElemento(9);

    std::cout<<"Conjunto 1:"<<std::endl;
    c1.mostrar();
    std::cout<<std::endl;

    std::cout<<"Conjunto 2:"<<std::endl;
    c2.mostrar();   
    std::cout<<std::endl;

    std::cout<<"Conjunto 3:"<<std::endl;
    c3.mostrar();
    std::cout<<std::endl;


    c1.eliminarElemento(1);
    c2.eliminarElemento(2);
    c3.eliminarElemento(3);

    std::cout<<"Conjunto 1: eliminar elemento 1:"<<std::endl;
    c1.mostrar();
    std::cout<<std::endl;

    std::cout<<"Conjunto 2: eliminar elemento 2:"<<std::endl;
    c2.mostrar();
    std::cout<<std::endl;

    std::cout<<"Conjunto 3: eliminar elemento 3:"<<std::endl;
    c3.mostrar();
    std::cout<<std::endl;

    c1 + c2;

    std::cout<<"Conjunto 1: union de c1 y c2:"<<std::endl;
    c1.mostrar();
    std::cout<<std::endl;

    c1 - c2;
    std::cout<<"Conjunto 1: diferencia de c1 y c2:"<<std::endl;
    c1.mostrar();
    std::cout<<std::endl;

    c1 * c2;
    std::cout<<"Conjunto 1: interseccion de c1 y c2:"<<std::endl;
    c1.mostrar();
    std::cout<<std::endl;



    return 0; 
}