
void ordenar_mayo_menor(int *punt, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(*(punt + i) > *(punt + j)){
                int aux = *(punt + i);
                *(punt + i) = *(punt + j);
                *(punt + j) = aux;
            }
        }
    }
}