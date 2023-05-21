#pragma once
#include<string>
#include<vector>

class Personaje {
    protected: 
        std::string nombre; 
        std::string raza;
        int fuerza;
        int inteligencia;
        int vida_maxima; 
        int vida_actual;

    public: 
        Personaje() = default;
        Personaje(std::string nombre, std::string raza, int fuerza, int inteligencia, int vida_maxima){
            this->nombre = nombre;
            this->raza = raza;
            this->fuerza = fuerza;
            this->inteligencia = inteligencia;
            this->vida_maxima = vida_maxima;
            this->vida_actual = vida_maxima;
        }
        virtual ~Personaje() = default;
        virtual void mostrar() = 0;
        virtual void Set_nombre(std::string nombre) = 0;
        virtual void Set_raza(std::string raza) = 0;
        virtual void Set_fuerza(int fuerza) = 0;
        virtual void Set_inteligencia(int inteligencia) = 0;
        virtual void Set_vida_maxima(int vida_maxima) = 0;
        virtual void Set_vida_actual(int vida_actual) = 0;
        virtual void mostrar_stats() = 0;
        virtual int Get_fuerza() = 0;
        virtual int Get_inteligencia() = 0;
        virtual int Get_vida_maxima() = 0;
        virtual int Get_vida_actual() = 0;
        virtual std::string Get_raza() = 0;
        virtual std::string Get_nombre() = 0;
};