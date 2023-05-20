
#include<vector>
#include<string>
#include"../fig_geo.h"

class Circulo: public Fig_geo{ 
    private: 
        std::vector<std::pair<std::string,int>> centro;
    
    public: 
        Circulo(std::vector<std::pair<std::string,int>> centro);
        float area () override;
        float perimetro() override; 
        void set_centro(std::vector<std::pair<std::string,int>> centro) override;
        std::vector<std::pair<std::string,int>> get_centro() override;
        ~Circulo() = default;
};

