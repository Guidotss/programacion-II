#include <string>

class Persona
{
    private:
        std::string nombre;
        std::string fechaNacimiento;
        std::string sexo;
        int dni;
        int edad;
        float peso;
        float altura;

    public:
        Persona();
        Persona(std::string _nombre, int _edad, std::string _sexo);
        Persona(std::string _nombre, int _edad, std::string _sexo, int _dni, std::string _fechaNacimiento, float _peso, float _altura);
        ~Persona();
        void setNombre(std::string _nombre);
        void setFechaNacimiento(std::string _fechaNacimiento);
        void setSexo(std::string _sexo);
        void setDni(int _dni);
        void setEdad(int _edad);
        void setPeso(float _peso);
        void setAltura(float _altura);
        void mostrar();
        void calcularIMC();
        int getDni();
        int getEdad();
        float getPeso();
        float getAltura();
        bool esMayorDeEdad();
        std::string getNombre();
        std::string getFechaNacimiento();
        std::string getSexo();
};