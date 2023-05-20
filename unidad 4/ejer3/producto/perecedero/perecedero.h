#include<string>
#include"../producto.h"

class Perecedero : public Producto {
    private: 
        int diasACaducar; 
        float monto; 

    public: 
        Perecedero(); 
        Perecedero(std::string nombre, int diasACaducar); 
        void setNombre(std::string nombre) override;
        void setPrecio(float precio) override;
        void mostrar() override; 
        void calcularMonto(int) override;
        void setDiasACaducar(int diasACaducar);
        int getDiasACaducar();
        float getPrecio() override;
        std::string getNombre() override;
        ~Perecedero() = default;

};
