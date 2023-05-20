#include<string> 
#include"../empleado.h"
#include<unordered_map>



class Repartidor: public Empleado {
    private: 
        std::string nombre;
        int edad; 
        float salario; 
        int zona; 

    public: 
        Repartidor(std::string, int, float, int);
        void Set_nombre(std::string) override; 
        void Set_edad(int) override; 
        void Set_salario(float) override; 
        void Set_zona(int); 
        std::string Get_nombre() override; 
        void Get_info(); 
        int Get_edad() override;
        float Get_salario() override; 
        void Plus() override; 
};
