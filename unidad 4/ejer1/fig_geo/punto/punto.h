#include<vector>
#include<string>
#include"../fig_geo.h"

class Punto: public Fig_geo {
    private:
        std::vector<std::pair<std::string,int>> centro;
    public:
        Punto(std::vector<std::pair<std::string,int>> centro);
        float area() override;
        float perimetro() override;
        std::vector<std::pair<std::string,int>> get_centro();
        void set_centro(std::vector<std::pair<std::string,int>> centro) override;
}; 