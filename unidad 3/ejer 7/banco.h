

class Banco {
    private: 
        int numero; 
        float saldo;
        float interes;
    
    public:
        Banco(int _numero, float _interes);
        void setNumero(int _numero);
        int getNumero();
        void setSaldo(float _saldo);
        float getSaldo();
        void setInteres(float _interes);
        float getInteres();
        void depositar(float _monto);
        void retirar(float _monto);
        void acrecentarInteres();
        void mostrar();
        ~Banco();
}; 