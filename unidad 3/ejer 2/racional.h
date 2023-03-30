
class Racional{
    private:
        int numerador;
        int denominador;

    public: 
        Racional();  
        Racional(int _numerador, int _denominador);
        Racional sumarRacional(Racional);
        Racional restarRacional(Racional);
        Racional incrementarEnUno();
        Racional decrementarEnUno();
        Racional simplificarRacional();
        void setNumerador(int _numerador);
        void setDenominador(int _denominador);
        int getNumerador();
        int getDenominador();
        void mostrarRacional();
        ~Racional();
};

