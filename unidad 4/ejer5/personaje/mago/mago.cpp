#include<iostream>
#include<algorithm>
#include<ctime>
#include"mago.h"

Mago::Mago():Personaje() {
    std::srand(std::time(nullptr));

    this->nombre = nombre; 
    this->raza = raza;
    this->fuerza = rand()%(14 + 1);
    this->inteligencia = 17 + rand()%((20+1)-17);
    this->vida_maxima =  std::rand()%(99 + 1);
    this->vida_actual = rand()%(this->vida_maxima+1); 
    this->hechizos = {};
};

void Mago::mostrar(){ 
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Fuerza: " << this->fuerza << std::endl;
    std::cout << "Inteligencia: " << this->inteligencia << std::endl;
    std::cout << "Vida maxima: " << this->vida_maxima << std::endl;
    std::cout << "Vida actual: " << this->vida_actual << std::endl;
    std::cout << "Hechizos: " << std::endl; 
    for (auto hechizo: this->hechizos) {
        std::cout << "\t" << hechizo << std::endl;
    }
};

void Mago::aprender_hechizo(std::string hechizo) { 
    if(this->hechizos.size() == 4){ 
        std::cout<<"No se pueden aprender mas hechizos"<<std::endl;
        return;
    }
    this->hechizos.push_back(hechizo);
};

void Mago::lanzar_hechizo(Personaje& enemigo, std::string hechizo){
    std::cout << this->nombre << " lanza " << hechizo << " a " << enemigo.Get_nombre() << std::endl;
    enemigo.Set_vida_actual(enemigo.Get_vida_actual() - 10);

    this->hechizos.erase(std::find(this->hechizos.begin(), this->hechizos.end(), hechizo));    
};


void Mago::Set_nombre(std::string nombre) { 
    this->nombre = nombre;
};

void Mago::Set_raza(std::string raza) { 
    this->raza = raza;
};

void Mago::Set_fuerza(int fuerza) { 
    this->fuerza = fuerza;
};

void Mago::Set_inteligencia(int inteligencia) { 
    this->inteligencia = inteligencia;
};

void Mago::Set_vida_maxima(int vida_maxima) { 
    this->vida_maxima = vida_maxima;
};

void Mago::Set_vida_actual(int vida_actual) { 
    this->vida_actual = vida_actual;
};

void Mago::mostrar_stats() { 
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Fuerza: " << this->fuerza << std::endl;
    std::cout << "Inteligencia: " << this->inteligencia << std::endl;
    std::cout << "Vida maxima: " << this->vida_maxima << std::endl;
    std::cout << "Vida actual: " << this->vida_actual << std::endl;
};

int Mago::Get_fuerza() { 
    return this->fuerza;
};

int Mago::Get_inteligencia() { 
    return this->inteligencia;
};

int Mago::Get_vida_maxima() { 
    return this->vida_maxima;
};

int Mago::Get_vida_actual() { 
    return this->vida_actual;
};

std::string Mago::Get_raza() { 
    return this->raza;
};

std::string Mago::Get_nombre() { 
    return this->nombre;
};
