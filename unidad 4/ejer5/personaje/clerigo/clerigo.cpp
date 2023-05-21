#include<iostream>
#include<ctime>
#include"clerigo.h"


Clerigo::Clerigo(std::string dios) :Personaje() {
    std::srand(std::time(nullptr));

    this->dios = dios;
    this->fuerza = 18 + rand()%((20+1)-18);
    this->inteligencia = 12 + rand()%((15+1)-12);
}