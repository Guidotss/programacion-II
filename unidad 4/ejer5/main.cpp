#include<iostream>
#include<memory>
#include"menu/menu.h"
#include"./personaje/personaje.h"
#include"./personaje/mago/mago.h"
#include"./personaje/clerigo/clerigo.h"

int main(){
    std::unique_ptr<Personaje> mago1 = std::make_unique<Mago>();
    std::unique_ptr<Personaje> mago2 = std::make_unique<Mago>();
    std::unique_ptr<Personaje> clerigo = std::make_unique<Clerigo>("Odin");

    mago1->Set_nombre("Gandalf");
    mago1->Set_raza("Humano");

    clerigo->Set_nombre("Thor");
    
    mago2->Set_nombre("Saruman");
    mago2->Set_raza("Humano");
    

    dynamic_cast<Mago*>(mago1.get())->aprender_hechizo("Bola de fuego");
    dynamic_cast<Mago*>(mago1.get())->aprender_hechizo("Bola de hielo");

    dynamic_cast<Mago*>(mago2.get())->aprender_hechizo("Bola de fuego");

    system("cls"); 
    std::cout<<"-----------------------------"<<std::endl; 
    mago1->mostrar();
    std::cout<<"-----------------------------"<<std::endl; 
    mago2->mostrar();
    std::cout<<"-----------------------------"<<std::endl;

    dynamic_cast<Mago*>(mago1.get())->lanzar_hechizo(*mago2.get(), "Bola de fuego"); 
    dynamic_cast<Mago*>(mago2.get())->lanzar_hechizo(*mago1.get(), "Bola de fuego");

    if(mago1->Get_vida_actual() < 0) {
        std::cout<<mago1->Get_nombre()<<" esta muerto"<<std::endl;
        return 0; 
    }
    
    std::cout<<"-----------------------------"<<std::endl;
    dynamic_cast<Clerigo*>(clerigo.get())->curar(*mago2.get()); 
    if(mago2->Get_vida_actual() < 0) {
        return 0;
    }
    std::cout<<"-----------------------------"<<std::endl;
    dynamic_cast<Mago*>(mago1.get())->lanzar_hechizo(*mago2.get(), "Bola de hielo");
    std::cout<<"-----------------------------"<<std::endl;

    mago1->mostrar();
    std::cout<<"-----------------------------"<<std::endl;
    mago2->mostrar();
    std::cout<<"-----------------------------"<<std::endl;
    clerigo->mostrar();


    return 0; 
}