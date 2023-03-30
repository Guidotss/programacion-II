class NumeroComplejo{
    private:
        float real;
        float imaginario;
    
    public: 
        NumeroComplejo();  
        NumeroComplejo(float _real, float _imaginario);
        NumeroComplejo sumarNumeroComplejo(NumeroComplejo);
        NumeroComplejo restarNumeroComplejo(NumeroComplejo);
        NumeroComplejo multiplicarNumeroComplejo(NumeroComplejo);
        
        void setReal(float _real);
        void setImaginario(float _imaginario);
        float getReal();
        float getImaginario();
        void mostrarNumeroComplejo();
        ~NumeroComplejo();

}; 