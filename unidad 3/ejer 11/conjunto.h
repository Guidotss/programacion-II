class Conjunto {
    private:
        int *elementos;
        int numElementos;
    public:
        Conjunto();
        Conjunto(int *elementos, int numElementos);
        Conjunto(const Conjunto &c);
        ~Conjunto();
        void mostrar();
        void agregarElemento(int elemento);
        void eliminarElemento(int elemento);
        void operator+(Conjunto &c);
        void operator-(Conjunto &c);
        void operator*(Conjunto &c);
}; 