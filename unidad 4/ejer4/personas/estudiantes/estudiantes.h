#include<string>
#include"../persona.h"


class Estudiante:public Persona { 
    private: 
        std::string curso; 
    
    public: 
        Estudiante()=default;
        Estudiante(std::string);
        void mostrar() override;
        void setNombre(std::string) override; 
        void setApellido(std::string) override;
        void setEdad(int) override;
        void setDni(std::string) override;
        void cambioEstadocivil(std::string) override;
        void matricularse(std::string);
        int getEdad() override;
        std::string getNombre() override;
        std::string getApellido() override;
        std::string getDni() override;
        ~Estudiante()=default;
}; 