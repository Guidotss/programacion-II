#include<iostream>
#include<memory>
#include"menu/menu.h"
#include"./personaje/personaje.h"
#include"./personaje/mago/mago.h"


int main(){
    std::unique_ptr<Personaje> personaje = std::make_unique<Mago>(); 

    personaje->Set_nombre("Gandalf");
    personaje->Set_raza("Humano");



    


    return 0; 
}