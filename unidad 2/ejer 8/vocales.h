#include<string>

int vocales(std::string *pointer){
    int contador = 0;
    for(int i = 0; i < pointer->length(); i++){
        if(pointer->at(i) == 'a' || pointer->at(i) == 'e' || pointer->at(i) == 'i' || pointer->at(i) == 'o' || pointer->at(i) == 'u'){
            contador++;
        }
    }
    return contador;
}