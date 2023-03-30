#include<iostream>
#include"password.h"


int main(){

    Password pass1;
    pass1.generarPassword();
    pass1.mostrarPassword();

    if (pass1.esFuerte()){
        std::cout << "La contrasenia es fuerte" << std::endl;
    } else {
        std::cout << "La contrasenia no es fuerte" << std::endl;
    }

    Password pass2(16, "GUido2123212312"); 
    pass2.mostrarPassword();

    if (pass2.esFuerte()){
        std::cout << "La contrasenia es fuerte" << std::endl;
    } else {
        std::cout << "La contrasenia no es fuerte" << std::endl;
    }



    return 0; 
}