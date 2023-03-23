#include<vector>

std::vector<int>coordenadas_menor(std::vector<std::vector<int>>matriz){
    int menor = matriz[0][0];
    int fila = 0;
    int columna = 0;

    for (int i = 0; i < matriz.size(); i++){
        for (int j = 0; j < matriz.size(); j++){
            if (matriz[i][j] < menor){
                menor = matriz[i][j];
                fila = i;
                columna = j;
            }
        }
    }
    std::vector<int>coordenadas = {fila, columna};

    return coordenadas;
}