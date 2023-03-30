#include<unordered_map>
#include<string>



std::unordered_map<std::string, float> media_mayo_menor(float *vector, size_t n){
    std::unordered_map<std::string, float> mapa;
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += vector[i];
    }
    int media = suma / n;
    int mayor = vector[0];
    int menor = vector[0];
    for(int i = 0; i < n; i++){
        if(vector[i] > mayor){
            mayor = vector[i];
        }
        if(vector[i] < menor){
            menor = vector[i];
        }
    }
    mapa["media"] = media;
    mapa["mayor"] = mayor;
    mapa["menor"] = menor;
    return mapa;
}