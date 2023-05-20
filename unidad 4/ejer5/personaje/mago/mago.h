#include<string>
#include<vector>
#include"../personaje.h"


class Mago:public Personaje {
    private: 
        std::vector<std::string> hechizos;
    
    public: 
        Mago();
        void aprender_hechizo(std::string hechizo);
        void lanzar_hechizo(Personaje& enemigo, std::string hechizo);
        void mostrar() override;
        void Set_nombre(std::string nombre) override;
        void Set_raza(std::string raza) override;
        void Set_fuerza(int fuerza) override;
        void Set_inteligencia(int inteligencia) override;
        void Set_vida_maxima(int vida_maxima) override;
        void Set_vida_actual(int vida_actual) override;
        void mostrar_stats() override;
        int Get_fuerza() override;
        int Get_inteligencia() override;
        int Get_vida_maxima() override;
        int Get_vida_actual() override;
        std::string Get_raza() override;
        std::string Get_nombre() override;
}; 