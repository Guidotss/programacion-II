#include<string>
#include"../persona.h"

class Personal: public Persona { 
    private: 
        std::string seccion; 
    
    public: 
        Personal()=default;
        Personal(std::string);
        void mostrar() override;
        void setNombre(std::string) override;
        void setApellido(std::string) override;
        void setEdad(int) override;
        void setDni(std::string) override;
        void cambioEstadocivil(std::string) override;
        void setSeccion(std::string);
        int getEdad() override;
        std::string getNombre() override;
        std::string getApellido() override;
        std::string getDni() override;
        std::string getSeccion();
        ~Personal()=default;
};