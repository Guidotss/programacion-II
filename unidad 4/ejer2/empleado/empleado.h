#pragma once
#include<string> 


class Empleado {
    private: 
        std::string nombre; 
        int edad; 
        float salario;
    
    public: 
        virtual void Set_nombre(std::string) = 0; 
        virtual void Set_edad(int) = 0; 
        virtual void Set_salario(float) = 0; 
        virtual std::string Get_nombre() = 0;
        virtual void Get_info() = 0; 
        virtual int Get_edad() = 0; 
        virtual float Get_salario() = 0; 
        virtual void Plus() = 0;
        ~Empleado() = default; 
}; 