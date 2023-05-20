#include<string>
#include"../persona.h"


class Profesor:public Persona {

    private: 
        std::string departamento;
    
    public: 
        Profesor()=default;
        Profesor(std::string); 
        void mostrar() override;
        void setNombre(std::string) override;
        void setApellido(std::string) override;
        void setEdad(int) override;
        void setDni(std::string) override;
        void cambioEstadocivil(std::string) override;
        void setDepartamento(std::string);
        void getDepartamento();
        int getEdad() override;
        std::string getNombre() override;
        std::string getApellido() override;
        std::string getDni() override;
        ~Profesor()=default;

};
