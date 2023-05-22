#include<iostream>
#include<memory>
#include"menu/menu.h"
#include"./personaje/personaje.h"
#include"./personaje/mago/mago.h"
#include"./personaje/clerigo/clerigo.h"


int main(){
    std::unique_ptr<Personaje> mago1 = std::make_unique<Mago>(); 
    std::unique_ptr<Personaje> clerigo1 = std::make_unique<Clerigo>();
    std::unique_ptr<Personaje> mago2 = std::make_unique<Mago>();
    std::unique_ptr<Personaje> clerigo2 = std::make_unique<Clerigo>();




    


    return 0; 
}