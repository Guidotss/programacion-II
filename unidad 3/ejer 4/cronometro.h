class Cronometro {
    private: 
        int hora;
        int minuto;
        int segundo;
    
    public: 
        Cronometro(); 
        Cronometro(int _hora, int _minuto, int _segundo);
        void setHora(int _hora);
        void setMinuto(int _minuto);
        void setSegundo(int _segundo);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avanzarSegundo();
        void mostrarHora();
        ~Cronometro();

}; 