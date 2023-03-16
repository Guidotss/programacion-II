
#include<vector>
#include<unordered_map>
#include<string>

auto sumarAdyascentes(std::vector<std::vector<int>>&matriz, std::unordered_map<std::string, int>&m, int i, int j){
    int suma = 0;
    for(int filas = 0; filas<matriz.size(); filas++){
        suma=0;
        for(int columnas = 0; columnas<matriz[i].size(); columnas++){
            suma = matriz[filas][columnas] + matriz[filas][columnas+1];
            m["Fila "+std::to_string(filas+1)+" Columna "+std::to_string(columnas+1)+" y "+std::to_string(columnas+2)] = suma;
        }
    }
    
    return m;
}