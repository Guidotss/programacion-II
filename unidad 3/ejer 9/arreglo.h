#include<vector>

class Arreglo {
    private: std::vector<int> vector; 

    public:
        Arreglo(std::vector<int>);
        std::vector<int> sumarVector(std::vector<int>, std::vector<int>); 
        std::vector<int> restarVector(std::vector<int>, std::vector<int>);
        std::vector<int> multiplicarVector(std::vector<int>, std::vector<int>);
        void mostrarVector(std::vector<int>);
        void subIndicar(std::vector<int>, int, int);
        ~Arreglo();
        
    
};