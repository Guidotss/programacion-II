#pragma once
#include<vector> 
#include<string>

class Fig_geo { 
    private: 
        std::vector<std::pair<std::string,int>> centro;
    
    public: 
        virtual float area() = 0;
        virtual float perimetro() = 0;
        virtual void set_centro(std::vector<std::pair<std::string,int>> centro) = 0;
        virtual std::vector<std::pair<std::string,int>> get_centro() = 0;
        ~Fig_geo() = default;
};


