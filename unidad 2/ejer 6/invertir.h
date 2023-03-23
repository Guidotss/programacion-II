#include<string>

std::string Invertir(std::string *palabra){
    std::string palabra_invertida; 

    for (int i = palabra->size()-1; i >= 0; i--){
        palabra_invertida += palabra->at(i);
    }


    return palabra_invertida; 
}