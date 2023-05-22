#include<iostream>
#include<ctime>
#include"clerigo.h"


Clerigo::Clerigo(std::string dios) :Personaje() {
    std::srand(std::time(nullptr));

    this->dios = dios;
    this->fuerza = 18 + rand()%((20+1)-18);
    this->inteligencia = 12 + rand()%((15+1)-12);
    this->vida_maxima =  std::rand()%(99 + 1);
    this->vida_actual = rand()%(this->vida_maxima+1);
}


void Clerigo::mostrar() { 
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Raza: " << this->raza << std::endl;
    std::cout << "Dios: " << this->dios << std::endl;
    std::cout << "Fuerza: " << this->fuerza << std::endl;
    std::cout << "Inteligencia: " << this->inteligencia << std::endl;
    std::cout << "Vida maxima: " << this->vida_maxima << std::endl;
    std::cout << "Vida actual: " << this->vida_actual << std::endl;
}


void Clerigo::Set_nombre(std::string nombre) {
    this->nombre = nombre;
}


void Clerigo::Set_raza(std::string raza) {
    this->raza = raza;
}


void Clerigo::Set_fuerza(int fuerza) {
    this->fuerza = fuerza;
}


void Clerigo::Set_inteligencia(int inteligencia) {
    this->inteligencia = inteligencia;
}


void Clerigo::Set_vida_maxima(int vida_maxima) {
    this->vida_maxima = vida_maxima;
}


void Clerigo::Set_vida_actual(int vida_actual) {
    this->vida_actual = vida_actual;
}


void Clerigo::mostrar_stats() {
    std::cout << "Fuerza: " << this->fuerza << std::endl;
    std::cout << "Inteligencia: " << this->inteligencia << std::endl;
    std::cout << "Vida maxima: " << this->vida_maxima << std::endl;
    std::cout << "Vida actual: " << this->vida_actual << std::endl;
}


void Clerigo::Set_dios(std::string dios) {
    this->dios = dios;
}


void Clerigo::curar(Personaje& personaje) {

    if(personaje.Get_vida_actual() < 0){ 
        std::cout << personaje.Get_nombre() << " esta muerto y no se puede revivir de la muerte..." << std::endl;
        return;
    }

    int curacion = this->inteligencia + rand()%((this->inteligencia+1)-this->inteligencia);
    personaje.Set_vida_actual(personaje.Get_vida_actual() + curacion);
    std::cout << "El clerigo " << this->nombre << " ha curado a " << personaje.Get_nombre() << " por " << curacion << " puntos de vida." << std::endl;

    if(personaje.Get_vida_actual() > personaje.Get_vida_maxima()) {
        personaje.Set_vida_actual(personaje.Get_vida_maxima());
    }
}


int Clerigo::Get_fuerza() {
    return this->fuerza;
}


int Clerigo::Get_inteligencia() {
    return this->inteligencia;
}


int Clerigo::Get_vida_maxima() {
    return this->vida_maxima;
}



int Clerigo::Get_vida_actual() {
    return this->vida_actual;
}


std::string Clerigo::Get_raza() {
    return this->raza;
}


std::string Clerigo::Get_nombre() {
    return this->nombre;
}


std::string Clerigo::Get_dios() {
    return this->dios;
}