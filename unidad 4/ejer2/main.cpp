#include<iostream>
#include<memory>
#include<string>
#include"./empleado/empleado.h"
#include"./empleado/comercial/comercial.h"
#include"./empleado/repartidor/repartidor.h"

int main(){

    //Comerciante
    std::unique_ptr<Empleado>comercial = std::make_unique<Comercial>("Nicolas", 33, 13.2, 20); 
    comercial->Get_info();
    comercial-> Plus(); 
    std::cout<<std::endl; 
    comercial-> Get_info(); 

    std::cout<<std::endl; 
    //Repartidor

    std::unique_ptr<Empleado>repartidor = std::make_unique<Repartidor>("Guido", 23, 200, 3); 
    repartidor->Get_info(); 
    repartidor->Plus(); 
    std::cout<<std::endl;
    repartidor->Get_info(); 

}