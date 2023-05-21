#include"menu.h"


int  Menu() {
    int opcion;

    do { 
        std::cout << "Bienvenido al menu" << std::endl;
        std::cout << "1. Crear personaje" << std::endl;
        std::cout << "2. Mostrar personajes" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Opcion: ";
        std::cin >> opcion;

    }while(opcion < 1 || opcion > 3); 

    return opcion;
    
}