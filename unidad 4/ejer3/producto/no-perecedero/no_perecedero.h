#include<string>
#include"../producto.h"


class NoPerecedero: public Producto {
    private: 
        std::string tipo; 
        float monto;
    
    public:
        NoPerecedero();
        NoPerecedero(std::string nombre, std::string tipo);
        void setNombre(std::string nombre) override;
        void setPrecio(float precio) override;
        void mostrar() override; 
        void calcularMonto(int) override;
        void setTipo(std::string tipo);
        float getPrecio() override;
        std::string getTipo();
        std::string getNombre() override;
        ~NoPerecedero() = default;
}; 