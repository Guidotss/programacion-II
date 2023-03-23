#include<vector>
#include<unordered_map>


void sumarAdyacentes(std::vector<std::vector<int>>&matriz, std::unordered_map<std::string, int>&map, int i, int j){
    int suma = 0;
    for(size_t filas = 0; filas < matriz.size(); filas++){
        for(size_t columnas = 0; columnas<matriz[filas].size(); columnas++){
            if(filas == i && columnas == j){
                if(filas == 0 && columnas == 0){
                    suma = matriz[filas][columnas+1] + matriz[filas+1][columnas];
                    map["puntos(" + std::to_string(filas) + "," + std::to_string(columnas) + ")"] = suma;
                }
                else if(filas == 0 && columnas == matriz[filas].size()-1){
                    suma = matriz[filas][columnas-1] + matriz[filas+1][columnas];
                    map["puntos(" + std::to_string(filas) + "," + std::to_string(columnas) + ")"] = suma;
                }
                else if(filas == matriz.size()-1 && columnas == 0){
                    suma = matriz[filas][columnas+1] + matriz[filas-1][columnas];
                    map["puntos(" + std::to_string(filas) + "," + std::to_string(columnas) + ")"] = suma;
                }
                else if(filas == matriz.size()-1 && columnas == matriz[filas].size()-1){
                    suma = matriz[filas][columnas-1] + matriz[filas-1][columnas];
                    map["puntos(" + std::to_string(filas) + "," + std::to_string(columnas) + ")"] = suma;
                }
                else if(filas == 0){
                    suma = matriz[filas][columnas-1] + matriz[filas][columnas+1] + matriz[filas+1][columnas];
                    map["puntos(" + std::to_string(filas) + "," + std::to_string(columnas) + ")"] = suma;
                }
                else if(filas == matriz.size()-1){
                    suma = matriz[filas][columnas-1] + matriz[filas][columnas+1] + matriz[filas-1][columnas];
                    map["puntos(" + std::to_string(filas) + "," + std::to_string(columnas) + ")"] = suma;
                }
                else if(columnas == 0){
                    map["puntos(" + std::to_string(filas) + "," + std::to_string(columnas) + ")"] = suma;
                }
            }
        }
    }
}