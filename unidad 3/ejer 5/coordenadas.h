class Coordenadas {
    private:
        int x;
        int y;
        int z;

    public: 
        Coordenadas(); 
        Coordenadas(int _x, int _y, int _z);
        void setX(int _x);
        void setY(int _y);
        void setZ(int _z);
        int getX();
        int getY();
        int getZ();
        void mostrarCoordenadas();
        void disminuirCoordenadas();
        void aumentarCoordenadas();
        void aumentarCoodenadas(int val);
        void polares();

        ~Coordenadas();

}; 