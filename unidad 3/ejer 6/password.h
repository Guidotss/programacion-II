#include<string>

class Password {
    private: 
        int longitud;
        std::string contrasenia;
    
    public:
        Password(); 
        Password(int _longitud, std::string _contrasenia);
        void generarPassword();
        void setLongitud(int _longitud);
        int getLongitud();
        void setContrasenia(std::string _contrasenia);
        std::string getContrasenia();
        bool esFuerte();
        void mostrarPassword();
        ~Password();
        
}; 