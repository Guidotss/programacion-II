#include<string>
#include"../personaje.h"


class Clerigo: public Personaje {
    private: 
        std::string dios; 
    

    public:
        Clerigo(std::string); 
        void mostrar() override;
        void Set_nombre(std::string nombre) override;
        void Set_raza(std::string raza) override;
        void Set_fuerza(int fuerza) override;
        void Set_inteligencia(int inteligencia) override;
        void Set_vida_maxima(int vida_maxima) override;
        void Set_vida_actual(int vida_actual) override;
        void mostrar_stats() override;
        void Set_dios(std::string dios);
        void curar(Personaje& personaje);
        int Get_fuerza() override;
        int Get_inteligencia() override;
        int Get_vida_maxima() override;
        int Get_vida_actual() override;
        std::string Get_raza() override;
        std::string Get_nombre() override;
        std::string Get_dios();

};