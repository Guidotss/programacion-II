#pragma once
#include<string>

class Persona {
    protected: 
        std::string nombre; 
        std::string apellido;
        std::string dni;
        std::string estado_civil;
        int edad;
    
    public:
        Persona()=default; 
        Persona(std::string, std::string, int, std::string, std::string){
            this->nombre = nombre; 
            this->apellido = apellido; 
            this->edad = edad; 
            this->dni = dni; 
        }
        virtual void mostrar()=0;
        virtual void setNombre(std::string)=0;
        virtual void setApellido(std::string)=0;
        virtual void setEdad(int)=0;
        virtual void setDni(std::string)=0;
        virtual void cambioEstadocivil(std::string)=0;
        virtual int getEdad()=0;
        virtual std::string getNombre()=0;
        virtual std::string getApellido()=0;
        virtual std::string getDni()=0;
        virtual ~Persona()=default;
}; 