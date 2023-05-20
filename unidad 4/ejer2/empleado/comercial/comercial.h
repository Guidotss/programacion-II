#include<string> 
#include<unordered_map>
#include"../empleado.h"


class Comercial: public Empleado { 
    private: 
        std::string nombre; 
        int edad; 
        float salario; 
        float comicion; 
    
    public: 
        Comercial(std::string, int, float, float); 
        void Set_nombre(std::string) override; 
        void Set_salario(float) override; 
        void Set_edad(int) override; 
        void Set_comicion(float); 
        std::string Get_nombre() override; 
        void Get_info() override; 
        float Get_comicion(); 
        int Get_edad() override; 
        float Get_salario() override; 
        void Plus() override; 

}; 
