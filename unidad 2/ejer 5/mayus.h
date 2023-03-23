#include<string>


std::string mayus(std::string *palabra){
    std::string palabra_mayus;
    for (int i = 0; i < palabra->size(); i++){
        palabra_mayus += toupper(palabra->at(i));
    }
    return palabra_mayus;
}