#include<vector>

class Matriz {
    private:
        std::vector<std::vector<int>> matriz;
    public:
        Matriz(int filas, int columnas);
        ~Matriz();
        void set(int fila, int columna, int valor);
        int get(int fila, int columna);
        int getFilas();
        int getColumnas();
        void mostrar(); 
        void operator+(Matriz &m);
        void operator-(Matriz &m);
        void operator*(Matriz &m);
        void subIndicar(int fila, int columna, int valor);
        void subIndicarDiagonal(int fila, int columna, int valor); 
};