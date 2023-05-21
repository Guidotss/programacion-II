#include<iostream>
#include<memory>
#include"menu/menu.h"
#include"./personaje/personaje.h"
#include"./personaje/mago/mago.h"

const int option = Menu(); 

int main(){
   
    try{ 

        switch(option){
            case 1: {
                    std::cout << "Creando personaje..." << std::endl;
                    std::unique_ptr<Personaje> personaje = std::make_unique<Mago>();
                    std::cout<<"Ingrese el nombre del personaje: ";
                    std::string nombre; 
                    std::cin >> nombre;
                    personaje->Set_nombre(nombre);
                    break; 
                }
            case 2: 
                std::cout << "Mostrando personajes..." << std::endl;
                break;
            case 3: 
                std::cout << "Saliendo..." << std::endl;
                break;
            default: 
                std::cout << "Opcion no valida" << std::endl;
                break;
        }

    }catch(std::bad_alloc& e){
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0; 
}